/*
 * XREFs of IoApplyPriorityInfoThread @ 0x140021530
 * Callers:
 *     <none>
 * Callees:
 *     PsSetPagePriorityThread @ 0x1400217F8 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140021850 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  __int64 ThreadPriority; // rdx
  struct _IO_PRIORITY_INFO v8; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v8.IoPriority = PsSetIoPriorityThread(Thread, (unsigned int)InputPriorityInfo->IoPriority);
  if ( InputPriorityInfo->PagePriority == -1 )
    v8.PagePriority = -1;
  else
    v8.PagePriority = PsSetPagePriorityThread(Thread);
  ThreadPriority = InputPriorityInfo->ThreadPriority;
  if ( (_DWORD)ThreadPriority == -1 )
  {
    v8.ThreadPriority = -1;
  }
  else
  {
    v8.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread(Thread, ThreadPriority);
  }
  if ( OutputPriorityInfo )
  {
    v8.Size = 16;
    *OutputPriorityInfo = v8;
  }
  return 0;
}
