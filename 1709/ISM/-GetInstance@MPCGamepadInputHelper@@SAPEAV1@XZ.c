/*
 * XREFs of ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180037550 (-OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800379E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180057634 (-TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call @ 0x180059B90 (std--_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std--allocator_int__void_--_Do_call.c)
 *     std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x180059CA0 (std--_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
