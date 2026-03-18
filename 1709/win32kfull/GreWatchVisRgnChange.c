/*
 * XREFs of GreWatchVisRgnChange @ 0x1C027A824
 * Callers:
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall GreWatchVisRgnChange(HDC a1, int a2, int a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v4, a1, a3);
  if ( v4[0] )
  {
    if ( a2 )
      *(_DWORD *)(v4[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v4[0] + 36LL) &= ~0x20000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v4);
  }
}
