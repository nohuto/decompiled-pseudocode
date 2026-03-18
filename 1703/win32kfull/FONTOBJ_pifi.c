/*
 * XREFs of FONTOBJ_pifi @ 0x1C009B950
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009B810 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  IFIMETRICS *pvConsumer; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  pvConsumer = (IFIMETRICS *)pfo[1].pvConsumer;
  if ( pvConsumer )
    pvConsumer = *(IFIMETRICS **)&pvConsumer->lItalicAngle;
  v3 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
  return pvConsumer;
}
