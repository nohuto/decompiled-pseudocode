/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x1800CDAF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016F70 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016FF0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x18002F294 (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002F6A0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

CLIENT_CALL_RETURN __fastcall s_adGetDeviceGraphWnfStateName(CAudioDGProcess *a1, __int64 a2, _QWORD *a3)
{
  CLIENT_CALL_RETURN result; // rax
  CAudioDGProcess *v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  unsigned int Pointer; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE Binding[2]; // [rsp+40h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp-48h]
  int v15; // [rsp+88h] [rbp-40h]
  int v16; // [rsp+8Ch] [rbp-3Ch]
  unsigned int *p_Pointer; // [rsp+90h] [rbp-38h]
  int v18; // [rsp+98h] [rbp-30h]
  int v19; // [rsp+9Ch] [rbp-2Ch]

  v10 = a3;
  Binding[0] = 0LL;
  result.Simple = CAudioDGProcess::LockADGProcess(a1);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Simple = CAudioDGProcess::GetADGProcessBindingHandle(Binding);
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 6u, 0LL, Binding[0], a2).Pointer;
      Binding[1] = result.Pointer;
      Pointer = (unsigned int)result.Pointer;
      if ( SLODWORD(result.Simple) >= 0 )
        *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
    }
  }
  v6 = (CAudioDGProcess *)Binding[0];
  if ( Binding[0] )
  {
    CAudioDGProcess::FreeADGProcessBindingHandle(Binding[0]);
    result.Simple = Pointer;
  }
  if ( SLODWORD(result.Simple) < 0 )
  {
    CAudioDGProcess::UnlockADGProcess(v6);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        (__int64)&WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
        Pointer);
    }
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "s_adGetDeviceGraphWnfStateName");
      LODWORD(v10) = 1275;
      v14 = &v10;
      v15 = 4;
      v16 = 0;
      p_Pointer = &Pointer;
      v18 = 4;
      v19 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v7, v8, 5u, &pData);
    }
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
