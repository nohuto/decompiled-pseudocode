/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x140407A10
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14040749C (PopDecompressHiberBlocks.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140137A34 (KdCheckForDebugBreak.c)
 *     PopHiberPeekRangeTable @ 0x140407458 (PopHiberPeekRangeTable.c)
 *     PopHiberCheckForDebugBreak @ 0x140408000 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v9; // rbp
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 result; // rax
  unsigned int v15; // ecx
  int v16; // edx

  v6 = 0LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *(_DWORD *)(a1 + 40) - v9;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v15 = *(_DWORD *)(a1 + 32) - v9;
      if ( *a2 < v15 )
        v15 = *a2;
      *a2 = v15;
    }
    v11 = *a2;
    if ( *a2 <= v10 )
    {
      if ( !v11 )
        goto LABEL_7;
      v6 = *(_QWORD *)a1 + v9 % *(unsigned int *)(a1 + 8);
      v12 = PopHiberPeekRangeTable(*(_DWORD *)a1 + (unsigned int)(v9 % *(unsigned int *)(a1 + 8)), v11, a5);
      v11 = v12;
      if ( v12 <= v10 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_11;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      if ( !KeGetCurrentPrcb()->Number && (++PopDebugCount & 0x3F) == 0 )
      {
        KdCheckForDebugBreak();
        KeQueryPerformanceCounter(0LL);
      }
      v16 = *(_DWORD *)(a1 + 48);
      if ( !*(_QWORD *)(a1 + 16) && v11 >= *(_DWORD *)(a1 + 32) - v16 )
        v11 = *(_DWORD *)(a1 + 32) - v16;
    }
    while ( v11 > *(_DWORD *)(a1 + 40) - v16 && *(_QWORD *)(a1 + 48) == v9 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v12;
LABEL_7:
  v13 = *a2;
  if ( (_DWORD)v13 )
  {
    *(_QWORD *)(a1 + 48) += v13;
    result = v6;
    goto LABEL_9;
  }
LABEL_11:
  result = 0LL;
LABEL_9:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
