/*
 * XREFs of RtlFindMessage @ 0x140516150
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     PiGetDefaultMessageString @ 0x140517098 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 *     ResFwFindMessage @ 0x1407CF674 (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlFindMessageInTable @ 0x1400DD6A0 (RtlFindMessageInTable.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x1404D9C34 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x140516204 (LdrpAccessResourceData.c)
 */

NTSTATUS __stdcall RtlFindMessage(
        PVOID BaseAddress,
        ULONG Type,
        ULONG Language,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry)
{
  NTSTATUS result; // eax
  char *v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9[4]; // [rsp+40h] [rbp-38h] BYREF

  v9[0] = Type;
  v9[2] = Language;
  v9[1] = 1LL;
  v9[3] = MessageId;
  result = LdrpSearchResourceSection_U((char *)BaseAddress, v9, 4u, 64, v8);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(BaseAddress);
    if ( result >= 0 )
      return RtlFindMessageInTable((int *)v8[1], MessageId, MessageResourceEntry);
  }
  return result;
}
