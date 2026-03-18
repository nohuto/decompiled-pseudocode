/*
 * XREFs of ?IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ @ 0x18020FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMonitorSpecificContent@CAtlasTexture@@QEBA_NXZ @ 0x1801EC174 (-IsMonitorSpecificContent@CAtlasTexture@@QEBA_NXZ.c)
 */

char __fastcall CAtlasImageSource::IsMonitorSpecificContent(CAtlasImageSource *this)
{
  CAtlasTexture *v1; // rcx
  char result; // al

  v1 = (CAtlasTexture *)*((_QWORD *)this + 2);
  result = 0;
  if ( v1 )
    return CAtlasTexture::IsMonitorSpecificContent(v1);
  return result;
}
