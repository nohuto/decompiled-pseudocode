/*
 * XREFs of sub_180007F08 @ 0x180007F08
 * Callers:
 *     sub_18000853C @ 0x18000853C (sub_18000853C.c)
 * Callees:
 *     sub_18001EEF8 @ 0x18001EEF8 (sub_18001EEF8.c)
 */

unsigned __int64 __fastcall sub_180007F08(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // r10d
  __int64 v6; // r9
  __int64 v7; // r11
  unsigned __int64 result; // rax

  v4 = sub_18001EEF8(a2 + 64, 254LL, a3, a2);
  *(_WORD *)(a1 + 18) = 2;
  v5 = (v4 + 2) << 12;
  *(_QWORD *)(a1 + 8) = 0x100000LL;
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 28) = 0x100000 - v5;
  *(_BYTE *)(a1 + 17) = 0;
  *(_DWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = (v7 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v7 - (v7 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  result = ((v7 + 8096) & 0xFFFFFFFFFFF00000uLL)
         + ((unsigned int)((__int64)(v7 + 8096 - ((v7 + 8096) & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
