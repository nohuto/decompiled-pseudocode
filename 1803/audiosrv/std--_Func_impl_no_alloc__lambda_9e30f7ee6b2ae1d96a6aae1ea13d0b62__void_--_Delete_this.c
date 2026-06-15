/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this @ 0x180046970
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001E060 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x18001FD10 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAX$$QEAV12@@Z @ 0x18001FD80 (-_Reset_move@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
