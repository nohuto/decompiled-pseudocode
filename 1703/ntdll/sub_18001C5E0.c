/*
 * XREFs of sub_18001C5E0 @ 0x18001C5E0
 * Callers:
 *     sub_18001C540 @ 0x18001C540 (sub_18001C540.c)
 * Callees:
 *     sub_18000E614 @ 0x18000E614 (sub_18000E614.c)
 */

void __fastcall sub_18001C5E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 320);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 8);
    v5 = *(_QWORD *)(a2 + 40) >> 12;
    while ( v5 >= v4 )
    {
      v6 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
      {
        LODWORD(v5) = *(_DWORD *)(v3 + 8) - 1;
        break;
      }
      v3 = *(_QWORD *)v3;
      v4 = *(unsigned int *)(v6 + 8);
    }
    sub_18000E614(a1, v3, 0, a2, v5, *(_QWORD *)(a2 + 40));
  }
}
