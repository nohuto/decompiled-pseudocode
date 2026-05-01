/*
 * XREFs of ?InternalRelease@?$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955B8
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___ @ 0x18000BD5C (ShellPositionerHelpers--PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92e781___ @ 0x18009D2C0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92e781___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989___ @ 0x18009D438 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989___.c)
 *     ??1?$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F90F8 (--1-$ComPtr@UIShellPositionerProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d5b60___ @ 0x180139518 (ShellPositionerHelpers--PerformCallbackOnView__lambda_df217c5df2fbb65f71a021bc131d5b60___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca650e6___ @ 0x180139684 (ShellPositionerHelpers--PerformCallbackOnView__lambda_fc65bde0abdb4999419d5ab09ca650e6___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228___ @ 0x1801411D8 (ShellPositionerHelpers--PerformCallbackOnView__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_a0147b3457b18c7355ad2e033d70a460___ @ 0x18014F060 (ShellPositionerHelpers--PerformCallbackOnView__lambda_a0147b3457b18c7355ad2e033d70a460___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_c3737f3ad336e56436bbe3e31d4979f5___ @ 0x18014F19C (ShellPositionerHelpers--PerformCallbackOnView__lambda_c3737f3ad336e56436bbe3e31d4979f5___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x1802B59F4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerProxy@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IShellPositionerProxy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,IShellPositionerProxy>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,IShellPositionerProxy>::Release(
               v3,
               (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,IShellPositionerProxy>::Release);
    else
      return v4();
  }
  return result;
}
