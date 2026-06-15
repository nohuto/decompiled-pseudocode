/*
 * XREFs of ??1?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEAA@XZ @ 0x1800923E4
 * Callers:
 *     _std::function_void___cdecl(IAudioStreamInfo_____ptr64)_::function_void___cdecl(IAudioStreamInfo_____ptr64)__::_1_::dtor$0 @ 0x1800921EE (_std--function_void___cdecl(IAudioStreamInfo_____ptr64)_--function_void___cdecl(IAudioStreamInfo.c)
 *     _std::function_void___cdecl(IAudioStreamInfo_____ptr64)_::function_void___cdecl(IAudioStreamInfo_____ptr64)__::_1_::dtor$0_0 @ 0x18009223C (_std--function_void___cdecl(IAudioStreamInfo_____ptr64)_--function_void___cdecl(IAu_ea_18009223C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_Func_class<void,IAudioStreamInfo *>::~_Func_class<void,IAudioStreamInfo *>(
        __int64 a1,
        __int64 a2)
{
  return std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a1, a2);
}
