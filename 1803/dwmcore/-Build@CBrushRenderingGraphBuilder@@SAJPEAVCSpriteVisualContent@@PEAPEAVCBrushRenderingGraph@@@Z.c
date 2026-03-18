/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180035838
 * Callers:
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x180029B20 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180095850 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180098F50 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180036508 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        struct CSpriteVisualContent *a1,
        struct CBrushRenderingGraph **a2)
{
  struct CBrushRenderingGraph *v4; // rax
  struct CBrushRenderingGraph *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct CBrushRenderingGraph *v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  struct CBrushRenderingGraph *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct CBrushRenderingGraph *)HeapAlloc(WPF::g_processHeap, 0, 0xC8uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &CBrushRenderingGraph::`vftable';
    *((_DWORD *)v4 + 10) = 0;
    *((_DWORD *)v4 + 8) = 4;
    *((_DWORD *)v4 + 9) = 4;
    *((_QWORD *)v4 + 2) = (char *)v4 + 48;
    *((_QWORD *)v4 + 3) = (char *)v4 + 48;
    *((_DWORD *)v4 + 42) = 0;
    *((_QWORD *)v4 + 18) = (char *)v4 + 176;
    *((_QWORD *)v4 + 19) = (char *)v4 + 176;
    *((_DWORD *)v4 + 40) = 1;
    *((_DWORD *)v4 + 41) = 1;
    *((_QWORD *)v4 + 23) = 0LL;
    *((_DWORD *)v4 + 48) = 0;
    *((_BYTE *)v4 + 196) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v11 = v5;
  if ( v5 )
  {
    (**(void (__fastcall ***)(struct CBrushRenderingGraph *))v5)(v5);
    v9 = v5;
    v10 = 0;
    v6 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v9, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x18u);
    }
    else
    {
      v11 = 0LL;
      *a2 = v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14u);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v11);
  return v7;
}
