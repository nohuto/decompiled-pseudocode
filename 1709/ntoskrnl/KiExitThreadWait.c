/*
 * XREFs of KiExitThreadWait @ 0x14011B140
 * Callers:
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14011B0BC (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x14020BCB4 (KiSatisfyThreadWait.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

void __fastcall KiExitThreadWait(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int8 v3; // r14
  __int64 v4; // rbx
  char v5; // al
  __int64 v6; // rbp
  __int64 v7; // rbp
  bool v8; // zf
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v17[6]; // [rsp+28h] [rbp-30h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a2 + 390);
  v4 = a1;
  v5 = *(_BYTE *)(a2 + 112);
  if ( (v5 & 0x38) != 0 )
  {
    if ( (v5 & 0x18) != 0 )
    {
      if ( (v5 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      v17[0] = 0LL;
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(_QWORD *)(v4 + 48) );
      }
      if ( !*(_QWORD *)(v4 + 16) )
        KiSelectNextThread(v4, (unsigned __int64 *)v17, a3);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      KiReadyDeferredReadyList(v4, v17, (__int64)a3);
      if ( v3 < 2u )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( !*(_QWORD *)(v4 + 16) )
        {
LABEL_5:
          if ( (*(_DWORD *)(v6 + 116) & 0x40) == 0 )
            goto LABEL_6;
LABEL_24:
          __writecr8(1uLL);
          *(_DWORD *)(v6 + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
          goto LABEL_6;
        }
        KiAbProcessContextSwitch(*(_QWORD *)(v4 + 8), 0LL);
        v19 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v19);
          while ( *(_QWORD *)(v4 + 48) );
        }
LABEL_19:
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
        KiQueueReadyThread(v4, v6, v10);
        LOBYTE(v11) = v3;
        if ( !(unsigned __int8)KiSwapContext(v6, v9, v11) )
          goto LABEL_6;
        goto LABEL_24;
      }
      if ( *(_QWORD *)(v4 + 16) && !*(_BYTE *)(v4 + 11882) )
      {
        a1 = v4;
        goto LABEL_23;
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) )
      {
        KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
        v15 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v15);
          while ( *(_QWORD *)(v4 + 48) );
        }
        v12 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 16) = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v4, v7, 0LL);
        _enable();
        *(_QWORD *)(v4 + 8) = v12;
        if ( *(_BYTE *)(v12 + 388) == 1 )
          *(_DWORD *)(v12 + 132) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v12 + 388) = 2;
        *(_BYTE *)(v7 + 643) = 32;
        *(_BYTE *)(v7 + 390) = 1;
        KiQueueReadyThread(v4, v7, v13);
        LOBYTE(v14) = 1;
        v8 = (unsigned __int8)KiSwapContext(v7, v12, v14) == 0;
      }
      else
      {
        v8 = (*(_DWORD *)(v7 + 116) & 0x40) == 0;
      }
      if ( !v8 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(v7 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    if ( !(_BYTE)a3 )
    {
LABEL_6:
      __writecr8(v3);
      return;
    }
    if ( v3 < 2u )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_5;
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(_QWORD *)(v4 + 48) );
      }
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11882) )
LABEL_23:
      KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  }
}
