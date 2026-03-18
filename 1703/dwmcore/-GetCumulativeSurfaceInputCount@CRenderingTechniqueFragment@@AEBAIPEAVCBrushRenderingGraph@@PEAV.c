/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180015A28
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180003A98 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180015A28 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1801BB6B8 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800159B4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180015A28 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        struct CBrushRenderingGraph *a2,
        __int64 *a3)
{
  struct CBrushRenderingGraph *v3; // r11
  unsigned int v4; // edx
  __int64 v5; // rdi
  unsigned int v6; // esi
  CRenderingTechniqueFragment *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // ebx
  __int64 v17; // rcx
  int v19; // eax
  unsigned int v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  int v23; // [rsp+48h] [rbp-20h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v27; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  v6 = 0;
  v27 = 0;
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
          v3,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v22);
        v11 = *((unsigned int *)a3 + 6);
        v12 = 0LL;
        v13 = *a3;
        if ( (_DWORD)v11 )
        {
          while ( (_DWORD)v22 != *(_DWORD *)(v13 + 12 * v12)
               || BYTE4(v22) != *(_BYTE *)(v13 + 12 * v12 + 4)
               || (_BYTE)v23 != *(_BYTE *)(v13 + 12 * v12 + 8) )
          {
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= (unsigned int)v11 )
              goto LABEL_5;
          }
        }
        else
        {
LABEL_5:
          v14 = v20;
          v15 = v11 + 1;
          if ( (int)v11 + 1 >= (unsigned int)v11 )
            v14 = v11 + 1;
          v16 = v15 < (unsigned int)v11 ? 0x80070216 : 0;
          v20 = v14;
          if ( v15 < (unsigned int)v11 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB5u);
          }
          else if ( v14 > *((_DWORD *)a3 + 5) )
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet(a3, 12LL, 1LL, &v22);
            v16 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
          }
          else
          {
            v17 = 3 * v11;
            *(_QWORD *)(v13 + 4 * v17) = v22;
            *(_DWORD *)(v13 + 4 * v17 + 8) = v23;
            *((_DWORD *)a3 + 6) = v14;
          }
          if ( v16 < 0 )
          {
            ModuleFailFastForHRESULT((unsigned int)v16, retaddr);
            JUMPOUT(0x180116B76LL);
          }
          ++v6;
        }
      }
      v4 = v27 + 1;
      v8 = a1;
      v9 = v21 + 16;
      v3 = a2;
      v27 = v4;
      v21 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v6;
}
