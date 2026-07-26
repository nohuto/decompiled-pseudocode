/*
 * XREFs of Template_q @ 0x1C00439B8
 * Callers:
 *     ndisTracePeriodicReceivesStart @ 0x1C00511DC (ndisTracePeriodicReceivesStart.c)
 *     ndisSubmitIdleRequest @ 0x1C0070060 (ndisSubmitIdleRequest.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00BC4E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4)
{
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (unsigned __int64)&v6;
  v5.Reserved = 0;
  v5.Size = 4;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 1u, &v5);
}
