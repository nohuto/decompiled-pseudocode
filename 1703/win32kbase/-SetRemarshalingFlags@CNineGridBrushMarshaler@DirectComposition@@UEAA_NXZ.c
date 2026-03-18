/*
 * XREFs of ?SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01488D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // r14
  int v3; // edx
  bool v4; // bp
  bool v5; // si
  bool v6; // di
  bool v7; // bl
  bool v8; // r11
  bool v9; // r10
  bool v10; // r9
  bool v11; // r8
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  v4 = *((float *)this + 12) != 0.0;
  v5 = *((float *)this + 14) != 0.0;
  v6 = *((float *)this + 16) != 0.0;
  v7 = *((float *)this + 18) != 0.0;
  v8 = *((float *)this + 13) != 1.0;
  v9 = *((float *)this + 15) != 1.0;
  v10 = *((float *)this + 17) != 1.0;
  v11 = *((float *)this + 19) != 1.0;
  if ( v2 )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( v4 )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( v5 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( v6 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( v7 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( v8 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( v9 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( v10 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( v11 )
    *((_DWORD *)this + 4) |= 0x2000u;
  LOBYTE(v1) = *((_BYTE *)this + 80);
  if ( (_BYTE)v1 )
    *((_DWORD *)this + 4) |= 0x4000u;
  LOBYTE(v3) = v2 != 0;
  return v4 | v5 | v6 | v7 | v8 | v10 | v11 | (unsigned int)v1 | v3 | v9;
}
