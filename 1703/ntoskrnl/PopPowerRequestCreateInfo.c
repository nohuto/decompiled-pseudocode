/*
 * XREFs of PopPowerRequestCreateInfo @ 0x1404C7E70
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140072528 (PoCaptureReasonContext.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char v4; // si
  int UserPowerRequest; // ebx
  _QWORD *v6; // rdi
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = a2;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    UserPowerRequest = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, &v9);
    if ( UserPowerRequest >= 0 )
    {
      v6 = v9;
      UserPowerRequest = PopCreateUserPowerRequest((__int64 *)Object, v4, (__int64)v9);
      if ( UserPowerRequest >= 0 )
      {
        v6 = 0LL;
        UserPowerRequest = ObInsertObjectEx(Object[0], 0LL, 0, 0LL, a3);
      }
      if ( v6 )
        PoDestroyReasonContext(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)UserPowerRequest;
}
