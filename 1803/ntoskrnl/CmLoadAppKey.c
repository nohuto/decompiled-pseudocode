/*
 * XREFs of CmLoadAppKey @ 0x14049C2A8
 * Callers:
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x14006F11C (_TlgWriteAgg.c)
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140221DC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpGetLastHive @ 0x14049BD04 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x14049CD7C (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x14049D228 (CmpIsThisSameFile.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpDetachFromRegistryProcess @ 0x1404A80D8 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1404AB0A4 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmLoadAppKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        struct _KEVENT *a5,
        POBJECT_HANDLE_INFORMATION a6,
        _QWORD *a7,
        __int64 *a8)
{
  __int16 v8; // di
  char v11; // r14
  volatile signed __int32 *LastHive; // rsi
  _QWORD *v13; // r15
  unsigned __int16 v14; // cx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int KeyCommon; // edi
  struct _KTHREAD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  const UNICODE_STRING *v28; // rdi
  struct _EX_RUNDOWN_REF *v29; // rax
  __int64 v30; // rbx
  struct _EX_RUNDOWN_REF *v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // ecx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  _QWORD *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  struct _KTHREAD *v72; // rax
  unsigned __int64 *v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rcx
  __int64 **v76; // rax
  unsigned __int64 v77; // rax
  struct _EX_RUNDOWN_REF *v78; // rdx
  _QWORD *v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // r8
  __int64 v82; // r9
  __int16 v83; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v84; // [rsp+52h] [rbp-AEh]
  char v85; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v87; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+64h] [rbp-9Ch] BYREF
  int v89; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  ULONG_PTR v91; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v93; // [rsp+88h] [rbp-78h]
  int v94; // [rsp+90h] [rbp-70h]
  int v95; // [rsp+94h] [rbp-6Ch]
  int v96; // [rsp+98h] [rbp-68h] BYREF
  int v97; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 *v98; // [rsp+A0h] [rbp-60h] BYREF
  __int64 **v99; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v100; // [rsp+B0h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v101; // [rsp+B8h] [rbp-48h]
  const UNICODE_STRING *v102; // [rsp+C0h] [rbp-40h]
  char v103; // [rsp+C8h] [rbp-38h]
  struct _KEVENT Event; // [rsp+D0h] [rbp-30h] BYREF
  KSPIN_LOCK SpinLock; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v106; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v107; // [rsp+F8h] [rbp-8h]
  __int64 v108; // [rsp+100h] [rbp+0h]
  __int64 *v109; // [rsp+108h] [rbp+8h]
  PVOID Object; // [rsp+110h] [rbp+10h] BYREF
  PVOID v111; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v112; // [rsp+120h] [rbp+20h]
  struct _KEVENT *v113; // [rsp+128h] [rbp+28h]
  __int64 v114; // [rsp+130h] [rbp+30h]
  __int64 v115; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v116[48]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v117[44]; // [rsp+170h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v119; // [rsp+2F0h] [rbp+1F0h]
  __int64 v120; // [rsp+2F8h] [rbp+1F8h]
  char *v121; // [rsp+300h] [rbp+200h]
  __int64 v122; // [rsp+308h] [rbp+208h]
  __int16 *v123; // [rsp+310h] [rbp+210h]
  __int64 v124; // [rsp+318h] [rbp+218h]
  __int64 *v125; // [rsp+320h] [rbp+220h]
  __int64 v126; // [rsp+328h] [rbp+228h]
  char *v127; // [rsp+330h] [rbp+230h]
  int v128; // [rsp+338h] [rbp+238h]
  int v129; // [rsp+33Ch] [rbp+23Ch]
  char *v130; // [rsp+340h] [rbp+240h]
  __int64 v131; // [rsp+348h] [rbp+248h]
  char *v132; // [rsp+350h] [rbp+250h]
  int v133; // [rsp+358h] [rbp+258h]
  int v134; // [rsp+35Ch] [rbp+25Ch]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+360h] [rbp+260h] BYREF
  __int64 *v136; // [rsp+380h] [rbp+280h]
  __int64 v137; // [rsp+388h] [rbp+288h]
  int *v138; // [rsp+390h] [rbp+290h]
  __int64 v139; // [rsp+398h] [rbp+298h]
  char *v140; // [rsp+3A0h] [rbp+2A0h]
  __int64 v141; // [rsp+3A8h] [rbp+2A8h]

  v8 = a3;
  v113 = a5;
  v112 = a7;
  v109 = a8;
  v95 = a3;
  v11 = 0;
  v84 = 0;
  LastHive = 0LL;
  P = 0LL;
  v13 = 0LL;
  v107 = 0LL;
  v114 = a4;
  v108 = (__int64)a6;
  memset(v117, 0, sizeof(v117));
  memset(v116, 0, sizeof(v116));
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
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 3221225865LL;
  }
  v93 = v8 & 0x20;
  v19 = (v93 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v8 & 0x80u) == 0 )
    v19 = v93 != 0 ? 118030337 : 50921473;
  v20 = v19 | 0x10000000;
  if ( (v8 & 0x200) == 0 )
    v20 = v19;
  v89 = v20;
  v94 = v8 & 0x2000;
  v21 = (v94 != 0) | 0x20;
  if ( (v8 & 0x8000) == 0 )
    v21 = (v8 & 0x2000) != 0;
  HIDWORD(v88) = v21;
  v22 = CmpOpenHiveFile(a2, 8, (__int64)a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    LOBYTE(v84) = 1;
    v102 = a2;
    v103 = 1;
  }
  else
  {
    if ( v22 < 0 )
      goto LABEL_94;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v13 = Object;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_92;
    v102 = (const UNICODE_STRING *)v13[5];
    v103 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ExInitializePushLock(&SpinLock);
  v101 = (struct _EX_RUNDOWN_REF *)&v100;
  v100 = (unsigned __int64)&v100;
  v24 = KeGetCurrentThread();
  --v24->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v27 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_28:
    if ( *(__int64 **)qword_1403CA798 != &CmpAppHiveLoadList )
      __fastfail(3u);
    v98 = &CmpAppHiveLoadList;
    v99 = (__int64 **)qword_1403CA798;
    *(_QWORD *)qword_1403CA798 = &v98;
    qword_1403CA798 = (__int64)&v98;
    ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL, v25, v26);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_32;
  }
  v28 = v102;
  while ( !*(_BYTE *)(v27 + 40) )
  {
    if ( *(const UNICODE_STRING **)(v27 + 32) == v28 )
      goto LABEL_24;
LABEL_27:
    v27 = *(_QWORD *)v27;
    if ( (__int64 *)v27 == &CmpAppHiveLoadList )
      goto LABEL_28;
  }
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v27 + 32), a2, 1u) )
    goto LABEL_27;
LABEL_24:
  v29 = *(struct _EX_RUNDOWN_REF **)(v27 + 24);
  v30 = v27 + 16;
  if ( v29->Count != v30 )
    __fastfail(3u);
  v101 = v29;
  v100 = v30;
  v29->Count = (unsigned __int64)&v100;
  *(_QWORD *)(v30 + 8) = &v100;
  v31 = v101;
  ExAcquireRundownProtection(v101 + 7);
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL, v32, v33);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v31[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection(v31 + 7);
LABEL_32:
  v34 = v108;
  v91 = 0LL;
  v83 = 256;
  v35 = CmpCmdHiveOpen(a2, v89, SHIDWORD(v88), v108, (__int64)&v83, (__int64)v117);
  while ( 1 )
  {
    KeyCommon = v35;
    if ( !v35 )
    {
      KeyCommon = CmpLoadKeyCommon(v91, (_QWORD *)a1, v95, v114, 0LL, v113, v109, SHIBYTE(v83), v83);
      goto LABEL_79;
    }
    if ( v35 != -1073741757 || v93 || v11 )
      goto LABEL_79;
    if ( (_BYTE)v84 )
    {
      v36 = CmpOpenHiveFile(a2, 8, v34, 0LL, 0LL, (__int64)&P);
      KeyCommon = v36;
      if ( v36 < 0 )
      {
        if ( v36 == -1073741772 )
LABEL_71:
          KeyCommon = -1073741757;
        goto LABEL_79;
      }
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v111, 0LL);
      v13 = v111;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        goto LABEL_79;
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
LABEL_69:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v61, v60, v62, v63);
    v83 = 256;
    v91 = 0LL;
    v35 = CmpCmdHiveOpen(a2, v89, SHIDWORD(v88), v34, (__int64)&v83, (__int64)v117);
    v11 = 1;
  }
LABEL_41:
  LODWORD(v86) = CmpActiveAppHiveUnloadCount;
  while ( (_DWORD)v86 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v38, v37, v39, v40);
    ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v86, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LODWORD(v86) = CmpActiveAppHiveUnloadCount;
  }
  for ( i = 0LL; ; i = (void *)v43 )
  {
    NextHive = CmpGetNextHive(i);
    v43 = NextHive;
    if ( !NextHive )
      goto LABEL_67;
    LODWORD(v88) = *(_DWORD *)(NextHive + 4824);
    if ( (_DWORD)v88 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v45, v44, v46, v47);
      ExBlockOnAddressPushLock(v43 + 4832, (_QWORD *)(v43 + 4824), &v88, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 4288), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v43);
      if ( (volatile signed __int32 *)v43 == LastHive )
        goto LABEL_67;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(NextHive + 1536) && (unsigned __int8)CmpIsThisSameFile(v13) )
      break;
    if ( (volatile signed __int32 *)v43 == LastHive )
      goto LABEL_65;
  }
  v48 = *(_DWORD *)(v43 + 4152);
  v49 = *(_DWORD *)(v43 + 160) & 0x8000;
  if ( (v48 & 0x20) == 0 || (v48 & 0x40) != 0 )
  {
LABEL_59:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v51, v50, v52, v53);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 4288), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v43);
    goto LABEL_71;
  }
  if ( v94 )
  {
    if ( !v49 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v65, v64, v66, v67);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 4288), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v43);
      KeyCommon = -1073741790;
      goto LABEL_79;
    }
  }
  else if ( v49 )
  {
    goto LABEL_59;
  }
  CmpAttachToRegistryProcess(v116);
  v54 = *(_QWORD *)(v43 + 2928);
  v107 = v43;
  v106 = 0LL;
  CmpConstructNameWithStatus(v54, &v106);
  v55 = v112;
  *v112 = v106;
  CmpDetachFromRegistryProcess(v116);
  if ( !*v55 )
  {
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v69, v68, v70, v71);
    KeyCommon = -1073741670;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 4288), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v43);
    goto LABEL_79;
  }
  CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v43 + 2928));
  *v109 = *(_QWORD *)(v43 + 2928);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD(v57, v56, v58, v59);
  KeyCommon = 0;
LABEL_65:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 4288), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)v43);
LABEL_67:
  if ( !v107 )
  {
    v34 = v108;
    goto LABEL_69;
  }
  HIBYTE(v84) = 1;
LABEL_79:
  v72 = KeGetCurrentThread();
  --v72->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v75 = v98;
  v76 = v99;
  if ( (__int64 **)v98[1] != &v98 || *v99 != (__int64 *)&v98 )
    __fastfail(3u);
  *v99 = v98;
  v75[1] = (__int64)v76;
  v77 = v100;
  if ( (unsigned __int64 *)v100 != &v100 )
  {
    v78 = v101;
    v79 = (_QWORD *)(v100 - 16);
    if ( *(unsigned __int64 **)(v100 + 8) != &v100 || (v73 = &v100, (unsigned __int64 *)v101->Count != &v100) )
      __fastfail(3u);
    v101->Count = v100;
    *(_QWORD *)(v77 + 8) = v78;
    v80 = (_QWORD *)qword_1403CA798;
    if ( *(__int64 **)qword_1403CA798 != &CmpAppHiveLoadList )
      __fastfail(3u);
    *v79 = &CmpAppHiveLoadList;
    v79[1] = v80;
    *v80 = v79;
    qword_1403CA798 = (__int64)v79;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL, (__int64)v73, v74);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeSetEvent(&Event, 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&SpinLock);
  if ( LastHive && _InterlockedExchangeAdd(LastHive + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)LastHive);
LABEL_92:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_94:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( KeyCommon >= 0 )
  {
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
    {
      v85 = HIBYTE(v84);
      v136 = &v115;
      v138 = &v97;
      v140 = &v85;
      v115 = 1LL;
      v97 = KeyCommon;
      v137 = 8LL;
      v139 = 4LL;
      v141 = 1LL;
      TlgWriteAgg((__int64)&stru_140397090, (unsigned __int8 *)dword_14030813C, v81, v82, 5u, &v135);
    }
  }
  else if ( stru_140397090.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
    {
      v119 = &v96;
      v121 = (char *)&v86 + 4;
      v123 = &v87;
      v125 = &v117[1];
      v127 = (char *)&v117[1] + 4;
      v87 = WORD1(v117[1]);
      WORD2(v86) = v117[1];
      v130 = (char *)&v117[1] + 2;
      v132 = (char *)&v117[13] + 4;
      v133 = 12 * WORD1(v117[1]);
      v96 = KeyCommon;
      v120 = 4LL;
      v122 = 2LL;
      v124 = 2LL;
      v126 = 2LL;
      v128 = 12 * LOWORD(v117[1]);
      v129 = 0;
      v131 = 2LL;
      v134 = 0;
      TlgWrite(&stru_140397090, &unk_140308196, 0LL, 0LL, 9u, &pData);
    }
  }
  return (unsigned int)KeyCommon;
}
