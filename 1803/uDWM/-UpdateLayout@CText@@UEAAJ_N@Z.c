/*
 * XREFs of ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x1800146B0
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180026760 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180014290 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800148B0 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::UpdateLayout(CText *this, char a2)
{
  __int64 v2; // r8
  int v3; // edi
  unsigned int v6; // r14d
  unsigned int v7; // edx
  int v8; // r9d
  int v9; // ecx
  int v10; // esi
  unsigned __int64 v11; // r11
  int v12; // eax
  __int64 (__fastcall *v13)(CText *, const struct tagSIZE *); // rax
  int v14; // eax
  void (__fastcall *v15)(CVisual *__hidden, unsigned int); // rax
  int v16; // eax
  unsigned int v17; // ebx
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // rax
  unsigned int v20; // eax
  int v21; // esi
  __int64 v22; // rcx
  char *v23; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-18h]
  __int16 v25; // [rsp+3Ch] [rbp-14h]
  struct tagSIZE v26; // [rsp+70h] [rbp+20h] BYREF
  __int64 v27; // [rsp+80h] [rbp+30h]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( !v2 )
    goto LABEL_18;
  v6 = *((_DWORD *)this + 32);
  v7 = *((_DWORD *)this + 33);
  v8 = *((_DWORD *)this + 35);
  v9 = *((_DWORD *)this + 34);
  if ( __PAIR64__(v7, v6) == 0x7FFFFFFF7FFFFFFFLL && v9 == 0x7FFFFFFF && v8 == 0x7FFFFFFF )
    goto LABEL_18;
  v10 = 0;
  v26 = (struct tagSIZE)*((_QWORD *)this + 15);
  v11 = HIDWORD(*(unsigned __int64 *)&v26);
  HIDWORD(v27) = 0;
  if ( v7 == 0x7FFFFFFF )
  {
    v20 = 0;
    if ( v6 != 0x7FFFFFFF )
      v20 = v6;
    v6 = v20;
    LODWORD(v27) = v20;
  }
  else
  {
    v12 = *(_DWORD *)(v2 + 120);
    if ( v6 == 0x7FFFFFFF )
    {
      v6 = v12 - v26.cx - v7;
      LODWORD(v27) = v6;
    }
    else
    {
      LODWORD(v27) = v6;
      v26.cx = v12 - v7 - v6;
    }
  }
  if ( v8 != 0x7FFFFFFF )
  {
    v21 = *(_DWORD *)(v2 + 124);
    if ( v9 == 0x7FFFFFFF )
    {
      v10 = v21 - v11 - v8;
      HIDWORD(v27) = v10;
      goto LABEL_9;
    }
    v26.cy = v21 - v9 - v8;
    goto LABEL_8;
  }
  if ( v9 != 0x7FFFFFFF )
  {
LABEL_8:
    HIDWORD(v27) = v9;
    v10 = v9;
  }
LABEL_9:
  if ( v26.cx <= 0 )
    v26.cx = 0;
  if ( v26.cy <= 0 )
    v26.cy = 0;
  v13 = *(__int64 (__fastcall **)(CText *, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
  if ( v13 == CText::SetSize )
    v14 = CText::SetSize(this, &v26);
  else
    v14 = v13(this, &v26);
  v3 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x11Cu);
    goto LABEL_19;
  }
  if ( v6 != *((_DWORD *)this + 28) || v10 != *((_DWORD *)this + 29) )
  {
    *((_QWORD *)this + 14) = v27;
    v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v19 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 8u);
    else
      v19(this, 8u);
  }
LABEL_18:
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
LABEL_19:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x51u);
  }
  else
  {
    v15 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v15 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 4u);
    else
      v15(this, 4u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1B9u);
    return (unsigned int)v3;
  }
  else
  {
    v16 = CText::ValidateResources(this);
    v17 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1BAu);
    return v17;
  }
}
