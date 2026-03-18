/*
 * XREFs of CreateNullProcessAttribution @ 0x1800CA3F0
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ?Create@CProcessAttribution@@SAJAEAVCEnergyReporter@@K_KPEAPEAV1@@Z @ 0x1800CA448 (-Create@CProcessAttribution@@SAJAEAVCEnergyReporter@@K_KPEAPEAV1@@Z.c)
 *     ??0CEnergyReporter@@QEAA@XZ @ 0x1800CA4C0 (--0CEnergyReporter@@QEAA@XZ.c)
 *     atexit @ 0x1800D30C4 (atexit.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttribution *CreateNullProcessAttribution()
{
  int v0; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcessAttribution *v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (dword_1802412B0 & 1) == 0 )
  {
    dword_1802412B0 |= 1u;
    CEnergyReporter::CEnergyReporter((CEnergyReporter *)&unk_1802412C0);
    atexit(CreateNullProcessAttribution_::_2_::_dynamic_atexit_destructor_for__nullEnergyReporter__);
  }
  v0 = CProcessAttribution::Create((struct CEnergyReporter *)&unk_1802412C0, 0xFFFFFFFF, 0LL, &v3);
  if ( v0 < 0 )
  {
    ModuleFailFastForHRESULT((unsigned int)v0, retaddr);
    JUMPOUT(0x180126B50LL);
  }
  return v3;
}
