/*
 * XREFs of ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18014B010
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FBA0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9558 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::AddOrArrangeChild(
        CCoRenderVisualProxy *this,
        struct IDWMCoRenderVisualProxy *a2,
        struct IDWMCoRenderVisualProxy *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 *v8; // rsi
  __int64 v9; // r9
  int i; // r10d
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  unsigned int v13; // edi
  __int64 v14; // rbx
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // r10
  bool v18; // al
  int v19; // r9d
  unsigned __int64 v20; // rax
  int v21; // r9d
  int inserted; // eax
  unsigned int v24; // [rsp+20h] [rbp-28h]

  v4 = *((_QWORD *)this + 3);
  v8 = (__int64 *)(v4 + 72);
  if ( a3 )
  {
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
      v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v9) = v9 & 1;
    for ( i = 0; i < (int)v9; ++i )
    {
      v11 = CPtrArrayBase::operator[]((__int64 *)(v4 + 72), i);
      if ( v11 == v12 )
        break;
    }
    if ( i >= (int)v9 )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xC7u);
      return v13;
    }
    LODWORD(v14) = i + 1;
    if ( !a4 )
      LODWORD(v14) = i;
  }
  else if ( a4 )
  {
    LODWORD(v14) = 0;
  }
  else
  {
    v14 = *v8;
    if ( (*v8 & 2) != 0 )
      v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v14) = v14 & 1;
  }
  v15 = v14;
  if ( !a4 )
    v15 = v14 - 1;
  if ( v15 >= 0 )
  {
    v16 = *v8;
    if ( (*v8 & 2) != 0 )
      v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v16) = v16 & 1;
    if ( v15 < (int)v16 && CPtrArrayBase::operator[]((__int64 *)(v4 + 72), v15) == *((_QWORD *)a2 + 3) )
      LODWORD(v14) = -1;
  }
  v13 = 0;
  if ( (int)v14 >= 0 )
  {
    v17 = *((_QWORD *)a2 + 3);
    v18 = 0;
    if ( *(_QWORD *)(v17 + 80) == v4 )
    {
      v19 = 0;
      if ( (int)v14 > 0 )
      {
        while ( 1 )
        {
          v20 = CPtrArrayBase::operator[]((__int64 *)(v4 + 72), v19);
          if ( v20 == v17 )
            break;
          v19 = v21 + 1;
          if ( v19 >= (int)v14 )
            goto LABEL_34;
        }
        LODWORD(v14) = v14 - 1;
      }
LABEL_34:
      v18 = CPtrArrayBase::Remove((CPtrArrayBase *)(v4 + 72), v17);
      v17 = *((_QWORD *)a2 + 3);
    }
    if ( v18 )
    {
      inserted = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v4 + 72), v17, (int)v14);
      v13 = inserted;
      if ( inserted >= 0 )
        return v13;
      v24 = 257;
LABEL_42:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v24);
      return v13;
    }
    inserted = CVisual::InsertChildAt(*((CComposition ***)this + 3), (CComposition ***)v17, v14, 0);
    v13 = inserted;
    if ( inserted < 0 )
    {
      v24 = 261;
      goto LABEL_42;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 232LL))(*((_QWORD *)a2 + 3)) != 7 )
    {
      *(_BYTE *)(*((_QWORD *)a2 + 3) + 94LL) |= 1u;
      CVisual::PropagateFlags(*((_QWORD *)a2 + 3), 1u, 0);
    }
  }
  return v13;
}
