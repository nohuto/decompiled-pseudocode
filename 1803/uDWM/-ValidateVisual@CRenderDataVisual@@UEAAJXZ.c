/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180010580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180011860 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x180031B90 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x18007F770 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x180093170 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800A4530 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800A6CF0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x180017FB0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180018280 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180018A20 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180026B30 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180082B48 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v1; // eax
  int v2; // esi
  struct tagSIZE v4; // rdi
  __int64 (__fastcall *v5)(CCanvasVisual *__hidden, bool); // rax
  const struct tagSIZE *v6; // rcx
  int v7; // r14d
  __int64 (__fastcall *v8)(CVisual *__hidden, const struct tagSIZE *); // rax
  bool v9; // zf
  void (__fastcall *v10)(CThumbnailVisual *, int); // rax
  int v11; // eax
  CVisual *v12; // rdi
  int v13; // ecx
  void (__fastcall *v14)(CVisual *__hidden); // rax
  unsigned int v15; // edi
  char v16; // bp
  CVisual *v17; // rcx
  void (__fastcall *v18)(CVisual *__hidden, unsigned int); // rax
  int v19; // eax
  CVisual *v20; // r15
  int v21; // ecx
  void (__fastcall *v22)(CVisual *__hidden); // rax
  void (__fastcall *v23)(CVisual *__hidden, unsigned int); // rax
  int v24; // eax
  __int64 (__fastcall *v25)(CRenderDataVisual *__hidden); // rax
  __int64 result; // rax
  unsigned int v27; // edi
  CVisual *v28; // rdi
  int v29; // ecx
  void (__fastcall *v30)(CVisual *__hidden); // rax
  __int64 (__fastcall *v31)(CVisual *__hidden); // rax
  int v32; // eax
  int v33; // eax
  int updated; // eax
  void (__fastcall *v35)(CVisual *__hidden, unsigned int); // rax
  int v36; // eax
  int v37; // r9d
  int v38; // eax
  int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-48h]
  struct tagSIZE v41; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v42; // [rsp+78h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 20);
  v2 = 0;
  if ( (v1 & 2) == 0 )
    goto LABEL_37;
  v4 = *(struct tagSIZE *)this;
  v5 = *(__int64 (__fastcall **)(CCanvasVisual *__hidden, bool))(*(_QWORD *)this + 72LL);
  if ( v5 == CCanvasVisual::UpdateLayout )
  {
    v6 = (const struct tagSIZE *)*((_QWORD *)this + 3);
    v7 = 0;
    if ( v6
      && CVisual::DoCanvasLayout(
           v6 + 15,
           (const struct _MARGINS *)this + 8,
           (const struct tagSIZE *)this + 15,
           &v42,
           &v41) )
    {
      v8 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)&v4 + 80LL);
      if ( v8 == CVisual::SetSize )
      {
        if ( *((_QWORD *)this + 15) != v41 )
        {
          v9 = (*((_BYTE *)this + 84) & 1) == 0;
          *((struct tagSIZE *)this + 15) = v41;
          if ( !v9 )
          {
            (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)&v4 + 24LL))(this, 16LL);
            v4 = *(struct tagSIZE *)this;
          }
          v10 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)&v4 + 24LL);
          if ( (char *)v10 == (char *)CVisual::SetDirtyFlags )
          {
            v11 = *((_DWORD *)this + 20);
            if ( (v11 & 2) == 0 )
            {
              v12 = (CVisual *)*((_QWORD *)this + 3);
              for ( *((_DWORD *)this + 20) = v11 | 2; v12; v12 = (CVisual *)*((_QWORD *)v12 + 3) )
              {
                v13 = *((_DWORD *)v12 + 20);
                if ( (v13 & 1) != 0 )
                  break;
                v14 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v12 + 32LL);
                if ( v14 == CVisual::SetDirtyChildren )
                  *((_DWORD *)v12 + 20) = v13 | 1;
                else
                  v14(v12);
              }
            }
          }
          else if ( v10 == CThumbnailVisual::SetDirtyFlags )
          {
            CThumbnailVisual::SetDirtyFlags(this, 2);
          }
          else
          {
            v10(this, 2);
          }
        }
      }
      else
      {
        v36 = v8(this, &v41);
        v7 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x11Cu);
LABEL_29:
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x51u);
          }
          else
          {
            v23 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
            if ( v23 == CVisual::SetDirtyFlags )
            {
              v24 = *((_DWORD *)this + 20);
              if ( (v24 & 4) == 0 )
              {
                v28 = (CVisual *)*((_QWORD *)this + 3);
                for ( *((_DWORD *)this + 20) = v24 | 4; v28; v28 = (CVisual *)*((_QWORD *)v28 + 3) )
                {
                  v29 = *((_DWORD *)v28 + 20);
                  if ( (v29 & 1) != 0 )
                    break;
                  v30 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v28 + 32LL);
                  if ( v30 == CVisual::SetDirtyChildren )
                    *((_DWORD *)v28 + 20) = v29 | 1;
                  else
                    v30(v28);
                }
              }
            }
            else
            {
              v23(this, 4u);
            }
          }
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x39u);
          v2 = v7;
          goto LABEL_35;
        }
      }
      if ( v42 != *((_QWORD *)this + 14) )
      {
        *((struct tagPOINT *)this + 14) = v42;
        v35 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
        if ( v35 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(this, 8u);
        else
          v35(this, 8u);
      }
    }
    v15 = -1;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 )
      {
        ++v15;
      }
      else
      {
        v16 = 1;
        v15 = 0;
      }
      if ( v15 >= *((_DWORD *)this + 18) )
        break;
      v17 = *(CVisual **)(*((_QWORD *)this + 6) + 8LL * v15);
      v18 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v17 + 24LL);
      if ( v18 == CVisual::SetDirtyFlags )
      {
        v19 = *((_DWORD *)v17 + 20);
        if ( (v19 & 2) == 0 )
        {
          v20 = (CVisual *)*((_QWORD *)v17 + 3);
          for ( *((_DWORD *)v17 + 20) = v19 | 2; v20; v20 = (CVisual *)*((_QWORD *)v20 + 3) )
          {
            v21 = *((_DWORD *)v20 + 20);
            if ( (v21 & 1) != 0 )
              break;
            v22 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v20 + 32LL);
            if ( v22 == CVisual::SetDirtyChildren )
              *((_DWORD *)v20 + 20) = v21 | 1;
            else
              v22(v20);
          }
        }
      }
      else
      {
        v18(v17, 2u);
      }
    }
    goto LABEL_29;
  }
  if ( v5 == CRenderDataVisual::UpdateLayout )
  {
    updated = CRenderDataVisual::UpdateLayout(this, 0);
  }
  else
  {
    if ( v5 == CAccent::UpdateLayout )
    {
      v2 = CAccent::UpdateLayout(this, 0);
      goto LABEL_35;
    }
    updated = v5(this, 0);
  }
  v2 = updated;
LABEL_35:
  if ( v2 < 0 )
  {
    v40 = 131;
    goto LABEL_85;
  }
  *((_DWORD *)this + 20) &= ~2u;
  v1 = *((_DWORD *)this + 20);
LABEL_37:
  if ( (v1 & 8) != 0 )
  {
    v31 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 160LL);
    if ( v31 == CVisual::UpdateOffset )
      v32 = CVisual::UpdateOffset(this);
    else
      v32 = v31(this);
    v2 = v32;
    if ( v32 < 0 )
    {
      v40 = 138;
      goto LABEL_85;
    }
    *((_DWORD *)this + 20) &= ~8u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x10) == 0 )
    goto LABEL_39;
  v38 = CVisual::UpdateTransform(this);
  v2 = v38;
  if ( v38 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x10u;
    v1 = *((_DWORD *)this + 20);
LABEL_39:
    if ( (v1 & 0x20) != 0 )
    {
      v39 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 144LL))(this);
      v2 = v39;
      if ( v39 < 0 )
      {
        v40 = 152;
        v37 = v39;
        goto LABEL_87;
      }
      *((_DWORD *)this + 20) &= ~0x20u;
      v1 = *((_DWORD *)this + 20);
    }
    if ( (v1 & 0x40) == 0 )
      goto LABEL_41;
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 408LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            (char *)this + 196);
    v2 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x3D9u);
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x40u;
      goto LABEL_41;
    }
    v40 = 159;
LABEL_85:
    v37 = v2;
LABEL_87:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, v40);
    goto LABEL_41;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x91u);
LABEL_41:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x94u);
    return (unsigned int)v2;
  }
  if ( (*((_BYTE *)this + 80) & 4) == 0 )
    return (unsigned int)v2;
  v25 = *(__int64 (__fastcall **)(CRenderDataVisual *__hidden))(*(_QWORD *)this + 176LL);
  if ( v25 == CRenderDataVisual::UpdateRenderData )
    result = CRenderDataVisual::UpdateRenderData(this);
  else
    result = v25(this);
  v27 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x98u);
    return v27;
  }
  else
  {
    *((_DWORD *)this + 20) &= ~4u;
  }
  return result;
}
