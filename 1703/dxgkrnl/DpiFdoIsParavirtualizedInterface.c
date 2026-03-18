/*
 * XREFs of DpiFdoIsParavirtualizedInterface @ 0x1C01C4FE0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiFdoIsParavirtualizedInterface(__int64 a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  return RtlCompareUnicodeString((PCUNICODE_STRING)(*(_QWORD *)(a1 + 192) + 88LL), &DestinationString, 0) == 0;
}
