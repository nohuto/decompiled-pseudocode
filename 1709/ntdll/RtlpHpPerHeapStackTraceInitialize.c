/*
 * XREFs of RtlpHpPerHeapStackTraceInitialize @ 0x1800FFD30
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi

  v4 = 0;
  if ( RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapInit, 0LL, 0LL) >= 0 )
  {
    v5 = RtlpHpMetadataAlloc(0x20uLL, 0);
    v6 = v5;
    if ( v5 )
    {
      memset(v5, 0, 0x20uLL);
      v6[1] = 0LL;
      v6[2] = 0LL;
      v6[3] = 0LL;
      v4 = 1;
      *a3 = v6;
    }
  }
  return v4;
}
