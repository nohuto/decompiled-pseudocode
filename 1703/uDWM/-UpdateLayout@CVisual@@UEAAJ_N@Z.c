/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180023C30
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x18001BC10 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x18001B7F0 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18001EBD4 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this, char a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned int v6; // esi
  unsigned int v7; // r8d
  int v8; // r9d
  int v9; // edx
  struct tagSIZE v10; // rax
  int v11; // r14d
  unsigned int v12; // eax
  __int64 (__fastcall *v13)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v14; // eax
  void (__fastcall *v16)(CVisual *, int); // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  char *v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-8h]
  __int16 v21; // [rsp+3Ch] [rbp-4h]
  struct tagSIZE v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+80h] [rbp+40h]

  v3 = 0;
  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    goto LABEL_19;
  v6 = *((_DWORD *)this + 32);
  v7 = *((_DWORD *)this + 33);
  v8 = *((_DWORD *)this + 35);
  v9 = *((_DWORD *)this + 34);
  if ( __PAIR64__(v7, v6) == 0x7FFFFFFF7FFFFFFFLL && v9 == 0x7FFFFFFF && v8 == 0x7FFFFFFF )
    goto LABEL_19;
  v10 = (struct tagSIZE)*((_QWORD *)this + 15);
  v11 = 0;
  v22 = v10;
  HIDWORD(v23) = 0;
  if ( v7 == 0x7FFFFFFF )
  {
    v17 = 0;
    if ( v6 != 0x7FFFFFFF )
      v17 = v6;
    v6 = v17;
    LODWORD(v23) = v17;
  }
  else if ( v6 == 0x7FFFFFFF )
  {
    v6 = *(_DWORD *)(v4 + 120) - v10.cx - v7;
    LODWORD(v23) = v6;
  }
  else
  {
    v12 = *(_DWORD *)(v4 + 120) - v7;
    LODWORD(v23) = v6;
    v22.cx = v12 - v6;
  }
  if ( v8 == 0x7FFFFFFF )
  {
    if ( v9 == 0x7FFFFFFF )
      goto LABEL_10;
  }
  else
  {
    if ( v9 == 0x7FFFFFFF )
    {
      v11 = *(_DWORD *)(v4 + 124) - *((_DWORD *)this + 31) - v8;
      HIDWORD(v23) = v11;
      goto LABEL_10;
    }
    v22.cy = *(_DWORD *)(v4 + 124) - v9 - v8;
  }
  HIDWORD(v23) = v9;
  v11 = v9;
LABEL_10:
  if ( v22.cx <= 0 )
    v22.cx = 0;
  if ( v22.cy <= 0 )
    v22.cy = 0;
  v13 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
  if ( v13 == CVisual::SetSize )
  {
    v14 = CVisual::SetSize((struct tagSIZE *)this, &v22);
  }
  else if ( (char *)v13 == (char *)CText::SetSize )
  {
    v14 = CText::SetSize(this, &v22);
  }
  else
  {
    v14 = v13((struct tagSIZE *)this, &v22);
  }
  v3 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x160u);
    return v3;
  }
  if ( v6 != *((_DWORD *)this + 28) || v11 != *((_DWORD *)this + 29) )
  {
    *((_QWORD *)this + 14) = v23;
    v16 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    if ( v16 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 8);
    else
      v16(this, 8);
  }
LABEL_19:
  if ( a2 )
  {
    v20 = -1;
    v19 = (char *)this + 32;
    v21 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v19) )
    {
      v18 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 8LL * v20);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, 2LL);
    }
  }
  return v3;
}
