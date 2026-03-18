/*
 * XREFs of ?SetIntegerProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0152770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetIntegerProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  if ( a3 )
  {
    if ( a3 == 2 )
    {
      *((_DWORD *)this + 4) |= 0x20u;
      *((_DWORD *)this + 14) = a4;
    }
    else
    {
      if ( a3 != 4 )
        return 3221225485LL;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_DWORD *)this + 16) = a4;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 15) = a4;
  }
  *a5 = 1;
  return 0LL;
}
