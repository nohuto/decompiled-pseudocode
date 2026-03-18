/*
 * XREFs of PopGetIoLocation @ 0x14043346C
 * Callers:
 *     PopHiberReadChecksums @ 0x140433A00 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopGetIoLocation(__int64 *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 result; // rax

  *a3 = 0LL;
  v4 = a1[2];
  if ( a2 < v4 )
  {
    v6 = *a1;
    a1[2] = 0LL;
    a1[1] = v6;
  }
  else if ( a2 < v4 + *(_QWORD *)a1[1] )
  {
    goto LABEL_8;
  }
  v7 = (_QWORD *)a1[1];
  v8 = a1[2];
  while ( a2 >= v8 + *v7 )
  {
    v8 += *v7;
    v7 += 2;
    a1[2] = v8;
    a1[1] = (__int64)v7;
  }
LABEL_8:
  v9 = (_QWORD *)a1[1];
  v10 = a2 - a1[2];
  result = v10 + v9[1];
  *a3 = *v9 - v10;
  return result;
}
