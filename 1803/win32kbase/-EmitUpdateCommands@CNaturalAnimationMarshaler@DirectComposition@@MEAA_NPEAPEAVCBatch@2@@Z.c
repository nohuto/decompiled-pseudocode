/*
 * XREFs of ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014FA40
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A350 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c727569___ @ 0x1C014F6A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c72756.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9b74b84ffcb3969eaed67cc87f39fe2d___ @ 0x1C014F82C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9b74b84ffcb3969eaed67cc87f39fe2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9bcc85e78bb6b0fe9658e97887836fde___ @ 0x1C014F8B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9bcc85e78bb6b0fe9658e97887836fd.c)
 *     ?EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014FB1C (-EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014FB6C (-EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CNaturalAnimationMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9b74b84ffcb3969eaed67cc87f39fe2d___(
              (__int64)this,
              a2,
              (__int64 *)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9bcc85e78bb6b0fe9658e97887836fde___(
              (__int64)this,
              a2,
              (__int64 *)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x8000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c727569___(
              (__int64)this,
              a2,
              (__int64 *)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
    }
    if ( DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(
           this,
           (struct DirectComposition::CBatch **)a2)
      && DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommonParameters(
           this,
           (struct DirectComposition::CBatch **)a2) )
    {
      return 1;
    }
  }
  return v4;
}
