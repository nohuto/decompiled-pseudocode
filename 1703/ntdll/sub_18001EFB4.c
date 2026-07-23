/*
 * XREFs of sub_18001EFB4 @ 0x18001EFB4
 * Callers:
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     sub_1800096A8 @ 0x1800096A8 (sub_1800096A8.c)
 *     sub_180009F70 @ 0x180009F70 (sub_180009F70.c)
 *     sub_18001E760 @ 0x18001E760 (sub_18001E760.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 *     sub_180020B90 @ 0x180020B90 (sub_180020B90.c)
 *     sub_180072F9C @ 0x180072F9C (sub_180072F9C.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void *__fastcall sub_18001EFB4(PVOID BaseAddress, size_t Size, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  int v5; // r14d
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rbx
  char v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v17; // r8

  v4 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = v4;
  if ( (a4 & 0xC000000) != 0 )
    v5 = 0;
  v9 = a4 & 4;
  if ( (a4 & 4) != 0 )
    LODWORD(v4) = v4 + 1;
  v10 = sub_18001F314(BaseAddress);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = ~*(_BYTE *)(v10 + 26);
  if ( v5 && (int)sub_180072F9C(BaseAddress) < 0 )
  {
    v15 = 0LL;
    goto LABEL_16;
  }
  if ( v9 )
  {
    v17 = 32LL * (unsigned int)v4 + v11 - 32;
    if ( (*(_BYTE *)(v17 + 24) & 2) != 0 )
      sub_180020B90(BaseAddress, v11, v17, 1LL);
  }
  v13 = v11 & 0xFFFFFFFFFFF00000uLL;
  *(_WORD *)(v11 + 6) = ((_WORD)v4 << 12) - Size;
  v14 = (unsigned int)((__int64)(v11 - (v11 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12;
  v11 = 0LL;
  v15 = (void *)(v13 + v14);
  if ( (a4 & 2) != 0 && v12 )
  {
    memset(v15, 0, Size);
LABEL_16:
    if ( v11 )
      sub_18001F198(BaseAddress, v11, 0LL, a4);
  }
  return v15;
}
