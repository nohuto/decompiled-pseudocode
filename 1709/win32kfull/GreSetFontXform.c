/*
 * XREFs of GreSetFontXform @ 0x1C0133994
 * Callers:
 *     NtGdiSetFontXform @ 0x1C0133920 (NtGdiSetFontXform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetFontXform(HDC a1, float a2, float a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    *(float *)(v6[0] + 468LL) = a2;
    *(float *)(v3 + 472) = a3;
    v4 = 1;
    *(_DWORD *)(v3 + 264) |= 1u;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v4;
}
