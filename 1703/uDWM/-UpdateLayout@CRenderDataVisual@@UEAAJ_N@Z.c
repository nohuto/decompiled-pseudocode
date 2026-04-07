/*
 * XREFs of ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x18001F620
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18001EBD4 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateLayout(CRenderDataVisual *this, char a2)
{
  __int64 v2; // r8
  int v5; // esi
  int v6; // r14d
  unsigned int v7; // edx
  int v8; // r9d
  int v9; // edi
  struct tagSIZE v10; // rax
  int v11; // eax
  int cx; // ecx
  int v13; // eax
  int cy; // eax
  __int64 (__fastcall *v15)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v16; // eax
  void (__fastcall *v17)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // rax
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  char *v23; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-8h]
  __int16 v25; // [rsp+3Ch] [rbp-4h]
  struct tagSIZE v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h]

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( !v2 )
    goto LABEL_22;
  v6 = *((_DWORD *)this + 32);
  v7 = *((_DWORD *)this + 33);
  v8 = *((_DWORD *)this + 35);
  v9 = *((_DWORD *)this + 34);
  if ( __PAIR64__(v7, v6) == 0x7FFFFFFF7FFFFFFFLL && v9 == 0x7FFFFFFF && v8 == 0x7FFFFFFF )
    goto LABEL_22;
  v10 = (struct tagSIZE)*((_QWORD *)this + 15);
  v26 = v10;
  if ( v7 == 0x7FFFFFFF )
  {
    v11 = 0;
    if ( v6 != 0x7FFFFFFF )
      v11 = v6;
    v6 = v11;
    LODWORD(v27) = v11;
    goto LABEL_7;
  }
  if ( v6 == 0x7FFFFFFF )
  {
    v6 = *(_DWORD *)(v2 + 120) - v7 - v10.cx;
    LODWORD(v27) = v6;
LABEL_7:
    cx = v26.cx;
    goto LABEL_8;
  }
  v20 = *(_DWORD *)(v2 + 120) - v7;
  LODWORD(v27) = v6;
  cx = v20 - v6;
LABEL_8:
  if ( v8 == 0x7FFFFFFF )
  {
    v13 = 0;
    if ( v9 != 0x7FFFFFFF )
      v13 = v9;
    v9 = v13;
    HIDWORD(v27) = v13;
  }
  else
  {
    if ( v9 != 0x7FFFFFFF )
    {
      v21 = *(_DWORD *)(v2 + 124) - v9;
      HIDWORD(v27) = v9;
      cy = v21 - v8;
      goto LABEL_13;
    }
    v9 = *(_DWORD *)(v2 + 124) - *((_DWORD *)this + 31) - v8;
    HIDWORD(v27) = v9;
  }
  cy = v26.cy;
LABEL_13:
  if ( cx <= 0 )
    cx = 0;
  v26.cx = cx;
  if ( cy <= 0 )
    cy = 0;
  v26.cy = cy;
  v15 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
  if ( v15 == CVisual::SetSize )
    v16 = CVisual::SetSize(this, &v26);
  else
    v16 = v15(this, &v26);
  v5 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x160u);
    goto LABEL_23;
  }
  if ( v6 != *((_DWORD *)this + 28) || v9 != *((_DWORD *)this + 29) )
  {
    *((_QWORD *)this + 14) = v27;
    v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v19 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 8u);
    else
      v19(this, 8u);
  }
LABEL_22:
  if ( a2 )
  {
    v24 = -1;
    v23 = (char *)this + 32;
    v25 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v23) )
    {
      v22 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 8LL * v24);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 2LL);
    }
  }
LABEL_23:
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x51u);
  }
  else
  {
    v17 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v17 == CVisual::SetDirtyFlags )
    {
      CVisual::SetDirtyFlags(this, 4u);
    }
    else if ( v17 == CThumbnailVisual::SetDirtyFlags )
    {
      CThumbnailVisual::SetDirtyFlags(this, 4u);
    }
    else
    {
      v17(this, 4u);
    }
  }
  return (unsigned int)v5;
}
