/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x1800FF8BC
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F0CD0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetHeapInterceptorIndex(__int64 (__fastcall *a1)())
{
  int v1; // edx

  v1 = 0;
  while ( RtlpInterceptorRoutines[(unsigned __int16)v1] != a1 )
  {
    LOWORD(v1) = v1 + 1;
    if ( (unsigned __int16)v1 >= 2u )
      return 0LL;
  }
  return (unsigned int)(v1 + 1);
}
