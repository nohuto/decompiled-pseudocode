/*
 * XREFs of ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B834
 * Callers:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AF80 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B550 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CNotificationResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B820 (-EmitUpdateCommands@CNotificationResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002C690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0080F60 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142020 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01457B0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C0034A5C (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(
        DirectComposition::CNotificationResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  struct DirectComposition::CBatch *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // r9
  char *v11; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v6 = *a2;
    v7 = *((_QWORD *)*a2 + 15);
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(4096 - v8) >= 0x10
      && (v9 = *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 40) = v8 + 16, (v10 = (void *)(v8 + v9)) != 0LL) )
    {
      v12 = v10;
      *((_QWORD *)v6 + 17) += 16LL;
    }
    else
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
        return 0;
      DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v12);
    }
    v11 = (char *)v12;
    *(_DWORD *)v12 = 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 246;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  return v4;
}
