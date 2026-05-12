/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C00316B0
 * Callers:
 *     RaCreateDriver @ 0x1C006562C (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C00564D0 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C00564D0 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C00564E0 = StorExtFreePool;
  *((_QWORD *)&xmmword_1C00564E0 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C00564F0 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C00564F0 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C0056500 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C0056500 + 1) = StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C0056510 = (__int64)StorExtGetOriginalMdl;
  return result;
}
