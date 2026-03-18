/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180016C54
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180004054 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x180015838 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingT.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800176B4 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800176F8 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x1801BB58C (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingTec.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  int v1; // r8d
  int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // edi
  void *v6; // rcx
  __int64 v8; // rcx
  int EffectShaderBody; // eax
  unsigned int v10; // eax
  int MaskShaderBody; // eax
  int v12; // eax
  void *lpMem_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h]
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+58h] [rbp-B0h]
  _QWORD v17[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+7Ch] [rbp-8Ch]
  int v20; // [rsp+80h] [rbp-88h]
  _BYTE v21[32]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v22[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v23; // [rsp+B8h] [rbp-50h]
  unsigned int v24; // [rsp+BCh] [rbp-4Ch]
  unsigned int v25; // [rsp+C0h] [rbp-48h]
  _BYTE v26[128]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = *((_DWORD *)this + 27);
  v2 = 0;
  v17[0] = v21;
  v20 = 0;
  v17[1] = v21;
  v18 = 4;
  v19 = 4;
  DynArrayImpl<0>::Grow((unsigned int)v17, 8, v1, 0, 0LL);
  v4 = 0LL;
  v20 = *((_DWORD *)this + 27);
  if ( v20 )
  {
    do
    {
      *(_QWORD *)(v17[0] + 8 * v4) = *(_QWORD *)((char *)this + 32 * (unsigned int)v4 + 116);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 27) );
  }
  v25 = 0;
  v14 = 0LL;
  v16 = 0;
  v22[0] = v26;
  v22[1] = v26;
  v23 = 16;
  v24 = 16;
  v15 = *((_QWORD *)this + 2);
  *(_OWORD *)lpMem_8 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem_8, &v15);
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem_8);
  v5 = v15;
  while ( 1 )
  {
    v6 = lpMem_8[0];
    if ( !(((char *)lpMem_8[1] - (char *)lpMem_8[0]) >> 4) )
      break;
    v8 = *((_QWORD *)lpMem_8[1] - 2);
    v15 = v8;
    if ( *(_QWORD *)(v8 + 8) )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v8, (__int64)v22, (__int64)v17);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, EffectShaderBody, 0x1B5u);
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody(v8, v22, v17);
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, MaskShaderBody, 0x1BAu);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x13Bu);
      goto LABEL_26;
    }
    v10 = v25 + 1;
    if ( v25 + 1 >= v25 )
      v5 = v25 + 1;
    v2 = v10 < v25 ? 0x80070216 : 0;
    if ( v10 < v25 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB5u);
    }
    else if ( v5 > v24 )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet(v22, 8LL, 1LL, &v15);
      v2 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v22[0] + 8LL * v25) = v15;
      v25 = v5;
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x13Cu);
LABEL_26:
      v6 = lpMem_8[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem_8);
  }
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    v14 = 0LL;
    *(_OWORD *)lpMem_8 = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v22);
  DynArrayImpl<1>::~DynArrayImpl<1>(v17);
  return (unsigned int)v2;
}
