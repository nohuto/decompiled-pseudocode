/*
 * XREFs of RtlReadThreadProfilingData @ 0x1800CF3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlReadThreadProfilingData(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  int v8; // r14d
  unsigned int i; // esi
  __int64 v10; // r10
  unsigned __int64 v11; // rax

  v3 = 0;
  if ( *(_WORD *)a3 != 288 )
    return 3221225990LL;
  if ( *(_BYTE *)(a3 + 2) != 1 )
    return 3221225713LL;
  if ( (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  do
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = __rdtsc();
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 56)
                         - *(_QWORD *)(a1 + 48)
                         + (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6);
    if ( (a2 & 1) != 0 )
    {
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) )
        *(_QWORD *)(a3 + 8) |= _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
    }
    if ( (a2 & 2) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      if ( v7 )
      {
        v8 = 1;
        for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
        {
          if ( (v8 & (unsigned int)v7) != 0 )
          {
            v10 = 2LL * i;
            *(_DWORD *)(a3 + 8 * v10 + 36) = 0;
            *(_DWORD *)(a3 + 16 * (i + 2LL)) = 0;
            v11 = __readpmc(*(_DWORD *)(a1 + 24LL * i + 68));
            *(_QWORD *)(a3 + 8 * v10 + 40) = *(_QWORD *)(a1 + 24LL * i + 80)
                                           + (unsigned int)(v11 - *(_DWORD *)(a1 + 24LL * i + 72));
          }
          v8 *= 2;
        }
      }
      *(_BYTE *)(a3 + 3) = *(_BYTE *)(a1 + 12);
    }
    ++v3;
  }
  while ( v5 != *(_QWORD *)(a1 + 16) );
  *(_DWORD *)(a3 + 24) = v3 - 1;
  return 0LL;
}
