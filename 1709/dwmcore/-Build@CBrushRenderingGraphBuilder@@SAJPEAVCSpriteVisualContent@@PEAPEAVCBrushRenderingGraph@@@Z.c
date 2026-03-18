/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180072528
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180024B30 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180082DD0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006C824 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        struct CSpriteVisualContent **a1,
        struct CBrushRenderingGraph **a2)
{
  CMILRefCountBase *v4; // rax
  CMILRefCountBase *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  CMILRefCountBase *v9; // [rsp+50h] [rbp+18h] BYREF
  CMILRefCountBase *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = (CMILRefCountBase *)HeapAlloc(WPF::g_processHeap, 0, 0x168uLL);
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
    *((_DWORD *)v4 + 82) = 0;
    *((_QWORD *)v4 + 38) = (char *)v4 + 336;
    *((_QWORD *)v4 + 39) = (char *)v4 + 336;
    *((_DWORD *)v4 + 80) = 1;
    *((_DWORD *)v4 + 81) = 1;
    *((_QWORD *)v4 + 43) = 0LL;
    *((_DWORD *)v4 + 88) = 0;
    *((_BYTE *)v4 + 356) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v9 = v5;
  if ( v5 )
  {
    (**(void (__fastcall ***)(CMILRefCountBase *))v5)(v5);
    v10 = v5;
    v6 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v10, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x18u);
    }
    else
    {
      v9 = 0LL;
      *a2 = v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14u);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v9);
  return v7;
}
