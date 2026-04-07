/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024A00
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18003B5E4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180023E90 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180024D58 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002ABC4 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18002ABF0 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x18002B0D8 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(CTopLevelWindow *this, struct CVisual **a2, char a3)
{
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CTopLevelWindow *v6; // rax
  CTopLevelWindow *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  CRenderDataVisual *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-28h]

  *((_BYTE *)this + 240) &= ~0x20u;
  *((_BYTE *)this + 240) |= 32 * a3;
  v5 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (CTopLevelWindow *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x328uLL);
  else
    v6 = (CTopLevelWindow *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v5)(WPF::g_pProcessHeap, 808LL);
  if ( v6 )
    v7 = CTopLevelWindow::CTopLevelWindow(v6);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13DFu);
    goto LABEL_30;
  }
  v8 = CTopLevelWindow::Initialize(v7, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v33 = 5088;
LABEL_51:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v33);
    goto LABEL_30;
  }
  *a2 = v7;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  v8 = CVisual::CloneVisualTree(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v33 = 5092;
    goto LABEL_51;
  }
  v10 = *((_BYTE *)this + 241);
  if ( (v10 & 8) != 0 )
  {
    v8 = CTopLevelWindow::SetExcludeFromDDA(v7, (v10 & 8) != 0);
    v9 = v8;
    if ( v8 < 0 )
    {
      v33 = 5097;
      goto LABEL_51;
    }
  }
  v11 = *((_QWORD *)v7 + 6);
  *((_QWORD *)v7 + 32) = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v11 + 8LL));
  v12 = *((_QWORD *)this + 67);
  if ( v12 && (*(_BYTE *)(v12 + 84) & 8) == 0 )
  {
    v13 = *((_QWORD *)v7 + 32);
    *((_QWORD *)v7 + 67) = *(_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v13 + 72) - 1));
    v14 = *(_QWORD *)(v13 + 48);
    if ( *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v13 + 72) - 1)) )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 8LL
                                                                        * (unsigned int)(*(_DWORD *)(v13 + 72) - 1))
                                                      + 8LL));
    v15 = *((_QWORD *)v7 + 67);
    *((_QWORD *)v7 + 66) = **(_QWORD **)(v15 + 48);
    v16 = *(_QWORD *)(v15 + 48);
    if ( *(_QWORD *)v16 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v16 + 8LL));
  }
  v17 = *((_QWORD *)this + 64);
  if ( v17 )
  {
    if ( (*(_BYTE *)(v17 + 84) & 8) == 0 )
    {
      v24 = *((_QWORD *)this + 34);
      if ( v24 )
      {
        if ( (*(_BYTE *)(v24 + 84) & 8) == 0 )
        {
          v25 = *((_QWORD *)this + 35);
          if ( !v25 || (*(_BYTE *)(v25 + 84) & 8) != 0 )
            v26 = 0LL;
          else
            v26 = 8LL;
          v27 = *((_QWORD *)this + 36);
          if ( !v27 || (*(_BYTE *)(v27 + 84) & 8) != 0 )
            v28 = 0LL;
          else
            v28 = 8LL;
          v29 = *((_QWORD *)this + 33);
          if ( !v29 || (*(_BYTE *)(v29 + 84) & 8) != 0 )
            v30 = 0LL;
          else
            v30 = 8LL;
          v31 = *(_QWORD *)(v28 + v30 + *(_QWORD *)(*((_QWORD *)v7 + 32) + 48LL) + v26);
          if ( v31 )
          {
            *((_QWORD *)v7 + 64) = **(_QWORD **)(v31 + 48);
            v32 = *(_QWORD *)(v31 + 48);
            if ( *(_QWORD *)v32 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v32 + 8LL));
          }
        }
      }
    }
  }
  *(_OWORD *)((char *)v7 + 588) = *(_OWORD *)((char *)this + 588);
  *(_OWORD *)((char *)v7 + 604) = *(_OWORD *)((char *)this + 604);
  *(_OWORD *)((char *)v7 + 620) = *(_OWORD *)((char *)this + 620);
  *(_OWORD *)((char *)v7 + 636) = *(_OWORD *)((char *)this + 636);
  *(_OWORD *)((char *)v7 + 652) = *(_OWORD *)((char *)this + 652);
  *((_BYTE *)v7 + 240) ^= (*((_BYTE *)v7 + 240) ^ *((_BYTE *)this + 240)) & 8;
  *((_BYTE *)v7 + 241) ^= (*((_BYTE *)this + 241) ^ *((_BYTE *)v7 + 241)) & 2;
  if ( (*((_BYTE *)this + 240) & 0x20) == 0 )
  {
    v18 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v18 )
      CRenderDataVisual::ClearInstructions(v18);
    CTopLevelWindow::SetShadowOpacity(v7, 0.0);
    v19 = (CBaseObject *)*((_QWORD *)this + 68);
    if ( v19 )
    {
      CBaseObject::Release(v19);
      *((_QWORD *)this + 68) = 0LL;
    }
    v20 = (CBaseObject *)*((_QWORD *)this + 69);
    if ( v20 )
    {
      CBaseObject::Release(v20);
      *((_QWORD *)this + 69) = 0LL;
    }
    v21 = (CBaseObject *)*((_QWORD *)this + 71);
    if ( v21 )
    {
      CBaseObject::Release(v21);
      *((_QWORD *)this + 71) = 0LL;
    }
    v22 = (CBaseObject *)*((_QWORD *)this + 72);
    if ( v22 )
    {
      CBaseObject::Release(v22);
      *((_QWORD *)this + 72) = 0LL;
    }
    CVisual::SetDirtyFlags(this, 0x4000);
  }
LABEL_30:
  *((_BYTE *)this + 240) &= ~0x20u;
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
