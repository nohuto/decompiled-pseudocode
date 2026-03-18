/*
 * XREFs of ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x1800B6D20
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800853C0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x180091258 (-Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180092D70 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180097AA8 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800B8108 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTree::PreComputeWorker(CVisualTree *this, struct CDirtyRegion *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  int updated; // eax
  int v7; // r8d
  unsigned int v8; // edx
  __int64 v9; // r10
  int v10; // edx
  unsigned int v11; // r9d
  __int64 v12; // rax
  int v14; // eax
  CVisual *v15; // r14
  unsigned int v16; // eax
  const struct MilRectF *v17; // rbp
  __int64 v18; // rsi

  v4 = 0;
  if ( *((_BYTE *)this + 33) )
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x131u);
    return v4;
  }
  v5 = *((_QWORD *)this + 3);
  *((_BYTE *)this + 33) = 1;
  if ( (*(_BYTE *)(v5 + 88) & 0x1F) != 0 )
  {
    v14 = CPreComputeContext::PreCompute((CVisualTree *)((char *)this + 64), this, a2);
    v4 = v14;
    if ( v14 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xE0u);
  }
  else
  {
    if ( *((_BYTE *)this + 32)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 560LL) + 120LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 560LL))
      || (updated = CPreComputeContext::UpdateTransformChildren((CVisualTree *)((char *)this + 64), this, 1),
          v4 = updated,
          updated >= 0) )
    {
LABEL_6:
      v7 = 1;
      if ( qword_18023E528 && (v8 = 0, *((_DWORD *)qword_18023E528 + 18)) )
      {
        v9 = *((_QWORD *)qword_18023E528 + 6);
        while ( !CDisplay::IsOffscreenRenderTarget(*(CDisplay **)(v9 + 8LL * v8)) )
        {
          v8 = v10 + 1;
          if ( v8 >= v11 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 100LL) )
        {
LABEL_12:
          v12 = *((_QWORD *)this + 2);
          if ( *(_DWORD *)(v12 + 1344) )
            v7 = 0;
          if ( *(_QWORD *)(v12 + 568) )
            v7 = 2;
          CDirtyRegion::Optimize((__int64)a2, v7);
          if ( !CDirtyRegion::IsEmpty(a2) )
          {
            v15 = *(CVisual **)(*((_QWORD *)this + 3) + 80LL);
            if ( v15 )
            {
              v16 = *((_DWORD *)a2 + 280);
              v17 = (struct CDirtyRegion *)((char *)a2 + (*((_BYTE *)a2 + 2724) != 0 ? 0x6D4 : 0) + 960);
              if ( v16 )
              {
                v18 = v16;
                do
                {
                  CVisual::AddAdditionalDirtyRects(v15, v17);
                  v17 = (const struct MilRectF *)((char *)v17 + 16);
                  --v18;
                }
                while ( v18 );
              }
            }
          }
          goto LABEL_17;
        }
      }
      v7 = 0;
      goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xEBu);
  }
LABEL_17:
  *((_BYTE *)this + 33) = 0;
  return v4;
}
