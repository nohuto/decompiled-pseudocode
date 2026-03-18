/*
 * XREFs of ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0028C80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002C040 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
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
  if ( a3 == 44 )
  {
    if ( *((_BYTE *)this + 256) != ((_DWORD)a4 != 0) )
    {
      *((_DWORD *)this + 4) |= 0x20000000u;
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
