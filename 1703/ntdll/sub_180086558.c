/*
 * XREFs of sub_180086558 @ 0x180086558
 * Callers:
 *     sub_18005032C @ 0x18005032C (sub_18005032C.c)
 *     sub_180087F30 @ 0x180087F30 (sub_180087F30.c)
 *     sub_18008AB00 @ 0x18008AB00 (sub_18008AB00.c)
 * Callees:
 *     EtwEventSetInformation @ 0x180019E30 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_180086558(ULONGLONG *CallbackContext)
{
  GUID v2; // xmm0
  NTSTATUS v3; // eax
  unsigned __int32 v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  ProviderId = v2;
  v3 = EtwEventRegister(&ProviderId, EnableCallback, CallbackContext, CallbackContext + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      CallbackContext[4],
      (EVENT_INFO_CLASS)2,
      (PVOID)CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1]);
  }
  return v4;
}
