/*
 * XREFs of ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C00B5F88
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C00B5E20 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C027A870 (NtGdiCreateEllipticRgn.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct ERECTL *a2)
{
  __int64 v2; // rcx
  __int128 v3; // xmm0
  __int64 v4; // r10
  int v5; // r8d
  _DWORD *v6; // r9
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // r8d
  EBOX *result; // rax

  ERECTL::vOrder(a2);
  v3 = *(_OWORD *)v2;
  *(_QWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 64) = v3;
  v5 = 16 * *(_DWORD *)(v2 + 8) - 16;
  *(_DWORD *)(v4 + 8) = v5;
  v5 -= 12;
  LODWORD(v2) = 16 * *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v4 + 12) = v2;
  LODWORD(v2) = v2 - 4;
  v7 = 16 * *v6;
  *(_DWORD *)(v4 + 24) = v7;
  v7 -= 4;
  v8 = v6[3];
  *(_DWORD *)(v4 + 12) = v2;
  *(_DWORD *)(v4 + 20) = v2;
  *(_DWORD *)(v4 + 8) = v5;
  *(_DWORD *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 24) = v7;
  *(_DWORD *)(v4 + 16) = v7;
  v9 = 16 * v8 - 28;
  v10 = (v5 - v7 + 1) >> 1;
  *(_DWORD *)(v4 + 28) = v9;
  *(_DWORD *)(v4 + 36) = v9;
  *(_DWORD *)(v4 + 48) = v10;
  *(_QWORD *)(v4 + 52) = 0LL;
  LODWORD(v2) = (*(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 28) + 1) >> 1;
  *(_DWORD *)(v4 + 60) = v2;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 24);
  result = (EBOX *)v4;
  *(_DWORD *)(v4 + 40) += v10;
  *(_DWORD *)(v4 + 44) = *(_DWORD *)(v4 + 44);
  *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 40);
  *(_DWORD *)(v4 + 44) += v2;
  return result;
}
