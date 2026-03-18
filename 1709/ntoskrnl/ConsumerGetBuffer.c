/*
 * XREFs of ConsumerGetBuffer @ 0x140431F74
 * Callers:
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x14043356C (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerGetBuffer(__int64 a1, unsigned int *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // r8

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
      v8 = *(_DWORD *)(a1 + 32) - v6;
      if ( *a2 < v8 )
        v8 = *a2;
      *a2 = v8;
    }
    v9 = *a2;
    if ( (unsigned int)v9 <= v7 )
      break;
    if ( (a3 & 1) != 0 )
      goto LABEL_20;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v10 = *(_DWORD *)(a1 + 48);
      v11 = *(_DWORD *)(a1 + 40) - v10;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v12 = *(_DWORD *)(a1 + 32) - v10;
        if ( *a2 < v12 )
          v12 = *a2;
        *a2 = v12;
      }
    }
    while ( *a2 > v11 );
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
  if ( !(_DWORD)v9 )
  {
LABEL_20:
    result = 0LL;
    goto LABEL_23;
  }
  v14 = *(_QWORD *)(a1 + 48);
  result = *(_QWORD *)a1 + v14 % *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 48) = v14 + v9;
LABEL_23:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
