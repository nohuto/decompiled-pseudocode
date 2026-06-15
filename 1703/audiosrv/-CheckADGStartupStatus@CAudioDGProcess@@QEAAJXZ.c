/*
 * XREFs of ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017680
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017B18 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x18002F294 (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002F6A0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGProcess::CheckADGStartupStatus(HANDLE *this)
{
  DWORD v3; // eax
  DWORD v4; // eax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int ADGProcessBindingHandle; // [rsp+30h] [rbp-A8h] BYREF
  DWORD ExitCode; // [rsp+34h] [rbp-A4h] BYREF
  int v9; // [rsp+38h] [rbp-A0h] BYREF
  RPC_BINDING_HANDLE Binding[2]; // [rsp+40h] [rbp-98h] BYREF
  CLIENT_CALL_RETURN v11; // [rsp+50h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-58h] BYREF
  int *v14; // [rsp+90h] [rbp-48h]
  int v15; // [rsp+98h] [rbp-40h]
  int v16; // [rsp+9Ch] [rbp-3Ch]
  int *p_ADGProcessBindingHandle; // [rsp+A0h] [rbp-38h]
  int v18; // [rsp+A8h] [rbp-30h]
  int v19; // [rsp+ACh] [rbp-2Ch]

  Binding[1] = this;
  ADGProcessBindingHandle = 0;
  v9 = 0;
  Binding[0] = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
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
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
          }
          if ( !GetExitCodeProcess(this[11], &ExitCode) )
          {
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                30LL,
                &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
                ExitCode);
            }
            ExitCode = GetLastError();
          }
          if ( ExitCode == 259 )
          {
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                32LL,
                &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
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
  if ( ADGProcessBindingHandle < 0 && (unsigned int)dword_18012A2A0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStartupStatus");
    v9 = 555;
    v14 = &v9;
    v15 = 4;
    v16 = 0;
    p_ADGProcessBindingHandle = &ADGProcessBindingHandle;
    v18 = 4;
    v19 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v5, v6, 5u, &pData);
  }
  return (unsigned int)ADGProcessBindingHandle;
}
