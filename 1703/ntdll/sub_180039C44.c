/*
 * XREFs of sub_180039C44 @ 0x180039C44
 * Callers:
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 * Callees:
 *     sub_1800141D4 @ 0x1800141D4 (sub_1800141D4.c)
 */

void __fastcall sub_180039C44(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 152);
  v2 = *(_QWORD **)(v1 + 48);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v1 + 48);
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = (_DWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF8uLL);
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 92))-- == 1 )
        {
          v4[14] = 4;
          sub_1800141D4(v5);
        }
      }
    }
    while ( v3 != v2 );
  }
}
