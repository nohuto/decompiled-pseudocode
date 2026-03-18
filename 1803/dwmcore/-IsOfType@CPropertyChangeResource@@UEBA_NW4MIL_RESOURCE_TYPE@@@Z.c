/*
 * XREFs of ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002AED0
 * Callers:
 *     ?IsOfType@CEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800298BC (-IsOfType@CEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002A730 (-IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSpotLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002A7D0 (-IsOfType@CCompositionSpotLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180038750 (-IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006FD8C (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C3850 (-IsOfType@CCompositionAmbientLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180183A40 (-IsOfType@CCompositionCubeMap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180184030 (-IsOfType@CCompositionDistantLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180185350 (-IsOfType@CCompositionPointLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPropertyChangeResource::IsOfType(__int64 a1, int a2)
{
  return a2 == 101 || a2 == 112;
}
