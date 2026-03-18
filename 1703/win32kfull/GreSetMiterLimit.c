/*
 * XREFs of GreSetMiterLimit @ 0x1C00F61DC
 * Callers:
 *     NtGdiSetMiterLimit @ 0x1C00F6180 (NtGdiSetMiterLimit.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetMiterLimit(HDC a1, float a2, _DWORD *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v4 = v7[0];
  v5 = 0;
  if ( v7[0] && a2 >= 1.0 )
  {
    if ( a3 )
      *a3 = *(_DWORD *)(v7[0] + 200LL);
    *(float *)(v4 + 200) = a2;
    v5 = 1;
  }
  else
  {
    EngSetLastError(0x57u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v5;
}
