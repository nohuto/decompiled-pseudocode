/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1400A8C4C
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x14003AD30 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400A8ACC (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiAddThreadToReadyQueue @ 0x140247D94 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, signed int a3, int a4, char a5)
{
  int v5; // eax
  __int64 v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a2 + 120);
  v8 = a2;
  if ( (v5 & 0x400000) != 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 1512) + 26LL) = 1;
    v5 = *(_DWORD *)(a2 + 120);
  }
  v10 = *(_QWORD *)(a1 + 24896);
  if ( (v5 & 0x2000) != 0 && v10 && (v10 & *(_QWORD *)(a2 + 576)) == v10 && !a5 )
  {
    v11 = *(_QWORD *)(a1 + 24904);
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = (_QWORD *)(v11 + 16 * (a3 + 1LL));
    v24 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)v11 );
    }
    v14 = (_QWORD *)(v8 + 216);
    if ( a4 )
    {
      v15 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(v8 + 224) = v13;
      *(_QWORD *)(v15 + 8) = v14;
      *v13 = v14;
      _bittestandreset((signed __int32 *)(a1 + 22812), a3);
    }
    else
    {
      v22 = (_QWORD *)v13[1];
      if ( (_QWORD *)*v22 != v13 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v8 + 224) = v22;
      *v22 = v14;
      v13[1] = v14;
    }
    *(_DWORD *)(v11 + 8) |= 1 << a3;
    *(_DWORD *)(v8 + 536) |= 0x80000000;
    ++*(_DWORD *)(v11 + 608);
    v16 = *(unsigned int *)(v8 + 84);
    *(_DWORD *)(v8 + 2024) = v16;
    *(_QWORD *)(v11 + 616) += v16;
    _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    return KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    v18 = (_QWORD *)(a2 + 216);
    v19 = (_QWORD *)(a1 + 16 * (a3 + 1432LL));
    if ( a4 )
    {
      v20 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 )
        __fastfail(3u);
      *v18 = v20;
      v18[1] = v19;
      *(_QWORD *)(v20 + 8) = v18;
      *v19 = v18;
      _bittestandset((signed __int32 *)(a1 + 22812), a3);
    }
    else
    {
      v23 = (_QWORD *)v19[1];
      if ( (_QWORD *)*v23 != v19 )
        __fastfail(3u);
      *v18 = v19;
      v18[1] = v23;
      *v23 = v18;
      v19[1] = v18;
    }
    v21 = *(_DWORD *)(a1 + 22808);
    ++*(_DWORD *)(a1 + 23476);
    *(_DWORD *)(a1 + 22808) = v21 | (1 << a3);
    result = *(unsigned int *)(v8 + 84);
    *(_DWORD *)(v8 + 2024) = result;
    *(_QWORD *)(a1 + 23480) += result;
  }
  return result;
}
