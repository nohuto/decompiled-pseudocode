/*
 * XREFs of PopGetIoLocation @ 0x140474780
 * Callers:
 *     PopWriteHiberPages @ 0x140473A24 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 *     PopHiberReadChecksums @ 0x140486128 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1404865F4 (PopRequestRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetIoLocation(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // r10
  _QWORD *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v10; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx

  *a3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 8);
  if ( a2 < v4 || (v6 = *v5, a2 >= *v5 + v4) )
  {
    v10 = *(_QWORD **)(a1 + 8);
    v5 = v10;
    v11 = *(_QWORD *)(a1 + 16);
    if ( a2 < v4 )
    {
      v5 = *(_QWORD **)a1;
      v11 = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      v10 = v5;
      *(_QWORD *)(a1 + 8) = v5;
      v4 = 0LL;
    }
    v6 = *v5;
    v12 = v4;
    v4 = v11;
    if ( a2 >= *v5 + v11 )
    {
      v6 = *v10;
      v4 = v12;
      do
      {
        v4 += v6;
        v5 = v10 + 2;
        *(_QWORD *)(a1 + 16) = v4;
        v10 = v5;
        *(_QWORD *)(a1 + 8) = v5;
        v6 = *v5;
      }
      while ( a2 >= v4 + *v5 );
    }
  }
  v7 = v5[1];
  v8 = a2 - v4;
  *a3 = v6 - v8;
  return v8 + v7;
}
