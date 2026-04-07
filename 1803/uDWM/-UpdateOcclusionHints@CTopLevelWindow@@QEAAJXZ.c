/*
 * XREFs of ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001B940
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ??_GCPopInstruction@@UEAAPEAXI@Z @ 0x180010E10 (--_GCPopInstruction@@UEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180032750 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x180033620 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateOcclusionHints(CTopLevelWindow *this)
{
  CVisual *v1; // rsi
  unsigned int v2; // edi
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // r12
  volatile signed __int32 *v7; // rcx
  CPopInstruction *(__fastcall *v8)(CPopInstruction *, char); // rax
  void (__fastcall *v9)(CVisual *__hidden, unsigned int); // rax
  int v10; // esi
  __int64 v11; // rax
  CDesktopManager *v12; // r15
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  int v18; // eax
  bool v19; // zf
  struct tagRECT v20; // xmm6
  __int64 v21; // rcx
  void *(*v22)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct tagRECT *v23; // rax
  struct tagRECT *v24; // rsi
  CVisual *v25; // rdi
  int v26; // eax
  int v27; // ebx
  void (__fastcall *v28)(CVisual *__hidden, unsigned int); // rax
  int left; // ecx
  LONG right; // eax
  int top; // ecx
  int bottom; // ecx
  struct tagRECT v34; // [rsp+30h] [rbp-78h] BYREF
  int v35; // [rsp+40h] [rbp-68h] BYREF
  __int128 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+60h] [rbp-48h]

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
    v9 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v1 + 24LL);
    if ( v9 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v1, 4u);
    else
      v9(v1, 4u);
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
      v14 = *((_QWORD *)this + 90);
      if ( (*((_BYTE *)this + 584) & 0x40) != 0 || (*(_BYTE *)(v14 + 595) & 0x10) != 0 )
        v15 = 1LL;
      else
        v15 = 2LL;
      if ( *(_DWORD *)(v14 + 80) == 0x7FFFFFFF
        && *(_DWORD *)(v14 + 84) == 0x7FFFFFFF
        && *(_DWORD *)(v14 + 88) == 0x7FFFFFFF
        && *(_DWORD *)(v14 + 92) == 0x7FFFFFFF )
      {
        v15 = (unsigned int)v15 | 0x40;
      }
      v16 = *(_OWORD *)((char *)v12 + 492);
      v38 = *((_DWORD *)v12 + 129);
      v17 = *(_QWORD *)((char *)v12 + 508);
      v18 = *((_DWORD *)v12 + 114);
      v36 = v16;
      v35 = v18;
      v37 = v17;
      if ( *((_BYTE *)v12 + 25) )
        v15 = (unsigned int)v15 | 4;
      if ( *((_BYTE *)v12 + 520) )
        v15 = (unsigned int)v15 | 0x20;
      CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v13, v15);
      v19 = (*((_BYTE *)this + 584) & 0x40) == 0;
      v20 = *(struct tagRECT *)((char *)this + 604);
      v34 = v20;
      if ( v19 )
      {
        v21 = *((_QWORD *)this + 90);
        if ( (*(_BYTE *)(v21 + 595) & 0x10) == 0
          && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 520)
          && !(unsigned int)IsWindowArranged(*(_QWORD *)(v21 + 40))
          && (*((_BYTE *)this + 584) & 0x20) == 0 )
        {
          v2 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
        }
      }
      if ( (*((_BYTE *)this + 240) & 8) != 0 )
      {
        left = *((_DWORD *)this + 159);
        right = v34.right;
        if ( v34.left > left )
          left = v34.left;
        v34.left = left - v2;
        top = *((_DWORD *)this + 160);
        if ( v34.top > top )
          top = v34.top;
        v34.top = top - v2;
        if ( v34.right <= *((_DWORD *)this + 161) )
          right = *((_DWORD *)this + 161);
        bottom = *((_DWORD *)this + 162);
        v34.right = right - v2;
        if ( v34.bottom > bottom )
          bottom = v34.bottom;
        v34.bottom = bottom - v2;
        v20 = v34;
      }
      v22 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v22 == WPF::ProcessHeapImpl::AllocClear )
        v23 = (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
      else
        v23 = (struct tagRECT *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v22)(
                                  WPF::g_pProcessHeap,
                                  48LL);
      v24 = v23;
      if ( v23 )
      {
        v23->right = 1;
        *(_QWORD *)&v23->left = &CDrawOcclusionRectangleInstruction::`vftable';
        v23[1] = v20;
        SetRectEmpty(v23 + 2);
        *(_QWORD *)&v34.left = v24;
        v25 = (CVisual *)*((_QWORD *)this + 32);
        _InterlockedIncrement(&v24->right);
        v26 = DynArray<CRenderDataInstruction *,0>::AddMultipleAndSet((char *)v25 + 248, &v34);
        v27 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x2Cu);
        }
        else
        {
          v28 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v25 + 24LL);
          if ( v28 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v25, 4u);
          else
            v28(v25, 4u);
        }
        v2 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xECBu);
        if ( _InterlockedExchangeAdd(&v24->right, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(struct tagRECT *, __int64))&v24->left)(v24, 1LL);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Cu);
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xEC9u);
      }
    }
  }
  return v2;
}
