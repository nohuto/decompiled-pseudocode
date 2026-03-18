/*
 * XREFs of ?EmitUpdateCommands@CColorGradientStopMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006D70
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a94d9a8d2afef951b559136e4fe43696___ @ 0x1C000D738 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a94d9a8d2afef951b559136e4fe4369.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a4050c5c824d08d8052b0179b37b0ed4___ @ 0x1C000D7B0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a4050c5c824d08d8052b0179b37b0ed.c)
 */

char __fastcall DirectComposition::CColorGradientStopMarshaler::EmitUpdateCommands(
        DirectComposition::CColorGradientStopMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CColorGradientStopMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a4050c5c824d08d8052b0179b37b0ed4___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) == 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a94d9a8d2afef951b559136e4fe43696___(
                          this,
                          a2,
                          &v7) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
