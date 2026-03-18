/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01427A0
 * Callers:
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01495B0 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149610 (-SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0150210 (-SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0142994 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  __int64 v3; // rax
  char v4; // cl
  bool v5; // al

  v1 = 0;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 14) != 0.0 || *((float *)this + 15) != 0.0 || *((float *)this + 16) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x100u;
  v3 = *((_QWORD *)this + 14);
  if ( v3 && *(_QWORD *)(v3 + 16) || *((char *)this + 236) < 0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 23) )
    *((_DWORD *)this + 4) |= 0x1000000u;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((_QWORD *)this + 24) != ((*(unsigned int (__fastcall **)(DirectComposition::CVisualMarshaler *))(*(_QWORD *)this + 288LL))(this) | 0xFFFFFFFF00000000uLL)
    || *((_DWORD *)this + 50) != -1
    || *((_DWORD *)this + 51) != -1
    || *((_DWORD *)this + 52) != -1
    || *((_DWORD *)this + 53) != -1 )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
  }
  v4 = *((_BYTE *)this + 236);
  if ( (v4 & 0x38) != 0 || (*((_BYTE *)this + 237) & 1) != 0 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( (v4 & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( (v4 & 4) != 0 )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( *((_QWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((float *)this + 17) != 0.0 || *((float *)this + 18) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((float *)this + 24) != 1.0 )
    *((_DWORD *)this + 4) |= 0x200000u;
  if ( *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 || *((float *)this + 21) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400000u;
  if ( *((float *)this + 22) != 0.0 || *((float *)this + 23) != 0.0 )
    *((_DWORD *)this + 4) |= 0x800000u;
  if ( (v4 & 1) != 0 )
    *((_DWORD *)this + 4) |= 0x2000000u;
  if ( *((_DWORD *)this + 54) )
    *((_DWORD *)this + 4) |= 0x4000000u;
  v5 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x7FFDF80) != 0 || v5 )
    return 1;
  return v1;
}
