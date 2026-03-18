/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x140432074
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140432B24 (PopDecompressHiberBlocks.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x14043356C (PopHiberCheckForDebugBreak.c)
 *     PopHiberPeekRangeTable @ 0x1404339BC (PopHiberPeekRangeTable.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v9; // r13
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned int v12; // esi
  bool v13; // r14
  bool v14; // al
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rax
  unsigned __int64 result; // rax

  v5 = 0LL;
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
      v11 = *(_DWORD *)(a1 + 32) - v9;
      if ( *a2 < v11 )
        v11 = *a2;
      *a2 = v11;
    }
    v12 = *a2;
    v13 = *a2 <= v10;
    v14 = v13;
    if ( *a2 <= v10 && v12 )
    {
      v5 = *(_QWORD *)a1 + v9 % *(unsigned int *)(a1 + 8);
      v15 = PopHiberPeekRangeTable(v5, v12, a5);
      v12 = v15;
      if ( v15 > v10 )
      {
        v14 = 0;
      }
      else
      {
        *a2 = v15;
        v14 = v13;
      }
    }
    if ( v14 )
      break;
    if ( (a3 & 1) != 0 )
      goto LABEL_27;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v16 = *(_DWORD *)(a1 + 48);
      if ( !*(_QWORD *)(a1 + 16) && v12 >= *(_DWORD *)(a1 + 32) - v16 )
        v12 = *(_DWORD *)(a1 + 32) - v16;
    }
    while ( *(_QWORD *)(a1 + 48) == v9 && v12 > *(_DWORD *)(a1 + 40) - v16 );
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
  v17 = *a2;
  if ( (_DWORD)v17 )
  {
    *(_QWORD *)(a1 + 48) += v17;
    goto LABEL_28;
  }
LABEL_27:
  v5 = 0LL;
LABEL_28:
  result = v5;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
