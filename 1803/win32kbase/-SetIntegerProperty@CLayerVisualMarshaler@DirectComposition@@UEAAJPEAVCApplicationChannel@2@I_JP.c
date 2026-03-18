/*
 * XREFs of ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00104E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0018AD0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
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
  if ( a3 == 50 )
  {
    if ( *((_BYTE *)this + 296) != ((_DWORD)a4 != 0) )
    {
      *((_DWORD *)this + 4) |= 0x80000000;
      *((_BYTE *)this + 296) = (_DWORD)a4 != 0;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
