/*
 * XREFs of KiExitThreadWait @ 0x140017FB0
 * Callers:
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140205B3C (KiSatisfyThreadWait.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KiExitThreadWait(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v3; // r14
  __int64 v4; // rbx
  unsigned __int8 result; // al
  __int64 v6; // rbp
  __int64 v7; // rbp
  bool v8; // zf
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+24h] [rbp-34h] BYREF
  _QWORD v15[6]; // [rsp+28h] [rbp-30h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a2 + 390);
  v4 = a1;
  result = *(_BYTE *)(a2 + 112);
  if ( (result & 0x38) != 0 )
  {
    if ( (result & 0x18) != 0 )
    {
      if ( (result & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      v15[0] = 0LL;
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(_QWORD *)(v4 + 48) );
      }
      if ( !*(_QWORD *)(v4 + 16) )
        KiSelectNextThread(v4, v15);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      result = KiReadyDeferredReadyList(v4, v15);
      if ( v3 < 2u )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( !*(_QWORD *)(v4 + 16) )
        {
LABEL_7:
          if ( (*(_DWORD *)(v6 + 116) & 0x40) == 0 )
            goto LABEL_3;
LABEL_8:
          __writecr8(1uLL);
          *(_DWORD *)(v6 + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
          goto LABEL_3;
        }
        KiAbProcessContextSwitch(*(_QWORD *)(v4 + 8), 0LL);
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v17);
          while ( *(_QWORD *)(v4 + 48) );
        }
LABEL_20:
        v9 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 16) = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v4, v6, 0LL);
        _enable();
        *(_QWORD *)(v4 + 8) = v9;
        if ( *(_BYTE *)(v9 + 388) == 1 )
          *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v9 + 388) = 2;
        *(_BYTE *)(v6 + 643) = 32;
        *(_BYTE *)(v6 + 390) = v3;
        KiQueueReadyThread(v4, v6);
        LOBYTE(v10) = v3;
        if ( !(unsigned __int8)KiSwapContext(v6, v9, v10) )
          goto LABEL_3;
        goto LABEL_8;
      }
      if ( *(_QWORD *)(v4 + 16) )
      {
        result = *(_BYTE *)(v4 + 11882);
        if ( !result )
        {
          a1 = v4;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) )
      {
        KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v13);
          while ( *(_QWORD *)(v4 + 48) );
        }
        v11 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 16) = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v4, v7, 0LL);
        _enable();
        *(_QWORD *)(v4 + 8) = v11;
        if ( *(_BYTE *)(v11 + 388) == 1 )
          *(_DWORD *)(v11 + 132) = *(_DWORD *)(v11 + 132) - *(_DWORD *)(v11 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v11 + 388) = 2;
        *(_BYTE *)(v7 + 643) = 32;
        *(_BYTE *)(v7 + 390) = 1;
        KiQueueReadyThread(v4, v7);
        LOBYTE(v12) = 1;
        v8 = (unsigned __int8)KiSwapContext(v7, v11, v12) == 0;
      }
      else
      {
        v8 = (*(_DWORD *)(v7 + 116) & 0x40) == 0;
      }
      if ( !v8 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(v7 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      __writecr8(1uLL);
      result = KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    if ( !a3 )
    {
LABEL_3:
      result = v3;
      __writecr8(v3);
      return result;
    }
    if ( v3 < 2u )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_7;
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( *(_QWORD *)(v4 + 48) );
      }
      goto LABEL_20;
    }
    if ( *(_QWORD *)(a1 + 16) )
    {
      result = *(_BYTE *)(a1 + 11882);
      if ( !result )
      {
LABEL_24:
        LOBYTE(a2) = 2;
        return KiRequestSoftwareInterrupt(a1, a2);
      }
    }
  }
  return result;
}
