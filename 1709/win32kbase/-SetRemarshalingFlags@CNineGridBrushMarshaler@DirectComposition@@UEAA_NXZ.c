/*
 * XREFs of ?SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0149730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNineGridBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  __int64 v1; // rax
  bool v2; // bp
  bool v3; // si
  bool v4; // di
  bool v5; // bl
  bool v6; // r11
  bool v7; // r10
  bool v8; // r9
  bool v9; // dl
  char v10; // r8

  v1 = *((_QWORD *)this + 5);
  v2 = *((float *)this + 12) != 0.0;
  v3 = *((float *)this + 14) != 0.0;
  v4 = *((float *)this + 16) != 0.0;
  v5 = *((float *)this + 18) != 0.0;
  v6 = *((float *)this + 13) != 1.0;
  v7 = *((float *)this + 15) != 1.0;
  v8 = *((float *)this + 17) != 1.0;
  v9 = *((float *)this + 19) != 1.0;
  if ( v1 )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( v2 )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( v3 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( v4 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( v5 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( v6 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( v7 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( v8 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( v9 )
    *((_DWORD *)this + 4) |= 0x2000u;
  v10 = *((_BYTE *)this + 80);
  if ( v10 )
    *((_DWORD *)this + 4) |= 0x4000u;
  return v2 | v3 | v4 | v5 | v6 | v7 | v8 | v9 | v10 | (v1 != 0);
}
