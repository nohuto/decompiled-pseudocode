/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180070E4C
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180036508 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x180036868 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingTec.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x180036940 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800BD2E0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800BD344 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x1800BD368 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  int v1; // r8d
  int v2; // ebx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // r8
  __int64 v10; // rcx
  int EffectShaderBody; // eax
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int MaskShaderBody; // eax
  int v17; // eax
  LPVOID lpMem_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+58h] [rbp-B0h]
  _QWORD v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v23; // [rsp+78h] [rbp-90h]
  unsigned int v24; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v25; // [rsp+80h] [rbp-88h]
  _BYTE v26[128]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v27[2]; // [rsp+108h] [rbp+0h] BYREF
  int v28; // [rsp+118h] [rbp+10h]
  int v29; // [rsp+11Ch] [rbp+14h]
  int v30; // [rsp+120h] [rbp+18h]
  _BYTE v31[112]; // [rsp+128h] [rbp+20h] BYREF

  v1 = *((_DWORD *)this + 23);
  v2 = 0;
  v27[0] = v31;
  v30 = 0;
  v27[1] = v31;
  v28 = 4;
  v29 = 4;
  DynArrayImpl<0>::Grow((unsigned int)v27, 28, v1, 0, 0LL);
  v4 = 0;
  v30 = *((_DWORD *)this + 23);
  if ( v30 )
  {
    do
    {
      v5 = v27[0];
      v6 = v4++;
      v7 = 28 * v6;
      *(_OWORD *)(v7 + v27[0]) = *(_OWORD *)((char *)this + 44 * v6 + 100);
      *(_QWORD *)(v7 + v5 + 16) = *(_QWORD *)((char *)this + 44 * v6 + 116);
      *(_DWORD *)(v7 + v5 + 24) = *((_DWORD *)this + 11 * v6 + 31);
    }
    while ( v4 < *((_DWORD *)this + 23) );
  }
  v25 = 0;
  v19 = 0LL;
  v21 = 0;
  v22[0] = v26;
  v22[1] = v26;
  v23 = 16;
  v24 = 16;
  v20 = *((_QWORD *)this + 2);
  *(_OWORD *)lpMem_8 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem_8, &v20);
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem_8);
  v8 = v20;
  while ( 1 )
  {
    v9 = lpMem_8[0];
    if ( !(((char *)lpMem_8[1] - (char *)lpMem_8[0]) >> 4) )
      break;
    v10 = *((_QWORD *)lpMem_8[1] - 2);
    v20 = v10;
    if ( *(_QWORD *)(v10 + 8) )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v10, (__int64)v22, (__int64)v27);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectShaderBody, 0x1E1u);
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody(v10, (__int64)v22, (__int64)v27);
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaskShaderBody, 0x1E6u);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xCFu);
      goto LABEL_32;
    }
    v12 = v25 + 1;
    if ( v25 + 1 >= v25 )
      v8 = v25 + 1;
    v2 = v12 < v25 ? 0x80070216 : 0;
    if ( v12 < v25 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
    }
    else if ( v8 > v24 )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet(v22, 8LL, 1LL, &v20);
      v2 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v22[0] + 8LL * v25) = v20;
      v25 = v8;
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xD0u);
LABEL_32:
      v9 = lpMem_8[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem_8);
  }
  if ( v9 )
  {
    v13 = (unsigned __int64)v9;
    v14 = (v19 - (__int64)v9) >> 4;
    if ( v14 > 0xFFFFFFFFFFFFFFFLL
      || 16 * v14 >= 0x1000
      && (((unsigned __int8)v9 & 0x1F) != 0
       || (v9 = (_QWORD *)*(v9 - 1), (unsigned __int64)v9 >= v13)
       || (v13 = v13 - (_QWORD)v9 - 8, v13 > 0x1F)) )
    {
      _o__invalid_parameter_noinfo_noreturn(v13);
      JUMPOUT(0x1801114DCLL);
    }
    if ( v9 )
      HeapFree(WPF::g_processHeap, 0, v9);
    v19 = 0LL;
    *(_OWORD *)lpMem_8 = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(v22);
  DynArrayImpl<0>::~DynArrayImpl<0>(v27);
  return (unsigned int)v2;
}
