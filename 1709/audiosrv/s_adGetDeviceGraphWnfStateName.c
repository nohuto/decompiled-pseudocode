/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x1800D9B80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D720 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180030BF0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x1800318BC (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

CLIENT_CALL_RETURN __fastcall s_adGetDeviceGraphWnfStateName(CAudioDGProcess *a1, __int64 a2, _QWORD *a3)
{
  CLIENT_CALL_RETURN result; // rax
  CAudioDGProcess *v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  unsigned int Pointer; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-80h] BYREF
  RPC_BINDING_HANDLE Binding[2]; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-48h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp-38h]
  int v15; // [rsp+88h] [rbp-30h]
  int v16; // [rsp+8Ch] [rbp-2Ch]
  unsigned int *p_Pointer; // [rsp+90h] [rbp-28h]
  int v18; // [rsp+98h] [rbp-20h]
  int v19; // [rsp+9Ch] [rbp-1Ch]

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
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        (__int64)&WPP_c059856c368f347c07e9a39e19191005_Traceguids,
        Pointer);
    }
    if ( (unsigned int)dword_18014A3F0 > 2 )
    {
      TlgCreateSz(&pDesc, "s_adGetDeviceGraphWnfStateName");
      LODWORD(v10) = 1280;
      v14 = &v10;
      v15 = 4;
      v16 = 0;
      p_Pointer = &Pointer;
      v18 = 4;
      v19 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v7, v8, 5u, &pData);
    }
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
