/*
 * XREFs of ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x180079580
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x180045F1C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CD3DDeviceLevel1::AreEffectsSupported(CD3DDeviceLevel1 *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((int *)this + 185) >= 37632 )
    return *((_BYTE *)this + 636) == 0;
  return result;
}
