/*
 * XREFs of ProducerGetBuffer @ 0x140407F0C
 * Callers:
 *     PopCountDataAsProduced @ 0x140406A00 (PopCountDataAsProduced.c)
 *     PopRequestRead @ 0x140407B98 (PopRequestRead.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140408000 (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ProducerGetBuffer(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx

  v4 = a3;
  v6 = (unsigned int)a2;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(a1, a2);
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v8 = (unsigned int)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 32));
    if ( (unsigned int)v6 <= (unsigned int)v8 )
      break;
    if ( (a4 & 1) != 0 )
    {
      result = 0LL;
      goto LABEL_5;
    }
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(v8, a2);
      v8 = (unsigned int)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 32));
    }
    while ( (unsigned int)v6 > (unsigned int)v8 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak(v8, a2);
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 32) = v6 + v10;
  result = *(_QWORD *)a1 + (unsigned int)(v10 % v11);
  *(_QWORD *)(a1 + 16) -= v4;
LABEL_5:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
