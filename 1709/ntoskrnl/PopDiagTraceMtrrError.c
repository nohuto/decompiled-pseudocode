/*
 * XREFs of PopDiagTraceMtrrError @ 0x140439514
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void PopDiagTraceMtrrError()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_MTRR_CHANGED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_14036580C;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_MTRR_CHANGED, 0LL, 1u, &UserData);
    }
  }
}
