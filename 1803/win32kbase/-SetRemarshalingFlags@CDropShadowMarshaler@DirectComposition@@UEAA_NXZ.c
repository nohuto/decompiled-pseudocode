/*
 * XREFs of ?SetRemarshalingFlags@CDropShadowMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C014F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149E90 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::SetRemarshalingFlags(
        DirectComposition::CDropShadowMarshaler *this)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x180u;
  v2 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
  {
    v2 |= 0x200u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 || *((float *)this + 23) != 0.0 )
  {
    v2 |= 0x400u;
    *((_DWORD *)this + 4) = v2;
  }
  v3 = v2 | 0x800;
  v4 = *((_DWORD *)this + 25) == 0;
  *((_DWORD *)this + 4) = v3;
  if ( !v4 )
    *((_DWORD *)this + 4) = v3 | 0x1000;
  return 1;
}
