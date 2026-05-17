/*
 * XREFs of SbObtainTraceHandle @ 0x1800818D8
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800210F4 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180075710 (EtwEventRegister.c)
 *     SbpTraceContextUpdate @ 0x18010B4D8 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbObtainTraceHandle(signed __int64 *a1)
{
  unsigned int v1; // ebx
  char *pShimData; // rsi
  char *v4; // rsi
  signed __int64 v6; // rax
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rbp
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v11 = 0LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = pShimData + 1496;
    if ( !v4 || !*((_DWORD *)v4 + 12) )
      v4 = 0LL;
    if ( v4 )
    {
      if ( a1 )
        *a1 = 0LL;
      if ( *((_DWORD *)v4 + 3) )
      {
        v6 = *((_QWORD *)v4 + 2);
        if ( v6 )
        {
          if ( a1 )
            *a1 = v6;
        }
        else
        {
          if ( (unsigned int)EtwEventRegister(MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v11) )
            return v1;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 2, v11, 0LL);
          if ( v9 )
          {
            EtwNotificationUnregister(v11, 0LL, v7, v8);
            if ( a1 )
              *a1 = v9;
          }
          else
          {
            if ( a1 )
              *a1 = v11;
            ProcessParameters = NtCurrentPeb()->ProcessParameters;
            SbpTraceContextUpdate(
              v11,
              (_DWORD)v4 + 48,
              0,
              ProcessParameters->ImagePathName.Length,
              (__int64)ProcessParameters->ImagePathName.Buffer);
          }
        }
        return 1;
      }
    }
  }
  return v1;
}
