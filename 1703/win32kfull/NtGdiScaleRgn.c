/*
 * XREFs of NtGdiScaleRgn @ 0x1C028E870
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 1;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 1);
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v6[0] && v5[0] )
  {
    if ( (*(_DWORD *)(v5[0] + 536LL) & 3) == 1 )
      RGNOBJ::vScale(v6, *(_QWORD *)(v5[0] + 540LL));
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  }
  else
  {
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
    return 0;
  }
  return v3;
}
