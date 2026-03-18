/*
 * XREFs of fsg_InitializeGlyphData @ 0x1C02C7E0C
 * Callers:
 *     fsg_CreateGlyphData @ 0x1C02C6CA0 (fsg_CreateGlyphData.c)
 *     fsg_ExecuteGlyph @ 0x1C02C7254 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_InitializeGlyphData(__int64 a1, __int64 a2, __int16 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  *(_WORD *)(a1 + 60) = a3;
  *(_OWORD *)(a1 + 96) = xmmword_1C02F4558;
  *(_WORD *)a1 = 17479;
  *(_OWORD *)(a1 + 112) = xmmword_1C02F4568;
  *(_DWORD *)(a1 + 128) = 0x10000;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 56) = 3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_WORD *)(a1 + 78) = a4;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 62) = 2147450879;
  *(_DWORD *)(a1 + 66) = -2147450880;
  *(_DWORD *)(a1 + 160) = 0xFFFF;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_WORD *)(a1 + 70) = 0;
  *(_WORD *)(a1 + 74) = 0;
  *(_QWORD *)(a1 + 80) = 2LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  result = a4;
  v5 = 112LL * a4 + *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 176) = v5;
  *(_WORD *)(v5 + 80) = 0;
  *(_OWORD *)(a1 + 184) = xmmword_1C02F4558;
  *(_DWORD *)(a1 + 220) = 1;
  *(_OWORD *)(a1 + 200) = xmmword_1C02F4568;
  *(_DWORD *)(a1 + 216) = 0x10000;
  return result;
}
