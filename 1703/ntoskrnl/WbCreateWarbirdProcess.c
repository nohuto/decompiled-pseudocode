/*
 * XREFs of WbCreateWarbirdProcess @ 0x14045A96C
 * Callers:
 *     WbGetWarbirdProcess @ 0x14053BCA0 (WbGetWarbirdProcess.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     sub_14045AAB0 @ 0x14045AAB0 (sub_14045AAB0.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 */

__int64 __fastcall WbCreateWarbirdProcess(__int64 a1, _QWORD *a2)
{
  int v4; // esi

  v4 = WbAlloc(0xF0uLL);
  if ( v4 >= 0 )
  {
    memset(0LL, 0, 0xF0uLL);
    ++MEMORY[0xE8];
    MEMORY[0] = a1;
    MEMORY[0x38] = 60;
    v4 = 0;
    MEMORY[0x28] = sub_14053BA30;
    MEMORY[8] = 8LL;
    MEMORY[0x10] = 0;
    MEMORY[0x18] = 0LL;
    MEMORY[0x20] = 10;
    MEMORY[0x30] = 0LL;
    MEMORY[0x50] = 0LL;
    MEMORY[0x48] = 64LL;
    MEMORY[0x40] = 64LL;
    MEMORY[0xD8] = sub_14044A460;
    MEMORY[0xB8] = 8LL;
    MEMORY[0xC0] = 0;
    MEMORY[0xC8] = 0LL;
    MEMORY[0xD0] = 10;
    MEMORY[0xE0] = 0LL;
    MEMORY[0x78] = sub_14053BF50;
    MEMORY[0x58] = 8LL;
    MEMORY[0x60] = 0;
    MEMORY[0x68] = 0LL;
    MEMORY[0x70] = 10;
    MEMORY[0x80] = 0LL;
    MEMORY[0xA8] = sub_1404505F0;
    MEMORY[0x88] = 8LL;
    MEMORY[0x90] = 0;
    MEMORY[0x98] = 0LL;
    MEMORY[0xA0] = 10;
    MEMORY[0xB0] = 0LL;
    *a2 = 0LL;
  }
  sub_14045AAB0(0LL);
  return (unsigned int)v4;
}
