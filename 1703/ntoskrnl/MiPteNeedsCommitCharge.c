/*
 * XREFs of MiPteNeedsCommitCharge @ 0x14001DF70
 * Callers:
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  bool v5; // zf
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  if ( (v2 & 7) == 2
    && (v2 & 0xF8) != 8
    && (MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 1LL, &v7), v7) )
  {
    v5 = (*(_BYTE *)(v7 + 32) & 0xA) == 10;
  }
  else
  {
    v5 = (*(_BYTE *)(a1 + 48) & 0x28) == 40;
  }
  LOBYTE(v3) = !v5;
  return v3;
}
