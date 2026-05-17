/*
 * XREFs of sub_18001C740 @ 0x18001C740
 * Callers:
 *     sub_18001C6C4 @ 0x18001C6C4 (sub_18001C6C4.c)
 * Callees:
 *     sub_18002F7E0 @ 0x18002F7E0 (sub_18002F7E0.c)
 */

void __fastcall sub_18001C740(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 *v6; // rax

  v3 = *(__int64 **)(a1 + 320);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 + 2);
    v5 = *(_QWORD *)(a2 + 40) >> 12;
    while ( v5 >= v4 )
    {
      v6 = (__int64 *)*v3;
      if ( !*v3 )
      {
        LODWORD(v5) = *((_DWORD *)v3 + 2) - 1;
        break;
      }
      v3 = (__int64 *)*v3;
      v4 = *((unsigned int *)v6 + 2);
    }
    sub_18002F7E0(a1, (_DWORD)v3, 0, a2, v5, *(_QWORD *)(a2 + 40));
  }
}
