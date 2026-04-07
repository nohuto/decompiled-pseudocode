/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016110
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x1800162C0 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180014E24 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180014E60 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180020944 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this)
{
  const struct tagSIZE *v2; // rcx
  int v3; // edi
  __int64 (__fastcall *v4)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v5; // eax
  void (__fastcall *v6)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v7)(CVisual *__hidden, unsigned int); // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  CVisual *v11; // rcx
  void (__fastcall *v12)(CVisual *__hidden, unsigned int); // rax
  __int64 v14; // rcx
  char *v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-10h]
  __int16 v17; // [rsp+3Ch] [rbp-Ch]
  tagSIZE v18; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v19; // [rsp+60h] [rbp+18h] BYREF

  v2 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  v3 = 0;
  if ( !v2
    || !CVisual::DoCanvasLayout(
          v2 + 15,
          (const struct _MARGINS *)this + 8,
          (const struct tagSIZE *)this + 15,
          &v19,
          &v18) )
  {
LABEL_9:
    v16 = -1;
    v15 = (char *)this + 32;
    v17 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v15) )
    {
      v14 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 8LL * v16);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 2LL);
    }
    goto LABEL_11;
  }
  v4 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
  if ( v4 == CVisual::SetSize )
    v5 = CVisual::SetSize(this, &v18);
  else
    v5 = v4(this, &v18);
  v3 = v5;
  if ( v5 >= 0 )
  {
    if ( v19.x != *((_DWORD *)this + 28) || v19.y != *((_DWORD *)this + 29) )
    {
      *((struct tagPOINT *)this + 14) = v19;
      v6 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
      if ( v6 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(this, 8u);
      else
        v6(this, 8u);
    }
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x160u);
LABEL_11:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC6u);
  }
  else
  {
    v7 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v7 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v7(this, 4096u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC1u);
  }
  else
  {
    v8 = *((_QWORD *)this + 36);
    if ( *(_DWORD *)(v8 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v8 + 28) != *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v8, 1u, 0x2000u);
    }
    v9 = *((_QWORD *)this + 36);
    if ( *(CButton **)(v9 + 80) == this )
    {
      v18 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v9, (const struct tagPOINT *)&v18);
    }
    else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v9 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v9 + 20) )
    {
      v10 = *((_QWORD *)this + 14);
      *(_DWORD *)(v9 + 96) |= 1u;
      *(_QWORD *)(v9 + 16) = v10;
      v11 = *(CVisual **)(v9 + 80);
      if ( v11 )
      {
        v12 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v11 + 24LL);
        if ( v12 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v11, 0x2000u);
        else
          v12(v11, 0x2000u);
      }
    }
  }
  return (unsigned int)v3;
}
