/*
 * XREFs of ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x180076790
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800CAC94 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDeviceLevel1::AreEffectsSupported(CD3DDeviceLevel1 *this)
{
  bool result; // al

  result = 0;
  if ( *((int *)this + 189) >= 37632 )
    return *((_BYTE *)this + 644) == 0;
  return result;
}
