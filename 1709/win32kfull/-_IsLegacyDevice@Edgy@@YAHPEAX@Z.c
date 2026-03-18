/*
 * XREFs of ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01D26EC
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D1E4C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D2B58 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     _GetTouchValidationStatus @ 0x1C01BEAAC (_GetTouchValidationStatus.c)
 *     ?_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z @ 0x1C01D2278 (-_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z.c)
 */

__int64 __fastcall Edgy::_IsLegacyDevice(Edgy *this, const unsigned __int16 *a2, __int64 a3, unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = gForceLegacyMode;
  v5 = 0;
  if ( !gForceLegacyMode )
  {
    v8 = 0;
    if ( (unsigned int)Edgy::_GetDWordFromRegistry(this, a2, (unsigned __int16 *)&v8, a4) && v8 == 1 )
    {
      gForceLegacyMode = 1;
      return 1LL;
    }
    v4 = 2;
    gForceLegacyMode = 2;
  }
  if ( v4 == 1 )
    return 1LL;
  LOBYTE(a2) = 19;
  result = HMValidateHandleNoSecure((unsigned __int64)this, (__int64)a2, a3, (__int64)a4);
  if ( result )
  {
    LOBYTE(v5) = (unsigned int)GetTouchValidationStatus(result) != 1;
    return v5;
  }
  return result;
}
