/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00018B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_51d0e27d14e05e5cea19d4bd5bc0686e___ @ 0x1C00023C8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_51d0e27d14e05e5cea19d4bd5bc0686.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed553e50f4787bd47fe66dc51076727a___ @ 0x1C0002438 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ed553e50f4787bd47fe66dc51076727.c)
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00029E4 (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  bool v5; // zf
  DirectComposition::CLinearGradientBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v7 = this;
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed553e50f4787bd47fe66dc51076727a___(
                             this,
                             a2,
                             &v7) )
      return v2;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  v5 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v7 = this;
  if ( !v5 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_51d0e27d14e05e5cea19d4bd5bc0686e___(
                             this,
                             a2,
                             &v7) )
      return v2;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(this, a2) )
    return 1;
  return v2;
}
