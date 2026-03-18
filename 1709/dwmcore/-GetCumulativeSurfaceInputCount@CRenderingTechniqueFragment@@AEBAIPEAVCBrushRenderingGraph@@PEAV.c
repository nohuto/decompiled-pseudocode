/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x18006B8A8
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x18006B8A8 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C034 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1801D5490 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18006B834 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x18006B8A8 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        struct CBrushRenderingGraph *a2,
        __int64 a3)
{
  struct CBrushRenderingGraph *v3; // r11
  unsigned int v4; // edx
  __int64 v5; // rdi
  unsigned int v6; // esi
  CRenderingTechniqueFragment *v8; // r10
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  int v24; // [rsp+48h] [rbp-20h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v28; // [rsp+88h] [rbp+20h]
  unsigned int v29; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  v6 = 0;
  v21 = 0;
  v8 = a1;
  if ( (_DWORD)v5 )
  {
    v10 = v28;
    v11 = 0LL;
    v22 = 0LL;
    do
    {
      v12 = *(_QWORD *)(v11 + *((_QWORD *)v8 + 4) + 8);
      if ( v12 )
      {
        v6 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v12, v3, a3);
      }
      else
      {
        CRenderingTechniqueFragment::GetSurfaceDescription(
          v8,
          v3,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v23);
        v13 = *(unsigned int *)(a3 + 24);
        v14 = 0LL;
        v15 = *(_QWORD *)a3;
        if ( (_DWORD)v13 )
        {
          while ( (_DWORD)v23 != *(_DWORD *)(v15 + 12 * v14)
               || BYTE4(v23) != *(_BYTE *)(v15 + 12 * v14 + 4)
               || (_BYTE)v24 != *(_BYTE *)(v15 + 12 * v14 + 8) )
          {
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= (unsigned int)v13 )
              goto LABEL_9;
          }
        }
        else
        {
LABEL_9:
          v16 = v13 + 1;
          v17 = v13 + 1;
          if ( (int)v13 + 1 < (unsigned int)v13 )
            v17 = v10;
          v18 = v16 < (unsigned int)v13 ? 0x80070216 : 0;
          v29 = v17;
          if ( v16 < (unsigned int)v13 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xB5u);
          }
          else if ( v17 > *(_DWORD *)(a3 + 20) )
          {
            v20 = DynArrayImpl<0>::AddMultipleAndSet(a3, 0xCu, 1, &v23);
            v18 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
          }
          else
          {
            v19 = 3 * v13;
            *(_QWORD *)(v15 + 4 * v19) = v23;
            *(_DWORD *)(v15 + 4 * v19 + 8) = v24;
            *(_DWORD *)(a3 + 24) = v17;
          }
          if ( v18 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v18, retaddr);
          v10 = v29;
          ++v6;
        }
      }
      v4 = v21 + 1;
      v8 = a1;
      v11 = v22 + 16;
      v3 = a2;
      v21 = v4;
      v22 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v6;
}
