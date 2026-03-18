/*
 * XREFs of GreOffsetClipRgn @ 0x1C00DFC54
 * Callers:
 *     xxxInternalPaintDesktop @ 0x1C00DFAEC (xxxInternalPaintDesktop.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  struct _POINTL v9; // [rsp+68h] [rbp+20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v5 = 0;
  if ( v8[0] )
  {
    v9.x = a2;
    v9.y = a3;
    v7 = *(_QWORD *)(v8[0] + 224LL);
    if ( v7 )
      v5 = RGNOBJ::bOffset((RGNOBJ *)&v7, &v9);
    else
      v5 = 1;
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v5;
}
