/*
 * XREFs of IoApplyPriorityInfoThread @ 0x140066920
 * Callers:
 *     <none>
 * Callees:
 *     PsSetPagePriorityThread @ 0x140044894 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400669C4 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  _IO_PRIORITY_HINT v6; // eax
  unsigned int PagePriority; // edx
  __int64 ThreadPriority; // rdx
  struct _IO_PRIORITY_INFO v10; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v6 = (unsigned int)PsSetIoPriorityThread(Thread, (unsigned int)InputPriorityInfo->IoPriority);
  PagePriority = InputPriorityInfo->PagePriority;
  v10.IoPriority = v6;
  if ( PagePriority == -1 )
    v10.PagePriority = -1;
  else
    v10.PagePriority = PsSetPagePriorityThread((__int64)Thread, PagePriority);
  ThreadPriority = InputPriorityInfo->ThreadPriority;
  if ( (_DWORD)ThreadPriority == -1 )
  {
    v10.ThreadPriority = -1;
  }
  else
  {
    v10.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread(Thread, ThreadPriority);
  }
  if ( OutputPriorityInfo )
  {
    v10.Size = 16;
    *OutputPriorityInfo = v10;
  }
  return 0;
}
