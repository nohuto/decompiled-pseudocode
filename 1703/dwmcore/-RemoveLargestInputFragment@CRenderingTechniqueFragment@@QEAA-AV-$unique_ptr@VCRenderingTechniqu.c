/*
 * XREFs of ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1801BB6B8
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180003A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180015A28 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x1801BB504 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 */

_QWORD *__fastcall CRenderingTechniqueFragment::RemoveLargestInputFragment(
        __int64 a1,
        _QWORD *a2,
        struct CBrushRenderingGraph *a3,
        int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  _QWORD *v9; // r12
  unsigned int v11; // r14d
  __int64 v12; // rdi
  CRenderingTechniqueFragment *v14; // rcx
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v16; // rbx
  CRenderingTechniqueFragment *v17; // rcx
  __int64 v18; // rcx
  void *v21[2]; // [rsp+30h] [rbp-128h] BYREF
  int v22; // [rsp+40h] [rbp-118h]
  int v23; // [rsp+44h] [rbp-114h]
  int v24; // [rsp+48h] [rbp-110h]
  _BYTE v25[192]; // [rsp+50h] [rbp-108h] BYREF

  v4 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32);
  v5 = 0;
  v24 = 0;
  v6 = 0;
  v7 = v4 >> 4;
  v21[0] = v25;
  v9 = a2;
  v21[1] = v25;
  v22 = 16;
  v11 = v7;
  v23 = 16;
  if ( (_DWORD)v7 )
  {
    v12 = 0LL;
    do
    {
      v14 = *(CRenderingTechniqueFragment **)(v12 + *(_QWORD *)(a1 + 32) + 8);
      if ( v14 )
      {
        CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
                                        v14,
                                        a3,
                                        (__int64 *)v21);
        if ( CumulativeSurfaceInputCount > v5 )
        {
          v5 = CumulativeSurfaceInputCount;
          v11 = v6;
        }
      }
      ++v6;
      v12 += 16LL;
    }
    while ( v6 < (unsigned int)v7 );
    v9 = a2;
  }
  v16 = *(_QWORD *)(a1 + 32) + 16LL * v11;
  v17 = *(CRenderingTechniqueFragment **)(v16 + 8);
  *(_BYTE *)(v16 + 4) = 1;
  *(_DWORD *)v16 = a4;
  CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(v17);
  v18 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 8) = 0LL;
  *v9 = v18;
  DynArrayImpl<1>::~DynArrayImpl<1>(v21);
  return v9;
}
