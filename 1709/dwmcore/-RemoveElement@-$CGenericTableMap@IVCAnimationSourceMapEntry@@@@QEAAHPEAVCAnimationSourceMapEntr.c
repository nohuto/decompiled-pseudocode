/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAHPEAVCAnimationSourceMapEntry@@@Z @ 0x1800B6D74
 * Callers:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800A7F78 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        _QWORD *Buffer)
{
  void *v2; // r8

  v2 = (void *)Buffer[1];
  if ( v2 != (void *)Buffer[2] )
  {
    if ( v2 )
      HeapFree(WPF::g_processHeap, 0, v2);
    Buffer[1] = 0LL;
  }
  return RtlDeleteElementGenericTable(Table, Buffer);
}
