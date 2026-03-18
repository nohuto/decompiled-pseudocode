/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180036A9C
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180035A50 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180036A9C (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802185CC (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180036A9C (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x180036BE4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800377D4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  const struct CBrushRenderingGraph *v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // esi
  CRenderingTechniqueFragment *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]
  int v24; // [rsp+58h] [rbp-20h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v28; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v4 = 0LL;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  v6 = 0;
  v28 = 0;
  v8 = a1;
  if ( (_DWORD)v5 )
  {
    v9 = 0LL;
    v21 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v9 + *((_QWORD *)v8 + 4) + 8);
      if ( v10 )
      {
        v6 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v10, v3, a3);
      }
      else
      {
        CRenderingTechniqueFragment::GetSurfaceDescription(
          v8,
          v4,
          (unsigned int)v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v22);
        v12 = *(unsigned int *)(a3 + 24);
        v13 = 0;
        if ( (_DWORD)v12 )
        {
          while ( !(unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(
                                      &v22,
                                      *(_QWORD *)a3 + 28LL * v13) )
          {
            v13 = v18 + 1;
            if ( v13 >= (unsigned int)v12 )
              goto LABEL_8;
          }
        }
        else
        {
LABEL_8:
          v14 = v20;
          v15 = v12 + 1;
          if ( (int)v12 + 1 >= (unsigned int)v12 )
            v14 = v12 + 1;
          v16 = v15 < (unsigned int)v12 ? 0x80070216 : 0;
          v20 = v14;
          if ( v15 < (unsigned int)v12 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB5u);
          }
          else if ( v14 > *(_DWORD *)(a3 + 20) )
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet(a3, 28LL, 1LL, &v22);
            v16 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
          }
          else
          {
            v17 = *(_QWORD *)a3 + 28 * v12;
            *(_OWORD *)v17 = v22;
            *(_QWORD *)(v17 + 16) = v23;
            *(_DWORD *)(v17 + 24) = v24;
            *(_DWORD *)(a3 + 24) = v14;
          }
          if ( v16 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v16, retaddr);
          ++v6;
        }
      }
      v4 = (const struct CBrushRenderingGraph *)(unsigned int)(v28 + 1);
      v8 = a1;
      v9 = v21 + 16;
      v3 = a2;
      v28 = (int)v4;
      v21 += 16LL;
    }
    while ( (unsigned int)v4 < (unsigned int)v5 );
  }
  return v6;
}
