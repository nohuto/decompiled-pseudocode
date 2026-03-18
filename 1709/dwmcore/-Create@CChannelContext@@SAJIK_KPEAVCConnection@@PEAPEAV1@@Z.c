/*
 * XREFs of ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180009EA0
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x1800AB0A0 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 * Callees:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180007F80 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180009F80 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x18000AF30 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 *     ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x18000AFB4 (--0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x1800AA254 (--0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::Create(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        struct CConnection *a4,
        struct CChannelContext **a5)
{
  unsigned int v7; // esi
  int ProcessAttribution; // eax
  CChannelContext *v10; // rax
  CChannelContext *v11; // rbx
  CResourceTable *v12; // rax
  CResourceTable *v13; // rax
  CResourceTable *v14; // rdi
  struct CProcessAttribution *v16[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0;
  v16[0] = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_180272960, a2, a3, v16);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  v10 = (CChannelContext *)WPF::ProcessHeapImpl::AllocClear(0x58uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v11 = CChannelContext::CChannelContext(v10, a1, a2, v16[0], a4);
  if ( v11 )
  {
    v12 = (CResourceTable *)WPF::ProcessHeapImpl::AllocClear(0x50uLL);
    if ( !v12 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v13 = CResourceTable::CResourceTable(v12, a1, v16[0]);
    v14 = v13;
    if ( v13 )
    {
      (**(void (__fastcall ***)(CResourceTable *))v13)(v13);
      *((_QWORD *)v11 + 3) = v14;
      *a5 = v11;
      v11 = 0LL;
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x33u);
    }
    if ( v11 )
      CChannelContext::`vector deleting destructor'(v11, 1u);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  ReleaseInterface<CConnection>(v16);
  return v7;
}
