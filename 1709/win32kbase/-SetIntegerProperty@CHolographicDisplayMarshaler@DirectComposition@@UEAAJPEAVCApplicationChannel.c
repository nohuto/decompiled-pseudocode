/*
 * XREFs of ?SetIntegerProperty@CHolographicDisplayMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014D120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicDisplayMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicDisplayMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_DWORD *)this + 10) = a4;
    }
    else
    {
      *((_DWORD *)this + 23) = a4;
      *((_BYTE *)this + 113) = 1;
      if ( !*((_BYTE *)this + 112) )
        return v5;
      *((_DWORD *)this + 4) |= 0x80u;
    }
    *a5 = 1;
    return v5;
  }
  *((_DWORD *)this + 22) = a4;
  *((_BYTE *)this + 112) = 1;
  if ( *((_BYTE *)this + 113) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *a5 = 1;
  }
  return v5;
}
