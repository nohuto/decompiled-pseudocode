/*
 * XREFs of RtlpHeapTrkLeakCallback @ 0x1800F7700
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800F70EC (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x1800F7258 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkFindStack @ 0x1800F73A4 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkReportResult @ 0x1800F78F8 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F79E8 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

__int64 __fastcall RtlpHeapTrkLeakCallback(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 result; // rax
  __int64 Stack; // rbx
  ULONG_PTR v8; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER v9[2]; // [rsp+58h] [rbp-10h] BYREF
  const void *Src; // [rsp+80h] [rbp+18h] BYREF

  Src = (const void *)a3;
  result = 0LL;
  v8 = 0x10000LL;
  v9[0].QuadPart = 0LL;
  if ( !byte_1801608C0 )
  {
    if ( byte_18015CE48 )
    {
      byte_18015CE48 = 0;
      _InterlockedExchange(&dword_1801608C4, 1);
      if ( ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TrkContext,
             0LL,
             0LL,
             v9,
             &v8,
             ViewShare,
             0,
             4u) < 0 )
        return 0LL;
      if ( !TrkContext )
        return 0LL;
      *((_DWORD *)TrkContext + 12) = NtCurrentTeb()->ClientId.UniqueProcess;
      if ( !RtlpHeapTrkDumpStacks() )
        return 0LL;
      a3 = (unsigned __int64)Src;
    }
    if ( TrkContext )
    {
      if ( a2 )
      {
        Stack = RtlpHeapTrkFindStack((a3 >> 3) | 0xE000000000000000uLL);
        if ( (unsigned __int8)RtlpHeapTrkReportResult(0x20uLL, &Src, 8uLL) && Stack )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
            Src,
            a4,
            (const void *)(Stack + 24),
            *(unsigned __int16 *)(Stack + 16));
        }
        return 0LL;
      }
      RtlpHeapTrkDumpOutstandingAllocs();
      if ( !*((_DWORD *)TrkContext + 15) )
        goto LABEL_18;
      if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
      {
        *((_DWORD *)TrkContext + 15) = 0;
        dword_18015CE4C = 0;
LABEL_18:
        RtlpHeapTrkSyncWithDiagnoser();
      }
    }
    return 0LL;
  }
  return result;
}
