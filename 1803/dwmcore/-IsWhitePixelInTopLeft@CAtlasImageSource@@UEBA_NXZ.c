/*
 * XREFs of ?IsWhitePixelInTopLeft@CAtlasImageSource@@UEBA_NXZ @ 0x180013170
 * Callers:
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180074160 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasImageSource::IsWhitePixelInTopLeft(CAtlasImageSource *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
