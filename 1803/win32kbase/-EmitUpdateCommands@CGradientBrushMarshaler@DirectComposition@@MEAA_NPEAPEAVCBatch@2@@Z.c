/*
 * XREFs of ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006C54
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00069A0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb6436227fe4a3a1bb1038418e89482c___ @ 0x1C000E824 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fb6436227fe4a3a1bb1038418e89482.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3ca22ddc930a9a8e1434ded79884245e___lambda_0bc58e56ac4a9aab059b2d62d77c79a6___ @ 0x1C000E89C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3ca22ddc930a9a8e1434ded79884245.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3dccb7f5107fd1054343eee1cf9e957___ @ 0x1C015262C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c3dccb7f5107fd1054343eee1cf9e95.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_da0341fb1360bb27bf2d0fc0ff433102___ @ 0x1C0152698 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_da0341fb1360bb27bf2d0fc0ff43310.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e10250a4bffccb338584f30c972d0518___ @ 0x1C0152704 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e10250a4bffccb338584f30c972d051.c)
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CGradientBrushMarshaler *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb6436227fe4a3a1bb1038418e89482c___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3dccb7f5107fd1054343eee1cf9e957___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e10250a4bffccb338584f30c972d0518___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_da0341fb1360bb27bf2d0fc0ff433102___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) == 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3ca22ddc930a9a8e1434ded79884245e___lambda_0bc58e56ac4a9aab059b2d62d77c79a6___(
                          this,
                          a2,
                          (char *)this + 92,
                          *((unsigned int *)this + 22)) )
  {
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v3;
}
