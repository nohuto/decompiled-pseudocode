/*
 * XREFs of ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18002BA64
 * Callers:
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002C140 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801B7C60 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::RectToSurfaceRect(CHwDisplayRenderTarget *this, float *a2, __int64 a3)
{
  char v3; // di
  __int64 v7; // rax
  int v8; // ebp
  __int64 (*v9)(void); // rax
  char IsValid; // al
  float v11; // xmm0_4
  int v12; // ecx
  float v13; // xmm0_4
  float v14; // xmm0_4
  int v15; // eax
  int v16; // eax
  int v17; // eax
  float v19; // [rsp+50h] [rbp+8h]

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 888);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v8, 0x374u);
    }
    else
    {
      v9 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
      if ( (char *)v9 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(this);
      else
        IsValid = v9();
      if ( !IsValid )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304442, 0x37Eu);
        goto LABEL_18;
      }
    }
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304307, 0x378u);
  }
  if ( v8 >= 0 )
  {
    if ( a2 )
    {
      v11 = *a2 + 6291456.25;
      v12 = (int)(LODWORD(v11) << 10) >> 11;
      *(_DWORD *)a3 = v12;
      v13 = a2[2] + 6291456.25;
      *(_DWORD *)(a3 + 8) = (int)(LODWORD(v13) << 10) >> 11;
      v14 = a2[1] + 6291456.25;
      *(_DWORD *)(a3 + 4) = (int)(LODWORD(v14) << 10) >> 11;
      v19 = a2[3] + 6291456.25;
      *(_DWORD *)(a3 + 12) = (int)(LODWORD(v19) << 10) >> 11;
      if ( *((_DWORD *)this + 21) > v12 )
        v12 = *((_DWORD *)this + 21);
      *(_DWORD *)a3 = v12;
      v15 = *((_DWORD *)this + 22);
      if ( v15 > *(_DWORD *)(a3 + 4) )
        *(_DWORD *)(a3 + 4) = v15;
      v16 = *((_DWORD *)this + 23);
      if ( v16 < *(_DWORD *)(a3 + 8) )
        *(_DWORD *)(a3 + 8) = v16;
      v17 = *((_DWORD *)this + 24);
      if ( v17 < *(_DWORD *)(a3 + 12) )
        *(_DWORD *)(a3 + 12) = v17;
      if ( *(_DWORD *)(a3 + 8) <= v12 || *(_DWORD *)(a3 + 12) <= *(_DWORD *)(a3 + 4) )
      {
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)a3 = 0LL;
      }
    }
    else
    {
      *(_OWORD *)a3 = *(_OWORD *)((char *)this + 84);
    }
  }
LABEL_18:
  if ( *(_DWORD *)(a3 + 8) > *(_DWORD *)a3 && *(_DWORD *)(a3 + 12) > *(_DWORD *)(a3 + 4) )
    return 1;
  return v3;
}
