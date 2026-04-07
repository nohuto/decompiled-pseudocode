/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023690
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 * Callees:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x1800053E8 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@_N11@Z @ 0x18000F8D0 (-ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@_N11@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180023B44 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037200 (-Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(
        CAtlasedRectsVisual *this,
        struct CVisual **a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5)
{
  unsigned __int8 v7; // bp
  int v9; // eax
  int v10; // esi
  CVisual *v11; // rbx
  int v12; // eax
  const struct _MARGINS *v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r14
  const struct CAtlasedImage *v16; // rdx
  char (__fastcall *v17)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *, char, __int64, bool); // rax
  char ShouldCloneAtlasImage; // al
  __int64 v19; // rsi
  void *(__fastcall *v20)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v21; // rax
  _DWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int128 v32; // xmm0
  __int64 v33; // rcx
  const RECT *v34; // rsi
  __int64 v35; // rcx
  int v36; // eax
  int v37; // esi
  __int64 v38; // rax
  CBaseObject *v39; // rcx
  volatile signed __int32 *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r9
  _QWORD *v50; // rdx
  _QWORD *v51; // r8
  CVisual *v52; // rcx
  void (__fastcall *v53)(CVisual *__hidden, unsigned int); // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // [rsp+20h] [rbp-68h]
  CVisual *v60; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v61; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v62; // [rsp+40h] [rbp-48h] BYREF
  CBaseObject *v63; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v60 = 0LL;
  v63 = 0LL;
  v7 = a3;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v60);
  v9 = CAtlasedRectsVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v60);
  v10 = v9;
  if ( v9 < 0 )
  {
    v56 = (unsigned int)v9;
    v57 = 275LL;
    goto LABEL_81;
  }
  v11 = v60;
  *a2 = v60;
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v11 = v60;
  }
  v12 = CVisual::CloneVisualTree(this, a2, 0, 0, 1);
  v10 = v12;
  if ( v12 < 0 )
  {
    v56 = (unsigned int)v12;
    v57 = 279LL;
    goto LABEL_81;
  }
  v13 = (const struct _MARGINS *)*((_QWORD *)this + 34);
  if ( v13 )
    CAtlasedRectsVisual::SetClipMargins(v11, v13);
  v14 = 0LL;
  if ( !*((_DWORD *)this + 66) )
  {
LABEL_52:
    v10 = 0;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v15 = 8 * v14;
    v16 = *(const struct CAtlasedImage **)(8 * v14 + *((_QWORD *)this + 30));
    v17 = *(char (__fastcall **)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *, char, __int64, bool))(*(_QWORD *)this + 192LL);
    if ( v17 == CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage )
    {
      ShouldCloneAtlasImage = CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage(this, v16, v7, a4, a5);
    }
    else
    {
      LOBYTE(v59) = a5;
      ShouldCloneAtlasImage = v17(this, v16, v7, a4, v59);
    }
    if ( !ShouldCloneAtlasImage )
      goto LABEL_51;
    v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v20 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v21 = v20 == WPF::ProcessHeapImpl::AllocClear
        ? WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL)
        : (_DWORD *)v20(WPF::g_pProcessHeap, 136LL);
    v22 = v21;
    if ( !v21 )
      break;
    v21[2] = 1;
    *(_QWORD *)v21 = &CAtlasedImage::`vftable';
    *((_QWORD *)v21 + 9) = 0LL;
    *((_QWORD *)v21 + 11) = 0LL;
    v21[8] = 0x7FFFFFFF;
    v21[10] = 0x7FFFFFFF;
    v21[9] = 0x7FFFFFFF;
    v21[11] = 0x7FFFFFFF;
    v21[13] = 0x80000000;
    v21[12] = 0x80000000;
    v21[15] = 0x7FFFFFFF;
    v21[14] = 0x7FFFFFFF;
    v21[17] = -1;
    v21[33] = 22;
    *((_QWORD *)v21 + 13) = v19;
    v23 = *((_QWORD *)this + 30);
    v63 = (CBaseObject *)v22;
    v24 = *(_QWORD *)(v15 + v23);
    if ( *(_DWORD *)(v24 + 16) != v22[4] || *(_DWORD *)(v24 + 20) != v22[5] )
    {
      v25 = *(_QWORD *)(v24 + 16);
      v22[24] |= 1u;
      v26 = *((_QWORD *)v22 + 10);
      *((_QWORD *)v22 + 2) = v25;
      if ( v26 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, 0x2000LL);
    }
    v27 = *(_QWORD *)(v15 + *((_QWORD *)this + 30));
    if ( v22[6] != *(_DWORD *)(v27 + 24) || v22[7] != *(_DWORD *)(v27 + 28) )
    {
      v28 = *(_QWORD *)(v27 + 24);
      v22[24] |= 1u;
      v29 = *((_QWORD *)v22 + 10);
      *((_QWORD *)v22 + 3) = v28;
      if ( v29 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, 0x2000LL);
    }
    v30 = *(_QWORD *)(v15 + *((_QWORD *)this + 30));
    if ( v22[8] != *(_DWORD *)(v30 + 32)
      || v22[9] != *(_DWORD *)(v30 + 36)
      || v22[10] != *(_DWORD *)(v30 + 40)
      || v22[11] != *(_DWORD *)(v30 + 44) )
    {
      v32 = *(_OWORD *)(v30 + 32);
      v22[24] |= 1u;
      v33 = *((_QWORD *)v22 + 10);
      *((_OWORD *)v22 + 2) = v32;
      if ( v33 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, 4096LL);
    }
    v34 = *(const RECT **)(v15 + *((_QWORD *)this + 30));
    if ( !EqualRect((const RECT *)v22 + 3, v34 + 3) )
    {
      *((RECT *)v22 + 3) = v34[3];
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v22, 1, 0x2000u);
    }
    v35 = *((_QWORD *)this + 30);
    v36 = *(_DWORD *)(*(_QWORD *)(v15 + v35) + 64LL);
    if ( v22[16] != v36 )
    {
      v22[16] = v36;
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v22, 1, 0x2000u);
      v35 = *((_QWORD *)this + 30);
    }
    v37 = *(_DWORD *)(*(_QWORD *)(v15 + v35) + 68LL);
    if ( v37 != v22[17] )
    {
      v22[24] |= 2u;
      v55 = *((_QWORD *)v22 + 10);
      if ( v55 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 24LL))(v55, 0x2000LL);
      v22[17] = v37;
      v35 = *((_QWORD *)this + 30);
    }
    v38 = *(_QWORD *)(v15 + v35);
    v39 = (CBaseObject *)*((_QWORD *)v22 + 9);
    v40 = *(volatile signed __int32 **)(v38 + 72);
    if ( v39 != (CBaseObject *)v40 )
    {
      if ( v39 )
        CBaseObject::Release(v39);
      *((_QWORD *)v22 + 9) = v40;
      if ( v40 )
      {
        _InterlockedIncrement(v40 + 2);
        v11 = v60;
      }
      v22[24] |= 1u;
      v41 = *((_QWORD *)v22 + 10);
      if ( v41 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 24LL))(v41, 0x2000LL);
    }
    v42 = *((_QWORD *)this + 30);
    v43 = *(_QWORD *)(v15 + v42);
    if ( *(_BYTE *)(v43 + 128) )
    {
      CAtlasedImage::SetMarginClip((CAtlasedImage *)v22, (struct tagRECT *)(v43 + 112));
      v42 = *((_QWORD *)this + 30);
    }
    v44 = *(_QWORD *)(v15 + v42);
    v62 = v22;
    v22[33] = *(_DWORD *)(v44 + 132);
    v45 = *((unsigned int *)v11 + 66);
    v46 = (__int64)v11 + 240;
    if ( (unsigned int)v45 > *(_DWORD *)(v46 + 24) )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
    }
    else
    {
      v61 = &v62;
      v47 = DynArrayImpl<0>::Grow(v46, 8u, 1, 0, (unsigned __int64 *)&v61);
      v10 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x1CDu);
      }
      else
      {
        v48 = *(unsigned int *)(v46 + 24);
        v49 = *(_QWORD *)v46;
        *(_DWORD *)(v46 + 24) = v48 + 1;
        if ( (unsigned int)v48 > (unsigned int)v45 )
        {
          v58 = v49 + 8 * v48;
          do
          {
            v48 = (unsigned int)(v48 - 1);
            v58 -= 8LL;
            *(_QWORD *)(v58 + 8) = *(_QWORD *)(v49 + 8 * v48);
          }
          while ( (unsigned int)v48 > (unsigned int)v45 );
        }
        v50 = v61;
        v51 = (_QWORD *)(v49 + 8 * v45);
        if ( v61 >= v51 && (unsigned __int64)v61 < v49 + 8 * ((unsigned __int64)*(unsigned int *)(v46 + 24) - 1) )
          v50 = ++v61;
        *v51 = *v50;
      }
      if ( v10 >= 0 )
      {
        _InterlockedIncrement(v62 + 2);
        v52 = v60;
        *((_QWORD *)v62 + 10) = v60;
        v53 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v52 + 24LL);
        if ( v53 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v52, 0x2000u);
        else
          v53(v52, 0x2000u);
        goto LABEL_47;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4Du);
LABEL_47:
    if ( v10 < 0 )
    {
      v57 = 313LL;
      goto LABEL_80;
    }
    v63 = 0LL;
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(_DWORD *, __int64))v22)(v22, 1LL);
    v7 = a3;
    v11 = v60;
LABEL_51:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *((_DWORD *)this + 66) )
      goto LABEL_52;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA5u);
  v57 = 296LL;
LABEL_80:
  v56 = (unsigned int)v10;
LABEL_81:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v57,
    (unsigned int)"windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)v56,
    v59);
  if ( v63 )
    CBaseObject::Release(v63);
LABEL_53:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v60);
  return (unsigned int)v10;
}
