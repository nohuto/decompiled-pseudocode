/*
 * XREFs of CmLoadAppKey @ 0x1404D59A0
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x140081D20 (_TlgWriteAgg.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DF684 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpGetNextHive @ 0x1404D64B4 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x1404D6558 (CmpIsThisSameFile.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpGetLastHive @ 0x1404D861C (CmpGetLastHive.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140500604 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
  __int64 LastHive; // rsi
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
  __int64 v25; // rbx
  const UNICODE_STRING *v26; // rdi
  struct _EX_RUNDOWN_REF *v27; // rax
  __int64 v28; // rbx
  struct _EX_RUNDOWN_REF *v29; // rbx
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 i; // rcx
  __int64 NextHive; // rax
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  struct _KTHREAD *v46; // rax
  __int64 *v47; // rcx
  __int64 **v48; // rax
  unsigned __int64 v49; // rax
  struct _EX_RUNDOWN_REF *v50; // rdx
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  char v55; // [rsp+50h] [rbp-B0h] BYREF
  char v56; // [rsp+51h] [rbp-AFh]
  char v57; // [rsp+52h] [rbp-AEh]
  char v58; // [rsp+53h] [rbp-ADh]
  char v59; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v61; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+64h] [rbp-9Ch] BYREF
  int v63; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  ULONG_PTR v65; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v67; // [rsp+88h] [rbp-78h]
  int v68; // [rsp+90h] [rbp-70h]
  int v69; // [rsp+94h] [rbp-6Ch]
  int v70; // [rsp+98h] [rbp-68h] BYREF
  int v71; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 *v72; // [rsp+A0h] [rbp-60h] BYREF
  __int64 **v73; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v75; // [rsp+B8h] [rbp-48h]
  const UNICODE_STRING *v76; // [rsp+C0h] [rbp-40h]
  char v77; // [rsp+C8h] [rbp-38h]
  struct _KEVENT Event; // [rsp+D0h] [rbp-30h] BYREF
  KSPIN_LOCK SpinLock; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-8h]
  __int64 v82; // [rsp+100h] [rbp+0h]
  __int64 *v83; // [rsp+108h] [rbp+8h]
  PVOID Object; // [rsp+110h] [rbp+10h] BYREF
  PVOID v85; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v86; // [rsp+120h] [rbp+20h]
  PRKEVENT v87; // [rsp+128h] [rbp+28h]
  __int64 v88; // [rsp+130h] [rbp+30h]
  __int64 v89; // [rsp+138h] [rbp+38h] BYREF
  _WORD v90[176]; // [rsp+140h] [rbp+40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v92; // [rsp+2C0h] [rbp+1C0h]
  __int64 v93; // [rsp+2C8h] [rbp+1C8h]
  char *v94; // [rsp+2D0h] [rbp+1D0h]
  __int64 v95; // [rsp+2D8h] [rbp+1D8h]
  __int16 *v96; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v98; // [rsp+2F0h] [rbp+1F0h]
  __int64 v99; // [rsp+2F8h] [rbp+1F8h]
  _WORD *v100; // [rsp+300h] [rbp+200h]
  int v101; // [rsp+308h] [rbp+208h]
  int v102; // [rsp+30Ch] [rbp+20Ch]
  _WORD *v103; // [rsp+310h] [rbp+210h]
  __int64 v104; // [rsp+318h] [rbp+218h]
  _WORD *v105; // [rsp+320h] [rbp+220h]
  int v106; // [rsp+328h] [rbp+228h]
  int v107; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+340h] [rbp+240h] BYREF
  __int64 *v109; // [rsp+360h] [rbp+260h]
  __int64 v110; // [rsp+368h] [rbp+268h]
  int *v111; // [rsp+370h] [rbp+270h]
  __int64 v112; // [rsp+378h] [rbp+278h]
  char *v113; // [rsp+380h] [rbp+280h]
  __int64 v114; // [rsp+388h] [rbp+288h]

  v8 = a3;
  v87 = a5;
  v86 = a7;
  v83 = a8;
  v69 = a3;
  v11 = 0;
  v57 = 0;
  v58 = 0;
  LastHive = 0LL;
  P = 0LL;
  v13 = 0LL;
  v81 = 0LL;
  v88 = a4;
  v82 = (__int64)a6;
  memset(v90, 0, sizeof(v90));
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 3221225865LL;
  }
  v67 = v8 & 0x20;
  v19 = (v67 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v8 & 0x80u) == 0 )
    v19 = v67 != 0 ? 118030337 : 50921473;
  v20 = v19 | 0x10000000;
  if ( (v8 & 0x200) == 0 )
    v20 = v19;
  v63 = v20;
  v68 = v8 & 0x2000;
  v21 = (v68 != 0) | 0x20;
  if ( (v8 & 0x8000) == 0 )
    v21 = (v8 & 0x2000) != 0;
  HIDWORD(v62) = v21;
  v22 = CmpOpenHiveFile(a2, 8, (__int64)a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    v57 = 1;
    v76 = a2;
    v77 = 1;
  }
  else
  {
    if ( v22 < 0 )
      goto LABEL_101;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v13 = Object;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
      goto LABEL_99;
    v76 = (const UNICODE_STRING *)v13[5];
    v77 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ExInitializePushLock(&SpinLock);
  v75 = (struct _EX_RUNDOWN_REF *)&v74;
  v74 = (unsigned __int64)&v74;
  v24 = KeGetCurrentThread();
  --v24->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v25 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_28:
    if ( *(__int64 **)qword_14036B2B8 != &CmpAppHiveLoadList )
      __fastfail(3u);
    v72 = &CmpAppHiveLoadList;
    v73 = (__int64 **)qword_14036B2B8;
    *(_QWORD *)qword_14036B2B8 = &v72;
    qword_14036B2B8 = (__int64)&v72;
    ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_32;
  }
  v26 = v76;
  while ( !*(_BYTE *)(v25 + 40) )
  {
    if ( *(const UNICODE_STRING **)(v25 + 32) == v26 )
      goto LABEL_24;
LABEL_27:
    v25 = *(_QWORD *)v25;
    if ( (__int64 *)v25 == &CmpAppHiveLoadList )
      goto LABEL_28;
  }
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(v25 + 32), a2, 1u) )
    goto LABEL_27;
LABEL_24:
  v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 24);
  v28 = v25 + 16;
  if ( v27->Count != v28 )
    __fastfail(3u);
  v75 = v27;
  v74 = v28;
  v27->Count = (unsigned __int64)&v74;
  *(_QWORD *)(v28 + 8) = &v74;
  v29 = v75;
  ExAcquireRundownProtection(v75 + 7);
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v29[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection(v29 + 7);
LABEL_32:
  v30 = v82;
  v65 = 0LL;
  v56 = 1;
  v55 = 0;
  v31 = CmpCmdHiveOpen(a2, v63, HIDWORD(v62), v82, (__int64)&v55, (__int64)v90);
  while ( 1 )
  {
    KeyCommon = v31;
    if ( !v31 )
    {
      KeyCommon = CmpLoadKeyCommon(v65, (_QWORD *)a1, v69, v88, 0LL, v87, v83, v56, v55);
      break;
    }
    if ( v31 != -1073741757 || v67 || v11 )
      break;
    if ( v57 )
    {
      v33 = CmpOpenHiveFile(a2, 8, v30, 0LL, 0LL, (__int64)&P);
      KeyCommon = v33;
      if ( v33 < 0 )
      {
        if ( v33 == -1073741772 )
          goto LABEL_78;
        break;
      }
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v85, 0LL);
      v13 = v85;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        break;
    }
    LOCK_HIVE_LOAD(v32);
    LOBYTE(v34) = 1;
    CmpLockRegistryFreezeAware(v34);
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
LABEL_43:
      while ( 1 )
      {
        LODWORD(v60) = CmpActiveAppHiveUnloadCount;
        if ( !CmpActiveAppHiveUnloadCount )
          break;
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        ExBlockOnAddressPushLock((__int64)&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v60, 4uLL, 0LL);
        LOCK_HIVE_LOAD(v35);
        LOBYTE(v36) = 1;
        CmpLockRegistryFreezeAware(v36);
      }
      for ( i = 0LL; ; i = v39 )
      {
        NextHive = CmpGetNextHive(i);
        v39 = NextHive;
        if ( !NextHive )
          goto LABEL_75;
        LODWORD(v62) = *(_DWORD *)(NextHive + 6032);
        if ( (_DWORD)v62 )
        {
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          ExBlockOnAddressPushLock(v39 + 6040, (_QWORD *)(v39 + 6032), &v62, 4uLL, 0LL);
          LOCK_HIVE_LOAD(v40);
          LOBYTE(v41) = 1;
          CmpLockRegistryFreezeAware(v41);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 5496), 0xFFFFFFFF) == 1 )
            CmpDeleteHive(v39);
          if ( v39 == LastHive )
            goto LABEL_75;
          goto LABEL_43;
        }
        if ( *(_BYTE *)(NextHive + 6049) )
        {
          if ( NextHive == LastHive )
            goto LABEL_49;
        }
        else if ( *(_QWORD *)(NextHive + 2664) )
        {
          if ( (unsigned __int8)CmpIsThisSameFile(v13) )
          {
            v42 = *(_DWORD *)(v39 + 5360);
            v43 = *(_DWORD *)(v39 + 144) & 0x8000;
            if ( (v42 & 0x20) == 0 || (v42 & 0x40) != 0 )
              goto LABEL_67;
            if ( v68 )
            {
              if ( !v43 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
              {
                CmpUnlockRegistry();
                UNLOCK_HIVE_LOAD();
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 5496), 0xFFFFFFFF) == 1 )
                  CmpDeleteHive(v39);
                KeyCommon = -1073741790;
                goto LABEL_86;
              }
            }
            else if ( v43 )
            {
LABEL_67:
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 5496), 0xFFFFFFFF) == 1 )
                CmpDeleteHive(v39);
LABEL_78:
              KeyCommon = -1073741757;
              goto LABEL_86;
            }
            v44 = *(_QWORD *)(v39 + 4104);
            v81 = v39;
            v80 = 0LL;
            CmpConstructNameWithStatus(v44, &v80);
            v45 = v80;
            *v86 = v80;
            if ( v45 )
            {
              CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(v39 + 4104));
              *v83 = *(_QWORD *)(v39 + 4104);
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              KeyCommon = 0;
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 5496), 0xFFFFFFFF) == 1 )
                goto LABEL_73;
LABEL_74:
              if ( !v81 )
              {
LABEL_75:
                CmpUnlockRegistry();
                UNLOCK_HIVE_LOAD();
                v30 = v82;
                goto LABEL_76;
              }
              v58 = 1;
            }
            else
            {
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              KeyCommon = -1073741670;
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 5496), 0xFFFFFFFF) == 1 )
                CmpDeleteHive(v39);
            }
            goto LABEL_86;
          }
          if ( v39 == LastHive )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 5496), 0xFFFFFFFF) == 1 )
            {
LABEL_73:
              CmpDeleteHive(v39);
              goto LABEL_74;
            }
            goto LABEL_75;
          }
        }
        else if ( NextHive == LastHive )
        {
LABEL_49:
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(NextHive + 5496), 0xFFFFFFFF) == 1 )
            CmpDeleteHive(NextHive);
          goto LABEL_75;
        }
      }
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
LABEL_76:
    v56 = 1;
    v55 = 0;
    v65 = 0LL;
    v31 = CmpCmdHiveOpen(a2, v63, HIDWORD(v62), v30, (__int64)&v55, (__int64)v90);
    v11 = 1;
  }
LABEL_86:
  v46 = KeGetCurrentThread();
  --v46->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v47 = v72;
  v48 = v73;
  if ( (__int64 **)v72[1] != &v72 || *v73 != (__int64 *)&v72 )
    __fastfail(3u);
  *v73 = v72;
  v47[1] = (__int64)v48;
  v49 = v74;
  if ( (unsigned __int64 *)v74 != &v74 )
  {
    v50 = v75;
    v51 = (_QWORD *)(v74 - 16);
    if ( *(unsigned __int64 **)(v74 + 8) != &v74 || (unsigned __int64 *)v75->Count != &v74 )
      __fastfail(3u);
    v75->Count = v74;
    *(_QWORD *)(v49 + 8) = v50;
    v52 = (_QWORD *)qword_14036B2B8;
    if ( *(__int64 **)qword_14036B2B8 != &CmpAppHiveLoadList )
      __fastfail(3u);
    *v51 = &CmpAppHiveLoadList;
    v51[1] = v52;
    *v52 = v51;
    qword_14036B2B8 = (__int64)v51;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  KeSetEvent(&Event, 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&SpinLock);
  if ( LastHive && _InterlockedExchangeAdd((volatile signed __int32 *)(LastHive + 5496), 0xFFFFFFFF) == 1 )
    CmpDeleteHive(LastHive);
LABEL_99:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_101:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( KeyCommon >= 0 )
  {
    if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
    {
      v59 = v58;
      v109 = &v89;
      v111 = &v71;
      v113 = &v59;
      v89 = 1LL;
      v71 = KeyCommon;
      v110 = 8LL;
      v112 = 4LL;
      v114 = 1LL;
      TlgWriteAgg((__int64)&stru_14033C3C0, (unsigned __int8 *)dword_1402AAAB1, v53, v54, 5u, &v108);
    }
  }
  else if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
  {
    v92 = &v70;
    v94 = (char *)&v60 + 4;
    v96 = &v61;
    v98 = &v90[4];
    v100 = &v90[6];
    WORD2(v60) = v90[4];
    v61 = v90[5];
    v103 = &v90[5];
    v105 = &v90[54];
    v106 = 12 * v90[5];
    v70 = KeyCommon;
    v93 = 4LL;
    v95 = 2LL;
    v97 = 2LL;
    v99 = 2LL;
    v101 = 12 * v90[4];
    v102 = 0;
    v104 = 2LL;
    v107 = 0;
    TlgWrite(&stru_14033C3C0, &unk_1402AAB0B, 0LL, 0LL, 9u, &pData);
  }
  return (unsigned int)KeyCommon;
}
