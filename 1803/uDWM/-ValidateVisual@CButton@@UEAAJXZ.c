/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x180017060
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x1800169FC (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180016CF0 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180018A20 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180020C44 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800744C0 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180082B48 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CButton::ValidateVisual(CButton *this)
{
  int v1; // eax
  int v3; // edi
  struct tagSIZE v4; // rsi
  __int64 (__fastcall *v5)(CButton *); // rax
  const struct tagSIZE *v6; // rcx
  __int64 (__fastcall *v7)(CVisual *__hidden, const struct tagSIZE *); // rax
  bool v8; // zf
  void (__fastcall *v9)(CThumbnailVisual *, int); // rax
  int v10; // eax
  CVisual *v11; // rsi
  int v12; // ecx
  void (__fastcall *v13)(CVisual *__hidden); // rax
  void (__fastcall *v14)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v15)(CVisual *__hidden, unsigned int); // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  CVisual *v19; // rcx
  void (__fastcall *v20)(CVisual *__hidden, unsigned int); // rax
  __int64 (__fastcall *v21)(CButton *); // rax
  int updated; // eax
  CVisual *v24; // rsi
  int v25; // ecx
  void (__fastcall *v26)(CVisual *__hidden); // rax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // r9d
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-48h]
  char *v34; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-30h]
  __int16 v36; // [rsp+3Ch] [rbp-2Ch]
  struct tagSIZE v37; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v38; // [rsp+78h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x10000) != 0 )
  {
    if ( (v1 & 0x8000) == 0 )
    {
      CButton::UpdateCrossfade(this);
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~0x10000u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0x8000) != 0 )
  {
    v3 = CButton::RedrawVisual(this);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB3u);
      return (unsigned int)v3;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
    v1 = *((_DWORD *)this + 20);
  }
  v3 = 0;
  if ( (v1 & 2) == 0 )
    goto LABEL_38;
  v4 = *(struct tagSIZE *)this;
  v5 = *(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 72LL);
  if ( v5 == CButton::UpdateLayout )
  {
    v6 = (const struct tagSIZE *)*((_QWORD *)this + 3);
    if ( v6
      && CVisual::DoCanvasLayout(
           v6 + 15,
           (const struct _MARGINS *)this + 8,
           (const struct tagSIZE *)this + 15,
           &v38,
           &v37) )
    {
      v7 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)&v4 + 80LL);
      if ( v7 == CVisual::SetSize )
      {
        if ( *((_DWORD *)this + 30) != v37.cx || *((_DWORD *)this + 31) != v37.cy )
        {
          v8 = (*((_BYTE *)this + 84) & 1) == 0;
          *((struct tagSIZE *)this + 15) = v37;
          if ( !v8 )
          {
            (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)&v4 + 24LL))(this, 16LL);
            v4 = *(struct tagSIZE *)this;
          }
          v9 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)&v4 + 24LL);
          if ( (char *)v9 == (char *)CVisual::SetDirtyFlags )
          {
            v10 = *((_DWORD *)this + 20);
            if ( (v10 & 2) == 0 )
            {
              v11 = (CVisual *)*((_QWORD *)this + 3);
              for ( *((_DWORD *)this + 20) = v10 | 2; v11; v11 = (CVisual *)*((_QWORD *)v11 + 3) )
              {
                v12 = *((_DWORD *)v11 + 20);
                if ( (v12 & 1) != 0 )
                  break;
                v13 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v11 + 32LL);
                if ( v13 == CVisual::SetDirtyChildren )
                  *((_DWORD *)v11 + 20) = v12 | 1;
                else
                  v13(v11);
              }
            }
          }
          else if ( v9 == CThumbnailVisual::SetDirtyFlags )
          {
            CThumbnailVisual::SetDirtyFlags(this, 2);
          }
          else
          {
            v9(this, 2);
          }
        }
      }
      else
      {
        v27 = v7(this, &v37);
        v3 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x11Cu);
LABEL_25:
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x8Bu);
          }
          else
          {
            v15 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
            if ( v15 == CVisual::SetDirtyFlags )
            {
              v16 = *((_DWORD *)this + 20);
              if ( (v16 & 0x1000) == 0 )
              {
                v24 = (CVisual *)*((_QWORD *)this + 3);
                for ( *((_DWORD *)this + 20) = v16 | 0x1000; v24; v24 = (CVisual *)*((_QWORD *)v24 + 3) )
                {
                  v25 = *((_DWORD *)v24 + 20);
                  if ( (v25 & 1) != 0 )
                    break;
                  v26 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v24 + 32LL);
                  if ( v26 == CVisual::SetDirtyChildren )
                    *((_DWORD *)v24 + 20) = v25 | 1;
                  else
                    v26(v24);
                }
              }
            }
            else
            {
              v15(this, 4096u);
            }
          }
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC1u);
          }
          else
          {
            v17 = *((_QWORD *)this + 36);
            if ( *(_DWORD *)(v17 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v17 + 28) != *((_DWORD *)this + 31) )
            {
              *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 15);
              CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v17, 1u, 0x2000u);
              v17 = *((_QWORD *)this + 36);
            }
            if ( *(CButton **)(v17 + 80) == this )
            {
              v38 = 0LL;
              CAtlasedImage::SetOffset((CAtlasedImage *)v17, &v38);
            }
            else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v17 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v17 + 20) )
            {
              v18 = *((_QWORD *)this + 14);
              *(_DWORD *)(v17 + 96) |= 1u;
              *(_QWORD *)(v17 + 16) = v18;
              v19 = *(CVisual **)(v17 + 80);
              if ( v19 )
              {
                v20 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v19 + 24LL);
                if ( v20 == CVisual::SetDirtyFlags )
                  CVisual::SetDirtyFlags(v19, 0x2000u);
                else
                  v20(v19, 0x2000u);
              }
            }
          }
          goto LABEL_36;
        }
      }
      if ( v38.x != *((_DWORD *)this + 28) || v38.y != *((_DWORD *)this + 29) )
      {
        *((struct tagPOINT *)this + 14) = v38;
        v14 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
        if ( v14 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(this, 8u);
        else
          v14(this, 8u);
      }
    }
    v35 = -1;
    v34 = (char *)this + 32;
    v36 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v34) )
    {
      v28 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 8LL * v35);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 24LL))(v28, 2LL);
    }
    goto LABEL_25;
  }
  v3 = ((__int64 (__fastcall *)(CButton *, _QWORD))v5)(this, 0LL);
LABEL_36:
  if ( v3 < 0 )
  {
    v33 = 131;
LABEL_83:
    v29 = v3;
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, v33);
    goto LABEL_46;
  }
  *((_DWORD *)this + 20) &= ~2u;
  v1 = *((_DWORD *)this + 20);
LABEL_38:
  if ( (v1 & 8) != 0 )
  {
    v21 = *(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 160LL);
    if ( v21 == CButton::UpdateOffset )
      updated = CButton::UpdateOffset(this);
    else
      updated = v21(this);
    v3 = updated;
    if ( updated < 0 )
    {
      v33 = 138;
      goto LABEL_83;
    }
    *((_DWORD *)this + 20) &= ~8u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x10) != 0 )
  {
    v30 = CVisual::UpdateTransform(this);
    v3 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x91u);
      goto LABEL_46;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x20) != 0 )
  {
    v31 = (*(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 144LL))(this);
    v3 = v31;
    if ( v31 < 0 )
    {
      v33 = 152;
      v29 = v31;
      goto LABEL_85;
    }
    *((_DWORD *)this + 20) &= ~0x20u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x40) == 0 )
    goto LABEL_46;
  v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 408LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
          (char *)this + 196);
  v3 = v32;
  if ( v32 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x3D9u);
  if ( v3 < 0 )
  {
    v33 = 159;
    goto LABEL_83;
  }
  *((_DWORD *)this + 20) &= ~0x40u;
LABEL_46:
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB7u);
  return (unsigned int)v3;
}
