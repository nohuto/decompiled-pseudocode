/*
 * XREFs of IsDCCurrentPalette @ 0x1C02961F8
 * Callers:
 *     xxxRealizePalette @ 0x1C01083C0 (xxxRealizePalette.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( *(HPALETTE *)(v5[0] + 88LL) == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v5[0] + 80LL) + 68LL) == 1
      && (v2 = *(unsigned int *)(v5[0] + 88LL),
          v3 = (unsigned __int16)v2 | (*(_DWORD *)(v5[0] + 88LL) >> 8) & 0xFF0000u,
          (_DWORD)v3 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v3, v2) )
    {
      v1 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  return v1;
}
