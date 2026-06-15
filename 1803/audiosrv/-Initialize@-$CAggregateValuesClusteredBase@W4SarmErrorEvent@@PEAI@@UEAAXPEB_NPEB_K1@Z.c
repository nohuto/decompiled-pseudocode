/*
 * XREFs of ?Initialize@?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z @ 0x180018450
 * Callers:
 *     ??0?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@_K11@Z @ 0x18005E810 (--0-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClu.c)
 * Callees:
 *     <none>
 */

void __fastcall CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>::Initialize(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a4;
}
