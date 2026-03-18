/*
 * XREFs of GreWatchVisRgnChange @ 0x1C027DD18
 * Callers:
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( v3[0] )
  {
    if ( a2 )
      *(_DWORD *)(v3[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v3[0] + 36LL) &= ~0x20000u;
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v3);
}
