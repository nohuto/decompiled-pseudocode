/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAX$$QEAV12@@Z @ 0x18001FD80
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001E060 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move @ 0x180046960 (std--_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStrea_ea_180046960.c)
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this @ 0x180046970 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Delete_this.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,IAudioStreamInfo *>::_Reset_move(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  _QWORD *(__fastcall *v7)(__int64, _QWORD *); // rdx
  _QWORD *(__fastcall *v8)(__int64, _QWORD *); // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  void (__fastcall *v11)(void *, char); // rax

  v6 = (_QWORD *)a2[7];
  if ( v6 )
  {
    if ( v6 == a2 )
    {
      v7 = std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Move;
      v8 = *(_QWORD *(__fastcall **)(__int64, _QWORD *))(*v6 + 8LL);
      if ( v8 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Move )
      {
        *a1 = off_18012BEC0;
        v9 = (__int64)a1;
      }
      else if ( (char *)v8 == (char *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move )
      {
        v9 = std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move(
               v6,
               a1,
               a3);
      }
      else
      {
        v9 = (__int64)v8((__int64)v6, a1);
      }
      a1[7] = v9;
      v10 = (_QWORD *)a2[7];
      if ( v10 )
      {
        LOBYTE(v7) = v10 != a2;
        v11 = *(void (__fastcall **)(void *, char))(*v10 + 32LL);
        if ( v11 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
        {
          if ( v10 != a2 )
            std::_Deallocate(v10, 1uLL, 0x10uLL);
        }
        else
        {
          if ( (char *)v11 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
          {
            std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(
              v10,
              v7,
              std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this,
              a4);
            a2[7] = 0LL;
            return;
          }
          v11(v10, (char)v7);
        }
        a2[7] = 0LL;
      }
    }
    else
    {
      a1[7] = v6;
      a2[7] = 0LL;
    }
  }
}
