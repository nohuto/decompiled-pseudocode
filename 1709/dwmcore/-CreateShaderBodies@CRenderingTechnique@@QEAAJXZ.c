/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006DC8C
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006C824 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x18006B588 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingT.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x18006B730 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingTec.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006E19C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18006E21C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x18006E254 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  int v1; // r8d
  int v2; // ebx
  __int64 v4; // r8
  char *v5; // rax
  unsigned int v6; // edi
  void *v7; // r8
  __int64 v8; // rcx
  int EffectShaderBody; // eax
  unsigned int v10; // eax
  int MaskShaderBody; // eax
  int v13; // eax
  LPVOID lpMem_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h]
  __int128 v16; // [rsp+50h] [rbp-B8h] BYREF
  void *v17[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+7Ch] [rbp-8Ch]
  int v20; // [rsp+80h] [rbp-88h]
  _BYTE v21[32]; // [rsp+88h] [rbp-80h] BYREF
  void *v22[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v23; // [rsp+B8h] [rbp-50h]
  unsigned int v24; // [rsp+BCh] [rbp-4Ch]
  unsigned int v25; // [rsp+C0h] [rbp-48h]
  _BYTE v26[128]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = *((_DWORD *)this + 23);
  v2 = 0;
  v17[0] = v21;
  v20 = 0;
  v17[1] = v21;
  v18 = 4;
  v19 = 4;
  DynArrayImpl<0>::Grow((__int64)v17, 8u, v1, 0, 0LL);
  v4 = 0LL;
  v20 = *((_DWORD *)this + 23);
  if ( v20 )
  {
    do
    {
      *((_QWORD *)v17[0] + v4) = *(_QWORD *)((char *)this + 32 * (unsigned int)v4 + 100);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 23) );
  }
  v25 = 0;
  v15 = 0LL;
  DWORD2(v16) = 0;
  v22[0] = v26;
  v22[1] = v26;
  *(_QWORD *)&v16 = *((_QWORD *)this + 2);
  v23 = 16;
  v24 = 16;
  *(_OWORD *)lpMem_8 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(lpMem_8);
  v5 = (char *)lpMem_8[1];
  if ( lpMem_8[1] )
  {
    *(_OWORD *)lpMem_8[1] = v16;
    v5 = (char *)lpMem_8[1];
  }
  lpMem_8[1] = v5 + 16;
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem_8);
  v6 = v16;
  while ( 1 )
  {
    v7 = lpMem_8[0];
    if ( !(((char *)lpMem_8[1] - (char *)lpMem_8[0]) >> 4) )
      break;
    v8 = *((_QWORD *)lpMem_8[1] - 2);
    *(_QWORD *)&v16 = v8;
    if ( *(_QWORD *)(v8 + 8) )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v8, (__int64)v22, (__int64)v17);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectShaderBody, 0x1B5u);
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody(v8, (__int64)v22, (__int64)v17);
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaskShaderBody, 0x1BAu);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x13Bu);
      goto LABEL_30;
    }
    v10 = v25 + 1;
    if ( v25 + 1 >= v25 )
      v6 = v25 + 1;
    v2 = v10 < v25 ? 0x80070216 : 0;
    if ( v10 < v25 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
    }
    else if ( v6 > v24 )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v22, 8u, 1, &v16);
      v2 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
    }
    else
    {
      *((_QWORD *)v22[0] + v25) = v16;
      v25 = v6;
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x13Cu);
LABEL_30:
      v7 = lpMem_8[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem_8);
  }
  if ( v7 )
  {
    HeapFree(WPF::g_processHeap, 0, v7);
    v15 = 0LL;
    *(_OWORD *)lpMem_8 = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v22);
  DynArrayImpl<1>::~DynArrayImpl<1>(v17);
  return (unsigned int)v2;
}
