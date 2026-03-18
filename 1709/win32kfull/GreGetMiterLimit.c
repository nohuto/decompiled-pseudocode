/*
 * XREFs of GreGetMiterLimit @ 0x1C013B7C4
 * Callers:
 *     NtGdiGetMiterLimit @ 0x1C013B770 (NtGdiGetMiterLimit.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetMiterLimit(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    *a2 = *(_DWORD *)(v5[0] + 200LL);
    v3 = 1;
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v3;
}
