/*
 * XREFs of GreGetMiterLimit @ 0x1C0136264
 * Callers:
 *     NtGdiGetMiterLimit @ 0x1C0136210 (NtGdiGetMiterLimit.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetMiterLimit(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_DWORD *)(v5[0] + 200LL);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  return v3;
}
