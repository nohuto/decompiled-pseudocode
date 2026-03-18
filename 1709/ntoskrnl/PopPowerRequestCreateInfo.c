/*
 * XREFs of PopPowerRequestCreateInfo @ 0x1404F1D38
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400B526C (PoCaptureReasonContext.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PopCreateUserPowerRequest @ 0x1404F1DF4 (PopCreateUserPowerRequest.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  char v4; // si
  __int64 v5; // rdx
  int UserPowerRequest; // ebx
  _QWORD *v7; // rdi
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
      v7 = P;
      LOBYTE(v5) = v4;
      UserPowerRequest = PopCreateUserPowerRequest(Object, v5, P);
      if ( UserPowerRequest >= 0 )
      {
        v7 = 0LL;
        UserPowerRequest = ObInsertObjectEx((_QWORD *)Object[0], 0LL, 0, 0, 0, 0LL, a3);
      }
      if ( v7 )
        PoDestroyReasonContext(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)UserPowerRequest;
}
