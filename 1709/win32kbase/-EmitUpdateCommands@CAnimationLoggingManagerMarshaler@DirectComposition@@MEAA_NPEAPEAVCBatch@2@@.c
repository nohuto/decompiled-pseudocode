/*
 * XREFs of ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142DD0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fc95e7c8344bced9a9a51ab149221a97___ @ 0x1C0142A3C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fc95e7c8344bced9a9a51ab149221a9.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142AA8 (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142C3C (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142D0C (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  DirectComposition::CAnimationLoggingManagerMarshaler *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)this + 180) )
  {
    v6 = this;
    *((_BYTE *)this + 180) = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fc95e7c8344bced9a9a51ab149221a97___(
                               (__int64)this,
                               a2,
                               (__int64)&v6);
  }
  if ( *((_BYTE *)this + 180)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogAnimationEndedUpdates(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    return 1;
  }
  return v2;
}
