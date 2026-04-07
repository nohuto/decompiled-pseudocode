/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830
 * Callers:
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18000C720 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800106B0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180012710 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18002EAC0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x180074E50 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18008A0A0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009C0A0 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009E790 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180014E60 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800152B0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180015580 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180019040 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180079978 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v1; // esi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(CCanvasVisual *__hidden, bool); // rax
  const struct tagSIZE *v5; // rcx
  int v6; // ebp
  __int64 (__fastcall *v7)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v8; // eax
  unsigned int v9; // edi
  char v10; // r14
  CVisual *v11; // rcx
  void (__fastcall *v12)(CVisual *__hidden, unsigned int); // rax
  int v13; // eax
  __int64 v14; // r15
  int v15; // ecx
  void (__fastcall *v16)(CVisual *__hidden); // rax
  void (__fastcall *v17)(CVisual *__hidden, unsigned int); // rax
  int v18; // eax
  __int64 (__fastcall *v19)(CRenderDataVisual *); // rax
  __int64 result; // rax
  unsigned int v21; // edi
  __int64 v22; // rdi
  int v23; // ecx
  void (__fastcall *v24)(CVisual *__hidden); // rax
  __int64 (__fastcall *v25)(CVisual *__hidden); // rax
  int v26; // eax
  int v27; // eax
  int updated; // eax
  void (__fastcall *v29)(CVisual *__hidden, unsigned int); // rax
  int v30; // r9d
  int v31; // eax
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-48h]
  struct tagSIZE v34; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v35; // [rsp+78h] [rbp+10h] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 80) & 2) == 0 )
    goto LABEL_30;
  v3 = *(_QWORD *)this;
  v4 = *(__int64 (__fastcall **)(CCanvasVisual *__hidden, bool))(*(_QWORD *)this + 72LL);
  if ( v4 == CCanvasVisual::UpdateLayout )
  {
    v5 = (const struct tagSIZE *)*((_QWORD *)this + 3);
    v6 = 0;
    if ( v5
      && CVisual::DoCanvasLayout(
           v5 + 15,
           (const struct _MARGINS *)this + 8,
           (const struct tagSIZE *)this + 15,
           &v35,
           &v34) )
    {
      v7 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(v3 + 80);
      if ( v7 == CVisual::SetSize )
        v8 = CVisual::SetSize(this, &v34);
      else
        v8 = v7(this, &v34);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x160u);
LABEL_22:
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x51u);
        }
        else
        {
          v17 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
          if ( v17 == CVisual::SetDirtyFlags )
          {
            v18 = *((_DWORD *)this + 20);
            if ( (v18 & 4) == 0 )
            {
              v22 = *((_QWORD *)this + 3);
              for ( *((_DWORD *)this + 20) = v18 | 4; v22; v22 = *(_QWORD *)(v22 + 24) )
              {
                v23 = *(_DWORD *)(v22 + 80);
                if ( (v23 & 1) != 0 )
                  break;
                v24 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v22 + 32LL);
                if ( v24 == CVisual::SetDirtyChildren )
                  *(_DWORD *)(v22 + 80) = v23 | 1;
                else
                  ((void (__fastcall *)(__int64, void (__fastcall *)(CVisual *__hidden)))v24)(
                    v22,
                    CVisual::SetDirtyChildren);
              }
            }
          }
          else
          {
            v17(this, 4u);
          }
        }
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x39u);
        v1 = v6;
        goto LABEL_28;
      }
      if ( v35 != *((_QWORD *)this + 14) )
      {
        *((struct tagPOINT *)this + 14) = v35;
        v29 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
        if ( v29 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(this, 8u);
        else
          v29(this, 8u);
      }
    }
    v9 = -1;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 )
      {
        ++v9;
      }
      else
      {
        v10 = 1;
        v9 = 0;
      }
      if ( v9 >= *((_DWORD *)this + 18) )
        break;
      v11 = *(CVisual **)(*((_QWORD *)this + 6) + 8LL * v9);
      v12 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v11 + 24LL);
      if ( v12 == CVisual::SetDirtyFlags )
      {
        v13 = *((_DWORD *)v11 + 20);
        if ( (v13 & 2) == 0 )
        {
          v14 = *((_QWORD *)v11 + 3);
          for ( *((_DWORD *)v11 + 20) = v13 | 2; v14; v14 = *(_QWORD *)(v14 + 24) )
          {
            v15 = *(_DWORD *)(v14 + 80);
            if ( (v15 & 1) != 0 )
              break;
            v16 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v14 + 32LL);
            if ( v16 == CVisual::SetDirtyChildren )
              *(_DWORD *)(v14 + 80) = v15 | 1;
            else
              ((void (__fastcall *)(__int64, void (__fastcall *)(CVisual *__hidden)))v16)(
                v14,
                CVisual::SetDirtyChildren);
          }
        }
      }
      else
      {
        v12(v11, 2u);
      }
    }
    goto LABEL_22;
  }
  if ( (char *)v4 == (char *)CRenderDataVisual::UpdateLayout )
  {
    updated = CRenderDataVisual::UpdateLayout(this, 0);
  }
  else
  {
    if ( v4 == CAccent::UpdateLayout )
    {
      v1 = CAccent::UpdateLayout(this, 0);
      goto LABEL_28;
    }
    updated = v4(this, 0);
  }
  v1 = updated;
LABEL_28:
  if ( v1 < 0 )
  {
    v33 = 184;
    goto LABEL_73;
  }
  *((_DWORD *)this + 20) &= ~2u;
LABEL_30:
  if ( (*((_BYTE *)this + 80) & 8) != 0 )
  {
    v25 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 160LL);
    if ( v25 == CVisual::UpdateOffset )
      v26 = CVisual::UpdateOffset(this);
    else
      v26 = v25(this);
    v1 = v26;
    if ( v26 < 0 )
    {
      v33 = 191;
      goto LABEL_73;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) == 0 )
    goto LABEL_32;
  v31 = CVisual::UpdateTransform(this);
  v1 = v31;
  if ( v31 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x10u;
LABEL_32:
    if ( (*((_BYTE *)this + 80) & 0x20) != 0 )
    {
      v32 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 144LL))(this);
      v1 = v32;
      if ( v32 < 0 )
      {
        v33 = 205;
        v30 = v32;
        goto LABEL_75;
      }
      *((_DWORD *)this + 20) &= ~0x20u;
    }
    if ( (*((_BYTE *)this + 80) & 0x40) == 0 )
      goto LABEL_34;
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 392LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            (char *)this + 196);
    v1 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x553u);
    if ( v1 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x40u;
      goto LABEL_34;
    }
    v33 = 212;
LABEL_73:
    v30 = v1;
LABEL_75:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, v33);
    goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xC6u);
LABEL_34:
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x94u);
    return (unsigned int)v1;
  }
  if ( (*((_BYTE *)this + 80) & 4) == 0 )
    return (unsigned int)v1;
  v19 = *(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 176LL);
  if ( v19 == CRenderDataVisual::UpdateRenderData )
    result = CRenderDataVisual::UpdateRenderData(this);
  else
    result = v19(this);
  v21 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x98u);
    return v21;
  }
  else
  {
    *((_DWORD *)this + 20) &= ~4u;
  }
  return result;
}
