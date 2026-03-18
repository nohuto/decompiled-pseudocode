/*
 * XREFs of ?GetNextRunningEffect@CCubeMapRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180217290
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800C457C (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 */

_QWORD *__fastcall CCubeMapRenderingEffect::GetNextRunningEffect(
        void (__fastcall ***a1)(_QWORD),
        _QWORD *a2,
        void (__fastcall ***a3)(_QWORD),
        _BYTE *a4)
{
  *a4 = 0;
  if ( a1 != a3 )
    a1 = a3;
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
    a2,
    a1);
  return a2;
}
