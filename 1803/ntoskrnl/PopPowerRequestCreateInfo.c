/*
 * XREFs of PopPowerRequestCreateInfo @ 0x1405251E0
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14007698C (PoCaptureReasonContext.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     PopCreateUserPowerRequest @ 0x140524E58 (PopCreateUserPowerRequest.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  char v4; // si
  int UserPowerRequest; // ebx
  _QWORD *v6; // rdi
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v4 = a2;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    UserPowerRequest = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, &P);
    if ( UserPowerRequest >= 0 )
    {
      v6 = P;
      UserPowerRequest = PopCreateUserPowerRequest((__int64 *)Object, v4, (__int64)P);
      if ( UserPowerRequest >= 0 )
      {
        v6 = 0LL;
        UserPowerRequest = ObInsertObjectEx((_QWORD *)Object[0], 0LL, 0LL, 0, 0, 0LL, a3);
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
