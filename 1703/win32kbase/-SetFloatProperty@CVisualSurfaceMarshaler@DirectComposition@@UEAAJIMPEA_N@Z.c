/*
 * XREFs of ?SetFloatProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C014C8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetFloatProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v4 = a2 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 0LL;
        *((_DWORD *)this + 4) |= 0x400u;
        *((float *)this + 15) = a3;
      }
      else
      {
        *((_DWORD *)this + 4) |= 0x200u;
        *((float *)this + 14) = a3;
      }
    }
    else
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 13) = a3;
    }
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 12) = a3;
  }
  if ( *((_QWORD *)this + 5) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_BYTE *)this + 80) = 0;
  }
  *a4 = 1;
  return 0LL;
}
