/*
 * XREFs of FONTOBJ_pifi @ 0x1C00BB1D0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C00B8040 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  IFIMETRICS *pvConsumer; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  pvConsumer = (IFIMETRICS *)pfo[1].pvConsumer;
  if ( pvConsumer )
    pvConsumer = *(IFIMETRICS **)&pvConsumer->lItalicAngle;
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5, v1, v2);
  return pvConsumer;
}
