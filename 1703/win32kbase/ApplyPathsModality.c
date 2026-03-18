/*
 * XREFs of ApplyPathsModality @ 0x1C005B154
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C005B9C4 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C005D518 (ApplyPathModalityToCdsRegistryStore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00F0B10 (GreIncrementDisplaySettingsUniqueness.c)
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
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  unsigned int v20; // r9d
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // r8
  unsigned int i; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // esi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // r8

  v12 = 0;
  *a6 = 0;
  if ( (unsigned int)ApplyPathModalityToCdsRegistryStore() )
  {
    LOBYTE(v13) = 1;
    DrvNotifyModeChangeStartStop(v13);
    if ( *(_DWORD *)(a1 + 36) || *(_QWORD *)(a1 + 40) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v29);
    }
    v16 = a2;
    LODWORD(v16) = a2 | 0x20000;
    if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C018B9C8)(v16, a1, a8) < 0 )
    {
      *a6 = 1;
      v19 = -1;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 36) || !*(_QWORD *)(a1 + 40) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v30);
      }
      if ( (a2 & 0x400000) != 0 )
      {
        v31 = *(unsigned int *)(a1 + 36);
        v12 = 1;
        v32 = 0;
        if ( (_DWORD)v31 )
        {
          while ( 1 )
          {
            v33 = 216LL * v32;
            if ( *(_DWORD *)(v33 + *(_QWORD *)(a1 + 40) + 84) != *(_DWORD *)(v33 + *(_QWORD *)(a1 + 40) + 108) )
              break;
            if ( ++v32 >= (unsigned int)v31 )
              goto LABEL_8;
          }
          v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v33, v31);
          v35 = 216LL * v32;
          v34[3] = *(int *)(v35 + *(_QWORD *)(a1 + 40) + 4);
          v34[4] = *(unsigned int *)(v35 + *(_QWORD *)(a1 + 40));
          v34[5] = *(unsigned int *)(v35 + *(_QWORD *)(a1 + 40) + 84);
          v34[6] = *(unsigned int *)(v35 + *(_QWORD *)(a1 + 40) + 108);
          WdLogEvent5_WdEvent(v34);
          v12 = 0;
        }
      }
LABEL_8:
      v19 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, 0, 1, a5, a7, 0, 1, a3, 1, v12);
      if ( v19 < 0 )
        *a6 = 1;
      ((void (__fastcall *)(__int64))qword_1C018B9D0)(a1);
      if ( v19 != 2 )
        goto LABEL_19;
      v20 = *(_DWORD *)(a1 + 36);
      if ( v20 )
      {
        v21 = *(_QWORD *)(a1 + 40);
        if ( v21 )
        {
          v22 = 0;
          while ( 1 )
          {
            v23 = 216LL * v22;
            if ( *(_DWORD *)(v23 + v21 + 84) || *(_DWORD *)(v23 + v21 + 88) || *(_DWORD *)(v23 + v21 + 112) )
              break;
            if ( ++v22 >= v20 )
              goto LABEL_18;
          }
          *(_QWORD *)a7 = a5;
          v19 = 0;
          GreIncrementDisplaySettingsUniqueness();
LABEL_19:
          if ( v19 >= 0 && (int)IsUpdateGammaRampOnDeviceSupported() >= 0 && a7 && *(_QWORD *)a7 )
          {
            EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
            EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
            for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a7 + 20LL); ++i )
            {
              v26 = *(_QWORD *)(*(_QWORD *)a7 + 40LL * i + 32);
              if ( v26 && (*(_DWORD *)(v26 + 32) & 1) != 0 )
                UpdateGammaRampOnDevice(v26, 0LL);
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            if ( ghsemGreLock )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
              PsLeavePriorityRegion(v27);
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            if ( ghsemDynamicModeChange )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
              PsLeavePriorityRegion(v28);
            }
          }
        }
      }
    }
LABEL_18:
    DrvNotifyModeChangeStartStop(0LL);
    return (unsigned int)v19;
  }
  return 0xFFFFFFFFLL;
}
