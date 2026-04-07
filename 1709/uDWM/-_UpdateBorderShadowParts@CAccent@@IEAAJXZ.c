/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180008720
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038790 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180008AA4 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800090C8 (-Create@CAtlasedImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FB20 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800208EC (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x180030ED8 (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CAccent *this)
{
  struct CAtlasedImage **v1; // rsi
  int v2; // r14d
  struct CAtlasedImage *v3; // r15
  unsigned int v5; // ebp
  __int64 v6; // rdi
  const struct tagSIZE **i; // r12
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  CVisual *v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  struct CAtlasedImage **j; // rax
  int v15; // eax
  void (__fastcall *v16)(CVisual *__hidden, unsigned int); // rax
  const struct tagSIZE *v17; // rbx
  struct CAtlasedImage *v18; // rdi
  CBaseObject *v19; // rcx
  CVisual *v20; // rcx
  void (__fastcall *v21)(CVisual *__hidden, unsigned int); // rax
  struct CAtlasedImage *v22; // r8
  CVisual *v23; // rbx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 k; // r9
  void (__fastcall *v27)(CVisual *__hidden, unsigned int); // rax
  struct CAtlasedImage *v28; // rcx
  void *(__fastcall *v29)(CAtlasedImage *__hidden, unsigned int); // rax
  __int64 v30; // rdx
  CAtlasedImage *v31; // rcx
  CAtlasedImage *v32; // rcx
  CAtlasedImage *v33; // rcx
  CAtlasedImage *v34; // rcx
  CAtlasedImage *v35; // rcx
  CAtlasedImage *v36; // rcx
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  struct CAtlasedImage *v40; // [rsp+80h] [rbp+18h] BYREF
  __int64 v41; // [rsp+88h] [rbp+20h]

  v1 = (struct CAtlasedImage **)((char *)this + 416);
  v2 = 0;
  v3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v41 = v6;
  for ( i = (const struct tagSIZE **)(v6 + 1504); ; i += 2 )
  {
    if ( *v1 )
      goto LABEL_14;
    v8 = CAtlasedImage::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), v1);
    v9 = 0LL;
    v10 = v8;
    if ( v8 < 0 )
      break;
    *((_DWORD *)*v1 + 33) = v5;
    v11 = (CVisual *)*((_QWORD *)this + 50);
    if ( v3 )
    {
      v12 = *((_DWORD *)v11 + 66);
      v13 = 0;
      for ( j = (struct CAtlasedImage **)*((_QWORD *)v11 + 30); v13 < v12; ++j )
      {
        if ( v3 == *j )
          break;
        ++v13;
      }
      if ( v13 == v12 )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5Au);
LABEL_78:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1C7u);
        return (unsigned int)v2;
      }
      v9 = v13 + 1;
    }
    v40 = *v1;
    v15 = DynArray<CAtlasedImage *,0>::InsertAt((char *)v11 + 240, &v40, v9);
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x73u);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v40 + 2);
      *((_QWORD *)v40 + 10) = v11;
      v16 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v11 + 24LL);
      if ( v16 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v11, 0x2000u);
      else
        v16(v11, 0x2000u);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x61u);
      goto LABEL_78;
    }
LABEL_14:
    if ( v6 )
    {
      v17 = *(i - 1);
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *i )
        v17 = *i;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = *v1;
    v19 = (CBaseObject *)*((_QWORD *)*v1 + 9);
    if ( v19 != (CBaseObject *)v17 )
    {
      if ( v19 )
        CBaseObject::Release(v19);
      *((_QWORD *)v18 + 9) = v17;
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)&v17[1]);
      *((_DWORD *)v18 + 24) |= 1u;
      v20 = (CVisual *)*((_QWORD *)v18 + 10);
      if ( v20 )
      {
        v21 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v20 + 24LL);
        if ( v21 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v20, 0x2000u);
        else
          v21(v20, 0x2000u);
      }
    }
    if ( (v5 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16))
      && v17
      && v5 - 9 > 8
      && CAccent::_IsShadowPartApplicableFromFlags(this, v5) )
    {
      CAtlasedImage::SetSize(*v1, v17 + 3);
      v3 = *v1;
    }
    else
    {
      v22 = *v1;
      v23 = (CVisual *)*((_QWORD *)*v1 + 10);
      if ( v23 )
      {
        v24 = *((_DWORD *)v23 + 66);
        v25 = 0LL;
        for ( k = *((_QWORD *)v23 + 30); (unsigned int)v25 < v24; v25 = (unsigned int)(v25 + 1) )
        {
          if ( v22 == *(struct CAtlasedImage **)(k + 8 * v25) )
            break;
        }
        if ( (unsigned int)v25 < v24 )
        {
          if ( (unsigned int)v25 < v24 - 1 )
          {
            do
            {
              v30 = (unsigned int)(v25 + 1);
              *(_QWORD *)(k + 8 * v25) = *(_QWORD *)(k + 8 * v30);
              v25 = v30;
            }
            while ( (unsigned int)v30 < *((_DWORD *)v23 + 66) - 1 );
          }
          --*((_DWORD *)v23 + 66);
        }
        *((_QWORD *)v22 + 10) = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22 + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(struct CAtlasedImage *, __int64))v22)(v22, 1LL);
        v27 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v23 + 24LL);
        if ( v27 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v23, 0x2000u);
        else
          ((void (__fastcall *)(CVisual *, __int64, struct CAtlasedImage *, __int64))v27)(v23, 0x2000LL, v22, k);
      }
      v28 = *v1;
      if ( *v1 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28 + 2, 0xFFFFFFFF) == 1 && v28 )
        {
          v29 = **(void *(__fastcall ***)(CAtlasedImage *__hidden, unsigned int))v28;
          if ( v29 == CAtlasedImage::`vector deleting destructor' )
            CAtlasedImage::`vector deleting destructor'(v28, 1u);
          else
            v29(v28, 1u);
        }
        *v1 = 0LL;
      }
    }
    ++v5;
    ++v1;
    if ( v5 >= 0x16 )
    {
      v31 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( v31 && *((_DWORD *)v31 + 16) )
      {
        *((_DWORD *)v31 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v31, 1u, 0x2000u);
      }
      v32 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( v32 && *((_DWORD *)v32 + 16) )
      {
        *((_DWORD *)v32 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v32, 1u, 0x2000u);
      }
      v33 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( v33 && *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1u, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( v34 && *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1u, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( v35 && *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1u, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)this + 57);
      if ( v36 && *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1u, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)this + 58);
      if ( v37 && *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)this + 59);
      if ( v38 )
      {
        if ( *((_DWORD *)v38 + 16) )
        {
          *((_DWORD *)v38 + 16) = 0;
          CAtlasedImage::SetDirtyFlags(v38, 1u, 0x2000u);
        }
      }
      return (unsigned int)v2;
    }
    v6 = v41;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1C0u);
  return v10;
}
