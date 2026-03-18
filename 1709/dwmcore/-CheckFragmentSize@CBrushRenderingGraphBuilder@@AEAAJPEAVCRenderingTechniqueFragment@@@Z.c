/*
 * XREFs of ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C034
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x18006B8A8 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006BF4C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B6D24 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1801D5490 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  struct CBrushRenderingGraph *v2; // r13
  unsigned int v3; // esi
  struct CBrushRenderingGraph *v6; // rdx
  bool v7; // bl
  struct CBrushRenderingGraph *v9; // r8
  int v10; // eax
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r15
  void *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r14
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+38h] [rbp-C8h] BYREF
  void *v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+54h] [rbp-ACh]
  _BYTE v22[192]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *this;
  v3 = 0;
  while ( 1 )
  {
    v6 = *this;
    v19[0] = v22;
    v20 = 16;
    v19[1] = v22;
    v21 = 16LL;
    v7 = (unsigned int)CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(a2, v6, (__int64)v19) > 4;
    DynArrayImpl<1>::~DynArrayImpl<1>(v19);
    if ( !v7 )
      break;
    v9 = *this;
    v17 = *((_DWORD *)v2 + 82);
    CRenderingTechniqueFragment::RemoveLargestInputFragment(a2, &lpMem, v9);
    v10 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&lpMem, &v17);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x173u);
      v14 = lpMem;
      if ( lpMem )
      {
        WPF::ProcessHeapImpl::Free(*((void **)lpMem + 14));
        v15 = *((_QWORD *)v14 + 4);
        if ( v15 )
        {
          v16 = *((_QWORD *)v14 + 5);
          while ( v15 != v16 )
          {
            std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v15 + 8);
            v15 += 16LL;
          }
          WPF::ProcessHeapImpl::Free(*((void **)v14 + 4));
          *((_QWORD *)v14 + 4) = 0LL;
          *((_QWORD *)v14 + 5) = 0LL;
          *((_QWORD *)v14 + 6) = 0LL;
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v14);
        WPF::ProcessHeapImpl::Free(v14);
      }
      return v3;
    }
    v11 = lpMem;
    if ( lpMem )
    {
      WPF::ProcessHeapImpl::Free(*((void **)lpMem + 14));
      v12 = *((_QWORD *)v11 + 4);
      if ( v12 )
      {
        v13 = *((_QWORD *)v11 + 5);
        while ( v12 != v13 )
        {
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v12 + 8);
          v12 += 16LL;
        }
        WPF::ProcessHeapImpl::Free(*((void **)v11 + 4));
        *((_QWORD *)v11 + 4) = 0LL;
        *((_QWORD *)v11 + 5) = 0LL;
        *((_QWORD *)v11 + 6) = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v11);
      WPF::ProcessHeapImpl::Free(v11);
    }
  }
  return v3;
}
