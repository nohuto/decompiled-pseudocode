/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020510
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023880 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001FC00 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020A50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800244E0 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x1800249A0 (-AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x180065AF0 (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // eax
  bool v4; // zf
  char *v5; // rax
  void (__fastcall *v6)(CAtlasedImage *, unsigned int *); // rax
  __int64 (__fastcall *v7)(CAtlasedImage *, struct AtlasedRects *); // rax
  struct tagRECT *v8; // r8
  int appended; // eax
  void (*v10)(void); // rax
  void (*v11)(void); // rax
  void (*v12)(void); // rax
  int v14; // eax
  __int64 v15; // rdi
  void *(*v16)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject *v17; // rax
  CBaseObject *v18; // rsi
  int v19; // eax
  int v20; // r14d
  int v21; // eax
  LPVOID v22[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h]
  unsigned int v24; // [rsp+58h] [rbp-21h]
  LPVOID v25[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  int v27; // [rsp+78h] [rbp-1h]
  LPVOID lpMem[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+98h] [rbp+1Fh]
  char *v31; // [rsp+A0h] [rbp+27h]
  unsigned int v32; // [rsp+E0h] [rbp+67h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v15 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 11) = 0LL;
    v16 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v16 == WPF::ProcessHeapImpl::AllocClear )
      v17 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v17 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v16)(WPF::g_pProcessHeap, 32LL);
    v18 = v17;
    if ( !v17 )
    {
      v2 = -2147024882;
      v20 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_55;
    }
    *((_DWORD *)v17 + 2) = 1;
    *((_QWORD *)v17 + 2) = v15;
    *(_QWORD *)v17 = &CResource::`vftable';
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v15 + 96LL))(v15, 3LL, (_DWORD *)v17 + 6);
    v20 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x44u);
    }
    else if ( !*((_DWORD *)v18 + 6) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
      v20 = -2147024882;
      goto LABEL_53;
    }
    if ( v20 >= 0 )
    {
      *((_QWORD *)this + 11) = v18;
      goto LABEL_46;
    }
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x29u);
    CBaseObject::Release(v18);
LABEL_46:
    v2 = v20;
    if ( v20 >= 0 )
      goto LABEL_2;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x48Du);
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1FCu);
    return (unsigned int)v2;
  }
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL) + 976LL))(
              *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
              *((unsigned int *)this + 17));
      v2 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x236u);
        return (unsigned int)v2;
      }
    }
    goto LABEL_32;
  }
  v4 = *((_BYTE *)this + 128) == 0;
  v5 = (char *)this + 112;
  v32 = 0;
  if ( v4 )
    v5 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v31 = v5;
  v23 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  *(_OWORD *)lpMem = 0LL;
  v29 = 0LL;
  v30 = 0;
  v24 = 0;
  DynArrayImpl<0>::ShrinkToSize(v22, 16LL);
  v27 = 0;
  DynArrayImpl<0>::ShrinkToSize(v25, 16LL);
  v30 = 0;
  DynArrayImpl<0>::ShrinkToSize(lpMem, 4LL);
  v6 = *(void (__fastcall **)(CAtlasedImage *, unsigned int *))(*(_QWORD *)this + 32LL);
  if ( v6 == CAtlasedImage::AddApproximateAtlasSize )
  {
    if ( *((_QWORD *)this + 9) )
      v32 += ((*(_DWORD *)(*((_QWORD *)this + 9) + 32LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 9) + 36LL) > 0))
           * ((*(_DWORD *)(*((_QWORD *)this + 9) + 40LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 9) + 44LL) > 0));
  }
  else if ( v6 == CAtlasButton::AddApproximateAtlasSize )
  {
    CAtlasButton::AddApproximateAtlasSize(this, &v32);
  }
  else
  {
    v6(this, &v32);
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)v22, 16, v32, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x20Fu);
LABEL_60:
    AtlasedRects::~AtlasedRects((AtlasedRects *)v22);
    return (unsigned int)v2;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)v25, 16, v32, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x210u);
    goto LABEL_60;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)lpMem, 4, v32, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x211u);
    goto LABEL_60;
  }
  v7 = *(__int64 (__fastcall **)(CAtlasedImage *, struct AtlasedRects *))(*(_QWORD *)this + 16LL);
  if ( v7 == CAtlasedImage::AppendAtlas )
  {
    v8 = (struct tagRECT *)*((_QWORD *)this + 9);
    v2 = 0;
    if ( v8 )
    {
      appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, (struct AtlasedRects *)v22, v8);
      v2 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x33Fu);
    }
  }
  else
  {
    if ( v7 == CAtlasButton::AppendAtlas )
      v14 = CAtlasButton::AppendAtlas(this, (struct AtlasedRects *)v22);
    else
      v14 = v7(this, (struct AtlasedRects *)v22);
    v2 = v14;
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x21Bu);
    goto LABEL_60;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD, LPVOID, LPVOID, LPVOID))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL)
                                                                                       + 1080LL))(
         *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
         (unsigned int)(*((_DWORD *)this + 33) - 18) > 3,
         v24,
         v22[0],
         v25[0],
         lpMem[0]);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x230u);
    goto LABEL_60;
  }
  if ( lpMem[0] != lpMem[1] )
  {
    v10 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v10 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( lpMem[0] )
        HeapFree(g_hProcessHeap, 0, lpMem[0]);
    }
    else
    {
      v10();
    }
    lpMem[0] = 0LL;
  }
  if ( v25[0] != v25[1] )
  {
    v11 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v11 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( v25[0] )
        HeapFree(g_hProcessHeap, 0, v25[0]);
    }
    else
    {
      v11();
    }
    v25[0] = 0LL;
  }
  if ( v22[0] != v22[1] )
  {
    v12 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v12 == (char *)WPF::ProcessHeapImpl::Free )
    {
      if ( v22[0] )
        HeapFree(g_hProcessHeap, 0, v22[0]);
    }
    else
    {
      v12();
    }
  }
LABEL_32:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
