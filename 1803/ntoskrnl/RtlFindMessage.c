/*
 * XREFs of RtlFindMessage @ 0x1405BB760
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     PiGetDefaultMessageString @ 0x140645B40 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     ResFwFindMessage @ 0x14083D940 (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlFindMessageInTable @ 0x14013D534 (RtlFindMessageInTable.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x1405BB814 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1405BBB44 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall RtlFindMessage(
        PVOID BaseAddress,
        ULONG Type,
        ULONG Language,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry)
{
  NTSTATUS result; // eax
  _QWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-38h] BYREF

  v9[0] = Type;
  v9[2] = Language;
  v9[1] = 1LL;
  v9[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)BaseAddress, (unsigned int)v9, 4, 64, (__int64)v8);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(BaseAddress);
    if ( result >= 0 )
      return RtlFindMessageInTable((int *)v8[1], MessageId, MessageResourceEntry);
  }
  return result;
}
