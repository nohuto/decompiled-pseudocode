/*
 * XREFs of ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18002AFD8
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18002B0B4 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x18002AD0C (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002AD30 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall CAudioDGProcess::CheckADGStartupStatus(HANDLE *this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  DWORD v5; // eax
  DWORD v6; // eax
  int ADGProcessBindingHandle; // [rsp+30h] [rbp-98h] BYREF
  int v8; // [rsp+34h] [rbp-94h] BYREF
  DWORD ExitCode; // [rsp+38h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE Binding[2]; // [rsp+40h] [rbp-88h] BYREF
  CLIENT_CALL_RETURN v11; // [rsp+50h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  const char *v13; // [rsp+80h] [rbp-48h]
  int v14; // [rsp+88h] [rbp-40h]
  int v15; // [rsp+8Ch] [rbp-3Ch]
  int *v16; // [rsp+90h] [rbp-38h]
  int v17; // [rsp+98h] [rbp-30h]
  int v18; // [rsp+9Ch] [rbp-2Ch]
  int *p_ADGProcessBindingHandle; // [rsp+A0h] [rbp-28h]
  int v20; // [rsp+A8h] [rbp-20h]
  int v21; // [rsp+ACh] [rbp-1Ch]

  Binding[1] = this;
  v8 = 0;
  Binding[0] = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(Binding);
  if ( ADGProcessBindingHandle >= 0 )
  {
    while ( 1 )
    {
      v11.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, Binding[0]).Pointer;
      ADGProcessBindingHandle = (int)v11.Pointer;
      if ( SLODWORD(v11.Simple) >= 0 )
        break;
      v5 = WaitForSingleObjectEx(this[11], 0, 0);
      v8 = v5;
      if ( v5 != 258 )
      {
        if ( !v5 )
        {
          if ( !GetExitCodeProcess(this[11], &ExitCode) )
            ExitCode = GetLastError();
          v6 = ExitCode;
          if ( ExitCode != 259 )
          {
            if ( (int)ExitCode > 0 )
              v6 = (unsigned __int16)ExitCode | 0x80070000;
            ADGProcessBindingHandle = v6;
          }
        }
        break;
      }
    }
  }
  if ( Binding[0] )
    CAudioDGProcess::FreeADGProcessBindingHandle(Binding[0]);
  if ( ADGProcessBindingHandle < 0 && (unsigned int)dword_1801884D0 > 2 )
  {
    v13 = "CAudioDGProcess::CheckADGStartupStatus";
    v14 = 39;
    v15 = 0;
    v8 = 456;
    v16 = &v8;
    v17 = 4;
    v18 = 0;
    p_ADGProcessBindingHandle = &ADGProcessBindingHandle;
    v20 = 4;
    v21 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801494DA, v2, v3, 5u, &pData);
  }
  return (unsigned int)ADGProcessBindingHandle;
}
