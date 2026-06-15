/*
 * XREFs of ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001DDD4
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001D5C8 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180030BF0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x1800318BC (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioDGProcess::CheckADGStartupStatus(HANDLE *this)
{
  DWORD v3; // eax
  DWORD v4; // eax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int ADGProcessBindingHandle; // [rsp+30h] [rbp-98h] BYREF
  DWORD ExitCode; // [rsp+34h] [rbp-94h] BYREF
  int v9; // [rsp+38h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE Binding[2]; // [rsp+40h] [rbp-88h] BYREF
  CLIENT_CALL_RETURN v11; // [rsp+50h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-48h] BYREF
  int *v14; // [rsp+90h] [rbp-38h]
  int v15; // [rsp+98h] [rbp-30h]
  int v16; // [rsp+9Ch] [rbp-2Ch]
  int *p_ADGProcessBindingHandle; // [rsp+A0h] [rbp-28h]
  int v18; // [rsp+A8h] [rbp-20h]
  int v19; // [rsp+ACh] [rbp-1Ch]

  Binding[1] = this;
  ADGProcessBindingHandle = 0;
  v9 = 0;
  Binding[0] = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
  }
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(Binding);
  if ( ADGProcessBindingHandle >= 0 )
  {
    while ( 1 )
    {
      v11.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, Binding[0]).Pointer;
      ADGProcessBindingHandle = (int)v11.Pointer;
      if ( SLODWORD(v11.Simple) >= 0 )
        break;
      v3 = WaitForSingleObjectEx(this[11], 0, 0);
      v9 = v3;
      if ( v3 != 258 )
      {
        if ( !v3 )
        {
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
          }
          if ( !GetExitCodeProcess(this[11], &ExitCode) )
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                30LL,
                &WPP_c059856c368f347c07e9a39e19191005_Traceguids,
                ExitCode);
            }
            ExitCode = GetLastError();
          }
          if ( ExitCode == 259 )
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                32LL,
                &WPP_c059856c368f347c07e9a39e19191005_Traceguids,
                ExitCode);
            }
            v4 = ExitCode;
            if ( (int)ExitCode > 0 )
              v4 = (unsigned __int16)ExitCode | 0x80070000;
            ADGProcessBindingHandle = v4;
          }
        }
        break;
      }
    }
  }
  if ( Binding[0] )
    CAudioDGProcess::FreeADGProcessBindingHandle(Binding[0]);
  if ( ADGProcessBindingHandle < 0 && (unsigned int)dword_18014A3F0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStartupStatus");
    v9 = 558;
    v14 = &v9;
    v15 = 4;
    v16 = 0;
    p_ADGProcessBindingHandle = &ADGProcessBindingHandle;
    v18 = 4;
    v19 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v5, v6, 5u, &pData);
  }
  return (unsigned int)ADGProcessBindingHandle;
}
