/*
 * XREFs of ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180018280
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180026760 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateLayout(CRenderDataVisual *this, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  int v6; // ecx
  int v7; // r15d
  unsigned __int64 v8; // r8
  int v9; // r14d
  __int64 (__fastcall *v10)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v11; // eax
  void (__fastcall *v12)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v14)(CVisual *__hidden, unsigned int); // rax
  int v15; // r15d
  int v16; // r14d
  __int64 v17; // rcx
  char *v18; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-10h]
  __int16 v20; // [rsp+3Ch] [rbp-Ch]
  __int64 v21; // [rsp+70h] [rbp+28h]
  struct tagSIZE v22; // [rsp+80h] [rbp+38h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( !v2 )
    goto LABEL_19;
  v6 = *((_DWORD *)this + 32);
  if ( v6 == 0x7FFFFFFF
    && *((_DWORD *)this + 33) == 0x7FFFFFFF
    && *((_DWORD *)this + 34) == 0x7FFFFFFF
    && *((_DWORD *)this + 35) == 0x7FFFFFFF )
  {
    goto LABEL_19;
  }
  v7 = 0;
  v22 = (struct tagSIZE)*((_QWORD *)this + 15);
  v8 = HIDWORD(*(unsigned __int64 *)&v22);
  v9 = 0;
  v21 = 0LL;
  if ( *((_DWORD *)this + 33) == 0x7FFFFFFF )
  {
    if ( v6 == 0x7FFFFFFF )
      goto LABEL_6;
    goto LABEL_5;
  }
  v15 = *(_DWORD *)(v2 + 120);
  if ( v6 != 0x7FFFFFFF )
  {
    v22.cx = v15 - *((_DWORD *)this + 33) - v6;
LABEL_5:
    LODWORD(v21) = v6;
    v7 = v6;
    goto LABEL_6;
  }
  v7 = v15 - v22.cx - *((_DWORD *)this + 33);
  LODWORD(v21) = v7;
LABEL_6:
  if ( *((_DWORD *)this + 35) != 0x7FFFFFFF )
  {
    v16 = *(_DWORD *)(v2 + 124);
    if ( *((_DWORD *)this + 34) == 0x7FFFFFFF )
    {
      v9 = v16 - v8 - *((_DWORD *)this + 35);
      goto LABEL_9;
    }
    v22.cy = v16 - *((_DWORD *)this + 34) - *((_DWORD *)this + 35);
LABEL_8:
    v9 = *((_DWORD *)this + 34);
LABEL_9:
    HIDWORD(v21) = v9;
    goto LABEL_10;
  }
  if ( *((_DWORD *)this + 34) != 0x7FFFFFFF )
    goto LABEL_8;
LABEL_10:
  if ( v22.cx <= 0 )
    v22.cx = 0;
  if ( v22.cy <= 0 )
    v22.cy = 0;
  v10 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
  if ( v10 == CVisual::SetSize )
    v11 = CVisual::SetSize(this, &v22);
  else
    v11 = ((__int64 (__fastcall *)(CRenderDataVisual *, struct tagSIZE *, unsigned __int64))v10)(this, &v22, v8);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x11Cu);
    goto LABEL_20;
  }
  if ( v7 != *((_DWORD *)this + 28) || v9 != *((_DWORD *)this + 29) )
  {
    *((_QWORD *)this + 14) = v21;
    v14 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v14 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 8u);
    else
      v14(this, 8u);
  }
LABEL_19:
  if ( a2 )
  {
    v19 = -1;
    v18 = (char *)this + 32;
    v20 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v18) )
    {
      v17 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 8LL * v19);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 2LL);
    }
  }
LABEL_20:
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x51u);
    return v3;
  }
  v12 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v12 == CVisual::SetDirtyFlags )
  {
    CVisual::SetDirtyFlags(this, 4u);
    return v3;
  }
  if ( (char *)v12 != (char *)CThumbnailVisual::SetDirtyFlags )
  {
    v12(this, 4u);
    return v3;
  }
  CThumbnailVisual::SetDirtyFlags(this, 4);
  return v3;
}
