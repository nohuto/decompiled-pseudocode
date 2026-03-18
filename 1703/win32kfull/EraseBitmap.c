/*
 * XREFs of EraseBitmap @ 0x1C011733C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall EraseBitmap(HBRUSH a1)
{
  __int64 v2; // rbx
  int v4[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v4, 0, 0x20uLL);
  GreExtGetObjectW(a1, 32LL, (unsigned __int16 *)v4);
  v2 = GreSelectBitmap(*(_QWORD *)ghdcMem, a1);
  NtGdiPatBlt(*(HDC *)ghdcMem, 0, 0, v4[1], v4[2], 66);
  return GreSelectBitmap(*(_QWORD *)ghdcMem, v2);
}
