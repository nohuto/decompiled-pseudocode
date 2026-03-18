/*
 * XREFs of NtRenameKey @ 0x14068812C
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  int v23; // ecx
  __int64 v24; // rdx
  _QWORD *v25; // rbx
  int v26; // ecx
  __int64 v27; // r8
  NTSTATUS v29; // [rsp+40h] [rbp-C8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  int v31[4]; // [rsp+50h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h]
  _SLIST_ENTRY v34; // [rsp+78h] [rbp-90h] BYREF
  __int128 v35; // [rsp+90h] [rbp-78h]
  __int128 v36; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v37[6]; // [rsp+B0h] [rbp-58h] BYREF

  Object = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  v6 = 0;
  memset(v37, 0, 0x28uLL);
  *((_QWORD *)&v34.Next + 1) = &v34;
  v34.Next = &v34;
  v31[0] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v9 = -1073741431;
    v29 = -1073741431;
    v10 = 0;
    v11 = 0;
    goto LABEL_53;
  }
  if ( PreviousMode == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewName < 0x7FFFFFFF0000LL )
      v12 = (__int64)NewName;
    v13 = *(_DWORD *)v12;
    LODWORD(v35) = v13;
    v14 = *(_QWORD *)(v12 + 8);
    *((_QWORD *)&v35 + 1) = v14;
    *(_OWORD *)Src = v35;
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
    v29 = -1073741811;
    v10 = 0;
    v11 = 0;
    goto LABEL_53;
  }
  if ( PreviousMode == 1 )
  {
    P = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LOWORD(Src[0]), 0x426E4D43u);
    if ( !P )
    {
      v9 = -1073741670;
      v29 = -1073741670;
      v10 = 0;
      v11 = 0;
      goto LABEL_53;
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
  v29 = v9;
  if ( v9 == -1073741790 && CmpVEEnabled && !CmpIsSystemEntity(v31) )
  {
    v9 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v19, PreviousMode, &Object, 0LL);
    v29 = v9;
    if ( v9 < 0 )
      goto LABEL_25;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v9 = -1073741790;
LABEL_24:
      v29 = v9;
LABEL_25:
      v10 = 0;
      v11 = 0;
      goto LABEL_53;
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
    goto LABEL_43;
  }
  v37[0] = Object;
  v37[1] = Src;
  v21 = CmpCallCallBacksEx(4u, (__int64)v37, 0LL, 1, 0x13u, (__int64)Object, &v34);
  v9 = v21;
  v29 = v21;
  if ( v21 >= 0 )
  {
    v10 = 1;
LABEL_43:
    CmpLockRegistryExclusive();
    v5 = 1;
    v22 = Object;
    CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0, 1);
    v23 = *(_DWORD *)(v22[1] + 4LL);
    if ( (v23 & 0x80u) == 0 && (v23 & 0x100) == 0 )
    {
      if ( !v6 )
      {
LABEL_49:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v8 = 0;
        v36 = *(_OWORD *)Src;
        LOBYTE(v27) = PreviousMode;
        v9 = CmRenameKey(Object, &v36, v27);
        v29 = v9;
        v5 = 1;
        v11 = 1;
        goto LABEL_53;
      }
      CmpUnlockRegistry();
      v5 = 0;
      LOBYTE(v24) = PreviousMode;
      v9 = CmKeyBodyReplicateToVirtual(&Object, v24, 131078LL, v31);
      v29 = v9;
      if ( v9 < 0 )
      {
LABEL_51:
        v11 = 1;
        goto LABEL_53;
      }
      CmpLockRegistryExclusive();
      v5 = 1;
      v25 = Object;
      CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0, 1);
      v26 = *(_DWORD *)(v25[1] + 4LL);
      if ( (v26 & 0x80u) == 0 && (v26 & 0x100) == 0 )
        goto LABEL_49;
    }
    v9 = -1073741790;
    v29 = -1073741790;
    goto LABEL_51;
  }
  v11 = 1;
  if ( v21 == -1073740541 )
  {
    v9 = 0;
    v29 = 0;
  }
  v10 = 0;
LABEL_53:
  if ( v5 )
    CmpUnlockRegistry();
  if ( v10 )
  {
    v9 = CmPostCallbackNotificationEx(0x13u, (__int64)Object, v9, (__int64)v37, 0LL, &v34);
    v29 = v9;
  }
  if ( v11 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v9 = v29;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v29;
  }
  return v9;
}
