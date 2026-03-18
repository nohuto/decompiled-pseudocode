/*
 * XREFs of ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A5D0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a4960045f95af4b8aa850f7b43aef5c___ @ 0x1C0149F2C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1a4960045f95af4b8aa850f7b43aef5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fc95e7c8344bced9a9a51ab149221a97___ @ 0x1C014A060 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fc95e7c8344bced9a9a51ab149221a9.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A0CC (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A268 (-EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A384 (-EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A430 (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A508 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // cl
  char v5; // di
  int v6; // eax
  DirectComposition::CAnimationLoggingManagerMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_BYTE *)this + 240);
  if ( (v4 & 2) == 0 )
  {
    v8 = this;
    v4 = (2
        * DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fc95e7c8344bced9a9a51ab149221a97___(
            (__int64)this,
            a2,
            (__int64)&v8)) | *((_BYTE *)this + 240) & 0xFD;
    *((_BYTE *)this + 240) = v4;
  }
  v5 = 0;
  if ( (v4 & 2) != 0
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogAnimationEndedUpdates(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetCompositorComment(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v6 & 0x20) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a4960045f95af4b8aa850f7b43aef5c___(
              (__int64)this,
              a2,
              (__int64)&v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x20u;
    }
    if ( DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetDiagnosticItemId(this, a2) )
      return 1;
  }
  return v5;
}
