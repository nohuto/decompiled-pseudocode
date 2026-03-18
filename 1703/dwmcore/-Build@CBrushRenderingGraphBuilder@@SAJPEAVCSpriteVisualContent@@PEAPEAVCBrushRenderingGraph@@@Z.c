/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18001C0D4
 * Callers:
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180010EA0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180004054 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        struct CSpriteVisualContent **a1,
        struct CBrushRenderingGraph **a2)
{
  struct CBrushRenderingGraph *v4; // rax
  struct CBrushRenderingGraph *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct CBrushRenderingGraph *v9; // [rsp+50h] [rbp+18h] BYREF
  struct CBrushRenderingGraph *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = (struct CBrushRenderingGraph *)HeapAlloc(WPF::g_processHeap, 0, 0x168uLL);
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
    (**(void (__fastcall ***)(struct CBrushRenderingGraph *))v5)(v5);
    v10 = v5;
    v6 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v10, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x18u);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x14u);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v9);
  return v7;
}
