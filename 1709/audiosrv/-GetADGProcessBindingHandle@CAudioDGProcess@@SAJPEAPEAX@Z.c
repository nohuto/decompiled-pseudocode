/*
 * XREFs of ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180030BF0
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18001D400 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001DDD4 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800D9B80 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioDGProcess::GetADGProcessBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS v2; // ebx
  CAudioDGProcess *v3; // rcx
  bool v4; // cc
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v8; // [rsp+38h] [rbp-19h] BYREF
  RPC_STATUS v9; // [rsp+3Ch] [rbp-15h] BYREF
  RPC_WSTR StringBinding; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+17h] BYREF
  int *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  RPC_STATUS *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  *Binding = 0LL;
  StringBinding = 0LL;
  v2 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, (RPC_WSTR)L"AudioDeviceGraph", 0LL, &StringBinding);
  if ( !v2 )
  {
    v2 = RpcBindingFromStringBindingW(StringBinding, Binding);
    RpcStringFreeW(&StringBinding);
    if ( !v2 )
      goto LABEL_3;
  }
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_c059856c368f347c07e9a39e19191005_Traceguids,
      (unsigned int)v2);
LABEL_3:
    v3 = WPP_GLOBAL_Control;
  }
  v4 = v2 <= 0;
  if ( v2 < 0 )
  {
    if ( v3 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v3 + 28) & 4) != 0 && *((_BYTE *)v3 + 25) >= 2u )
      WPP_SF_d(*((_QWORD *)v3 + 2), 11LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids, (unsigned int)v2);
    if ( (unsigned int)dword_18014A3F0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::GetADGProcessBindingHandle");
      v15 = 0;
      v18 = 0;
      v13 = &v8;
      v16 = &v9;
      v8 = 128;
      v14 = 4;
      v9 = v2;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v6, v7, 5u, &pData);
    }
    v4 = v2 <= 0;
  }
  if ( !v4 )
    return (unsigned __int16)v2 | 0x80070000;
  return (unsigned int)v2;
}
