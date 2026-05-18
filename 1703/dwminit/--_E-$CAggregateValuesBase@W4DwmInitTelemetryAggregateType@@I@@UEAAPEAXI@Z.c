/*
 * XREFs of ??_E?$CAggregateValuesBase@W4DwmInitTelemetryAggregateType@@I@@UEAAPEAXI@Z @ 0x1800014F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180003EE0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall CAggregateValuesBase<enum DwmInitTelemetryAggregateType,unsigned int>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CAggregateValuesBase<enum DwmInitTelemetryAggregateType,unsigned int>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
