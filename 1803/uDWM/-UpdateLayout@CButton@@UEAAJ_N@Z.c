/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180018A20 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180020C44 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this)
{
  const struct tagSIZE *v2; // rcx
  int v3; // edi
  __int64 v4; // r8
  __int64 (__fastcall *v5)(CVisual *__hidden, const struct tagSIZE *); // rax
  bool v6; // zf
  void (__fastcall *v7)(CThumbnailVisual *, int); // rax
  int v8; // eax
  CVisual *v9; // rsi
  int v10; // ecx
  void (__fastcall *v11)(CVisual *__hidden); // rax
  void (__fastcall *v12)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v13)(CVisual *__hidden, unsigned int); // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  CVisual *v17; // rcx
  void (__fastcall *v18)(CVisual *__hidden, unsigned int); // rax
  CVisual *v20; // rsi
  int v21; // ecx
  void (__fastcall *v22)(CVisual *__hidden); // rax
  int v23; // eax
  __int64 v24; // rcx
  char *v25; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-20h]
  __int16 v27; // [rsp+3Ch] [rbp-1Ch]
  tagSIZE v28; // [rsp+60h] [rbp+8h] BYREF
  struct tagPOINT v29; // [rsp+70h] [rbp+18h] BYREF

  v2 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  v3 = 0;
  if ( v2
    && CVisual::DoCanvasLayout(
         v2 + 15,
         (const struct _MARGINS *)this + 8,
         (const struct tagSIZE *)this + 15,
         &v29,
         &v28) )
  {
    v4 = *(_QWORD *)this;
    v5 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
    if ( v5 == CVisual::SetSize )
    {
      if ( *((_DWORD *)this + 30) != v28.cx || *((_DWORD *)this + 31) != v28.cy )
      {
        v6 = (*((_BYTE *)this + 84) & 1) == 0;
        *((tagSIZE *)this + 15) = v28;
        if ( !v6 )
        {
          (*(void (__fastcall **)(CButton *, __int64))(v4 + 24))(this, 16LL);
          v4 = *(_QWORD *)this;
        }
        v7 = *(void (__fastcall **)(CThumbnailVisual *, int))(v4 + 24);
        if ( (char *)v7 == (char *)CVisual::SetDirtyFlags )
        {
          v8 = *((_DWORD *)this + 20);
          if ( (v8 & 2) == 0 )
          {
            v9 = (CVisual *)*((_QWORD *)this + 3);
            for ( *((_DWORD *)this + 20) = v8 | 2; v9; v9 = (CVisual *)*((_QWORD *)v9 + 3) )
            {
              v10 = *((_DWORD *)v9 + 20);
              if ( (v10 & 1) != 0 )
                break;
              v11 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v9 + 32LL);
              if ( v11 == CVisual::SetDirtyChildren )
                *((_DWORD *)v9 + 20) = v10 | 1;
              else
                v11(v9);
            }
          }
        }
        else if ( v7 == CThumbnailVisual::SetDirtyFlags )
        {
          CThumbnailVisual::SetDirtyFlags(this, 2);
        }
        else
        {
          v7(this, 2);
        }
      }
    }
    else
    {
      v23 = v5(this, &v28);
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x11Cu);
        goto LABEL_21;
      }
    }
    if ( v29.x != *((_DWORD *)this + 28) || v29.y != *((_DWORD *)this + 29) )
    {
      *((struct tagPOINT *)this + 14) = v29;
      v12 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
      if ( v12 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(this, 8u);
      else
        v12(this, 8u);
    }
  }
  v26 = -1;
  v25 = (char *)this + 32;
  v27 = 0;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v25) )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 8LL * v26);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 2LL);
  }
LABEL_21:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x8Bu);
  }
  else
  {
    v13 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v13 == CVisual::SetDirtyFlags )
    {
      v14 = *((_DWORD *)this + 20);
      if ( (v14 & 0x1000) == 0 )
      {
        v20 = (CVisual *)*((_QWORD *)this + 3);
        for ( *((_DWORD *)this + 20) = v14 | 0x1000; v20; v20 = (CVisual *)*((_QWORD *)v20 + 3) )
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
      v13(this, 4096u);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC1u);
  }
  else
  {
    v15 = *((_QWORD *)this + 36);
    if ( *(_DWORD *)(v15 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v15 + 28) != *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v15, 1u, 0x2000u);
      v15 = *((_QWORD *)this + 36);
    }
    if ( *(CButton **)(v15 + 80) == this )
    {
      v28 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v15, (const struct tagPOINT *)&v28);
    }
    else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v15 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v15 + 20) )
    {
      v16 = *((_QWORD *)this + 14);
      *(_DWORD *)(v15 + 96) |= 1u;
      *(_QWORD *)(v15 + 16) = v16;
      v17 = *(CVisual **)(v15 + 80);
      if ( v17 )
      {
        v18 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v17 + 24LL);
        if ( v18 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v17, 0x2000u);
        else
          v18(v17, 0x2000u);
      }
    }
  }
  return (unsigned int)v3;
}
