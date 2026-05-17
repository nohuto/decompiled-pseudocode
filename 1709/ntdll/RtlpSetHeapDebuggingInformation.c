/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1800F0CD0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x1800EF510 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180006DF0 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800FF8BC (RtlpGetHeapInterceptorIndex.c)
 *     RtlSetLFHDebuggingInformation @ 0x18010622C (RtlSetLFHDebuggingInformation.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 56LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = 144LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = *(_DWORD *)(v2 + a1);
    if ( v5 )
      RtlpCallInterceptRoutine(v5, a1, 0LL, 7u, 0LL);
    v6 = RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  *(_DWORD *)(v2 + a1) = (unsigned __int16)RtlpGetHeapInterceptorIndex(v6);
LABEL_9:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *(_BYTE *)(a1 + 386) == 2 ? *(_QWORD *)(a1 + 376) : 0LL;
    if ( v7
      || ((RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 386) != 2) ? (v7 = 0LL) : (v7 = *(_QWORD *)(a1 + 376)),
          v7) )
    {
      RtlSetLFHDebuggingInformation(v7, a2);
    }
  }
  return 0LL;
}
