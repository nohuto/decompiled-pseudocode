/*
 * XREFs of ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147040
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B550 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c727569___ @ 0x1C0146C20 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c72756.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9b74b84ffcb3969eaed67cc87f39fe2d___ @ 0x1C0146E2C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9b74b84ffcb3969eaed67cc87f39fe2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9bcc85e78bb6b0fe9658e97887836fde___ @ 0x1C0146EB8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9bcc85e78bb6b0fe9658e97887836fd.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a5602___ @ 0x1C0146F40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a560.c)
 *     ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147140 (-EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v4; // zf
  int v5; // eax
  char v6; // di
  char v7; // al
  DirectComposition::CNaturalAnimationMarshaler *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = (*((_DWORD *)this + 4) & 0x4000) == 0;
  v9 = this;
  if ( !v4 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9b74b84ffcb3969eaed67cc87f39fe2d___(
            (__int64)this,
            a2,
            (__int64 *)&v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x4000u;
  }
  v4 = (*((_DWORD *)this + 4) & 0x1000) == 0;
  v9 = this;
  if ( !v4 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9bcc85e78bb6b0fe9658e97887836fde___(
            (__int64)this,
            a2,
            (__int64 *)&v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  v4 = (*((_DWORD *)this + 4) & 0x8000) == 0;
  v9 = this;
  if ( v4 )
    goto LABEL_11;
  if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_013bc46b26ba5caa3ebd7b174c727569___(
          (__int64)this,
          a2,
          (__int64 *)&v9) )
    return 0;
  *((_DWORD *)this + 4) &= ~0x8000u;
LABEL_11:
  if ( !DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(this, a2) )
    return 0;
  v5 = *((_DWORD *)this + 4);
  v6 = 1;
  v9 = this;
  if ( (v5 & 0x20000) == 0 )
  {
LABEL_15:
    v7 = 1;
    goto LABEL_16;
  }
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a5602___(
         (__int64)this,
         a2,
         (__int64)&v9) )
  {
    *((_DWORD *)this + 4) &= ~0x20000u;
    goto LABEL_15;
  }
  v7 = 0;
LABEL_16:
  *((_DWORD *)this + 4) |= 0x40000u;
  if ( !v7 )
    return 0;
  return v6;
}
