/*
 * XREFs of ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18013FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BBD9C (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800BBE48 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::AddOrArrangeChild(
        CCoRenderVisualProxy *this,
        struct IDWMCoRenderVisualProxy *a2,
        struct IDWMCoRenderVisualProxy *a3,
        char a4)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  char v6; // r10
  __int64 *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // r11
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r10
  int v18; // r9d
  unsigned __int64 v19; // rax
  int v20; // r9d
  int inserted; // eax
  unsigned int v23; // [rsp+20h] [rbp-38h]

  v4 = *((_QWORD *)this + 3);
  v5 = 0;
  v6 = a4;
  v9 = (__int64 *)(v4 + 72);
  if ( a3 )
  {
    v10 = *v9;
    if ( (*v9 & 2) != 0 )
      v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v10) = v10 & 1;
    LODWORD(v11) = 0;
    if ( (int)v10 <= 0 )
      goto LABEL_11;
    do
    {
      v12 = CPtrArrayBase::operator[]((__int64 *)(v4 + 72), (int)v11);
      if ( v12 == v14 )
        break;
      LODWORD(v11) = v11 + 1;
    }
    while ( (int)v11 < v13 );
    if ( (int)v11 >= v13 )
    {
LABEL_11:
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC7u);
      return v5;
    }
    if ( !v6 )
      goto LABEL_18;
    LODWORD(v11) = v11 + 1;
  }
  else if ( a4 )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    v11 = *v9;
    if ( (*v9 & 2) != 0 )
      v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v11) = v11 & 1;
  }
  v15 = v11;
  if ( !v6 )
LABEL_18:
    v15 = v11 - 1;
  if ( v15 >= 0 )
  {
    v16 = *v9;
    if ( (*v9 & 2) != 0 )
      v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v16) = v16 & 1;
    if ( v15 < (int)v16 && CPtrArrayBase::operator[]((__int64 *)(v4 + 72), v15) == *((_QWORD *)a2 + 3) )
      LODWORD(v11) = -1;
  }
  if ( (int)v11 >= 0 )
  {
    v17 = *((_QWORD *)a2 + 3);
    if ( *(_QWORD *)(v17 + 80) != v4 )
      goto LABEL_36;
    v18 = 0;
    if ( (int)v11 > 0 )
    {
      while ( 1 )
      {
        v19 = CPtrArrayBase::operator[]((__int64 *)(v4 + 72), v18);
        if ( v19 == v17 )
          break;
        v18 = v20 + 1;
        if ( v18 >= (int)v11 )
          goto LABEL_33;
      }
      LODWORD(v11) = v11 - 1;
    }
LABEL_33:
    if ( CPtrArrayBase::Remove((CPtrArrayBase *)(v4 + 72), v17) )
    {
      inserted = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v4 + 72), *((_QWORD *)a2 + 3), (int)v11);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v23 = 257;
LABEL_40:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v23);
      }
    }
    else
    {
LABEL_36:
      inserted = CVisual::InsertChildAt(*((CVisual **)this + 3), *((struct CProcessAttribution ***)a2 + 3), v11, 0);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v23 = 261;
        goto LABEL_40;
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 192LL))(*((_QWORD *)a2 + 3)) != 7 )
      {
        *(_BYTE *)(*((_QWORD *)a2 + 3) + 90LL) |= 0x10u;
        CVisual::PropagateFlags(*((struct CVisual **)a2 + 3), 1, 0, 0, 0, 0, 0, 0);
      }
    }
  }
  return v5;
}
