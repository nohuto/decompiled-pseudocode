/*
 * XREFs of ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084
 * Callers:
 *     ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E850 (-TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x180050EB0 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180050FE0 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180093660 (-OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093860 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180093B20 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPCGamepadInputHelper *__fastcall MPCGamepadInputHelper::GetInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCGamepadInputHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = MPCGamepadInputHelper::s_instance;
  if ( !MPCGamepadInputHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
      a4);
    __debugbreak();
  }
  return result;
}
