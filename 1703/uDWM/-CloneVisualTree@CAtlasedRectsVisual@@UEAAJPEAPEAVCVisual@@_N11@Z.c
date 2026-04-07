/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180020C90
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180023E90 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 * Callees:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x18000EAF4 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015F58 (-Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@_N11@Z @ 0x18001A260 (-ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@_N11@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18002115C (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180023E90 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BEB4 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(
        CAtlasedRectsVisual *this,
        struct CVisual **a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5)
{
  unsigned __int8 v6; // bp
  struct IDwmChannel *v8; // rcx
  unsigned __int8 v9; // di
  int v10; // eax
  int v11; // r15d
  CVisual *v12; // r12
  int v13; // eax
  const struct _MARGINS *v14; // rdx
  __int64 i; // r13
  __int64 v16; // r14
  const struct CAtlasedImage *v17; // rdx
  char (__fastcall *v18)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *, char, __int64, bool); // rax
  char ShouldCloneAtlasImage; // al
  __int64 v20; // rdi
  void *(*v21)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // rcx
  const RECT *v33; // rdi
  int v34; // eax
  int v35; // edi
  volatile signed __int32 *v36; // rdi
  CBaseObject *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rbp
  int v42; // eax
  __int64 v43; // r9
  __int64 v44; // rdx
  _QWORD *v45; // rdx
  _QWORD *v46; // r8
  void (__fastcall *v47)(CVisual *__hidden, unsigned int); // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  BOOL v51; // [rsp+20h] [rbp-68h]
  CVisual *v52; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v53; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v54; // [rsp+40h] [rbp-48h] BYREF

  v6 = a3;
  v8 = *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL);
  v9 = a4;
  v52 = 0LL;
  v10 = CAtlasedRectsVisual::Create(v8, &v52);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x163u);
    v12 = v52;
    goto LABEL_49;
  }
  v12 = v52;
  *a2 = v52;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    v12 = v52;
  }
  v13 = CVisual::CloneVisualTree(this, a2, 0, 0, 1);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x167u);
    goto LABEL_49;
  }
  v14 = (const struct _MARGINS *)*((_QWORD *)this + 34);
  if ( v14 )
    CAtlasedRectsVisual::SetClipMargins(v12, v14);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
  {
    v16 = 8 * i;
    v17 = *(const struct CAtlasedImage **)(8 * i + *((_QWORD *)this + 30));
    v18 = *(char (__fastcall **)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *, char, __int64, bool))(*(_QWORD *)this + 192LL);
    if ( v18 == CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage )
    {
      ShouldCloneAtlasImage = CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage(this, v17, v6, v9, a5);
    }
    else
    {
      LOBYTE(v51) = a5;
      ShouldCloneAtlasImage = v18(this, v17, v6, v9, v51);
    }
    if ( ShouldCloneAtlasImage )
    {
      v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v21 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v21 == WPF::ProcessHeapImpl::AllocClear )
        v22 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL);
      else
        v22 = (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v21)(WPF::g_pProcessHeap, 136LL);
      v23 = v22;
      if ( !v22 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA5u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x178u);
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
        v31 = *(_OWORD *)(v30 + 32);
        v23[24] |= 1u;
        v32 = *((_QWORD *)v23 + 10);
        *((_OWORD *)v23 + 2) = v31;
        if ( v32 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL))(v32, 4096LL);
      }
      v33 = *(const RECT **)(v16 + *((_QWORD *)this + 30));
      if ( !EqualRect((const RECT *)v23 + 3, v33 + 3) )
      {
        *((RECT *)v23 + 3) = v33[3];
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v23, 1u, 0x2000u);
      }
      v34 = *(_DWORD *)(*(_QWORD *)(v16 + *((_QWORD *)this + 30)) + 64LL);
      if ( v23[16] != v34 )
      {
        v23[16] = v34;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v23, 1u, 0x2000u);
      }
      v35 = *(_DWORD *)(*(_QWORD *)(v16 + *((_QWORD *)this + 30)) + 68LL);
      if ( v35 != v23[17] )
      {
        v23[24] |= 2u;
        v49 = *((_QWORD *)v23 + 10);
        if ( v49 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 24LL))(v49, 0x2000LL);
        v23[17] = v35;
      }
      v36 = *(volatile signed __int32 **)(*(_QWORD *)(v16 + *((_QWORD *)this + 30)) + 72LL);
      v37 = (CBaseObject *)*((_QWORD *)v23 + 9);
      if ( v37 != (CBaseObject *)v36 )
      {
        if ( v37 )
          CBaseObject::Release(v37);
        *((_QWORD *)v23 + 9) = v36;
        if ( v36 )
        {
          _InterlockedIncrement(v36 + 2);
          v12 = v52;
        }
        v23[24] |= 1u;
        v38 = *((_QWORD *)v23 + 10);
        if ( v38 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 24LL))(v38, 0x2000LL);
      }
      v39 = *(_QWORD *)(v16 + *((_QWORD *)this + 30));
      if ( *(_BYTE *)(v39 + 128) )
        CAtlasedImage::SetMarginClip((CAtlasedImage *)v23, (struct tagRECT *)(v39 + 112));
      v40 = *((_QWORD *)this + 30);
      v54 = v23;
      v23[33] = *(_DWORD *)(*(_QWORD *)(v16 + v40) + 132LL);
      v41 = *((unsigned int *)v12 + 66);
      v53 = &v54;
      v42 = DynArrayImpl<0>::Grow((int)v12 + 240, 8, 1, 0, (__int64)&v53);
      v11 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x1CDu);
      }
      else
      {
        ++*((_DWORD *)v12 + 66);
        v43 = *((_QWORD *)v12 + 30);
        v44 = (unsigned int)(*((_DWORD *)v12 + 66) - 1);
        if ( (unsigned int)v44 > (unsigned int)v41 )
        {
          v50 = v43 + 8 * v44;
          do
          {
            v44 = (unsigned int)(v44 - 1);
            v50 -= 8LL;
            *(_QWORD *)(v50 + 8) = *(_QWORD *)(v43 + 8 * v44);
          }
          while ( (unsigned int)v44 > (unsigned int)v41 );
        }
        v45 = v53;
        v46 = (_QWORD *)(v43 + 8 * v41);
        if ( v53 >= v46 && (unsigned __int64)v53 < v43 + 8 * ((unsigned __int64)*((unsigned int *)v12 + 66) - 1) )
          v45 = ++v53;
        *v46 = *v45;
      }
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x73u);
      }
      else
      {
        _InterlockedIncrement(v54 + 2);
        v12 = v52;
        *((_QWORD *)v54 + 10) = v52;
        v47 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v12 + 24LL);
        if ( v47 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v12, 0x2000u);
        else
          v47(v12, 0x2000u);
      }
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x189u);
        if ( v23 )
          CBaseObject::Release((CBaseObject *)v23);
        break;
      }
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(_DWORD *, __int64))v23)(v23, 1LL);
      v6 = a3;
      v9 = a4;
      v12 = v52;
    }
  }
LABEL_49:
  if ( v12 )
    CBaseObject::Release(v12);
  return (unsigned int)v11;
}
