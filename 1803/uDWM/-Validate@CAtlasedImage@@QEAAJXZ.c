/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020750
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023C30 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180018B90 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001FE50 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x18006C5A0 (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  bool v5; // zf
  char *v6; // rax
  void (__fastcall *v7)(CAtlasedImage *, unsigned int *); // rax
  int v8; // r8d
  __int64 (__fastcall *v9)(CAtlasButton *, const RECT **); // rax
  struct tagRECT *v10; // r8
  int appended; // eax
  void (*v12)(void); // rax
  void (*v13)(void); // rax
  void (*v14)(void); // rax
  int *v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  int *v20; // rax
  int v21; // ecx
  int v22; // r9d
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rdi
  void *(*v26)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject *v27; // rax
  CBaseObject *v28; // r14
  int v29; // eax
  int v30; // r15d
  int v31; // eax
  LPVOID v32[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v33; // [rsp+50h] [rbp-29h]
  unsigned int v34; // [rsp+58h] [rbp-21h]
  LPVOID v35[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h]
  int v37; // [rsp+78h] [rbp-1h]
  LPVOID lpMem[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v39; // [rsp+90h] [rbp+17h]
  int v40; // [rsp+98h] [rbp+1Fh]
  char *v41; // [rsp+A0h] [rbp+27h]
  int v42; // [rsp+E0h] [rbp+67h] BYREF

  v2 = 0;
  v3 = 1;
  if ( !*((_QWORD *)this + 11) )
  {
    v25 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 11) = 0LL;
    v26 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v26 == WPF::ProcessHeapImpl::AllocClear )
      v27 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v27 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v26)(WPF::g_pProcessHeap, 32LL);
    v28 = v27;
    if ( !v27 )
    {
      v2 = -2147024882;
      v30 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_70;
    }
    *((_DWORD *)v27 + 2) = 1;
    *((_QWORD *)v27 + 2) = v25;
    *(_QWORD *)v27 = &CResource::`vftable';
    v29 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v25 + 96LL))(v25, 3LL, (_DWORD *)v27 + 6);
    v30 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x44u);
    }
    else if ( !*((_DWORD *)v28 + 6) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
      v30 = -2147024882;
      goto LABEL_68;
    }
    if ( v30 >= 0 )
    {
      *((_QWORD *)this + 11) = v28;
      goto LABEL_61;
    }
LABEL_68:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x29u);
    CBaseObject::Release(v28);
LABEL_61:
    v2 = v30;
    if ( v30 >= 0 )
      goto LABEL_2;
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x3A3u);
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x189u);
    return (unsigned int)v2;
  }
  v4 = *((_DWORD *)this + 24);
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL) + 992LL))(
              *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
              *((unsigned int *)this + 17));
      v2 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1B5u);
        return (unsigned int)v2;
      }
    }
    goto LABEL_32;
  }
  v5 = *((_BYTE *)this + 128) == 0;
  v6 = (char *)this + 112;
  v42 = 0;
  if ( v5 )
    v6 = 0LL;
  *(_OWORD *)v32 = 0LL;
  v41 = v6;
  v33 = 0LL;
  *(_OWORD *)v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  *(_OWORD *)lpMem = 0LL;
  v39 = 0LL;
  v40 = 0;
  v34 = 0;
  DynArrayImpl<0>::ShrinkToSize(v32, 16LL);
  v37 = 0;
  DynArrayImpl<0>::ShrinkToSize(v35, 16LL);
  v40 = 0;
  DynArrayImpl<0>::ShrinkToSize(lpMem, 4LL);
  v7 = *(void (__fastcall **)(CAtlasedImage *, unsigned int *))(*(_QWORD *)this + 32LL);
  if ( v7 == CAtlasedImage::AddApproximateAtlasSize )
  {
    if ( *((_QWORD *)this + 9) )
    {
      v8 = ((*(_DWORD *)(*((_QWORD *)this + 9) + 32LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 9) + 36LL) > 0))
         * ((*(_DWORD *)(*((_QWORD *)this + 9) + 40LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 9) + 44LL) > 0))
         + v42;
      v42 = v8;
      goto LABEL_9;
    }
    goto LABEL_74;
  }
  if ( v7 != CAtlasButton::AddApproximateAtlasSize )
  {
    v7(this, (unsigned int *)&v42);
LABEL_74:
    v8 = v42;
    goto LABEL_9;
  }
  v16 = (int *)*((_QWORD *)this + 9);
  if ( v16 )
  {
    v17 = 1;
    if ( v16[8] > 0 )
      v17 = 2;
    v18 = (v16[9] > 0) + v17;
    v19 = 1;
    if ( v16[10] > 0 )
      v19 = 2;
    v8 = v18 * (v19 + (v16[11] > 0)) + v42;
    v42 = v8;
  }
  else
  {
    v8 = v42;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v8 += ((*(_DWORD *)(*((_QWORD *)this + 17) + 32LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 17) + 36LL) > 0))
        * ((*(_DWORD *)(*((_QWORD *)this + 17) + 40LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 17) + 44LL) > 0));
    v42 = v8;
  }
  v20 = (int *)*((_QWORD *)this + 18);
  if ( v20 )
  {
    v21 = 1;
    if ( v20[8] > 0 )
      v21 = 2;
    v22 = (v20[9] > 0) + v21;
    v23 = 1;
    if ( v20[10] > 0 )
      v23 = 2;
    if ( v20[11] <= 0 )
      v3 = 0;
    v8 += v22 * (v3 + v23);
    v42 = v8;
  }
LABEL_9:
  v2 = DynArrayImpl<0>::Grow((unsigned int)v32, 16, v8, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x197u);
LABEL_77:
    AtlasedRects::~AtlasedRects((AtlasedRects *)v32);
    return (unsigned int)v2;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)v35, 16, v42, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x198u);
    goto LABEL_77;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)lpMem, 4, v42, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x199u);
    goto LABEL_77;
  }
  v9 = *(__int64 (__fastcall **)(CAtlasButton *, const RECT **))(*(_QWORD *)this + 16LL);
  if ( (char *)v9 == (char *)CAtlasedImage::AppendAtlas )
  {
    v10 = (struct tagRECT *)*((_QWORD *)this + 9);
    v2 = 0;
    if ( v10 )
    {
      appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, (struct AtlasedRects *)v32, v10);
      v2 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x26Cu);
    }
  }
  else
  {
    if ( v9 == CAtlasButton::AppendAtlas )
      v24 = CAtlasButton::AppendAtlas(this, (const RECT **)v32);
    else
      v24 = v9(this, (const RECT **)v32);
    v2 = v24;
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x19Eu);
    goto LABEL_77;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD, LPVOID, LPVOID, LPVOID))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL)
                                                                                       + 1096LL))(
         *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
         (unsigned int)(*((_DWORD *)this + 33) - 18) > 3,
         v34,
         v32[0],
         v35[0],
         lpMem[0]);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1AFu);
    goto LABEL_77;
  }
  if ( lpMem[0] != lpMem[1] )
  {
    v12 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v12 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( lpMem[0] )
        HeapFree(g_hProcessHeap, 0, lpMem[0]);
    }
    else
    {
      v12();
    }
    lpMem[0] = 0LL;
  }
  if ( v35[0] != v35[1] )
  {
    v13 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v13 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( v35[0] )
        HeapFree(g_hProcessHeap, 0, v35[0]);
    }
    else
    {
      v13();
    }
    v35[0] = 0LL;
  }
  if ( v32[0] != v32[1] )
  {
    v14 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v14 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( v32[0] )
        HeapFree(g_hProcessHeap, 0, v32[0]);
    }
    else
    {
      v14();
    }
  }
LABEL_32:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
