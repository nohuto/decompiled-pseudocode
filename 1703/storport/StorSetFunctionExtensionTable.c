/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C001A5B0
 * Callers:
 *     RaCreateDriver @ 0x1C0060AFC (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())()
{
  __int64 (__fastcall *result)(); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C00554B0 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C00554B0 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C00554C0 = &StorExtFreePool;
  *((_QWORD *)&xmmword_1C00554C0 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C00554D0 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C00554D0 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C00554E0 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C00554E0 + 1) = &StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C00554F0 = (__int64)StorExtGetOriginalMdl;
  return result;
}
