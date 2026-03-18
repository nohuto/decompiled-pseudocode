/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1400D2720
 * Callers:
 *     KiMoveScbThreadsToNewReadylist @ 0x14000CFA8 (KiMoveScbThreadsToNewReadylist.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14008AB70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400AA5D0 (KiDeferGroupSchedulingPreemption.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400D2520 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiAddThreadToReadyQueue @ 0x14020A110 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, signed int a3, int a4, char a5)
{
  __int64 v9; // rcx
  __int64 v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  int v21; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a2 + 120) & 0x2000) != 0
    && (v9 = *(_QWORD *)(a1 + 24896)) != 0
    && (v9 & *(_QWORD *)(a2 + 576)) == v9
    && !a5 )
  {
    v10 = *(_QWORD *)(a1 + 24904);
    v11 = (_QWORD *)(v10 + 16 * (a3 + 1LL));
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(_QWORD *)v10 );
    }
    v12 = (_QWORD *)(a2 + 216);
    if ( a4 )
    {
      v13 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(a2 + 224) = v11;
      *(_QWORD *)(v13 + 8) = v12;
      *v11 = v12;
      _bittestandreset((signed __int32 *)(a1 + 22812), a3);
    }
    else
    {
      v19 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v19 != v11 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(a2 + 224) = v19;
      *v19 = v12;
      v11[1] = v12;
    }
    *(_DWORD *)(v10 + 8) |= 1 << a3;
    *(_DWORD *)(a2 + 536) |= 0x80000000;
    ++*(_DWORD *)(v10 + 608);
    result = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 2024) = result;
    *(_QWORD *)(v10 + 616) += result;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  }
  else
  {
    v15 = (_QWORD *)(a2 + 216);
    v16 = (_QWORD *)(a1 + 16 * (a3 + 1432LL));
    if ( a4 )
    {
      v17 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        __fastfail(3u);
      *v15 = v17;
      v15[1] = v16;
      *(_QWORD *)(v17 + 8) = v15;
      *v16 = v15;
      _bittestandset((signed __int32 *)(a1 + 22812), a3);
    }
    else
    {
      v20 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v20 != v16 )
        __fastfail(3u);
      *v15 = v16;
      v15[1] = v20;
      *v20 = v15;
      v16[1] = v15;
    }
    v18 = *(_DWORD *)(a1 + 22808);
    ++*(_DWORD *)(a1 + 23476);
    *(_DWORD *)(a1 + 22808) = v18 | (1 << a3);
    result = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 2024) = result;
    *(_QWORD *)(a1 + 23480) += result;
  }
  return result;
}
