/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800233A0
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018840 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 * Callees:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x18000ACA8 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18000AE44 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018840 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020A50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@_N11@Z @ 0x1800309A0 (-ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@_N11@Z.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180034EC4 (-Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(
        CAtlasedRectsVisual *this,
        struct CVisual **a2,
        bool a3,
        bool a4,
        bool a5)
{
  bool v6; // bp
  struct IDwmChannel *v8; // rcx
  bool v9; // di
  int v10; // eax
  int v11; // r15d
  CVisual *v12; // r12
  int v13; // eax
  const struct _MARGINS *v14; // rdx
  __int64 i; // r13
  __int64 v16; // r14
  const struct CAtlasedImage *v17; // rdx
  bool (__fastcall *v18)(CTopLevelAtlasedRectsVisual *__hidden, const struct CAtlasedImage *, bool, bool, bool); // rax
  bool ShouldCloneAtlasImage; // al
  __int64 v20; // rdi
  void *(__fastcall *v21)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int128 v32; // xmm0
  __int64 v33; // rcx
  const RECT *v34; // rdi
  int v35; // eax
  int v36; // edi
  volatile signed __int32 *v37; // rdi
  CBaseObject *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbp
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r9
  _QWORD *v46; // rdx
  _QWORD *v47; // r8
  void (__fastcall *v48)(CVisual *, int); // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  BOOL v52; // [rsp+20h] [rbp-68h]
  CVisual *v53; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v54; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v55; // [rsp+40h] [rbp-48h] BYREF

  v6 = a3;
  v8 = *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL);
  v9 = a4;
  v53 = 0LL;
  v10 = CAtlasedRectsVisual::Create(v8, &v53);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x163u);
    v12 = v53;
    goto LABEL_51;
  }
  v12 = v53;
  *a2 = v53;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    v12 = v53;
  }
  v13 = CVisual::CloneVisualTree(this, a2);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x167u);
    goto LABEL_51;
  }
  v14 = (const struct _MARGINS *)*((_QWORD *)this + 34);
  if ( v14 )
    CAtlasedRectsVisual::SetClipMargins(v12, v14);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
  {
    v16 = 8 * i;
    v17 = *(const struct CAtlasedImage **)(8 * i + *((_QWORD *)this + 30));
    v18 = *(bool (__fastcall **)(CTopLevelAtlasedRectsVisual *__hidden, const struct CAtlasedImage *, bool, bool, bool))(*(_QWORD *)this + 192LL);
    if ( v18 == CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage )
    {
      ShouldCloneAtlasImage = CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage(this, v17, v6, v9, a5);
    }
    else
    {
      LOBYTE(v52) = a5;
      ShouldCloneAtlasImage = v18(this, v17, v6, v9, v52);
    }
    if ( ShouldCloneAtlasImage )
    {
      v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v21 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v21 == WPF::ProcessHeapImpl::AllocClear )
        v22 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL);
      else
        v22 = (_DWORD *)v21(WPF::g_pProcessHeap, 136LL);
      v23 = v22;
      if ( !v22 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA5u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x178u);
        break;
      }
      v22[2] = 1;
      *(_QWORD *)v22 = &CAtlasedImage::`vftable';
      *((_QWORD *)v22 + 9) = 0LL;
      *((_QWORD *)v22 + 11) = 0LL;
      v22[8] = 0x7FFFFFFF;
      v22[10] = 0x7FFFFFFF;
      v22[9] = 0x7FFFFFFF;
      v22[11] = 0x7FFFFFFF;
      v22[13] = 0x80000000;
      v22[12] = 0x80000000;
      v22[15] = 0x7FFFFFFF;
      v22[14] = 0x7FFFFFFF;
      v22[17] = -1;
      v22[33] = 22;
      *((_QWORD *)v22 + 13) = v20;
      v24 = *(_QWORD *)(v16 + *((_QWORD *)this + 30));
      if ( *(_DWORD *)(v24 + 16) != v22[4] || *(_DWORD *)(v24 + 20) != v22[5] )
      {
        v25 = *(_QWORD *)(v24 + 16);
        v23[24] |= 1u;
        v26 = *((_QWORD *)v23 + 10);
        *((_QWORD *)v23 + 2) = v25;
        if ( v26 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, 0x2000LL);
      }
      v27 = *(_QWORD *)(v16 + *((_QWORD *)this + 30));
      if ( v23[6] != *(_DWORD *)(v27 + 24) || v23[7] != *(_DWORD *)(v27 + 28) )
      {
        v28 = *(_QWORD *)(v27 + 24);
        v23[24] |= 1u;
        v29 = *((_QWORD *)v23 + 10);
        *((_QWORD *)v23 + 3) = v28;
        if ( v29 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, 0x2000LL);
      }
      v30 = *(_QWORD *)(v16 + *((_QWORD *)this + 30));
      if ( v23[8] != *(_DWORD *)(v30 + 32)
        || v23[9] != *(_DWORD *)(v30 + 36)
        || v23[10] != *(_DWORD *)(v30 + 40)
        || v23[11] != *(_DWORD *)(v30 + 44) )
      {
        v32 = *(_OWORD *)(v30 + 32);
        v23[24] |= 1u;
        v33 = *((_QWORD *)v23 + 10);
        *((_OWORD *)v23 + 2) = v32;
        if ( v33 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, 4096LL);
      }
      v34 = *(const RECT **)(v16 + *((_QWORD *)this + 30));
      if ( !EqualRect((const RECT *)v23 + 3, v34 + 3) )
      {
        *((RECT *)v23 + 3) = v34[3];
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v23, 1, 0x2000u);
      }
      v35 = *(_DWORD *)(*(_QWORD *)(v16 + *((_QWORD *)this + 30)) + 64LL);
      if ( v23[16] != v35 )
      {
        v23[16] = v35;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v23, 1, 0x2000u);
      }
      v36 = *(_DWORD *)(*(_QWORD *)(v16 + *((_QWORD *)this + 30)) + 68LL);
      if ( v36 != v23[17] )
      {
        v23[24] |= 2u;
        v50 = *((_QWORD *)v23 + 10);
        if ( v50 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 24LL))(v50, 0x2000LL);
        v23[17] = v36;
      }
      v37 = *(volatile signed __int32 **)(*(_QWORD *)(v16 + *((_QWORD *)this + 30)) + 72LL);
      v38 = (CBaseObject *)*((_QWORD *)v23 + 9);
      if ( v38 != (CBaseObject *)v37 )
      {
        if ( v38 )
          CBaseObject::Release(v38);
        *((_QWORD *)v23 + 9) = v37;
        if ( v37 )
        {
          _InterlockedIncrement(v37 + 2);
          v12 = v53;
        }
        v23[24] |= 1u;
        v39 = *((_QWORD *)v23 + 10);
        if ( v39 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 24LL))(v39, 0x2000LL);
      }
      v40 = *(_QWORD *)(v16 + *((_QWORD *)this + 30));
      if ( *(_BYTE *)(v40 + 128) )
        CAtlasedImage::SetMarginClip((CAtlasedImage *)v23, (struct tagRECT *)(v40 + 112));
      v41 = *((_QWORD *)this + 30);
      v55 = v23;
      v23[33] = *(_DWORD *)(*(_QWORD *)(v16 + v41) + 132LL);
      v42 = *((unsigned int *)v12 + 66);
      v54 = &v55;
      v43 = DynArrayImpl<0>::Grow((__int64)v12 + 240, 8u, 1, 0, (unsigned __int64 *)&v54);
      v11 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x1CDu);
      }
      else
      {
        v44 = *((unsigned int *)v12 + 66);
        v45 = *((_QWORD *)v12 + 30);
        *((_DWORD *)v12 + 66) = v44 + 1;
        if ( (unsigned int)v44 > (unsigned int)v42 )
        {
          v51 = v45 + 8 * v44;
          do
          {
            v44 = (unsigned int)(v44 - 1);
            v51 -= 8LL;
            *(_QWORD *)(v51 + 8) = *(_QWORD *)(v45 + 8 * v44);
          }
          while ( (unsigned int)v44 > (unsigned int)v42 );
        }
        v46 = v54;
        v47 = (_QWORD *)(v45 + 8 * v42);
        if ( v54 >= v47 && (unsigned __int64)v54 < v45 + 8 * ((unsigned __int64)*((unsigned int *)v12 + 66) - 1) )
          v46 = ++v54;
        *v47 = *v46;
      }
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x73u);
      }
      else
      {
        _InterlockedIncrement(v55 + 2);
        v12 = v53;
        *((_QWORD *)v55 + 10) = v53;
        v48 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v12 + 24LL);
        if ( v48 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v12, 0x2000);
        else
          v48(v12, 0x2000);
      }
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x189u);
        if ( v23 )
          CBaseObject::Release((CBaseObject *)v23);
        break;
      }
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(_DWORD *, __int64))v23)(v23, 1LL);
      v6 = a3;
      v9 = a4;
      v12 = v53;
    }
  }
LABEL_51:
  if ( v12 )
    CBaseObject::Release(v12);
  return (unsigned int)v11;
}
