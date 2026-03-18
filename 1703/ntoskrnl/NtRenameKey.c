/*
 * XREFs of NtRenameKey @ 0x14065F2B4
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  KPROCESSOR_MODE PreviousMode; // r14
  char v5; // r15
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // r12
  int v9; // ebx
  char v10; // r13
  char v11; // si
  __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int16 v16; // cx
  unsigned int v17; // edx
  void *v18; // r8
  void *v19; // r8
  struct _KTHREAD *v20; // rax
  int v21; // eax
  _QWORD *v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // r8
  NTSTATUS v26; // [rsp+40h] [rbp-C8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  int v28[4]; // [rsp+50h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h]
  _SLIST_ENTRY v31; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+88h] [rbp-80h]
  __int128 v33; // [rsp+90h] [rbp-78h]
  __int128 v34; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v35[6]; // [rsp+B0h] [rbp-58h] BYREF

  Object = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  v6 = 0;
  memset(v35, 0, 0x28uLL);
  v32 = -1;
  *((_QWORD *)&v31.Next + 1) = &v31;
  v31.Next = &v31;
  v28[0] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v9 = -1073741431;
    v26 = -1073741431;
    v10 = 0;
    v11 = 0;
    goto LABEL_51;
  }
  if ( PreviousMode == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewName < 0x7FFFFFFF0000LL )
      v12 = (__int64)NewName;
    v13 = *(_DWORD *)v12;
    LODWORD(v33) = v13;
    v14 = *(_QWORD *)(v12 + 8);
    *((_QWORD *)&v33 + 1) = v14;
    *(_OWORD *)Src = v33;
    if ( (_WORD)v13 )
    {
      if ( (v14 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v14 + (unsigned __int16)v13;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v16 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu || ((__int64)Src[0] & 1) != 0 )
  {
    v9 = -1073741811;
    v26 = -1073741811;
    v10 = 0;
    v11 = 0;
    goto LABEL_51;
  }
  if ( PreviousMode == 1 )
  {
    P = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LOWORD(Src[0]), 0x426E4D43u);
    if ( !P )
    {
      v9 = -1073741670;
      v26 = -1073741670;
      v10 = 0;
      v11 = 0;
      goto LABEL_51;
    }
    memmove(P, Src[1], LOWORD(Src[0]));
    Src[1] = P;
    v16 = (unsigned __int16)Src[0];
    v6 = 0;
  }
  v17 = 0;
  v18 = (void *)(v16 >> 1);
  if ( v16 >> 1 )
  {
    while ( *((_WORD *)Src[1] + v17) != 92 )
    {
      if ( ++v17 >= (unsigned int)v18 )
        goto LABEL_26;
    }
    v9 = -1073741811;
    goto LABEL_24;
  }
LABEL_26:
  v9 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v18, PreviousMode, &Object, 0LL);
  v26 = v9;
  if ( v9 == -1073741790 && CmpVEEnabled && !CmpIsSystemEntity(v28) )
  {
    v9 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v19, PreviousMode, &Object, 0LL);
    v26 = v9;
    if ( v9 < 0 )
      goto LABEL_25;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)Object) )
    {
      v9 = -1073741790;
LABEL_24:
      v26 = v9;
LABEL_25:
      v10 = 0;
      v11 = 0;
      goto LABEL_51;
    }
    v6 = 1;
  }
  if ( v9 < 0 )
    goto LABEL_25;
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v10 = 0;
LABEL_43:
    CmpLockRegistryExclusive();
    v5 = 1;
    v22 = Object;
    CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0LL, 1);
    if ( (*(_DWORD *)(v22[1] + 4LL) & 0x180) == 0 )
    {
      if ( !v6 )
      {
LABEL_47:
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v8 = 0;
        v34 = *(_OWORD *)Src;
        LOBYTE(v24) = PreviousMode;
        v9 = CmRenameKey(Object, &v34, v24);
        v26 = v9;
        v5 = 1;
        v11 = 1;
        goto LABEL_51;
      }
      CmpUnlockRegistry();
      v5 = 0;
      v9 = CmKeyBodyReplicateToVirtual((__int64 *)&Object, PreviousMode, 0x20006u, v28);
      v26 = v9;
      if ( v9 < 0 )
      {
LABEL_49:
        v11 = 1;
        goto LABEL_51;
      }
      CmpLockRegistryExclusive();
      v5 = 1;
      v23 = Object;
      CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0LL, 1);
      if ( (*(_DWORD *)(v23[1] + 4LL) & 0x180) == 0 )
        goto LABEL_47;
    }
    v9 = -1073741790;
    v26 = -1073741790;
    goto LABEL_49;
  }
  v35[0] = Object;
  v35[1] = Src;
  v21 = CmpCallCallBacksEx(4u, (__int64)v35, 0LL, 1, 0x13u, (__int64)Object, &v31);
  v9 = v21;
  v26 = v21;
  if ( v21 >= 0 )
  {
    v10 = 1;
    goto LABEL_43;
  }
  v11 = 1;
  if ( v21 == -1073740541 )
  {
    v9 = 0;
    v26 = 0;
  }
  v10 = 0;
LABEL_51:
  if ( v5 )
    CmpUnlockRegistry();
  if ( v10 )
  {
    v9 = CmPostCallbackNotificationEx(19, (__int64)Object, v9, (__int64)v35, 0LL, &v31);
    v26 = v9;
  }
  if ( v11 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v9 = v26;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v26;
  }
  return v9;
}
