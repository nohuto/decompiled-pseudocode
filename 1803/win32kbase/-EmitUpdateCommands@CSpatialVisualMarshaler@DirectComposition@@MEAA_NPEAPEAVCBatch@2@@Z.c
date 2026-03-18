/*
 * XREFs of ?EmitUpdateCommands@CSpatialVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C015B360
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018FA0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_94733bee92e7684f514495f8fad64778___ @ 0x1C015B2F0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_94733bee92e7684f514495f8fad6477.c)
 */

char __fastcall DirectComposition::CSpatialVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpatialVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CSpatialVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x20000000) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_94733bee92e7684f514495f8fad64778___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x20000000u;
      return 1;
    }
  }
  return v4;
}
