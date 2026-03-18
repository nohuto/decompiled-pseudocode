/*
 * XREFs of GreSetColorAdjustment @ 0x1C027A450
 * Callers:
 *     NtGdiSetColorAdjustment @ 0x1C028B590 (NtGdiSetColorAdjustment.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    v4 = 1;
    *(_OWORD *)(v6[0] + 240LL) = *(_OWORD *)a2;
    *(_QWORD *)(v3 + 256) = *(_QWORD *)(a2 + 16);
    *(_WORD *)(v3 + 242) &= 3u;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v4;
}
