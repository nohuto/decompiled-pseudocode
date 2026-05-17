/*
 * XREFs of sub_18002ADD8 @ 0x18002ADD8
 * Callers:
 *     sub_18002AD5C @ 0x18002AD5C (sub_18002AD5C.c)
 * Callees:
 *     sub_18005C30C @ 0x18005C30C (sub_18005C30C.c)
 */

void __fastcall sub_18002ADD8(__int64 a1, __int64 a2)
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
    sub_18005C30C(a1, (_DWORD)v3, 0, a2, v5, *(_QWORD *)(a2 + 40));
  }
}
