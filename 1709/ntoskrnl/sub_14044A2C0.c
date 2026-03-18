/*
 * XREFs of sub_14044A2C0 @ 0x14044A2C0
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x14044A64C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     sub_14044A774 @ 0x14044A774 (sub_14044A774.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 */

__int64 __fastcall sub_14044A2C0(__int64 a1, _QWORD *a2)
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
  sub_14044A774(0LL);
  return (unsigned int)v4;
}
