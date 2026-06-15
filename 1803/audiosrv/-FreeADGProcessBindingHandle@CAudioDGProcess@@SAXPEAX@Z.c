/*
 * XREFs of ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x18002AD0C
 * Callers:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18002AFD8 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180107C30 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180107BA4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall CAudioDGProcess::FreeADGProcessBindingHandle(void *a1)
{
  unsigned int v1; // eax
  void *v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = a1;
  v1 = RpcBindingFree(&Binding);
  if ( v1 )
    wil::details::in1diag3::_Log_Win32(retaddr, v2, v3, (const char *)v1, v4);
}
