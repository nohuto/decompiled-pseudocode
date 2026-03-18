/*
 * XREFs of ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802185CC
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180035A50 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180036A9C (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x180218544 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 */

_QWORD *__fastcall CRenderingTechniqueFragment::RemoveLargestInputFragment(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rbp
  unsigned int v12; // r14d
  __int64 v13; // rdi
  CRenderingTechniqueFragment *v15; // rcx
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v17; // rbx
  CRenderingTechniqueFragment *v18; // rcx
  __int64 v19; // rcx
  _QWORD v22[2]; // [rsp+30h] [rbp-228h] BYREF
  int v23; // [rsp+40h] [rbp-218h]
  int v24; // [rsp+44h] [rbp-214h]
  int v25; // [rsp+48h] [rbp-210h]
  _BYTE v26[448]; // [rsp+50h] [rbp-208h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v25 = 0;
  v5 = 0;
  v22[0] = v26;
  v6 = 0;
  v22[1] = v26;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = a2;
  v23 = 16;
  v10 = (v4 - v8) >> 4;
  v24 = 16;
  v12 = v10;
  if ( (_DWORD)v10 )
  {
    v13 = 0LL;
    do
    {
      v15 = *(CRenderingTechniqueFragment **)(v13 + *(_QWORD *)(a1 + 32) + 8);
      if ( v15 )
      {
        CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v15, a3, (__int64)v22);
        if ( CumulativeSurfaceInputCount > v5 )
        {
          v5 = CumulativeSurfaceInputCount;
          v12 = v6;
        }
      }
      ++v6;
      v13 += 16LL;
    }
    while ( v6 < (unsigned int)v10 );
    v8 = *(_QWORD *)(a1 + 32);
    v9 = a2;
  }
  v17 = v8 + 16LL * v12;
  v18 = *(CRenderingTechniqueFragment **)(v17 + 8);
  *(_BYTE *)(v17 + 4) = 1;
  *(_DWORD *)v17 = a4;
  CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(v18);
  v19 = *(_QWORD *)(v17 + 8);
  *(_QWORD *)(v17 + 8) = 0LL;
  *v9 = v19;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v22);
  return v9;
}
