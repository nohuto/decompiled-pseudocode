/*
 * XREFs of ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00029E4
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00018B0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3c5b3ad56d02f683614c520a31381587___ @ 0x1C00025A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3c5b3ad56d02f683614c520a3138158.c)
 *     ?EmitUpdateColorStopsCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00028C8 (-EmitUpdateColorStopsCommand@CGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a014ed3a86410ccc0abbd5432e9894eb___ @ 0x1C0148638 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a014ed3a86410ccc0abbd5432e9894e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b782d4ca8a95b74c7b643e4be4df8097___ @ 0x1C01486B0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b782d4ca8a95b74c7b643e4be4df809.c)
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  int v5; // eax
  int v6; // eax
  DirectComposition::CGradientBrushMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = this;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3c5b3ad56d02f683614c520a31381587___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v2;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v5 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v5 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a014ed3a86410ccc0abbd5432e9894eb___(
                             this,
                             a2,
                             &v8) )
      return v2;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  v6 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v6 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b782d4ca8a95b74c7b643e4be4df8097___(
                             this,
                             a2,
                             &v8) )
      return v2;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateColorStopsCommand(this, a2) )
    return 1;
  return v2;
}
