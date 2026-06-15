/*
 * XREFs of ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x18001FD10
 * Callers:
 *     ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001C910 (-ForEachStream@CProcessSubmixProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001E060 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ??1?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEAA@XZ @ 0x180099A00 (--1-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this @ 0x180046970 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Delete_this.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,IAudioStreamInfo *>::_Tidy(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  void (__fastcall *v6)(void *, char); // rax

  v5 = (_QWORD *)a1[7];
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    v6 = *(void (__fastcall **)(void *, char))(*v5 + 32LL);
    if ( v6 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
    {
      if ( v5 != a1 )
        std::_Deallocate(v5, 1uLL, 0x10uLL);
    }
    else
    {
      if ( (char *)v6 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
      {
        std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(
          v5,
          a2,
          std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this,
          a4);
        a1[7] = 0LL;
        return;
      }
      v6(v5, a2);
    }
    a1[7] = 0LL;
  }
}
