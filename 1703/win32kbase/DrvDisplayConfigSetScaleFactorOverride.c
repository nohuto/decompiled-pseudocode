/*
 * XREFs of DrvDisplayConfigSetScaleFactorOverride @ 0x1C00F9990
 * Callers:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F95B0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00F0B10 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DrvDisplayConfigSetScaleFactorOverride(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 *i; // rbx
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 *v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx

  LODWORD(v4) = -1073741811;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = *(__int64 **)&WPP_MAIN_CB.SectorSize; i; i = (__int64 *)*i )
  {
    if ( (i[4] & 0x401) == 1 )
    {
      v6 = (_DWORD *)i[324];
      if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v7 = v6[40];
        if ( (v7 & 0x800000) != 0 )
        {
          v8 = i + 309;
          if ( a2 )
          {
            if ( *a2 )
            {
              v9 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD, __int64 *))qword_1C018BDF0)(
                     v6 + 66,
                     (unsigned int)v6[68],
                     (unsigned int)a1[5],
                     v8);
              v4 = v9;
              if ( v9 < 0 )
              {
                v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
                v13[3] = v4;
                v13[4] = (int)a1[5];
                v13[5] = *(int *)(i[324] + 268);
                v13[6] = *(unsigned int *)(i[324] + 264);
                v13[7] = *(unsigned int *)(i[324] + 272);
                WdLogEvent5_WdError(v13);
              }
            }
            else if ( (v7 & 4) != 0 )
            {
              v14 = (unsigned int)v6[68];
LABEL_18:
              LODWORD(v4) = ((__int64 (__fastcall *)(_DWORD *, __int64, _QWORD, __int64 *))qword_1C018BDF0)(
                              v6 + 66,
                              v14,
                              (unsigned int)a1[5],
                              v8);
              break;
            }
          }
          else if ( a1[2] == v6[66] && a1[3] == v6[67] )
          {
            v15 = v6[68];
            if ( a1[4] == v15 )
            {
              v14 = v15;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v16);
  }
  if ( (int)v4 >= 0 )
  {
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    GreIncrementDisplaySettingsUniqueness();
    xxxSendNotifyMessage(-1LL, 26LL, 159LL);
    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
  }
  return (unsigned int)v4;
}
