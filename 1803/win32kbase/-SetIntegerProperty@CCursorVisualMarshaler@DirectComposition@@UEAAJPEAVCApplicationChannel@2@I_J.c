/*
 * XREFs of ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014C080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetIntegerProperty(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 2 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)a4 == *((_DWORD *)this + 73) )
          return v5;
        *((_DWORD *)this + 73) = a4;
      }
      else
      {
        if ( (a4 != 0) == *((_BYTE *)this + 288) )
          return v5;
        *((_DWORD *)this + 4) |= 0x80000000;
        *((_BYTE *)this + 288) = a4 != 0;
      }
    }
    else
    {
      if ( (_DWORD)a4 == *((_DWORD *)this + 71) )
        return v5;
      *((_DWORD *)this + 4) |= 0x40000000u;
      *((_DWORD *)this + 71) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( (_DWORD)a4 != *((_DWORD *)this + 70) )
  {
    *((_DWORD *)this + 4) |= 0x20000000u;
    *((_DWORD *)this + 70) = a4;
    *a5 = 1;
  }
  return v5;
}
