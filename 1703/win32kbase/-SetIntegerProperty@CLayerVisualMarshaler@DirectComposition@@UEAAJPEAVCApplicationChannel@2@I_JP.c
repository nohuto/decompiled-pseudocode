/*
 * XREFs of ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0017940 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CLayerVisualMarshaler::SetIntegerProperty(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 43 )
  {
    if ( *((_BYTE *)this + 256) != ((_DWORD)a4 != 0) )
    {
      *((_DWORD *)this + 4) |= 0x10000000u;
      *((_BYTE *)this + 256) = (_DWORD)a4 != 0;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
