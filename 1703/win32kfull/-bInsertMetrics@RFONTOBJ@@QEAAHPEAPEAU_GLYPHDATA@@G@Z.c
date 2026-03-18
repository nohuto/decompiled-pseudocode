/*
 * XREFs of ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C008DBBC
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008CAB4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00EA768 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0286134 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00EA994 (xInsertMetricsRFONTOBJ.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetrics(RFONTOBJ *this, struct _GLYPHDATA **a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) )
    return xInsertMetricsRFONTOBJ(this);
  result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2);
  if ( (_DWORD)result )
    return xInsertMetricsRFONTOBJ(this);
  return result;
}
