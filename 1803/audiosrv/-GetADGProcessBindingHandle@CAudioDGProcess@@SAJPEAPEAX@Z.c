/*
 * XREFs of ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002AD30
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180007E44 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18002AFD8 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180107C30 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CAudioDGProcess::GetADGProcessBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RPC_WSTR StringBinding; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  *Binding = 0LL;
  StringBinding = 0LL;
  v3 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, (RPC_WSTR)L"AudioDeviceGraph", 0LL, &StringBinding);
  if ( v3 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x7D,
             (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
             (const char *)v3,
             v6);
  v4 = RpcBindingFromStringBindingW(StringBinding, Binding);
  if ( v4 )
    v1 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x80,
           (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
           (const char *)v4,
           v6);
  RpcStringFreeW(&StringBinding);
  return v1;
}
