/*
 * XREFs of sub_1800726B8 @ 0x1800726B8
 * Callers:
 *     sub_18007D594 @ 0x18007D594 (sub_18007D594.c)
 *     sub_180082590 @ 0x180082590 (sub_180082590.c)
 *     sub_180083830 @ 0x180083830 (sub_180083830.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x180072750 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800726B8(ULONGLONG *CallbackContext)
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
