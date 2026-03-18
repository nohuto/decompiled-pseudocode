/*
 * XREFs of ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x18001FEB0
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18008C290 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
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
