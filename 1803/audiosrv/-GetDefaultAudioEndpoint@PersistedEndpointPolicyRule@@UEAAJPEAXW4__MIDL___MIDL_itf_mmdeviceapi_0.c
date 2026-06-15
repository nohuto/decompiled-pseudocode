/*
 * XREFs of ?GetDefaultAudioEndpoint@PersistedEndpointPolicyRule@@UEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180036FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall PersistedEndpointPolicyRule::GetDefaultAudioEndpoint(
        __int64 a1,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *Pid)
{
  _QWORD *v5; // rbx
  unsigned int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-28h]
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = Pid;
  LODWORD(Pid) = 0;
  *v5 = 0LL;
  v8 = I_RpcBindingInqLocalClientPID(a2, (unsigned int *)&Pid);
  if ( !v8 )
  {
    if ( (_DWORD)Pid == GetCurrentProcessId()
      || g_ADGProcess && (_DWORD)Pid == LODWORD(g_ADGProcess[2].OwningThread)
      || !g_PolicyManager
      || !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 224LL))(g_PolicyManager) )
    {
      return 0LL;
    }
    v11[0] = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD *))(*(_QWORD *)g_PolicyManager + 40LL))(
           g_PolicyManager,
           (unsigned int)Pid,
           v11) >= 0 )
    {
      if ( !v11[0] )
        return 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v11[0] + 40LL))(v11[0], a3, a4, v5);
    }
    if ( v11[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
    return 0LL;
  }
  return wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x15,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\persistedendpointpolicyrule.cpp",
           (const char *)v8,
           v10);
}
