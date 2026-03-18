/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x14008E4D0
 * Callers:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x14008D6A0 (KeQueryTotalCycleTimeThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiScanInterruptObjectList @ 0x140182600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401827D0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182910 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140182A50 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183480 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiIpiInterruptSubDispatch @ 0x140187E80 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x140188090 (KxDispatchInterrupt.c)
 * Callees:
 *     KiEndCounterAccumulation @ 0x14020864C (KiEndCounterAccumulation.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  _QWORD *i; // rcx
  int v21; // eax
  __int64 v22; // [rsp+38h] [rbp+10h]

  v3 = *(_BYTE *)(a2 + 2);
  if ( (v3 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 23504) += *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
    v3 &= ~0x10u;
    *(_QWORD *)(a1 + 23496) = 0LL;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 1976);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 24176);
      v8 = *(_QWORD *)(a1 + 24184);
      if ( v7 && v8 )
      {
        if ( *(_BYTE *)(v8 + 100) )
        {
          v9 = *(_DWORD *)(v8 + 116);
        }
        else
        {
          v9 = *(_DWORD *)(v8 + 72);
          if ( v9 >= *(_DWORD *)(v7 + 368) )
            v9 = *(_DWORD *)(v7 + 368);
        }
      }
      else
      {
        v9 = 100;
      }
      if ( v9 < 0x4B )
        v10 = v9 / 0x19;
      else
        v10 = 3;
      v11 = *(unsigned __int8 *)(a1 + 23858);
      v12 = v10;
      v13 = v11 + 2LL * v10;
      v14 = *(_QWORD *)(v6 + 8 * v13);
      v15 = (_QWORD *)(v6 + 8 * v13);
      v16 = KiTimelineBitmapTime;
      *v15 = a3 + v14;
      v17 = *(_DWORD *)(v6 + 192);
      if ( v16 > v17 )
      {
        LODWORD(v22) = v16;
        if ( v16 - v17 >= 0x20 )
          v21 = 1;
        else
          v21 = (*(_DWORD *)(v6 + 196) << (v16 - v17)) | 1;
        HIDWORD(v22) = v21;
        *(_QWORD *)(v6 + 192) = v22;
      }
      else
      {
        v18 = v17 - v16;
        if ( v18 < 0x20 )
          *(_DWORD *)(v6 + 196) |= 1 << v18;
      }
      if ( (*(_DWORD *)(a2 + 120) & 3) == 2 )
        *(_QWORD *)(v6 + 16 * v12 + 8) += a3;
      if ( *(_QWORD *)(a2 + 1920) )
      {
        *(_QWORD *)(v6 + 8 * (v11 + 16 + 2 * v12)) += a3;
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1920) + 1976LL) + 8 * (v11 + 8 + 2 * v12)),
          a3);
      }
    }
    v3 &= ~0x20u;
  }
  if ( (v3 & 0x3E) != 0 )
  {
    v19 = *(_QWORD *)(a2 + 104);
    if ( v19 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v19); i; i = (_QWORD *)i[51] )
        *i += a3;
    }
    if ( (*(_BYTE *)(a2 + 2) & 8) != 0
      && (*(_QWORD *)(a2 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                           + 136LL) )
    {
      *(_QWORD *)(a1 + 23528) += a3;
    }
    if ( *(_BYTE *)(a2 + 125) )
    {
      if ( (*(_DWORD *)(a2 + 120) & 3) == 2 )
        *(_QWORD *)(a1 + 23544) += a3;
      else
        *(_QWORD *)(a1 + 23536) += a3;
    }
    if ( *(_QWORD *)(a2 + 360) )
      KiEndCounterAccumulation(a2);
  }
}
