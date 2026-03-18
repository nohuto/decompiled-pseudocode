/*
 * XREFs of ?HasContent@CAtlasImageSource@@UEBA_NXZ @ 0x1800C5F60
 * Callers:
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x180012868 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasImageSource::HasContent(CAtlasImageSource *this)
{
  return *((_BYTE *)this + 41);
}
