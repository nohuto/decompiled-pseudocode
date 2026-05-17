/*
 * XREFs of sub_180059528 @ 0x180059528
 * Callers:
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     sub_180059528 @ 0x180059528 (sub_180059528.c)
 * Callees:
 *     sub_180059528 @ 0x180059528 (sub_180059528.c)
 */

void __fastcall sub_180059528(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  if ( *((_DWORD *)a1 + 6) != -1 )
  {
    v1 = *a1;
    if ( (*(_BYTE *)(*a1 - 56) & 0x20) == 0 )
    {
      *((_DWORD *)a1 + 6) = -1;
      *(_WORD *)(v1 - 52) = -1;
      v2 = (_QWORD *)a1[5];
      if ( v2 )
      {
        v3 = (_QWORD *)a1[5];
        do
        {
          v3 = (_QWORD *)*v3;
          sub_180059528(v3[1]);
        }
        while ( v3 != v2 );
      }
    }
  }
}
