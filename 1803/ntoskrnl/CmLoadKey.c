/*
 * XREFs of CmLoadKey @ 0x14057F140
 * Callers:
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14057F47C (CmpQueryHiveRedirectionFileList.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     ObDrainDeferredObjectDeletion @ 0x140758D0C (ObDrainDeferredObjectDeletion.c)
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
  _DWORD *v25; // rbx
  int KeyCommon; // eax
  const GUID *v27; // r9
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v30; // ebx
  int Conflict; // ebx
  const GUID *v32; // r9
  char v33; // [rsp+50h] [rbp-B0h] BYREF
  char v34; // [rsp+51h] [rbp-AFh] BYREF
  __int16 v35; // [rsp+54h] [rbp-ACh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 *v40; // [rsp+70h] [rbp-90h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h]
  PVOID v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-48h]
  _BYTE v49[48]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50[44]; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR v51; // [rsp+250h] [rbp+150h] BYREF
  int *v52; // [rsp+270h] [rbp+170h]
  __int64 v53; // [rsp+278h] [rbp+178h]
  __int16 *v54; // [rsp+280h] [rbp+180h]
  __int64 v55; // [rsp+288h] [rbp+188h]
  int *v56; // [rsp+290h] [rbp+190h]
  __int64 v57; // [rsp+298h] [rbp+198h]
  __int64 *v58; // [rsp+2A0h] [rbp+1A0h]
  __int64 v59; // [rsp+2A8h] [rbp+1A8h]
  char *v60; // [rsp+2B0h] [rbp+1B0h]
  int v61; // [rsp+2B8h] [rbp+1B8h]
  int v62; // [rsp+2BCh] [rbp+1BCh]
  char *v63; // [rsp+2C0h] [rbp+1C0h]
  __int64 v64; // [rsp+2C8h] [rbp+1C8h]
  char *v65; // [rsp+2D0h] [rbp+1D0h]
  int v66; // [rsp+2D8h] [rbp+1D8h]
  int v67; // [rsp+2DCh] [rbp+1DCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v69; // [rsp+300h] [rbp+200h]
  __int64 v70; // [rsp+308h] [rbp+208h]

  v46 = a5;
  v44 = a9;
  v40 = a10;
  v48 = a8;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v37 = 0LL;
  v33 = 0;
  memset(v50, 0, sizeof(v50));
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
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v18, 0);
    return 3221225865LL;
  }
  v34 = 1;
  v36 = a3 & 0x2000;
  v21 = v36 != 0 ? 3 : 0;
  v22 = v21 | 8;
  if ( (a3 & 0x4000) == 0 )
    v22 = v21;
  v23 = v22 | 4;
  if ( !v46 )
    v23 = v22;
  v24 = CmpCmdHiveOpen(
          a2,
          1,
          &v34,
          &v37,
          ((a3 & 0xFFFFF221 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1090001,
          v23,
          a8,
          &v33,
          v50);
  if ( (int)(v24 + 0x80000000) >= 0 )
  {
    if ( v24 != -1073741757 )
    {
LABEL_42:
      v25 = (_DWORD *)v37;
      goto LABEL_19;
    }
LABEL_36:
    v24 = 0;
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, &v47, 8u, (void *)v48, 0LL, 0LL, 0LL) < 0
      || (v30 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL),
          ZwClose(Handle),
          v30 < 0) )
    {
      v24 = -1073741757;
    }
    else
    {
      Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)Object, a3, a4, (__int64)a7, v44, (__int64)v40);
      ObfDereferenceObject(Object);
      if ( Conflict < 0 )
        v24 = -1073741757;
    }
    goto LABEL_42;
  }
  if ( v24 == -1073741757 )
    goto LABEL_36;
  v25 = (_DWORD *)v37;
  if ( !v36 )
    goto LABEL_15;
  v24 = ObReferenceObjectByHandle(*(HANDLE *)(v37 + 1536), 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v45, 0LL);
  if ( v24 >= 0 )
  {
    v24 = CmpResolveHiveLoadConflict(a1, (_DWORD)v45, a3, a4, (__int64)a7, v44, (__int64)v40);
    ObfDereferenceObject(v45);
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
        v25[1038] |= 0x2000u;
      KeyCommon = CmpLoadKeyCommon((ULONG_PTR)v25, (_QWORD *)a1, a3, a4, v46, a7, v40, v34, v33);
      v25 = 0LL;
      v24 = KeyCommon;
      if ( KeyCommon < 0 )
        goto LABEL_21;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v25 )
  {
    ObDrainDeferredObjectDeletion();
    CmpAttachToRegistryProcess((__int64)v49);
    CmpDestroyHive(v25);
    KiUnstackDetachProcess((__int64)v49, 0LL);
  }
LABEL_21:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v18, 0);
  if ( v24 < 0 )
  {
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
    {
      v52 = &v38;
      v54 = &v35;
      v56 = &v36;
      v58 = &v50[1];
      v60 = (char *)&v50[1] + 4;
      LOWORD(v36) = WORD1(v50[1]);
      v35 = v50[1];
      v63 = (char *)&v50[1] + 2;
      v65 = (char *)&v50[13] + 4;
      v66 = 12 * WORD1(v50[1]);
      v38 = v24;
      v53 = 4LL;
      v55 = 2LL;
      v57 = 2LL;
      v59 = 2LL;
      v61 = 12 * LOWORD(v50[1]);
      v62 = (int)v32;
      v64 = 2LL;
      v67 = (int)v32;
      TlgWrite(&stru_140397090, &unk_140308065, 0LL, v32, 9u, &v51);
    }
  }
  else if ( stru_140397090.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
    {
      v39 = v24;
      v69 = &v39;
      v70 = 4LL;
      TlgWrite(&stru_140397090, &unk_140308039, 0LL, v27, 3u, &pData);
    }
  }
  return (unsigned int)v24;
}
