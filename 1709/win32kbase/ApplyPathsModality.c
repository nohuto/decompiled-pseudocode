/*
 * XREFs of ApplyPathsModality @ 0x1C0067D1C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00680E8 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0069968 (ApplyPathModalityToCdsRegistryStore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00F36F0 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8)
{
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edi
  unsigned int v24; // r9d
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // r8
  unsigned int i; // ebx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rcx
  _QWORD *v37; // rax

  v12 = 0;
  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore() )
  {
    LOBYTE(v13) = 1;
    DrvNotifyModeChangeStartStop(v13);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      WdLogEvent5_WdAssertion(v31);
    }
    v18 = a2;
    LODWORD(v18) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C0190630)(v18, a1, a8) < 0 )
    {
      *a6 = 1;
      v23 = -1;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 36) || !*(_QWORD *)(a1 + 40) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        WdLogEvent5_WdAssertion(v32);
      }
      if ( (a2 & 0x400000) != 0 )
      {
        v33 = *(_DWORD *)(a1 + 36);
        v12 = 1;
        v34 = 0LL;
        if ( v33 )
        {
          while ( 1 )
          {
            v35 = (unsigned int)v34;
            v36 = 224LL * (unsigned int)v34;
            if ( *(_DWORD *)(v36 + *(_QWORD *)(a1 + 40) + 84) != *(_DWORD *)(v36 + *(_QWORD *)(a1 + 40) + 116) )
              break;
            v34 = (unsigned int)(v34 + 1);
            if ( (unsigned int)v34 >= v33 )
              goto LABEL_8;
          }
          v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v36, v34);
          v37[3] = *(int *)(224 * v35 + *(_QWORD *)(a1 + 40) + 4);
          v37[4] = *(unsigned int *)(224 * v35 + *(_QWORD *)(a1 + 40));
          v37[5] = *(unsigned int *)(224 * v35 + *(_QWORD *)(a1 + 40) + 84);
          v37[6] = *(unsigned int *)(224 * v35 + *(_QWORD *)(a1 + 40) + 116);
          WdLogEvent5_WdEvent(v37);
          v12 = 0;
        }
      }
LABEL_8:
      v23 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v12);
      if ( v23 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C0190638)(a1);
      if ( v23 != 2 )
        goto LABEL_19;
      v24 = *(_DWORD *)(a1 + 36);
      if ( v24 )
      {
        v25 = *(_QWORD *)(a1 + 40);
        if ( v25 )
        {
          v26 = 0;
          while ( 1 )
          {
            v27 = 224LL * v26;
            if ( *(_DWORD *)(v27 + v25 + 84) || *(_DWORD *)(v27 + v25 + 88) || *(_DWORD *)(v27 + v25 + 120) )
              break;
            if ( ++v26 >= v24 )
              goto LABEL_18;
          }
          *(_QWORD *)a7 = a5;
          v23 = 0;
          GreIncrementDisplaySettingsUniqueness();
LABEL_19:
          if ( v23 >= 0 && (int)IsUpdateGammaRampOnDeviceSupported() >= 0 && a7 && *(_QWORD *)a7 )
          {
            EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
            EngAcquireSemaphore(ghsemGreLock);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
            for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a7 + 20LL); ++i )
            {
              v30 = *(_QWORD *)(*(_QWORD *)a7 + 40LL * i + 32);
              if ( v30 && (*(_DWORD *)(v30 + 32) & 1) != 0 )
                UpdateGammaRampOnDevice(v30, 0LL);
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            if ( ghsemGreLock )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            if ( ghsemDynamicModeChange )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
              PsLeavePriorityRegion();
            }
          }
        }
      }
    }
LABEL_18:
    DrvNotifyModeChangeStartStop(0LL);
    return (unsigned int)v23;
  }
  return 0xFFFFFFFFLL;
}
