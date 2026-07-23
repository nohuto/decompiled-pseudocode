/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x1400C1EC0
 * Callers:
 *     KeSetIdealProcessorThread @ 0x1400C1E70 (KeSetIdealProcessorThread.c)
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140038470 (KeGetProcessorIndexFromNumber.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x140040C40 (KeGetProcessorNumberFromIndex.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(struct _KTHREAD *a1, _PROCESSOR_NUMBER *a2, _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v6; // edi
  ULONG IdealProcessor; // ecx
  unsigned int v9; // eax
  ULONG v10; // [rsp+48h] [rbp+20h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v6 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v9 = KeSetIdealProcessorThreadEx((__int64)a1, ProcessorIndexFromNumber, &v10);
    IdealProcessor = v10;
    v6 = v9;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v6;
}
