/*
 * XREFs of GreGetTransform @ 0x1C0144F40
 * Callers:
 *     NtGdiGetTransform @ 0x1C00F2FB0 (NtGdiGetTransform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C012E688 (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-30h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v8, (struct XDCOBJ *)v7, a2 | 0x80000000);
    if ( v8[0]
      || a2 == 772 && (EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v8, (struct XDCOBJ *)v7, (struct MATRIX *)v9), v8[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v8, a3);
      v5 = 1;
    }
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v5;
}
