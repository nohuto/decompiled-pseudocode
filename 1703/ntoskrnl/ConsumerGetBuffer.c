/*
 * XREFs of ConsumerGetBuffer @ 0x140408278
 * Callers:
 *     PopRequestWrite @ 0x140406CAC (PopRequestWrite.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140408000 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerGetBuffer(__int64 a1, unsigned int *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // edx
  unsigned __int64 result; // rax
  __int64 v9; // r9
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx

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
    v6 = *(_DWORD *)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 40) - v6;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v10 = *(_DWORD *)(a1 + 32) - v6;
      if ( *a2 < v10 )
        v10 = *a2;
      *a2 = v10;
    }
    if ( *a2 <= v7 || (a3 & 1) != 0 )
      break;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v11 = *(_DWORD *)(a1 + 48);
      v12 = *(_DWORD *)(a1 + 40) - v11;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v13 = *(_DWORD *)(a1 + 32) - v11;
        if ( *a2 < v13 )
          v13 = *a2;
        *a2 = v13;
      }
    }
    while ( *a2 > v12 );
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
  if ( *a2 <= v7 && (v9 = *a2, (_DWORD)v9) )
  {
    result = *(_QWORD *)a1 + *(_QWORD *)(a1 + 48) % (unsigned __int64)*(unsigned int *)(a1 + 8);
    *(_QWORD *)(a1 + 48) += v9;
  }
  else
  {
    result = 0LL;
  }
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
