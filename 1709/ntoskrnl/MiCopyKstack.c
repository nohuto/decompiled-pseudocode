/*
 * XREFs of MiCopyKstack @ 0x1400D0608
 * Callers:
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 PteShadow; // rax
  char v7; // cl
  __int64 result; // rax

  v4 = (a1 + 0x58000000000LL) / 48;
  v5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPage(a3 << 25 >> 16, (__int64)(v5 << 25) >> 16);
  PteShadow = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v5, *(_QWORD *)v5);
  MiWriteValidPteNewPage((unsigned __int64 *)v5, PteShadow ^ (PteShadow ^ (v4 << 12)) & 0xFFFFFFFFF000LL);
  v7 = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  result = (__int64)(v5 << 25) >> 16;
  *(_BYTE *)(a2 + 34) = v7;
  return result;
}
