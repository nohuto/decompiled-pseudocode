/*
 * XREFs of ?SetIntegerProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C008E880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetIntegerProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // eax
  int v9; // eax

  v5 = 0;
  v6 = a3 - 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v7 = *((_DWORD *)this + 21);
      if ( v7 != a4 )
        *((_DWORD *)this + 21) = a4;
      *a5 = v7 != a4;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v9 = *((_DWORD *)this + 20);
    if ( v9 != a4 )
      *((_DWORD *)this + 20) = a4;
    *a5 = v9 != a4;
  }
  return v5;
}
