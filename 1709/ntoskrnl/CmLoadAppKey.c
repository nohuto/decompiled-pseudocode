/*
 * XREFs of CmLoadAppKey @ 0x1404E13B4
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x1400BA394 (_TlgWriteAgg.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401E3B78 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     CmpGetNextHive @ 0x1404E1EC8 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x1404E1F6C (CmpIsThisSameFile.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 *     CmpGetLastHive @ 0x1404E3C44 (CmpGetLastHive.c)
 */

__int64 __fastcall CmLoadAppKey(
        __int64 a1,
        UNICODE_STRING *a2,
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
  UNICODE_STRING *v26; // rdi
  struct _EX_RUNDOWN_REF *v27; // rax
  __int64 v28; // rbx
  struct _EX_RUNDOWN_REF *v29; // rbx
  void *v30; // rbx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  void *i; // rcx
  __int64 NextHive; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _KTHREAD *v43; // rax
  __int64 *v44; // rcx
  __int64 **v45; // rax
  unsigned __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v47; // rdx
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  char v52; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+51h] [rbp-AFh] BYREF
  char v54; // [rsp+52h] [rbp-AEh]
  char v55; // [rsp+53h] [rbp-ADh]
  char v56; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v58; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+64h] [rbp-9Ch] BYREF
  int v60; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v62; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v64; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+8Ch] [rbp-74h] BYREF
  int v66; // [rsp+90h] [rbp-70h]
  int v67; // [rsp+94h] [rbp-6Ch]
  int v68; // [rsp+98h] [rbp-68h] BYREF
  int v69; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 *v70; // [rsp+A0h] [rbp-60h] BYREF
  __int64 **v71; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v73; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING *v74; // [rsp+C0h] [rbp-40h]
  char v75; // [rsp+C8h] [rbp-38h]
  struct _KEVENT Event; // [rsp+D0h] [rbp-30h] BYREF
  KSPIN_LOCK SpinLock; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v78; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-8h]
  __int64 v80; // [rsp+100h] [rbp+0h]
  __int64 *v81; // [rsp+108h] [rbp+8h]
  PVOID Object; // [rsp+110h] [rbp+10h] BYREF
  PVOID v83; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v84; // [rsp+120h] [rbp+20h]
  PRKEVENT v85; // [rsp+128h] [rbp+28h]
  __int64 v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+138h] [rbp+38h] BYREF
  _WORD v88[176]; // [rsp+140h] [rbp+40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v90; // [rsp+2C0h] [rbp+1C0h]
  __int64 v91; // [rsp+2C8h] [rbp+1C8h]
  char *v92; // [rsp+2D0h] [rbp+1D0h]
  __int64 v93; // [rsp+2D8h] [rbp+1D8h]
  __int16 *v94; // [rsp+2E0h] [rbp+1E0h]
  __int64 v95; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v96; // [rsp+2F0h] [rbp+1F0h]
  __int64 v97; // [rsp+2F8h] [rbp+1F8h]
  _WORD *v98; // [rsp+300h] [rbp+200h]
  int v99; // [rsp+308h] [rbp+208h]
  int v100; // [rsp+30Ch] [rbp+20Ch]
  _WORD *v101; // [rsp+310h] [rbp+210h]
  __int64 v102; // [rsp+318h] [rbp+218h]
  _WORD *v103; // [rsp+320h] [rbp+220h]
  int v104; // [rsp+328h] [rbp+228h]
  int v105; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+330h] [rbp+230h] BYREF
  __int64 *v107; // [rsp+350h] [rbp+250h]
  __int64 v108; // [rsp+358h] [rbp+258h]
  int *v109; // [rsp+360h] [rbp+260h]
  __int64 v110; // [rsp+368h] [rbp+268h]
  char *v111; // [rsp+370h] [rbp+270h]
  __int64 v112; // [rsp+378h] [rbp+278h]

  v8 = a3;
  v85 = a5;
  v84 = a7;
  v81 = a8;
  v67 = a3;
  v11 = 0;
  v54 = 0;
  v55 = 0;
  LastHive = 0LL;
  P = 0LL;
  v13 = 0LL;
  v79 = 0LL;
  v86 = a4;
  v80 = (__int64)a6;
  memset(v88, 0, sizeof(v88));
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
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 3221225865LL;
  }
  v64 = v8 & 0x20;
  v19 = (v64 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v8 & 0x80u) == 0 )
    v19 = v64 != 0 ? 118030337 : 50921473;
  v20 = v19 | 0x10000000;
  if ( (v8 & 0x200) == 0 )
    v20 = v19;
  v60 = v20;
  v66 = v8 & 0x2000;
  v21 = (v66 != 0) | 0x20;
  if ( (v8 & 0x8000) == 0 )
    v21 = (v8 & 0x2000) != 0;
  HIDWORD(v59) = v21;
  v22 = CmpOpenHiveFile(a2, 0, &Handle, &v65, 8u, a6, 0LL, 0LL, (__int64)&P);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    v54 = 1;
    v74 = a2;
    v75 = 1;
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
    v74 = (UNICODE_STRING *)v13[5];
    v75 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ExInitializePushLock(&SpinLock);
  v73 = (struct _EX_RUNDOWN_REF *)&v72;
  v72 = (unsigned __int64)&v72;
  v24 = KeGetCurrentThread();
  --v24->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v25 = CmpAppHiveLoadList;
  if ( (__int64 *)CmpAppHiveLoadList == &CmpAppHiveLoadList )
  {
LABEL_28:
    if ( *(__int64 **)qword_140387258 != &CmpAppHiveLoadList )
      __fastfail(3u);
    v70 = &CmpAppHiveLoadList;
    v71 = (__int64 **)qword_140387258;
    *(_QWORD *)qword_140387258 = &v70;
    qword_140387258 = (__int64)&v70;
    ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_32;
  }
  v26 = v74;
  while ( !*(_BYTE *)(v25 + 40) )
  {
    if ( *(UNICODE_STRING **)(v25 + 32) == v26 )
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
  v73 = v27;
  v72 = v28;
  v27->Count = (unsigned __int64)&v72;
  *(_QWORD *)(v28 + 8) = &v72;
  v29 = v73;
  ExAcquireRundownProtection_0(v73 + 7);
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeWaitForSingleObject(&v29[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v29 + 7);
LABEL_32:
  v30 = (void *)v80;
  v62 = 0LL;
  v53 = 1;
  v52 = 0;
  v31 = CmpCmdHiveOpen(a2, 1, (__int64)&v53, (__int64)&v62, v60, BYTE4(v59), v80, (__int64)&v52, (__int64)v88);
  while ( 1 )
  {
    KeyCommon = v31;
    if ( !v31 )
    {
      KeyCommon = CmpLoadKeyCommon(v62, (_QWORD *)a1, v67, v86, 0LL, v85, v81, v53, v52);
      break;
    }
    if ( v31 != -1073741757 || v64 || v11 )
      break;
    if ( v54 )
    {
      v32 = CmpOpenHiveFile(a2, 0, &Handle, &v65, 8u, v30, 0LL, 0LL, (__int64)&P);
      KeyCommon = v32;
      if ( v32 < 0 )
      {
        if ( v32 == -1073741772 )
          goto LABEL_78;
        break;
      }
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v83, 0LL);
      v13 = v83;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
        break;
    }
    LOCK_HIVE_LOAD();
    LOBYTE(v33) = 1;
    CmpLockRegistryFreezeAware(v33);
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
LABEL_43:
      while ( 1 )
      {
        LODWORD(v57) = CmpActiveAppHiveUnloadCount;
        if ( !CmpActiveAppHiveUnloadCount )
          break;
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        ExBlockOnAddressPushLock(&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v57, 4uLL, 0LL);
        LOCK_HIVE_LOAD();
        LOBYTE(v34) = 1;
        CmpLockRegistryFreezeAware(v34);
      }
      for ( i = 0LL; ; i = (void *)v37 )
      {
        NextHive = CmpGetNextHive(i);
        v37 = NextHive;
        if ( !NextHive )
          goto LABEL_75;
        LODWORD(v59) = *(_DWORD *)(NextHive + 6032);
        if ( (_DWORD)v59 )
        {
          CmpUnlockRegistry();
          UNLOCK_HIVE_LOAD();
          ExBlockOnAddressPushLock((volatile __int64 *)(v37 + 6040), (_QWORD *)(v37 + 6032), &v59, 4uLL, 0LL);
          LOCK_HIVE_LOAD();
          LOBYTE(v38) = 1;
          CmpLockRegistryFreezeAware(v38);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 5496), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PERESOURCE *)v37);
          if ( v37 == LastHive )
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
            v39 = *(_DWORD *)(v37 + 5360);
            v40 = *(_DWORD *)(v37 + 144) & 0x8000;
            if ( (v39 & 0x20) == 0 || (v39 & 0x40) != 0 )
              goto LABEL_67;
            if ( v66 )
            {
              if ( !v40 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
              {
                CmpUnlockRegistry();
                UNLOCK_HIVE_LOAD();
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 5496), 0xFFFFFFFF) == 1 )
                  CmpDeleteHive((PERESOURCE *)v37);
                KeyCommon = -1073741790;
                goto LABEL_86;
              }
            }
            else if ( v40 )
            {
LABEL_67:
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 5496), 0xFFFFFFFF) == 1 )
                CmpDeleteHive((PERESOURCE *)v37);
LABEL_78:
              KeyCommon = -1073741757;
              goto LABEL_86;
            }
            v41 = *(_QWORD *)(v37 + 4104);
            v79 = v37;
            v78 = 0LL;
            CmpConstructNameWithStatus(v41, &v78);
            v42 = v78;
            *v84 = v78;
            if ( v42 )
            {
              CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int32 **)(v37 + 4104));
              *v81 = *(_QWORD *)(v37 + 4104);
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              KeyCommon = 0;
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 5496), 0xFFFFFFFF) == 1 )
                goto LABEL_73;
LABEL_74:
              if ( !v79 )
              {
LABEL_75:
                CmpUnlockRegistry();
                UNLOCK_HIVE_LOAD();
                v30 = (void *)v80;
                goto LABEL_76;
              }
              v55 = 1;
            }
            else
            {
              CmpUnlockRegistry();
              UNLOCK_HIVE_LOAD();
              KeyCommon = -1073741670;
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 5496), 0xFFFFFFFF) == 1 )
                CmpDeleteHive((PERESOURCE *)v37);
            }
            goto LABEL_86;
          }
          if ( v37 == LastHive )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 5496), 0xFFFFFFFF) == 1 )
            {
LABEL_73:
              CmpDeleteHive((PERESOURCE *)v37);
              goto LABEL_74;
            }
            goto LABEL_75;
          }
        }
        else if ( NextHive == LastHive )
        {
LABEL_49:
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(NextHive + 5496), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PERESOURCE *)NextHive);
          goto LABEL_75;
        }
      }
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
LABEL_76:
    v53 = 1;
    v52 = 0;
    v62 = 0LL;
    v31 = CmpCmdHiveOpen(
            a2,
            1,
            (__int64)&v53,
            (__int64)&v62,
            v60,
            BYTE4(v59),
            (__int64)v30,
            (__int64)&v52,
            (__int64)v88);
    v11 = 1;
  }
LABEL_86:
  v43 = KeGetCurrentThread();
  --v43->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  v44 = v70;
  v45 = v71;
  if ( (__int64 **)v70[1] != &v70 || *v71 != (__int64 *)&v70 )
    __fastfail(3u);
  *v71 = v70;
  v44[1] = (__int64)v45;
  v46 = v72;
  if ( (unsigned __int64 *)v72 != &v72 )
  {
    v47 = v73;
    v48 = (_QWORD *)(v72 - 16);
    if ( *(unsigned __int64 **)(v72 + 8) != &v72 || (unsigned __int64 *)v73->Count != &v72 )
      __fastfail(3u);
    v73->Count = v72;
    *(_QWORD *)(v46 + 8) = v47;
    v49 = (_QWORD *)qword_140387258;
    if ( *(__int64 **)qword_140387258 != &CmpAppHiveLoadList )
      __fastfail(3u);
    *v48 = &CmpAppHiveLoadList;
    v48[1] = v49;
    *v49 = v48;
    qword_140387258 = (__int64)v48;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  KeSetEvent(&Event, 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&SpinLock);
  if ( LastHive && _InterlockedExchangeAdd((volatile signed __int32 *)(LastHive + 5496), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PERESOURCE *)LastHive);
LABEL_99:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_101:
  if ( P )
    ExFreePoolWithTag(P, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( KeyCommon >= 0 )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      v56 = v55;
      v107 = &v87;
      v109 = &v69;
      v111 = &v56;
      v87 = 1LL;
      v69 = KeyCommon;
      v108 = 8LL;
      v110 = 4LL;
      v112 = 1LL;
      TlgWriteAgg((__int64)&stru_1403549F0, (unsigned __int8 *)dword_1402CE824, v50, v51, 5u, &v106);
    }
  }
  else if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
  {
    v90 = &v68;
    v92 = (char *)&v57 + 4;
    v94 = &v58;
    v96 = &v88[4];
    v98 = &v88[6];
    WORD2(v57) = v88[4];
    v58 = v88[5];
    v101 = &v88[5];
    v103 = &v88[54];
    v104 = 12 * v88[5];
    v68 = KeyCommon;
    v91 = 4LL;
    v93 = 2LL;
    v95 = 2LL;
    v97 = 2LL;
    v99 = 12 * v88[4];
    v100 = 0;
    v102 = 2LL;
    v105 = 0;
    TlgWrite(&stru_1403549F0, &unk_1402CE87E, 0LL, 0LL, 9u, &pData);
  }
  return (unsigned int)KeyCommon;
}
