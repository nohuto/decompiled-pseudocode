/*
 * XREFs of NdisFGetOptionalSwitchHandlers @ 0x1C0059760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisFGetOptionalSwitchHandlers(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  _QWORD *v5; // rcx
  char v6; // r9
  bool v7; // cf

  result = 3221225659LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD **)(v4 + 3784);
  if ( *(_BYTE *)a3 != 0xB8 )
    return 3221225485LL;
  v6 = *(_BYTE *)(a3 + 1);
  if ( v6 == 2 && *(_WORD *)(a3 + 2) < 0xF0u )
    return 3221225485LL;
  if ( v6 == 1 && *(_WORD *)(a3 + 2) < 0x70u )
    return 3221225485LL;
  if ( v5[114] )
  {
    *a2 = *(_QWORD *)(v4 + 24);
    v7 = *(_BYTE *)(a3 + 1) < 2u;
    *(_QWORD *)(a3 + 8) = v5[114];
    *(_QWORD *)(a3 + 16) = v5[115];
    *(_QWORD *)(a3 + 24) = v5[117];
    *(_QWORD *)(a3 + 32) = v5[116];
    *(_QWORD *)(a3 + 40) = v5[118];
    *(_QWORD *)(a3 + 48) = v5[119];
    *(_QWORD *)(a3 + 56) = v5[120];
    *(_QWORD *)(a3 + 64) = v5[121];
    *(_QWORD *)(a3 + 72) = v5[122];
    *(_QWORD *)(a3 + 80) = v5[123];
    *(_QWORD *)(a3 + 88) = v5[124];
    *(_QWORD *)(a3 + 96) = v5[125];
    *(_QWORD *)(a3 + 104) = v5[126];
    *(_QWORD *)(a3 + 112) = v5[127];
    *(_QWORD *)(a3 + 120) = v5[128];
    if ( !v7 )
    {
      *(_QWORD *)(a3 + 128) = v5[129];
      *(_QWORD *)(a3 + 136) = v5[130];
      *(_QWORD *)(a3 + 144) = v5[131];
      *(_QWORD *)(a3 + 152) = v5[132];
      *(_QWORD *)(a3 + 160) = v5[133];
      *(_QWORD *)(a3 + 168) = v5[134];
      *(_QWORD *)(a3 + 176) = v5[135];
      *(_QWORD *)(a3 + 184) = v5[136];
      *(_QWORD *)(a3 + 192) = v5[137];
      *(_QWORD *)(a3 + 200) = v5[138];
      *(_QWORD *)(a3 + 208) = v5[139];
      *(_QWORD *)(a3 + 216) = v5[140];
      *(_QWORD *)(a3 + 224) = v5[141];
      *(_QWORD *)(a3 + 232) = v5[142];
    }
    return 0LL;
  }
  return result;
}
