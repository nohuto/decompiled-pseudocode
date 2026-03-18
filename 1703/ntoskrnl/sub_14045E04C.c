/*
 * XREFs of sub_14045E04C @ 0x14045E04C
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x140549AFC (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 *     sub_140549C24 @ 0x140549C24 (sub_140549C24.c)
 */

__int64 __fastcall sub_14045E04C(__int64 a1, _QWORD *a2)
{
  int v4; // esi

  v4 = WbAlloc(0x48uLL);
  if ( v4 >= 0 )
  {
    memset(0LL, 0, 0x48uLL);
    MEMORY[0] = 1LL;
    MEMORY[8] = 0LL;
    MEMORY[0x10] = 0LL;
    MEMORY[0x18] = *(_DWORD *)(a1 + 8);
    MEMORY[0x20] = *(_QWORD *)a1;
    *a2 = 0LL;
  }
  sub_140549C24(0LL);
  return (unsigned int)v4;
}
