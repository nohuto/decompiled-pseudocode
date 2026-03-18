/*
 * XREFs of CmLoadKey @ 0x1404CBC54
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404CBB30 (CmpQueryHiveRedirectionFileList.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
 *     ObDrainDeferredObjectDeletion @ 0x1406C0D70 (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmLoadKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        struct _KEVENT *a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  unsigned __int16 v14; // cx
  __int64 v15; // rdx
  __int64 v16; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v18; // r14
  UNICODE_STRING *v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v21; // edx
  int v22; // r8d
  NTSTATUS v23; // edi
  ULONG_PTR v24; // rbx
  int KeyCommon; // eax
  const GUID *v26; // r9
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v29; // ebx
  int Conflict; // ebx
  __int64 v31; // rdx
  ULONG_PTR v32; // rsi
  __int64 v33; // rdx
  _QWORD *v34; // rax
  const GUID *v35; // r9
  char v36; // [rsp+50h] [rbp-B0h] BYREF
  char v37; // [rsp+51h] [rbp-AFh]
  ULONG_PTR v38; // [rsp+58h] [rbp-A8h]
  __int16 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h]
  NTSTATUS v42; // [rsp+6Ch] [rbp-94h] BYREF
  NTSTATUS v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v44; // [rsp+78h] [rbp-88h]
  UNICODE_STRING Destination; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h]
  PVOID v49; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  _WORD v52[176]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v53; // [rsp+230h] [rbp+130h] BYREF
  NTSTATUS *v54; // [rsp+250h] [rbp+150h]
  __int64 v55; // [rsp+258h] [rbp+158h]
  __int16 *v56; // [rsp+260h] [rbp+160h]
  __int64 v57; // [rsp+268h] [rbp+168h]
  __int16 *v58; // [rsp+270h] [rbp+170h]
  __int64 v59; // [rsp+278h] [rbp+178h]
  _WORD *v60; // [rsp+280h] [rbp+180h]
  __int64 v61; // [rsp+288h] [rbp+188h]
  _WORD *v62; // [rsp+290h] [rbp+190h]
  int v63; // [rsp+298h] [rbp+198h]
  int v64; // [rsp+29Ch] [rbp+19Ch]
  _WORD *v65; // [rsp+2A0h] [rbp+1A0h]
  __int64 v66; // [rsp+2A8h] [rbp+1A8h]
  _WORD *v67; // [rsp+2B0h] [rbp+1B0h]
  int v68; // [rsp+2B8h] [rbp+1B8h]
  int v69; // [rsp+2BCh] [rbp+1BCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2D0h] [rbp+1D0h] BYREF
  NTSTATUS *v71; // [rsp+2F0h] [rbp+1F0h]
  __int64 v72; // [rsp+2F8h] [rbp+1F8h]

  v50 = a5;
  v48 = a9;
  v44 = a10;
  v51 = a8;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v38 = 0LL;
  v36 = 0;
  memset(v52, 0, sizeof(v52));
  v14 = **(_WORD **)(a1 + 16);
  if ( v14 >= 2u )
  {
    for ( LODWORD(v15) = v14 >> 1; (_DWORD)v15; *(_WORD *)v16 -= 2 )
    {
      v16 = *(_QWORD *)(a1 + 16);
      v15 = (unsigned int)(v15 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v16 + 8) + 2 * v15) != 92 )
        break;
    }
  }
  if ( **(_WORD **)(a1 + 16) < 2u )
    return 3221225485LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x62534D43u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v19 = *(UNICODE_STRING **)(a1 + 16);
  *(_DWORD *)&Destination.Length = 17039360;
  Destination.Buffer = PoolWithTag;
  if ( CmpQueryHiveRedirectionFileList(v19, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = (UNICODE_STRING *)a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v18, 0);
    return 3221225865LL;
  }
  v37 = 1;
  v41 = a3 & 0x2000;
  v21 = (v41 != 0 ? 3 : 0) | 8;
  if ( (a3 & 0x4000) == 0 )
    v21 = v41 != 0 ? 3 : 0;
  v22 = v21 | 4;
  if ( !v50 )
    v22 = v21;
  v23 = CmpCmdHiveOpen(
          a2,
          ((a3 & 0xFFFFF221 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1090001,
          v22,
          a8,
          (__int64)&v36,
          (__int64)v52);
  if ( (int)(v23 + 0x80000000) >= 0 )
  {
    if ( v23 != -1073741757 )
    {
LABEL_41:
      v24 = v38;
      goto LABEL_19;
    }
LABEL_35:
    v23 = 0;
    if ( (int)CmpOpenHiveFile(a2, 8, v51, 0LL, 0LL, 0LL) < 0
      || (v29 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL),
          ZwClose(Handle),
          v29 < 0) )
    {
      v23 = -1073741757;
    }
    else
    {
      Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)Object, a3, a4, (__int64)a7, v48, (__int64)v44);
      ObfDereferenceObject(Object);
      if ( Conflict < 0 )
        v23 = -1073741757;
    }
    goto LABEL_41;
  }
  if ( v23 == -1073741757 )
    goto LABEL_35;
  v24 = v38;
  if ( !v41 )
    goto LABEL_15;
  v23 = ObReferenceObjectByHandle(*(HANDLE *)(v38 + 2664), 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v49, 0LL);
  if ( v23 >= 0 )
  {
    v23 = CmpResolveHiveLoadConflict(a1, (_DWORD)v49, a3, a4, (__int64)a7, v48, (__int64)v44);
    ObfDereferenceObject(v49);
    if ( v23 >= 0 )
    {
LABEL_18:
      v23 = 0;
      goto LABEL_19;
    }
    if ( v23 == -1073741275 )
    {
LABEL_15:
      if ( a6 )
        *(_DWORD *)(v24 + 5360) |= 0x2000u;
      KeyCommon = CmpLoadKeyCommon(v24, (_QWORD *)a1, a3, a4, v50, a7, v44, v37, v36);
      v24 = 0LL;
      v23 = KeyCommon;
      v38 = 0LL;
      if ( KeyCommon < 0 )
        goto LABEL_20;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v24 )
  {
    ObDrainDeferredObjectDeletion();
    CmpDestroySecurityCache(v24);
    v32 = v24 + 5368;
    if ( *(_QWORD *)v32 != v32 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      v33 = *(_QWORD *)v32;
      v34 = *(_QWORD **)(v24 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 || *v34 != v32 )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    }
    if ( (*(_DWORD *)(v24 + 5360) & 2) != 0 )
      CmpRemoveHiveFromMapping(v24);
    LOBYTE(v31) = 1;
    HvFreeHive(v24, v31);
    CmpCmdHiveClose(v24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 5496), 0xFFFFFFFF) == 1 )
      CmpDeleteHive(v38);
  }
LABEL_20:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v18, 0);
  if ( v23 < 0 )
  {
    if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
    {
      v54 = &v42;
      v56 = &v39;
      v58 = &v40;
      v60 = &v52[4];
      v62 = &v52[6];
      v39 = v52[4];
      v40 = v52[5];
      v65 = &v52[5];
      v67 = &v52[54];
      v68 = 12 * v52[5];
      v42 = v23;
      v55 = 4LL;
      v57 = 2LL;
      v59 = 2LL;
      v61 = 2LL;
      v63 = 12 * v52[4];
      v64 = (int)v35;
      v66 = 2LL;
      v69 = (int)v35;
      TlgWrite(&stru_14033C3C0, &unk_1402AA9DA, 0LL, v35, 9u, &v53);
    }
  }
  else if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
    {
      v43 = v23;
      v71 = &v43;
      v72 = 4LL;
      TlgWrite(&stru_14033C3C0, &unk_1402AA9AE, 0LL, v26, 3u, &pData);
    }
  }
  return (unsigned int)v23;
}
