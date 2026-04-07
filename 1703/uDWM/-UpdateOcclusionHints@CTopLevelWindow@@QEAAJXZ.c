/*
 * XREFs of ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026F30
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x180014D80 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     ??_GCPopInstruction@@UEAAPEAXI@Z @ 0x18001A3D0 (--_GCPopInstruction@@UEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002B290 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateOcclusionHints(CTopLevelWindow *this)
{
  CVisual *v1; // rdi
  unsigned int v2; // esi
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // r15
  volatile signed __int32 *v7; // rcx
  CPopInstruction *(__fastcall *v8)(CPopInstruction *, char); // rax
  void (__fastcall *v9)(CVisual *, int); // rax
  int v10; // edi
  __int64 v11; // rax
  CDesktopManager *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  struct tagRECT v23; // xmm6
  __int64 v24; // rcx
  void *(*v25)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct tagRECT *v26; // rax
  struct tagRECT *v27; // rdi
  CVisual *v28; // rsi
  int v29; // eax
  int v30; // ebx
  void (__fastcall *v31)(CVisual *, int); // rax
  int left; // ecx
  LONG right; // eax
  int top; // ecx
  int bottom; // ecx
  struct tagRECT v37; // [rsp+30h] [rbp-78h] BYREF
  int v38; // [rsp+40h] [rbp-68h] BYREF
  __int128 v39; // [rsp+48h] [rbp-60h] BYREF
  __int64 v40; // [rsp+58h] [rbp-50h]
  int v41; // [rsp+60h] [rbp-48h]

  v1 = (CVisual *)*((_QWORD *)this + 32);
  v2 = 0;
  v4 = *((_DWORD *)v1 + 68);
  if ( v4 > 0 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v4;
    do
    {
      v7 = *(volatile signed __int32 **)(v5 + *((_QWORD *)v1 + 31));
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          v8 = **(CPopInstruction *(__fastcall ***)(CPopInstruction *, char))v7;
          if ( v8 == CPopInstruction::`scalar deleting destructor' )
            CPopInstruction::`scalar deleting destructor'((CPopInstruction *)v7, 1);
          else
            v8((CPopInstruction *)v7, 1);
        }
        *(_QWORD *)(v5 + *((_QWORD *)v1 + 31)) = 0LL;
      }
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
    *((_DWORD *)v1 + 68) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v1 + 248, 8LL);
    v9 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v1 + 24LL);
    if ( v9 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v1, 4);
    else
      v9(v1, 4);
  }
  v10 = *((_DWORD *)this + 146);
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v10 & 6) != 0
    && (*((_DWORD *)this + 151) || *((_DWORD *)this + 153) || *((_DWORD *)this + 152) || *((_DWORD *)this + 154)) )
  {
    v11 = *((_QWORD *)this + 90);
    if ( (*(_BYTE *)(v11 + 593) & 0x20) != 0 && *(_DWORD *)(v11 + 152) != 2 && (*(_DWORD *)(v11 + 104) & 0x200000) == 0 )
    {
      v12 = CDesktopManager::s_pDesktopManagerInstance;
      IsOpenThemeDataPresent();
      v14 = 2LL;
      if ( (*((_BYTE *)this + 584) & 0x40) != 0 || (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x20) != 0 )
        v14 = 1LL;
      v15 = (_DWORD *)*((_QWORD *)this + 90);
      if ( v15[20] == 0x7FFFFFFF && v15[21] == 0x7FFFFFFF && v15[22] == 0x7FFFFFFF && v15[23] == 0x7FFFFFFF )
        v14 = (unsigned int)v14 | 0x40;
      v16 = *(_OWORD *)((char *)v12 + 452);
      v41 = *((_DWORD *)v12 + 119);
      v17 = *(_QWORD *)((char *)v12 + 468);
      v18 = *((_DWORD *)v12 + 104);
      v39 = v16;
      v38 = v18;
      v40 = v17;
      if ( *((_BYTE *)v12 + 24) )
        v14 = (unsigned int)v14 | 4;
      if ( *((_BYTE *)v12 + 480) )
        v14 = (unsigned int)v14 | 0x20;
      CGlassColorizationParameters::AdjustWindowColorization(&v39, &v38, v13, v14);
      v22 = (*((_BYTE *)this + 584) & 0x40) == 0;
      v23 = *(struct tagRECT *)((char *)this + 604);
      v37 = v23;
      if ( v22 )
      {
        v24 = *((_QWORD *)this + 90);
        if ( (*(_BYTE *)(v24 + 595) & 0x20) == 0
          && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 480)
          && !(unsigned int)IsWindowArranged(*(_QWORD *)(v24 + 40), v19, v20, v21)
          && (*((_BYTE *)this + 584) & 0x20) == 0 )
        {
          v2 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 49);
        }
      }
      if ( (*((_BYTE *)this + 240) & 8) != 0 )
      {
        left = *((_DWORD *)this + 159);
        right = v37.right;
        if ( v37.left > left )
          left = v37.left;
        v37.left = left - v2;
        top = *((_DWORD *)this + 160);
        if ( v37.top > top )
          top = v37.top;
        v37.top = top - v2;
        if ( v37.right <= *((_DWORD *)this + 161) )
          right = *((_DWORD *)this + 161);
        bottom = *((_DWORD *)this + 162);
        v37.right = right - v2;
        if ( v37.bottom > bottom )
          bottom = v37.bottom;
        v37.bottom = bottom - v2;
        v23 = v37;
      }
      v25 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v25 == WPF::ProcessHeapImpl::AllocClear )
        v26 = (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
      else
        v26 = (struct tagRECT *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v25)(
                                  WPF::g_pProcessHeap,
                                  48LL);
      v27 = v26;
      if ( v26 )
      {
        v26->right = 1;
        *(_QWORD *)&v26->left = &CDrawOcclusionRectangleInstruction::`vftable';
        v26[1] = v23;
        SetRectEmpty(v26 + 2);
        v28 = (CVisual *)*((_QWORD *)this + 32);
        *(_QWORD *)&v37.left = v27;
        _InterlockedIncrement(&v27->right);
        v29 = DynArray<CRenderDataInstruction *,0>::AddMultipleAndSet((__int64)v28 + 248, &v37);
        v30 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x2Cu);
        }
        else
        {
          v31 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v28 + 24LL);
          if ( v31 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v28, 4);
          else
            v31(v28, 4);
        }
        v2 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xE8Fu);
        if ( _InterlockedExchangeAdd(&v27->right, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(struct tagRECT *, __int64))&v27->left)(v27, 1LL);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE8Du);
      }
    }
  }
  return v2;
}
