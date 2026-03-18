/*
 * XREFs of ViIrpLogDatabaseFindPointer @ 0x14077F41C
 * Callers:
 *     VfIrpLogDeleteDeviceLogs @ 0x14077ED90 (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRecordEvent @ 0x14077EE90 (VfIrpLogRecordEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ViIrpLogDatabaseFindPointer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *i; // rax

  v2 = ViIrpLogDatabase;
  *a2 = ViIrpLogDatabase;
  v3 = (_QWORD *)(v2 + 8);
  for ( i = *(_QWORD **)(v2 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == v3 )
      return 0LL;
    if ( *(i - 1) == a1 )
      break;
  }
  return i - 1;
}
