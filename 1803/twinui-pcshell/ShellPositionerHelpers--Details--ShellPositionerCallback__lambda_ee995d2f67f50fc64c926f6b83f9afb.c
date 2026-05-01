/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x1802B5F2C
 * Callers:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x1802B5558 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_e.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180025610 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 */

_QWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = *a2;
  v4 = a2 + 1;
  a1[7] = 0LL;
  if ( a1 + 7 != v4 )
  {
    a1[7] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_180345FB8;
  a1[1] = off_180326EB8;
  return a1;
}
