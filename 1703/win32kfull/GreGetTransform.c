/*
 * XREFs of GreGetTransform @ 0x1C013F73C
 * Callers:
 *     NtGdiGetTransform @ 0x1C00DD870 (NtGdiGetTransform.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C0128848 (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, a2 | 0x80000000);
    if ( v7[0]
      || a2 == 772 && (EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v7, (struct XDCOBJ *)v8, (struct MATRIX *)v9), v7[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v7, a3);
      v5 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  return v5;
}
