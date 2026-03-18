/*
 * XREFs of IsDCCurrentPalette @ 0x1C02928AC
 * Callers:
 *     xxxRealizePalette @ 0x1C010EC10 (xxxRealizePalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    if ( *(HPALETTE *)(v4[0] + 88LL) == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v4[0] + 80LL) + 68LL) == 1
      && (v2 = (unsigned __int16)*(_DWORD *)(v4[0] + 88LL) | (*(_DWORD *)(v4[0] + 88LL) >> 8) & 0xFF0000u,
          (_DWORD)v2 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v2) )
    {
      v1 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  }
  return v1;
}
