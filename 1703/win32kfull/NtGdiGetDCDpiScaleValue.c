/*
 * XREFs of NtGdiGetDCDpiScaleValue @ 0x1C0107A20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h]

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 1;
  if ( v3[0]
    && (*(_DWORD *)(v3[0] + 536LL) & 3) == 1
    && (v5 = *(_QWORD *)(v3[0] + 540LL), (unsigned int)bFToL(*(float *)&v5, (int *)&v4, 6)) )
  {
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
    return v4;
  }
  else
  {
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  }
  return v1;
}
