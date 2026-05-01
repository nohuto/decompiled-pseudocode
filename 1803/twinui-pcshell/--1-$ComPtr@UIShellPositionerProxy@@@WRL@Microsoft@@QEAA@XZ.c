/*
 * XREFs of ??1?$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F90F8
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92e781____::_1_::dtor$1 @ 0x18009D41E (_ShellPositionerHelpers--PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92_ea_18009D41E.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989____::_1_::dtor$1 @ 0x18009D596 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d1_ea_18009D596.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97____::_1_::dtor$1 @ 0x1800B1204 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba_ea_1800B1204.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d5b60____::_1_::dtor$1 @ 0x18013966B (_ShellPositionerHelpers--PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d_ea_18013966B.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca650e6____::_1_::dtor$1 @ 0x1801397D7 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca6_ea_1801397D7.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228____::_1_::dtor$1 @ 0x18014132B (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585f_ea_18014132B.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf____::_1_::dtor$1 @ 0x1802B5B47 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9_ea_1802B5B47.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IShellPositionerProxy>::~ComPtr<IShellPositionerProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IShellPositionerProxy>::InternalRelease(a1);
}
