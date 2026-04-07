/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BFA0
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180021270 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001AEB0 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x18001B380 (-AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002B790 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x18006FF5C (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // eax
  bool v4; // zf
  char *v5; // rax
  void (__fastcall *v6)(CAtlasButton *, unsigned int *); // rax
  __int64 (__fastcall *v7)(CAtlasButton *, const RECT **); // rax
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
  LPVOID v21[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v22; // [rsp+50h] [rbp-19h]
  unsigned int v23; // [rsp+58h] [rbp-11h]
  LPVOID v24[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  LPVOID lpMem[2]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v28; // [rsp+90h] [rbp+27h]
  int v29; // [rsp+98h] [rbp+2Fh]
  char *v30; // [rsp+A0h] [rbp+37h]
  unsigned int v31; // [rsp+D0h] [rbp+67h] BYREF

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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_56;
    }
    *((_DWORD *)v17 + 2) = 1;
    *((_QWORD *)v17 + 2) = v15;
    *(_QWORD *)v17 = &CResource::`vftable';
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v15 + 96LL))(v15, 3LL, (_DWORD *)v17 + 6);
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x44u);
    }
    else if ( !*((_DWORD *)v18 + 6) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
      v20 = -2147024882;
      goto LABEL_54;
    }
    v20 = v2;
    if ( v2 >= 0 )
    {
      *((_QWORD *)this + 11) = v18;
      goto LABEL_46;
    }
LABEL_54:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x29u);
    CBaseObject::Release(v18);
LABEL_46:
    if ( v2 >= 0 )
      goto LABEL_2;
LABEL_56:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x48Du);
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1FCu);
    return (unsigned int)v2;
  }
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) != 0 )
  {
    v4 = *((_BYTE *)this + 128) == 0;
    v5 = (char *)this + 112;
    v31 = 0;
    if ( v4 )
      v5 = 0LL;
    *(_OWORD *)v21 = 0LL;
    v30 = v5;
    v22 = 0LL;
    *(_OWORD *)v24 = 0LL;
    v25 = 0LL;
    v26 = 0;
    *(_OWORD *)lpMem = 0LL;
    v28 = 0LL;
    v29 = 0;
    v23 = 0;
    DynArrayImpl<0>::ShrinkToSize(v21, 16LL);
    v26 = 0;
    DynArrayImpl<0>::ShrinkToSize(v24, 16LL);
    v29 = 0;
    DynArrayImpl<0>::ShrinkToSize(lpMem, 4LL);
    v6 = *(void (__fastcall **)(CAtlasButton *, unsigned int *))(*(_QWORD *)this + 32LL);
    if ( v6 == CAtlasedImage::AddApproximateAtlasSize )
    {
      if ( *((_QWORD *)this + 9) )
        v31 += ((*(_DWORD *)(*((_QWORD *)this + 9) + 32LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 9) + 36LL) > 0))
             * ((*(_DWORD *)(*((_QWORD *)this + 9) + 40LL) > 0) + 1 + (*(_DWORD *)(*((_QWORD *)this + 9) + 44LL) > 0));
    }
    else if ( v6 == CAtlasButton::AddApproximateAtlasSize )
    {
      CAtlasButton::AddApproximateAtlasSize(this, &v31);
    }
    else
    {
      v6(this, &v31);
    }
    v2 = DynArrayImpl<0>::Grow((unsigned int)v21, 16, v31, 0, 0LL);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x20Fu);
    }
    else
    {
      v2 = DynArrayImpl<0>::Grow((unsigned int)v24, 16, v31, 0, 0LL);
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x210u);
      }
      else
      {
        v2 = DynArrayImpl<0>::Grow((unsigned int)lpMem, 4, v31, 0, 0LL);
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x211u);
        }
        else
        {
          v7 = *(__int64 (__fastcall **)(CAtlasButton *, const RECT **))(*(_QWORD *)this + 16LL);
          if ( (char *)v7 == (char *)CAtlasedImage::AppendAtlas )
          {
            v8 = (struct tagRECT *)*((_QWORD *)this + 9);
            v2 = 0;
            if ( v8 )
            {
              appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, (struct AtlasedRects *)v21, v8);
              v2 = appended;
              if ( appended < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x33Fu);
            }
          }
          else
          {
            if ( v7 == CAtlasButton::AppendAtlas )
              v14 = CAtlasButton::AppendAtlas(this, (const RECT **)v21);
            else
              v14 = v7(this, (const RECT **)v21);
            v2 = v14;
          }
          if ( v2 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x21Bu);
          }
          else
          {
            v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD, LPVOID, LPVOID, LPVOID))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL)
                                                                                                 + 1080LL))(
                   *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
                   *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
                   (unsigned int)(*((_DWORD *)this + 33) - 18) > 3,
                   v23,
                   v21[0],
                   v24[0],
                   lpMem[0]);
            if ( v2 >= 0 )
            {
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
              if ( v24[0] != v24[1] )
              {
                v11 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
                if ( (char *)v11 == (char *)WPF::ProcessHeapImpl::Free )
                {
                  if ( v24[0] )
                    HeapFree(g_hProcessHeap, 0, v24[0]);
                }
                else
                {
                  v11();
                }
                v24[0] = 0LL;
              }
              if ( v21[0] != v21[1] )
              {
                v12 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
                if ( (char *)v12 == (char *)WPF::ProcessHeapImpl::Free )
                {
                  if ( v21[0] )
                    HeapFree(g_hProcessHeap, 0, v21[0]);
                }
                else
                {
                  v12();
                }
              }
              goto LABEL_32;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x230u);
          }
        }
      }
    }
    AtlasedRects::~AtlasedRects((AtlasedRects *)v21);
    return (unsigned int)v2;
  }
  if ( (v3 & 2) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL) + 976LL))(
           *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
           *((unsigned int *)this + 17));
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x236u);
      return (unsigned int)v2;
    }
  }
LABEL_32:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
