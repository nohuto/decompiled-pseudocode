/*
 * XREFs of GreGetBrushOrg @ 0x1C011CB2C
 * Callers:
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C0216AA0 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    *a2 = *(_QWORD *)(v6[0] + 136LL);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v4;
}
