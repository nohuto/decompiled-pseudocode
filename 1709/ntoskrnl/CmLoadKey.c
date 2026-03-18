/*
 * XREFs of CmLoadKey @ 0x140596790
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140596AD0 (CmpQueryHiveRedirectionFileList.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmpRemoveHiveFromMapping @ 0x140692404 (CmpRemoveHiveFromMapping.c)
 *     ObDrainDeferredObjectDeletion @ 0x1406EF890 (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmLoadKey(
        __int64 a1,
        UNICODE_STRING *a2,
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
  int v21; // ecx
  BOOLEAN v22; // dl
  BOOLEAN v23; // r8
  int v24; // edi
  char *v25; // rbx
  int KeyCommon; // eax
  const GUID *v27; // r9
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v30; // ebx
  int Conflict; // ebx
  __int64 v32; // r8
  char *v33; // rsi
  __int64 v34; // rdx
  char **v35; // rax
  const GUID *v36; // r9
  char v37; // [rsp+50h] [rbp-B0h] BYREF
  char v38[7]; // [rsp+51h] [rbp-AFh] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v41; // [rsp+64h] [rbp-9Ch] BYREF
  int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v45; // [rsp+78h] [rbp-88h]
  UNICODE_STRING Destination; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  PVOID v50; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h]
  _WORD v54[176]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v55; // [rsp+230h] [rbp+130h] BYREF
  int *v56; // [rsp+250h] [rbp+150h]
  __int64 v57; // [rsp+258h] [rbp+158h]
  __int16 *v58; // [rsp+260h] [rbp+160h]
  __int64 v59; // [rsp+268h] [rbp+168h]
  __int16 *v60; // [rsp+270h] [rbp+170h]
  __int64 v61; // [rsp+278h] [rbp+178h]
  _WORD *v62; // [rsp+280h] [rbp+180h]
  __int64 v63; // [rsp+288h] [rbp+188h]
  _WORD *v64; // [rsp+290h] [rbp+190h]
  int v65; // [rsp+298h] [rbp+198h]
  int v66; // [rsp+29Ch] [rbp+19Ch]
  _WORD *v67; // [rsp+2A0h] [rbp+1A0h]
  __int64 v68; // [rsp+2A8h] [rbp+1A8h]
  _WORD *v69; // [rsp+2B0h] [rbp+1B0h]
  int v70; // [rsp+2B8h] [rbp+1B8h]
  int v71; // [rsp+2BCh] [rbp+1BCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v73; // [rsp+2E0h] [rbp+1E0h]
  __int64 v74; // [rsp+2E8h] [rbp+1E8h]

  v51 = a5;
  v49 = a9;
  v45 = a10;
  v53 = a8;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  P = 0LL;
  v37 = 0;
  memset(v54, 0, sizeof(v54));
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
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(v19, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v18, 0);
    return 3221225865LL;
  }
  v38[0] = 1;
  v42 = a3 & 0x2000;
  v21 = v42 != 0 ? 3 : 0;
  v22 = v21 | 8;
  if ( (a3 & 0x4000) == 0 )
    v22 = v21;
  v23 = v22 | 4;
  if ( !v51 )
    v23 = v22;
  v24 = CmpCmdHiveOpen(
          a2,
          1,
          (__int64)v38,
          (__int64)&P,
          ((a3 & 0xFFFFF221 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1090001,
          v23,
          a8,
          (__int64)&v37,
          (__int64)v54);
  if ( (int)(v24 + 0x80000000) >= 0 )
  {
    if ( v24 != -1073741757 )
    {
LABEL_41:
      v25 = (char *)P;
      goto LABEL_19;
    }
LABEL_35:
    v24 = 0;
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, &v52, 8u, (void *)v53, 0LL, 0LL, 0LL) < 0
      || (v30 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL),
          ZwClose(Handle),
          v30 < 0) )
    {
      v24 = -1073741757;
    }
    else
    {
      Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)Object, a3, a4, (__int64)a7, v49, (__int64)v45);
      ObfDereferenceObject(Object);
      if ( Conflict < 0 )
        v24 = -1073741757;
    }
    goto LABEL_41;
  }
  if ( v24 == -1073741757 )
    goto LABEL_35;
  v25 = (char *)P;
  if ( !v42 )
    goto LABEL_15;
  v24 = ObReferenceObjectByHandle(*((HANDLE *)P + 333), 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v50, 0LL);
  if ( v24 >= 0 )
  {
    v24 = CmpResolveHiveLoadConflict(a1, (_DWORD)v50, a3, a4, (__int64)a7, v49, (__int64)v45);
    ObfDereferenceObject(v50);
    if ( v24 >= 0 )
    {
LABEL_18:
      v24 = 0;
      goto LABEL_19;
    }
    if ( v24 == -1073741275 )
    {
LABEL_15:
      if ( a6 )
        *((_DWORD *)v25 + 1340) |= 0x2000u;
      KeyCommon = CmpLoadKeyCommon((ULONG_PTR)v25, (_QWORD *)a1, a3, a4, v51, a7, v45, v38[0], v37);
      v25 = 0LL;
      v24 = KeyCommon;
      P = 0LL;
      if ( KeyCommon < 0 )
        goto LABEL_20;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v25 )
  {
    ObDrainDeferredObjectDeletion();
    CmpDestroySecurityCache((__int64)v25);
    v33 = v25 + 5368;
    if ( *(char **)v33 != v33 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      v34 = *(_QWORD *)v33;
      if ( *(char **)(*(_QWORD *)v33 + 8LL) != v33 || (v35 = (char **)*((_QWORD *)v25 + 672), *v35 != v33) )
        __fastfail(3u);
      *v35 = (char *)v34;
      *(_QWORD *)(v34 + 8) = v35;
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    }
    if ( (*((_DWORD *)v25 + 1340) & 2) != 0 )
      CmpRemoveHiveFromMapping(v25);
    HvFreeHive((__int64)v25, 1, v32);
    CmpCmdHiveClose((__int64)v25);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25 + 1374, 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PERESOURCE *)P);
  }
LABEL_20:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v18, 0);
  if ( v24 < 0 )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      v56 = &v43;
      v58 = &v40;
      v60 = &v41;
      v62 = &v54[4];
      v64 = &v54[6];
      v40 = v54[4];
      v41 = v54[5];
      v67 = &v54[5];
      v69 = &v54[54];
      v70 = 12 * v54[5];
      v43 = v24;
      v57 = 4LL;
      v59 = 2LL;
      v61 = 2LL;
      v63 = 2LL;
      v65 = 12 * v54[4];
      v66 = (int)v36;
      v68 = 2LL;
      v71 = (int)v36;
      TlgWrite(&stru_1403549F0, &unk_1402CE74D, 0LL, v36, 9u, &v55);
    }
  }
  else if ( stru_1403549F0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      v44 = v24;
      v73 = &v44;
      v74 = 4LL;
      TlgWrite(&stru_1403549F0, &unk_1402CE721, 0LL, v27, 3u, &pData);
    }
  }
  return (unsigned int)v24;
}
