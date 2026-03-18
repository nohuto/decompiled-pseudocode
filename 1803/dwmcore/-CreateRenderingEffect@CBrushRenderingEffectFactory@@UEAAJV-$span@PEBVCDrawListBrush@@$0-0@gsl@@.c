/*
 * XREFs of ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18008B040
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073C98 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18008B980 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 */

__int64 __fastcall CBrushRenderingEffectFactory::CreateRenderingEffect(
        struct CBrushRenderingEffect *a1,
        __int128 *a2,
        __int64 *a3)
{
  unsigned int v6; // edi
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v8; // rcx
  int v9; // r10d
  __int128 v10; // xmm1
  CRenderingTechnique *v11; // rdx
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( v8 || (v12 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0xC8uLL), (v8 = (_QWORD *)v12) != 0LL) )
  {
    v10 = *a2;
    v11 = (CRenderingTechnique *)*((_QWORD *)a1 + 2);
    *((_QWORD *)&v14 + 1) = (char *)a1 + 32;
    *(_QWORD *)&v14 = 4LL;
    v15 = v14;
    v16 = v10;
    v12 = CBrushRenderingEffect::CBrushRenderingEffect((__int64)v8, v11, (__int64 *)&v16, (__int64)&v15);
  }
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    *a3 = v12;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x49u);
  }
  return v6;
}
