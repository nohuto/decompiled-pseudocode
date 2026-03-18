/*
 * XREFs of ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180003A98
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800039B0 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180015A28 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180022D08 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1801BB6B8 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v2; // r13
  unsigned int v3; // esi
  __int64 v6; // rdx
  bool v7; // bl
  __int64 v9; // r8
  int v10; // eax
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r15
  void *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r14
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+54h] [rbp-ACh]
  _BYTE v22[192]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)this;
    v19[0] = v22;
    v20 = 16;
    v19[1] = v22;
    v21 = 16LL;
    v7 = (unsigned int)CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(a2, v6, v19) > 4;
    DynArrayImpl<1>::~DynArrayImpl<1>(v19);
    if ( !v7 )
      break;
    v9 = *(_QWORD *)this;
    v17 = *(_DWORD *)(v2 + 328);
    CRenderingTechniqueFragment::RemoveLargestInputFragment(a2, &lpMem, v9);
    v10 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&lpMem, &v17);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x173u);
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
        Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v14);
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
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v11);
      WPF::ProcessHeapImpl::Free(v11);
    }
  }
  return v3;
}
