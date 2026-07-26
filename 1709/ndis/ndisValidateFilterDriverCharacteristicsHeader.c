/*
 * XREFs of ndisValidateFilterDriverCharacteristicsHeader @ 0x1C00C7F48
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_SF_DDDDDDDD @ 0x1C0050100 (WPP_SF_DDDDDDDD.c)
 *     WPP_SF_DDZ @ 0x1C0050194 (WPP_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(__int64 a1, _DWORD *a2)
{
  int v2; // ebx
  const WCHAR *v3; // rax
  int v4; // edi
  unsigned int v5; // r9d
  int v7; // edx
  unsigned int v8; // r8d
  unsigned __int16 v10; // ax

  v2 = *(unsigned __int8 *)(a1 + 4);
  v3 = (const WCHAR *)&unk_1C0080D40;
  v4 = *(unsigned __int8 *)(a1 + 5);
  v5 = 0;
  *a2 = 0;
  while ( (v4 | (v2 << 16)) != *(_DWORD *)v3 )
  {
    v3 += 4;
    if ( v3 == L"DefaultFilterSettings" )
      goto LABEL_6;
  }
  v5 = *((unsigned __int8 *)v3 + 5);
LABEL_6:
  v7 = 224;
  switch ( v5 )
  {
    case 1u:
      v10 = *(_WORD *)(a1 + 2);
      if ( v10 < 0xE0u )
        v7 = v10;
      *a2 = v7;
      return 0LL;
    case 2u:
      v8 = 224;
      break;
    case 3u:
      v8 = 240;
      break;
    default:
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_DDZ(0x22u, 224LL, v2, v4);
      return 3221291012LL;
  }
  if ( *(_BYTE *)a1 == 0x8B && *(unsigned __int16 *)(a1 + 2) >= v8 && *(unsigned __int8 *)(a1 + 1) >= v5 )
  {
    *a2 = v8;
    return 0LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_DDDDDDDD(0x23u, *(unsigned __int8 *)(a1 + 1), 139, v5);
  return 3221291013LL;
}
