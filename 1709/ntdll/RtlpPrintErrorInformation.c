/*
 * XREFs of RtlpPrintErrorInformation @ 0x180101E88
 * Callers:
 *     RtlpReportHeapFailure @ 0x1801023A4 (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 */

ULONG RtlpPrintErrorInformation()
{
  const char *v0; // rbx

  v0 = (const char *)&Flags;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Heap error detected at %p (heap handle %p)\n", (const void *)qword_18015C6F8, (const void *)qword_18015C6F0);
  if ( dword_18015C6E8 > 7 )
  {
    switch ( dword_18015C6E8 )
    {
      case 8:
        v0 = "heap_failure_block_not_busy";
        break;
      case 9:
        v0 = "heap_failure_invalid_argument";
        break;
      case 10:
        v0 = "heap_failure_usage_after_free";
        break;
      case 11:
        v0 = "heap_failure_cross_heap_operation";
        break;
      case 12:
        v0 = "heap_failure_freelists_corruption";
        break;
      case 13:
        v0 = "heap_failure_listentry_corruption";
        break;
      case 14:
        v0 = "heap_failure_lfh_bitmap_mismatch";
        break;
    }
  }
  else if ( dword_18015C6E8 == 7 )
  {
    v0 = "heap_failure_buffer_underrun";
  }
  else if ( dword_18015C6E8 )
  {
    switch ( dword_18015C6E8 )
    {
      case 1:
        v0 = "heap_failure_unknown";
        break;
      case 2:
        v0 = "heap_failure_generic";
        break;
      case 3:
        v0 = "heap_failure_entry_corruption";
        break;
      case 4:
        v0 = "heap_failure_multiple_entries_corruption";
        break;
      case 5:
        v0 = "heap_failure_virtual_block_corruption";
        break;
      case 6:
        v0 = "heap_failure_buffer_overrun";
        break;
    }
  }
  else
  {
    v0 = "heap_failure_internal";
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Error code: %d - %s\n", dword_18015C6E8, v0);
  if ( qword_18015C700 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter1: %p\n", (const void *)qword_18015C700);
  }
  if ( qword_18015C708 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter2: %p\n", (const void *)qword_18015C708);
  }
  if ( qword_18015C710 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter3: %p\n", (const void *)qword_18015C710);
  }
  if ( qword_18015C718 || qword_18015C720 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "Last known valid blocks: before - %p, after - %p\n",
      (const void *)qword_18015C718,
      (const void *)qword_18015C720);
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  return DbgPrint("Stack trace available at %p\n", &BackTrace);
}
