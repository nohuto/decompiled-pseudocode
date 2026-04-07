/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180003460
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18003B370 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180003820 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FD70 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180020BEC (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180020CB8 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x1800336B8 (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CAccent *this)
{
  CAtlasedImage **v1; // rsi
  int v2; // r14d
  CAtlasedImage *v3; // r15
  unsigned int v5; // ebp
  __int64 v6; // rdi
  const struct tagSIZE **i; // r12
  void *(*v8)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r8
  __int64 v9; // rbx
  void *(*v10)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CAtlasedImage *v11; // rax
  CAtlasedImage *v12; // rax
  __int64 v13; // r8
  CVisual *v14; // rbx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  CAtlasedImage **j; // rax
  int v18; // eax
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // rax
  const struct tagSIZE *v20; // rbx
  CAtlasedImage *v21; // rdi
  CBaseObject *v22; // rcx
  CVisual *v23; // rcx
  void (__fastcall *v24)(CVisual *__hidden, unsigned int); // rax
  CAtlasedImage *v25; // r8
  CVisual *v26; // rbx
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 k; // r9
  void (__fastcall *v30)(CVisual *__hidden, unsigned int); // rax
  CAtlasedImage *v31; // rcx
  void *(__fastcall *v32)(CAtlasedImage *__hidden, unsigned int); // rax
  CAtlasedImage *v33; // rcx
  CAtlasedImage *v34; // rcx
  CAtlasedImage *v35; // rcx
  CAtlasedImage *v36; // rcx
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  CAtlasedImage *v39; // rcx
  CAtlasedImage *v40; // rcx
  CAtlasedImage *v42; // [rsp+80h] [rbp+18h] BYREF
  __int64 v43; // [rsp+88h] [rbp+20h]

  v1 = (CAtlasedImage **)((char *)this + 416);
  v2 = 0;
  v3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v43 = v6;
  for ( i = (const struct tagSIZE **)(v6 + 1504); ; i += 2 )
  {
    v8 = WPF::ProcessHeapImpl::AllocClear;
    if ( *v1 )
      goto LABEL_17;
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v10 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v11 = v10 == WPF::ProcessHeapImpl::AllocClear
        ? (CAtlasedImage *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL)
        : (CAtlasedImage *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v10)(
                             WPF::g_pProcessHeap,
                             136LL,
                             WPF::ProcessHeapImpl::AllocClear);
    if ( !v11 )
      break;
    v12 = CAtlasedImage::CAtlasedImage(v11);
    if ( !v12 )
      break;
    *((_QWORD *)v12 + 13) = v9;
    v13 = 0LL;
    *v1 = v12;
    *((_DWORD *)v12 + 33) = v5;
    v14 = (CVisual *)*((_QWORD *)this + 50);
    if ( v3 )
    {
      v15 = *((_DWORD *)v14 + 66);
      v16 = 0;
      for ( j = (CAtlasedImage **)*((_QWORD *)v14 + 30); v16 < v15; ++j )
      {
        if ( v3 == *j )
          break;
        ++v16;
      }
      if ( v16 == v15 )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u);
LABEL_82:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1C4u);
        return (unsigned int)v2;
      }
      v13 = v16 + 1;
    }
    v42 = *v1;
    v18 = DynArray<CAtlasedImage *,0>::InsertAt((char *)v14 + 240, &v42, v13);
    v2 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x4Du);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v42 + 2);
      *((_QWORD *)v42 + 10) = v14;
      v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v14 + 24LL);
      if ( v19 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v14, 0x2000u);
      else
        v19(v14, 0x2000u);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x40u);
      goto LABEL_82;
    }
LABEL_17:
    if ( v6 )
    {
      v20 = *(i - 1);
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) && *i )
        v20 = *i;
    }
    else
    {
      v20 = 0LL;
    }
    v21 = *v1;
    v22 = (CBaseObject *)*((_QWORD *)*v1 + 9);
    if ( v22 != (CBaseObject *)v20 )
    {
      if ( v22 )
        CBaseObject::Release(v22);
      *((_QWORD *)v21 + 9) = v20;
      if ( v20 )
        _InterlockedIncrement((volatile signed __int32 *)&v20[1]);
      *((_DWORD *)v21 + 24) |= 1u;
      v23 = (CVisual *)*((_QWORD *)v21 + 10);
      if ( v23 )
      {
        v24 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v23 + 24LL);
        if ( v24 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v23, 0x2000u);
        else
          ((void (__fastcall *)(CVisual *, __int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v24)(
            v23,
            0x2000LL,
            v8);
      }
    }
    if ( (v5 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17))
      && v20
      && v5 - 9 > 8
      && CAccent::_IsShadowPartApplicableFromFlags(this, v5) )
    {
      CAtlasedImage::SetSize(*v1, v20 + 3);
      v3 = *v1;
    }
    else
    {
      v25 = *v1;
      v26 = (CVisual *)*((_QWORD *)*v1 + 10);
      if ( v26 )
      {
        v27 = *((_DWORD *)v26 + 66);
        v28 = 0LL;
        for ( k = *((_QWORD *)v26 + 30); (unsigned int)v28 < v27; v28 = (unsigned int)(v28 + 1) )
        {
          if ( v25 == *(CAtlasedImage **)(k + 8 * v28) )
            break;
        }
        if ( (unsigned int)v28 < v27 )
        {
          for ( ; (unsigned int)v28 < v27 - 1; v27 = *((_DWORD *)v26 + 66) )
          {
            *(_QWORD *)(k + 8 * v28) = *(_QWORD *)(k + 8LL * (unsigned int)(v28 + 1));
            v28 = (unsigned int)(v28 + 1);
          }
          *((_DWORD *)v26 + 66) = v27 - 1;
        }
        *((_QWORD *)v25 + 10) = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25 + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(CAtlasedImage *, __int64))v25)(v25, 1LL);
        v30 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v26 + 24LL);
        if ( v30 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v26, 0x2000u);
        else
          ((void (__fastcall *)(CVisual *, __int64, CAtlasedImage *, __int64))v30)(v26, 0x2000LL, v25, k);
      }
      v31 = *v1;
      if ( *v1 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v31 + 2, 0xFFFFFFFF) == 1 && v31 )
        {
          v32 = **(void *(__fastcall ***)(CAtlasedImage *__hidden, unsigned int))v31;
          if ( v32 == CAtlasedImage::`vector deleting destructor' )
            CAtlasedImage::`vector deleting destructor'(v31, 1u);
          else
            v32(v31, 1u);
        }
        *v1 = 0LL;
      }
    }
    ++v5;
    ++v1;
    if ( v5 >= 0x16 )
    {
      v33 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( v33 && *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1u, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( v34 && *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1u, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( v35 && *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1u, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( v36 && *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1u, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( v37 && *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)this + 57);
      if ( v38 && *((_DWORD *)v38 + 16) )
      {
        *((_DWORD *)v38 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v38, 1u, 0x2000u);
      }
      v39 = (CAtlasedImage *)*((_QWORD *)this + 58);
      if ( v39 && *((_DWORD *)v39 + 16) )
      {
        *((_DWORD *)v39 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v39, 1u, 0x2000u);
      }
      v40 = (CAtlasedImage *)*((_QWORD *)this + 59);
      if ( v40 )
      {
        if ( *((_DWORD *)v40 + 16) )
        {
          *((_DWORD *)v40 + 16) = 0;
          CAtlasedImage::SetDirtyFlags(v40, 1u, 0x2000u);
        }
      }
      return (unsigned int)v2;
    }
    v6 = v43;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA5u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1BDu);
  return 2147942414LL;
}
