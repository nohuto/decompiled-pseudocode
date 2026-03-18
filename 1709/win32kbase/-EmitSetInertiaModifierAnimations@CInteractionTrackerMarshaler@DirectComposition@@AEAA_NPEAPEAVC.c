/*
 * XREFs of ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0144F60
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01457B0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C01458D4 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  size_t *v3; // rbx
  DirectComposition::CInteractionTrackerMarshaler *v4; // rsi
  int v5; // edi
  int InertiaModifierMarshalerFlag; // r14d
  unsigned int v7; // ebp
  __int64 v8; // rax
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = (size_t *)((char *)this + 264);
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    InertiaModifierMarshalerFlag = DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                     this,
                                     (unsigned int)v5);
    if ( (*((_DWORD *)v4 + 4) & InertiaModifierMarshalerFlag) == 0 )
      break;
LABEL_9:
    ++v5;
    ++v3;
    if ( v5 >= 4 )
      return 1;
  }
  v7 = *(_DWORD *)v3 + 24;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v7, &v10) )
  {
    this = (DirectComposition::CInteractionTrackerMarshaler *)v10;
    *(_DWORD *)v10 = v7;
    *(_QWORD *)((char *)this + 4) = 0LL;
    *(_QWORD *)((char *)this + 12) = 0LL;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 1) = 198;
    *((_DWORD *)this + 2) = *((_DWORD *)v4 + 6);
    *((_DWORD *)this + 3) = v5;
    v8 = *(v3 - 8);
    if ( v8 )
      LODWORD(v8) = *(_DWORD *)(v8 + 24);
    *((_DWORD *)this + 4) = v8;
    *((_DWORD *)this + 5) = *(_DWORD *)v3;
    if ( *v3 )
      memmove((char *)this + 24, (const void *)*(v3 - 4), *v3);
    *((_DWORD *)v4 + 4) |= InertiaModifierMarshalerFlag;
    goto LABEL_9;
  }
  return 0;
}
