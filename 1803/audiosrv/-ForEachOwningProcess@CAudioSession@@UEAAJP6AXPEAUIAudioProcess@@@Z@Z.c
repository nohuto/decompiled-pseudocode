/*
 * XREFs of ?ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z @ 0x1800479B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180047A6C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::ForEachOwningProcess(CAudioSession *this, void (*a2)(struct IAudioProcess *))
{
  int OwningProcesses; // eax
  const char *v4; // r9
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD *v11; // rdi
  char *v12; // rbx
  void *v13; // [rsp+28h] [rbp-20h] BYREF
  __int128 v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v13 = 0LL;
    v14 = 0LL;
    OwningProcesses = CAudioSession::GetOwningProcesses(this, &v13);
    v5 = OwningProcesses;
    if ( OwningProcesses < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)OwningProcesses,
        -2);
      v11 = v13;
      if ( v13 )
      {
        v12 = (char *)v13;
        if ( v13 != (void *)v14 )
        {
          do
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v12);
            v12 += 8;
          }
          while ( v12 != (char *)v14 );
        }
        std::_Deallocate(v11, (__int64)(*((_QWORD *)&v14 + 1) - (_QWORD)v11) >> 3, 8uLL);
      }
      result = v5;
    }
    else
    {
      v6 = v13;
      v7 = v13;
      v8 = (_QWORD *)v14;
      while ( v7 != v8 )
        ((void (__fastcall *)(_QWORD))a2)(*v7++);
      if ( v6 )
      {
        for ( i = v6; i != v8; ++i )
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
        std::_Deallocate(v6, (__int64)(*((_QWORD *)&v14 + 1) - (_QWORD)v6) >> 3, 8uLL);
      }
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x783,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v4);
  }
  return result;
}
