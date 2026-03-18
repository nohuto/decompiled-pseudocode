/*
 * XREFs of ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800BAF74
 * Callers:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800AA8F4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180127FDC (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x1801309A4 (-FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::FindTreeNoLock(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree **a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rcx
  unsigned int v8; // ecx
  __int64 v9; // r11
  volatile signed __int32 *v10; // rax

  *a3 = 0LL;
  v3 = *((_DWORD *)this + 10);
  v5 = -2147024890;
  if ( v3 )
  {
    if ( a2 )
    {
      v8 = 0;
      v9 = *((_QWORD *)this + 2);
      while ( *(HMONITOR *)(v9 + 16LL * v8) != a2 )
      {
        if ( ++v8 >= v3 )
          return v5;
      }
      v10 = *(volatile signed __int32 **)(v9 + 16LL * v8 + 8);
      *a3 = (struct CVisualTree *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    else
    {
      v6 = *(volatile signed __int32 **)(*((_QWORD *)this + 2) + 8LL);
      *a3 = (struct CVisualTree *)v6;
      _InterlockedIncrement(v6 + 2);
    }
    return 0;
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x8Eu);
  }
  return v5;
}
