/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180037760 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003CA10 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x18007F0F0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18008F0D0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009DFB0 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800A06F0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18001F350 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x18001F620 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x18001F8D0 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180024660 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180081EA8 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v1; // esi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(CCanvasVisual *__hidden, bool); // rax
  const struct tagSIZE *v5; // rcx
  int v6; // r14d
  _DWORD *v7; // r8
  __int64 (__fastcall *v8)(CVisual *__hidden, const struct tagSIZE *); // rax
  bool v9; // zf
  void (__fastcall *v10)(CVisual *__hidden, unsigned int); // rax
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
  int v31; // eax
  __int64 (__fastcall *v32)(CVisual *__hidden); // rax
  int v33; // eax
  int updated; // eax
  void (__fastcall *v35)(CVisual *__hidden, unsigned int); // rax
  int v36; // eax
  int v37; // r9d
  int v38; // eax
  int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-48h]
  struct tagSIZE v41[2]; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT v42; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 80) & 2) == 0 )
    goto LABEL_37;
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
           &v42,
           v41) )
    {
      v8 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(v3 + 80);
      if ( v8 == CVisual::SetSize )
      {
        if ( __PAIR64__(*((_DWORD *)this + 31), *v7) != *(_QWORD *)v41 )
        {
          v9 = (*((_BYTE *)this + 84) & 1) == 0;
          *(struct tagSIZE *)v7 = v41[0];
          if ( !v9 )
            (*(void (__fastcall **)(CRenderDataVisual *, __int64))(v3 + 24))(this, 16LL);
          v10 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
          if ( v10 == CVisual::SetDirtyFlags )
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
            CThumbnailVisual::SetDirtyFlags(this, 2u);
          }
          else
          {
            v10(this, 2u);
          }
        }
      }
      else
      {
        v36 = v8(this, v41);
        v6 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x160u);
LABEL_29:
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x51u);
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
          if ( v6 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x39u);
          v1 = v6;
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
  if ( v4 == CRenderDataVisual::UpdateLayout )
    updated = CRenderDataVisual::UpdateLayout(this, 0);
  else
    updated = v4(this, 0);
  v1 = updated;
LABEL_35:
  if ( v1 < 0 )
  {
    v40 = 184;
    goto LABEL_83;
  }
  *((_DWORD *)this + 20) &= ~2u;
LABEL_37:
  if ( (*((_BYTE *)this + 80) & 8) != 0 )
  {
    v32 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 160LL);
    if ( v32 == CVisual::UpdateOffset )
      v33 = CVisual::UpdateOffset(this);
    else
      v33 = v32(this);
    v1 = v33;
    if ( v33 < 0 )
    {
      v40 = 191;
      goto LABEL_83;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) == 0 )
    goto LABEL_39;
  v38 = CVisual::UpdateTransform(this);
  v1 = v38;
  if ( v38 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x10u;
LABEL_39:
    if ( (*((_BYTE *)this + 80) & 0x20) != 0 )
    {
      v39 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 144LL))(this);
      v1 = v39;
      if ( v39 < 0 )
      {
        v40 = 205;
        v37 = v39;
        goto LABEL_85;
      }
      *((_DWORD *)this + 20) &= ~0x20u;
    }
    if ( (*((_BYTE *)this + 80) & 0x40) == 0 )
      goto LABEL_41;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 392LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            (char *)this + 196);
    v1 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x53Fu);
    if ( v1 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x40u;
      goto LABEL_41;
    }
    v40 = 212;
LABEL_83:
    v37 = v1;
LABEL_85:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, v40);
    goto LABEL_41;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xC6u);
LABEL_41:
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x94u);
    return (unsigned int)v1;
  }
  if ( (*((_BYTE *)this + 80) & 4) == 0 )
    return (unsigned int)v1;
  v25 = *(__int64 (__fastcall **)(CRenderDataVisual *__hidden))(*(_QWORD *)this + 176LL);
  if ( v25 == CRenderDataVisual::UpdateRenderData )
    result = CRenderDataVisual::UpdateRenderData(this);
  else
    result = v25(this);
  v27 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x98u);
    return v27;
  }
  else
  {
    *((_DWORD *)this + 20) &= ~4u;
  }
  return result;
}
