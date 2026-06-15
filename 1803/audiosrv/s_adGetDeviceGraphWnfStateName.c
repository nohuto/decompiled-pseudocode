/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x180107C30
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x18002AD0C (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002AD30 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180097734 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800977A0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 */

CLIENT_CALL_RETURN __fastcall s_adGetDeviceGraphWnfStateName(CAudioDGProcess *a1, __int64 a2, _QWORD *a3)
{
  CLIENT_CALL_RETURN result; // rax
  CAudioDGProcess *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int Pointer; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-80h] BYREF
  RPC_BINDING_HANDLE Binding[2]; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-68h] BYREF
  const char *v13; // [rsp+70h] [rbp-48h]
  int v14; // [rsp+78h] [rbp-40h]
  int v15; // [rsp+7Ch] [rbp-3Ch]
  _QWORD *v16; // [rsp+80h] [rbp-38h]
  int v17; // [rsp+88h] [rbp-30h]
  int v18; // [rsp+8Ch] [rbp-2Ch]
  unsigned int *p_Pointer; // [rsp+90h] [rbp-28h]
  int v20; // [rsp+98h] [rbp-20h]
  int v21; // [rsp+9Ch] [rbp-1Ch]

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
    if ( (unsigned int)dword_1801884D0 > 2 )
    {
      v13 = "s_adGetDeviceGraphWnfStateName";
      v14 = 31;
      v15 = 0;
      LODWORD(v10) = 1144;
      v16 = &v10;
      v17 = 4;
      v18 = 0;
      p_Pointer = &Pointer;
      v20 = 4;
      v21 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801494DA, v7, v8, 5u, &pData);
    }
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
