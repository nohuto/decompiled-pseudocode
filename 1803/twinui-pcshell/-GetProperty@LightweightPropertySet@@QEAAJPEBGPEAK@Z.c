/*
 * XREFs of ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x1801E2150
 * Callers:
 *     ?GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1801E5970 (-GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z.c)
 *     ?GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1801F2290 (-GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z.c)
 * Callees:
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x1800FAE84 (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 */

__int64 __fastcall LightweightPropertySet::GetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v3; // rbx

  *a3 = 0;
  v3 = 0LL;
  if ( !*((_QWORD *)this + 1) )
    return 2147943568LL;
  while ( !LightweightPropertySet::LightweightProperty::IsName(
             (HSTRING *)(*(_QWORD *)(*(_QWORD *)this + 8 * v3) + 8LL),
             a2) )
  {
    if ( (unsigned __int64)++v3 >= *((_QWORD *)this + 1) )
      return 2147943568LL;
  }
  *a3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v3) + 16LL);
  return 0LL;
}
