/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800198A0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800096A0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000D234 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018840 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180019BF4 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EFF0 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001F020 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x18001F4D8 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(CTopLevelWindow *this, struct CVisual **a2, char a3)
{
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CTopLevelWindow *v6; // rax
  CTopLevelWindow *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  BOOL v19; // edx
  __int64 v20; // rax
  BOOL v21; // ecx
  __int64 v22; // rax
  BOOL v23; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  char v26; // al
  CRenderDataVisual *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x13D7u);
    goto LABEL_43;
  }
  v8 = CTopLevelWindow::Initialize(v7, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v33 = 5080;
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v33);
    goto LABEL_43;
  }
  *a2 = v7;
  _InterlockedAdd((volatile signed __int32 *)v7 + 2, 1u);
  v8 = CVisual::CloneVisualTree(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v33 = 5084;
    goto LABEL_50;
  }
  if ( (*((_BYTE *)this + 241) & 8) != 0 )
  {
    v8 = CTopLevelWindow::SetExcludeFromDDA(v7, (*((_BYTE *)this + 241) & 8) != 0);
    v9 = v8;
    if ( v8 < 0 )
    {
      v33 = 5089;
      goto LABEL_50;
    }
  }
  v10 = *((_QWORD *)v7 + 6);
  *((_QWORD *)v7 + 32) = *(_QWORD *)v10;
  if ( *(_QWORD *)v10 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v10 + 8LL), 1u);
  v11 = *((_QWORD *)this + 67);
  if ( v11 && (*(_BYTE *)(v11 + 84) & 8) == 0 )
  {
    v12 = *((_QWORD *)v7 + 32);
    *((_QWORD *)v7 + 67) = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 72) - 1));
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 72) - 1));
    if ( v13 )
      _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    v14 = *((_QWORD *)v7 + 67);
    *((_QWORD *)v7 + 66) = **(_QWORD **)(v14 + 48);
    v15 = *(_QWORD *)(v14 + 48);
    if ( *(_QWORD *)v15 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v15 + 8LL), 1u);
  }
  v16 = *((_QWORD *)this + 64);
  if ( v16 )
  {
    if ( (*(_BYTE *)(v16 + 84) & 8) == 0 )
    {
      v17 = *((_QWORD *)this + 34);
      if ( v17 )
      {
        if ( (*(_BYTE *)(v17 + 84) & 8) == 0 )
        {
          v18 = *((_QWORD *)this + 35);
          v19 = v18 && (*(_BYTE *)(v18 + 84) & 8) == 0;
          v20 = *((_QWORD *)this + 36);
          v21 = v20 && (*(_BYTE *)(v20 + 84) & 8) == 0;
          v22 = *((_QWORD *)this + 33);
          v23 = v22 && (*(_BYTE *)(v22 + 84) & 8) == 0;
          v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 32) + 48LL) + 8LL * (unsigned int)(v21 + v23 + v19));
          if ( v24 )
          {
            *((_QWORD *)v7 + 64) = **(_QWORD **)(v24 + 48);
            v25 = *(_QWORD *)(v24 + 48);
            if ( *(_QWORD *)v25 )
              _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v25 + 8LL), 1u);
          }
        }
      }
    }
  }
  v26 = *((_BYTE *)v7 + 240);
  *(_OWORD *)((char *)v7 + 588) = *(_OWORD *)((char *)this + 588);
  *(_OWORD *)((char *)v7 + 604) = *(_OWORD *)((char *)this + 604);
  *(_OWORD *)((char *)v7 + 620) = *(_OWORD *)((char *)this + 620);
  *(_OWORD *)((char *)v7 + 636) = *(_OWORD *)((char *)this + 636);
  *(_OWORD *)((char *)v7 + 652) = *(_OWORD *)((char *)this + 652);
  *((_BYTE *)v7 + 240) ^= (*((_BYTE *)this + 240) ^ v26) & 8;
  *((_BYTE *)v7 + 241) ^= (*((_BYTE *)this + 241) ^ *((_BYTE *)v7 + 241)) & 2;
  if ( (*((_BYTE *)this + 240) & 0x20) == 0 )
  {
    v27 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v27 )
      CRenderDataVisual::ClearInstructions(v27);
    CTopLevelWindow::SetShadowOpacity(v7, 0.0);
    v28 = (CBaseObject *)*((_QWORD *)this + 68);
    if ( v28 )
    {
      CBaseObject::Release(v28);
      *((_QWORD *)this + 68) = 0LL;
    }
    v29 = (CBaseObject *)*((_QWORD *)this + 69);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *((_QWORD *)this + 69) = 0LL;
    }
    v30 = (CBaseObject *)*((_QWORD *)this + 71);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *((_QWORD *)this + 71) = 0LL;
    }
    v31 = (CBaseObject *)*((_QWORD *)this + 72);
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *((_QWORD *)this + 72) = 0LL;
    }
    CVisual::SetDirtyFlags(this, 0x4000);
  }
LABEL_43:
  *((_BYTE *)this + 240) &= ~0x20u;
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
