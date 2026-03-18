/*
 * XREFs of bInitInAndOut @ 0x1C0231F7C
 * Callers:
 *     ttfdOpenFontContextInternal @ 0x1C02329F4 (ttfdOpenFontContextInternal.c)
 * Callees:
 *     fs_Initialize @ 0x1C02B5C00 (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C02B5E84 (fs_NewSfnt.c)
 *     fs_OpenFonts @ 0x1C02B5F88 (fs_OpenFonts.c)
 */

__int64 __fastcall bInitInAndOut(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)fs_OpenFonts(v1, v1 + 168) )
    return 0LL;
  *(_QWORD *)(v1 + 8) = *(_QWORD *)(a1 + 24) + 408LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  if ( (unsigned int)fs_Initialize(v4, v3) )
    return 0LL;
  *(_QWORD *)(v1 + 80) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(v1 + 96) = a1;
  *(_DWORD *)(v1 + 88) = 1;
  *(_DWORD *)(v1 + 92) = 1;
  *(_WORD *)(v1 + 104) = *(_WORD *)(a1 + 310);
  *(_WORD *)(v1 + 106) = *(_WORD *)(a1 + 312);
  if ( (unsigned int)fs_NewSfnt(v1, v1 + 168) )
    return 0LL;
  result = 1LL;
  v6 = *(_QWORD *)(a1 + 24) + 1576LL;
  *(_QWORD *)(v1 + 32) = v6;
  *(_QWORD *)(v1 + 40) = v6 + *(unsigned int *)(a1 + 292);
  return result;
}
