/*
 * XREFs of ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014FB6C
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014FA40 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_420e13a3d6286667f0008581166d23e8___ @ 0x1C014F72C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_420e13a3d6286667f0008581166d23e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7911a4a4acb81e34ff8f96947da23420___ @ 0x1C014F7AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7911a4a4acb81e34ff8f96947da2342.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  int v4; // ecx
  char updated; // al
  DirectComposition::CNaturalAnimationMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x10000) != 0 )
  {
    v4 = *((_DWORD *)this + 39) - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 0;
      v7 = this;
      updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7911a4a4acb81e34ff8f96947da23420___(
                  (__int64)this,
                  a2,
                  (__int64)&v7);
    }
    else
    {
      v7 = this;
      updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_420e13a3d6286667f0008581166d23e8___(
                  (__int64)this,
                  a2,
                  (__int64)&v7);
    }
    if ( updated )
    {
      *((_DWORD *)this + 4) &= ~0x10000u;
      return v3;
    }
    return 0;
  }
  return v3;
}
