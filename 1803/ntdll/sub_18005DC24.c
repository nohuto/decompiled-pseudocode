/*
 * XREFs of sub_18005DC24 @ 0x18005DC24
 * Callers:
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     sub_18001F734 @ 0x18001F734 (sub_18001F734.c)
 *     sub_18005E3B4 @ 0x18005E3B4 (sub_18005E3B4.c)
 *     sub_18005E3F8 @ 0x18005E3F8 (sub_18005E3F8.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 */

__int64 __fastcall sub_18005DC24(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // r13
  unsigned int v7; // ebp
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r11

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = 0;
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = (256 - *(unsigned __int8 *)(a1 + 10)) << *(_BYTE *)(a1 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( v3 > v7 )
      {
        v9 = v7;
        v3 -= v7;
      }
      else
      {
        v9 = v3;
        v3 = 0LL;
      }
      v10 = sub_18005EC0C(a1, v9);
      v11 = v10;
      if ( !v10 )
        break;
      *(_DWORD *)(v10 + 32LL * *(unsigned __int8 *)(a1 + 10)) = -857879331;
      sub_18005E3F8(a1, v10, v9);
      sub_18001F734(a1, v12, 1);
      sub_18005E3B4(a1, v11);
      if ( !--v6 )
        return v5;
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
