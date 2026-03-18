/*
 * XREFs of ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0001B00
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_39d47258e4267dae8e6289b7b970073c___ @ 0x1C0002274 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_39d47258e4267dae8e6289b7b970073.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___ @ 0x1C00022E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b2334d708dd4af744423568a4d3c8ab2___ @ 0x1C0002350 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b2334d708dd4af744423568a4d3c8ab.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  DirectComposition::CNineGridBrushMarshaler *v10; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v10 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b2334d708dd4af744423568a4d3c8ab2___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  HIDWORD(v10) = *((_DWORD *)this + 12);
  LODWORD(v10) = 3;
  if ( (v6 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  v7 = *((_DWORD *)this + 4);
  HIDWORD(v10) = *((_DWORD *)this + 14);
  LODWORD(v10) = 8;
  if ( (v7 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x100) == 0;
  HIDWORD(v10) = *((_DWORD *)this + 16);
  LODWORD(v10) = 5;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x200) == 0;
  HIDWORD(v10) = *((_DWORD *)this + 18);
  LODWORD(v10) = 0;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x400) == 0;
  HIDWORD(v10) = *((_DWORD *)this + 13);
  LODWORD(v10) = 4;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x800) == 0;
  HIDWORD(v10) = *((_DWORD *)this + 15);
  LODWORD(v10) = 9;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x1000) == 0;
  HIDWORD(v10) = *((_DWORD *)this + 17);
  LODWORD(v10) = 6;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x2000) == 0;
  HIDWORD(v10) = *((_DWORD *)this + 19);
  LODWORD(v10) = 1;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4068b3e4d8bdea2b15fa69df23ea6ba1___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x2000u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x4000) == 0;
  v10 = this;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_39d47258e4267dae8e6289b7b970073c___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x4000u;
  }
  return 1;
}
