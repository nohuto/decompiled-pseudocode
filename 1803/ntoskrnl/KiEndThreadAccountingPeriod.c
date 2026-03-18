/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x140060A70
 * Callers:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KiChooseTargetProcessor @ 0x1400FC8B0 (KiChooseTargetProcessor.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KiScanInterruptObjectList @ 0x1401AC250 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401AC420 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401AC560 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401AC6A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401AD0D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401AF5C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 *     KiIpiInterruptSubDispatch @ 0x1401B1AA0 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x1401B1CB0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiEndCounterAccumulation @ 0x14024627C (KiEndCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // r11
  __int64 v5; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  _QWORD *i; // rcx
  int v21; // eax
  char v22; // r11
  __int64 v23; // [rsp+38h] [rbp+10h]

  v3 = *(_BYTE *)(a2 + 2);
  v5 = a2;
  if ( (v3 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 23504) += *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
    v3 &= ~0x10u;
    *(_QWORD *)(a1 + 23496) = 0LL;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 1976);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 24176);
      v9 = *(_QWORD *)(a1 + 24184);
      if ( v8 && v9 )
      {
        if ( *(_BYTE *)(v9 + 100) )
        {
          v10 = *(_DWORD *)(v9 + 116);
        }
        else
        {
          v10 = *(_DWORD *)(v9 + 72);
          if ( v10 >= *(_DWORD *)(v8 + 368) )
            v10 = *(_DWORD *)(v8 + 368);
        }
      }
      else
      {
        v10 = 100;
      }
      if ( v10 < 0x4B )
        v11 = v10 / 0x19;
      else
        v11 = 3;
      v12 = *(unsigned __int8 *)(a1 + 23858);
      v13 = v11;
      v14 = v12 + 2LL * v11;
      v15 = *(_QWORD *)(v7 + 8 * v14);
      a2 = v7 + 8 * v14;
      v16 = KiTimelineBitmapTime;
      *(_QWORD *)a2 = a3 + v15;
      v17 = *(_DWORD *)(v7 + 192);
      if ( v16 > v17 )
      {
        LODWORD(v23) = v16;
        a2 = v16 - v17;
        if ( (unsigned int)a2 >= 0x20 )
          v21 = 1;
        else
          v21 = (*(_DWORD *)(v7 + 196) << (v16 - v17)) | 1;
        HIDWORD(v23) = v21;
        *(_QWORD *)(v7 + 192) = v23;
      }
      else
      {
        v18 = v17 - v16;
        if ( v18 < 0x20 )
          *(_DWORD *)(v7 + 196) |= 1 << v18;
      }
      if ( (*(_DWORD *)(v5 + 120) & 3) == 2 )
      {
        a2 = 2 * v13;
        *(_QWORD *)(v7 + 16 * v13 + 8) += a3;
      }
      if ( *(_QWORD *)(v5 + 1920) )
      {
        *(_QWORD *)(v7 + 8 * (v12 + 16 + 2 * v13)) += a3;
        a2 = *(_QWORD *)(*(_QWORD *)(v5 + 1920) + 1976LL) + 8 * (v12 + 8 + 2 * v13);
        _InterlockedExchangeAdd64((volatile signed __int64 *)a2, a3);
      }
    }
    v3 &= ~0x20u;
  }
  if ( (v3 & 0x40) != 0 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSystemWork(a1, a2);
    v3 = v22 & 0xBF;
  }
  if ( (v3 & 0x3E) != 0 )
  {
    v19 = *(_QWORD *)(v5 + 104);
    if ( v19 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v19); i; i = (_QWORD *)i[51] )
        *i += a3;
    }
    if ( (*(_BYTE *)(v5 + 2) & 8) != 0
      && (*(_QWORD *)(v5 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                           + 136LL) )
    {
      *(_QWORD *)(a1 + 23528) += a3;
    }
    if ( *(_BYTE *)(v5 + 125) )
    {
      if ( (*(_DWORD *)(v5 + 120) & 3) == 2 )
        *(_QWORD *)(a1 + 23544) += a3;
      else
        *(_QWORD *)(a1 + 23536) += a3;
    }
    if ( *(_QWORD *)(v5 + 360) )
      KiEndCounterAccumulation(v5);
  }
}
