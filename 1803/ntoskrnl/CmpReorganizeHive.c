/*
 * XREFs of CmpReorganizeHive @ 0x140497D1C
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmCheckRegistry @ 0x140499094 (CmCheckRegistry.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpClearKeyAccessBits @ 0x14057027C (CmpClearKeyAccessBits.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14065068C (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x1406EFEB4 (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x1406F753C (CmpCreateEmptyHiveClone.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x1406F78B4 (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter2, __int16 *a2)
{
  __int64 v4; // rax
  int v5; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r9
  unsigned int v8; // edx
  unsigned __int64 v9; // r8
  int v10; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // bl
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // di
  __int16 v18; // r11
  unsigned __int16 v19; // ax
  int v20; // eax
  _QWORD *v21; // r14
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r9d
  int v27; // r10d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r12d
  unsigned int v32; // r15d
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  LARGE_INTEGER v37; // [rsp+40h] [rbp-C0h]
  __int16 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v39; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v45; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 *v48; // [rsp+78h] [rbp-88h]
  __int16 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  _WORD v51[176]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v52; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v53; // [rsp+210h] [rbp+110h]
  __int64 v54; // [rsp+218h] [rbp+118h]
  __int16 *v55; // [rsp+220h] [rbp+120h]
  __int64 v56; // [rsp+228h] [rbp+128h]
  __int16 *v57; // [rsp+230h] [rbp+130h]
  __int64 v58; // [rsp+238h] [rbp+138h]
  _WORD *v59; // [rsp+240h] [rbp+140h]
  __int64 v60; // [rsp+248h] [rbp+148h]
  _WORD *v61; // [rsp+250h] [rbp+150h]
  int v62; // [rsp+258h] [rbp+158h]
  int v63; // [rsp+25Ch] [rbp+15Ch]
  _WORD *v64; // [rsp+260h] [rbp+160h]
  __int64 v65; // [rsp+268h] [rbp+168h]
  _WORD *v66; // [rsp+270h] [rbp+170h]
  int v67; // [rsp+278h] [rbp+178h]
  int v68; // [rsp+27Ch] [rbp+17Ch]
  EVENT_DATA_DESCRIPTOR v69; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v70; // [rsp+2A0h] [rbp+1A0h]
  __int64 v71; // [rsp+2A8h] [rbp+1A8h]
  int *v72; // [rsp+2B0h] [rbp+1B0h]
  __int64 v73; // [rsp+2B8h] [rbp+1B8h]
  int *v74; // [rsp+2C0h] [rbp+1C0h]
  __int64 v75; // [rsp+2C8h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR v76; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v77; // [rsp+2F0h] [rbp+1F0h]
  __int64 v78; // [rsp+2F8h] [rbp+1F8h]
  int *v79; // [rsp+300h] [rbp+200h]
  __int64 v80; // [rsp+308h] [rbp+208h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+310h] [rbp+210h] BYREF
  int *v82; // [rsp+330h] [rbp+230h]
  __int64 v83; // [rsp+338h] [rbp+238h]

  v48 = a2;
  memset(v51, 0, sizeof(v51));
  v4 = *(_QWORD *)(BugCheckParameter2 + 64);
  P = 0LL;
  if ( (*(_DWORD *)(v4 + 144) & 1) != 0 )
    return 0;
  v5 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v5 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter2 + 1536) )
    return 0;
  if ( (v5 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter2 + 164) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 64);
    v8 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
    v37.HighPart = MEMORY[0xFFFFF78000000018];
    v9 = *(_QWORD *)(v7 + 168);
    if ( v9 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL)
      && (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v9 < 864000000000LL
                                                                   * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
    {
      goto LABEL_9;
    }
    if ( !a2 )
    {
      v16 = 0;
      v50 = v7 + 48;
      do
      {
        v17 = v16;
        v18 = *(_WORD *)(v7 + 48 + 2LL * v16);
        if ( !v18 )
          break;
        ++v16;
      }
      while ( v16 < 0x1Fu );
      v19 = v17 + 1;
      if ( !v18 )
        v19 = v17;
      v48 = &v49;
      v49 = 2 * v19;
    }
    if ( v9 == 2 || v9 != 1 && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x400) == 0 )
    {
      v37.LowPart = v8 | 2;
      CmpClearKeyAccessBits(BugCheckParameter2);
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
      HvMarkBaseBlockDirty(BugCheckParameter2);
      *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v37;
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v12, v13, v14);
      KeAbPostRelease(BugCheckParameter2 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
      KeAbPostRelease(BugCheckParameter2 + 72);
      CmpUnlockRegistry();
      goto LABEL_9;
    }
    if ( *(_DWORD *)(v7 + 36) == -1 )
    {
LABEL_9:
      v10 = 0;
      goto LABEL_10;
    }
    v37.LowPart = v8 | 1;
    v20 = CmpCreateEmptyHiveClone(&P, BugCheckParameter2);
    v21 = P;
    v10 = v20;
    if ( v20 >= 0 )
    {
      v22 = CmpCopyKeyPartial(
              BugCheckParameter2,
              *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
              P,
              0xFFFFFFFFLL,
              6);
      if ( v22 == -1
        || (*(_DWORD *)(v21[8] + 36LL) = v22,
            HvMarkBaseBlockDirty((__int64)v21),
            !(unsigned __int8)CmpCopySyncTree(BugCheckParameter2, 66, 0)) )
      {
        v10 = -1073741670;
      }
      else
      {
        v10 = CmCheckRegistry((ULONG_PTR)v21);
        if ( v10 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) & 4) != 0
            || *(_DWORD *)(BugCheckParameter2 + 4820) == *((_DWORD *)v21 + 1205) )
          {
            v21[7] = 0LL;
            v31 = *((_DWORD *)v21 + 68);
            v32 = *(_DWORD *)(BugCheckParameter2 + 272);
            CmpSwapHiveStorage(BugCheckParameter2, v21);
            if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
            {
              v33 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL);
              v70 = &v41;
              v72 = (int *)&v45;
              v74 = (int *)&v46;
              v41 = v33;
              v45 = v32;
              v46 = v31;
              v71 = 8LL;
              v73 = 4LL;
              v75 = 4LL;
              TlgWrite(&stru_140397090, &unk_140308671, 0LL, 0LL, 5u, &v69);
            }
            CmpLockRegistry();
            ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
            ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
            HvMarkBaseBlockDirty(BugCheckParameter2);
            *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v37;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v34, v35, v36);
            KeAbPostRelease(BugCheckParameter2 + 80);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
            KeAbPostRelease(BugCheckParameter2 + 72);
            CmpUnlockRegistry();
            CmpLogReorganizeEvent(v48, v32, v31);
            if ( v31 < v32 )
            {
              if ( CmpFirstReorganize )
              {
                CmpReorganizeTotalBytesSaved = 0LL;
                CmpReorganizeLastRun = v37;
                CmpFirstReorganize = 0;
              }
              CmpReorganizeTotalBytesSaved += v32 - v31;
              CmpUpdateReorganizeRegistryValues();
            }
            v10 = 0;
          }
          else
          {
            if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
            {
              v43 = v26;
              v77 = &v43;
              v79 = &v44;
              v44 = v27;
              v78 = 4LL;
              v80 = 4LL;
              TlgWrite(&stru_140397090, &unk_1403086B7, 0LL, 0LL, 4u, &v76);
            }
            CmpLockRegistry();
            ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
            ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
            HvMarkBaseBlockDirty(BugCheckParameter2);
            *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v37;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v28, v29, v30);
            KeAbPostRelease(BugCheckParameter2 + 80);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
            KeAbPostRelease(BugCheckParameter2 + 72);
            CmpUnlockRegistry();
            v10 = -1073741492;
          }
        }
        else
        {
          if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
          {
            v53 = &v42;
            v55 = &v38;
            v57 = &v39;
            v59 = &v51[4];
            v61 = &v51[6];
            v38 = v51[4];
            v62 = 12 * v51[4];
            v64 = &v51[5];
            v67 = 12 * v51[5];
            v42 = v10;
            v39 = v51[5];
            v54 = 4LL;
            v56 = 2LL;
            v58 = 2LL;
            v60 = 2LL;
            v63 = 0;
            v65 = 2LL;
            v66 = &v51[54];
            v68 = 0;
            TlgWrite(&stru_140397090, &unk_14030870F, 0LL, 0LL, 9u, &v52);
          }
          if ( v10 != -1073741492 && v10 != -2147483606 )
            goto LABEL_70;
          CmpLockRegistry();
          ExAcquirePushLockSharedEx(BugCheckParameter2 + 72, 0LL);
          ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
          HvMarkBaseBlockDirty(BugCheckParameter2);
          *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v37;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v23, v24, v25);
          KeAbPostRelease(BugCheckParameter2 + 80);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
          KeAbPostRelease(BugCheckParameter2 + 72);
          CmpUnlockRegistry();
        }
        v21 = P;
      }
    }
LABEL_70:
    if ( v21 )
      CmpDestroyHive(v21);
LABEL_10:
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_22;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v10 = -1073741431;
LABEL_22:
  if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
  {
    v47 = v10;
    v82 = &v47;
    v83 = 4LL;
    TlgWrite(&stru_140397090, &unk_14030863F, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v10;
}
