/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____ @ 0x1800F9D40
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92e781____::_1_::dtor$2 @ 0x18009D42A (_ShellPositionerHelpers--PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92_ea_18009D42A.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989____::_1_::dtor$2 @ 0x18009D5A2 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d1_ea_18009D5A2.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97____::_1_::dtor$2 @ 0x1800B1210 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba_ea_1800B1210.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d5b60____::_1_::dtor$2 @ 0x180139677 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d_ea_180139677.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca650e6____::_1_::dtor$2 @ 0x1801397E3 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca6_ea_1801397E3.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228____::_1_::dtor$2 @ 0x180141337 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585f_ea_180141337.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf____::_1_::dtor$2 @ 0x1802B5B53 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9_ea_1802B5B53.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
