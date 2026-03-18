/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00069A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006C54 (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_51d0e27d14e05e5cea19d4bd5bc0686e___ @ 0x1C01541F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_51d0e27d14e05e5cea19d4bd5bc0686.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed553e50f4787bd47fe66dc51076727a___ @ 0x1C0154268 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ed553e50f4787bd47fe66dc51076727.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CLinearGradientBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed553e50f4787bd47fe66dc51076727a___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_51d0e27d14e05e5cea19d4bd5bc0686e___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
  }
  if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(this, a2) )
    return 1;
  return v3;
}
