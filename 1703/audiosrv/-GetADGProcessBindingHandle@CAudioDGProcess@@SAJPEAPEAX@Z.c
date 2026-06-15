/*
 * XREFs of ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002F6A0
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180016D9C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017680 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CDAF0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall CAudioDGProcess::GetADGProcessBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS v2; // ebx
  CVolumeStrip *v3; // rcx
  bool v4; // cc
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v8; // [rsp+38h] [rbp-29h] BYREF
  RPC_STATUS v9; // [rsp+3Ch] [rbp-25h] BYREF
  RPC_WSTR String; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+7h] BYREF
  int *v13; // [rsp+78h] [rbp+17h]
  int v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+84h] [rbp+23h]
  RPC_STATUS *v16; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]

  *Binding = 0LL;
  String = 0LL;
  v2 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, (RPC_WSTR)L"AudioDeviceGraph", 0LL, &String);
  if ( !v2 )
  {
    v2 = RpcBindingFromStringBindingW(String, Binding);
    RpcStringFreeW(&String);
    if ( !v2 )
      goto LABEL_3;
  }
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
      (unsigned int)v2);
LABEL_3:
    v3 = WPP_GLOBAL_Control;
  }
  v4 = v2 <= 0;
  if ( v2 < 0 )
  {
    if ( v3 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v3 + 28) & 4) != 0 && *((_BYTE *)v3 + 25) >= 2u )
      WPP_SF_d(*((_QWORD *)v3 + 2), 11LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids, (unsigned int)v2);
    if ( (unsigned int)dword_18012A2A0 > 2 )
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
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v6, v7, 5u, &pData);
    }
    v4 = v2 <= 0;
  }
  if ( !v4 )
    return (unsigned __int16)v2 | 0x80070000;
  return (unsigned int)v2;
}
