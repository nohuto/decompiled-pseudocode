/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00269B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741811;
      if ( (a4 != 0) != *((_BYTE *)this + 50) )
      {
        *((_BYTE *)this + 50) = a4 != 0;
        goto LABEL_5;
      }
    }
    else if ( (a4 != 0) != *((_BYTE *)this + 49) )
    {
      *((_BYTE *)this + 49) = a4 != 0;
LABEL_5:
      *a5 = 1;
    }
  }
  else if ( (a4 != 0) != *((_BYTE *)this + 48) )
  {
    *((_BYTE *)this + 48) = a4 != 0;
    *a5 = 1;
  }
  return v5;
}
