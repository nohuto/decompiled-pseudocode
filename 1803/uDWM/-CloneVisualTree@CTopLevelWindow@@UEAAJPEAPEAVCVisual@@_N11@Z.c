/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800195E0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18001FB40 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002FFB4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180019948 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F2DC (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001F370 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x18001F84C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(
        CTopLevelWindow *this,
        struct CVisual **a2,
        bool a3,
        bool a4,
        bool a5)
{
  void *(*v9)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CTopLevelWindow *v10; // rax
  CTopLevelWindow *v11; // rdi
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  BOOL v23; // edx
  __int64 v24; // rax
  BOOL v25; // ecx
  __int64 v26; // rax
  BOOL v27; // eax
  __int64 v28; // r8
  __int64 v29; // rax
  char v30; // al
  CRenderDataVisual *v31; // rcx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  unsigned int v37; // [rsp+20h] [rbp-28h]

  *((_BYTE *)this + 240) &= ~0x20u;
  *((_BYTE *)this + 240) |= 32 * a3;
  v9 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v9 == WPF::ProcessHeapImpl::AllocClear )
    v10 = (CTopLevelWindow *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x338uLL);
  else
    v10 = (CTopLevelWindow *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v9)(WPF::g_pProcessHeap, 824LL);
  if ( v10 )
    v11 = CTopLevelWindow::CTopLevelWindow(v10);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1424u);
    goto LABEL_45;
  }
  v12 = CTopLevelWindow::Initialize(v11, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), 1);
  v13 = v12;
  if ( v12 < 0 )
  {
    v37 = 5157;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v37);
    goto LABEL_45;
  }
  *a2 = v11;
  _InterlockedAdd((volatile signed __int32 *)v11 + 2, 1u);
  v12 = CVisual::CloneVisualTree(this, a2, a3, a4, a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    v37 = 5161;
    goto LABEL_52;
  }
  if ( (*((_BYTE *)this + 241) & 8) != 0 )
  {
    v12 = CTopLevelWindow::SetExcludeFromDDA(v11, (*((_BYTE *)this + 241) & 8) != 0);
    v13 = v12;
    if ( v12 < 0 )
    {
      v37 = 5166;
      goto LABEL_52;
    }
  }
  v14 = *((_QWORD *)v11 + 6);
  *((_QWORD *)v11 + 32) = *(_QWORD *)v14;
  if ( *(_QWORD *)v14 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL), 1u);
  if ( (unsigned __int64)(*((_QWORD *)this + 101) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    VisualCollection::Remove(
      (VisualCollection *)(*((_QWORD *)v11 + 32) + 32LL),
      *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)v11 + 32) + 48LL)
                         + 8LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)v11 + 32) + 72LL) - 1)));
  v15 = *((_QWORD *)this + 67);
  if ( v15 && (*(_BYTE *)(v15 + 84) & 8) == 0 )
  {
    v16 = *((_QWORD *)v11 + 32);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v16 + 72) - 1));
    *((_QWORD *)v11 + 67) = v17;
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v16 + 72) - 1));
    if ( v18 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
      v17 = *((_QWORD *)v11 + 67);
    }
    *((_QWORD *)v11 + 66) = **(_QWORD **)(v17 + 48);
    v19 = *(_QWORD *)(v17 + 48);
    if ( *(_QWORD *)v19 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v19 + 8LL), 1u);
  }
  v20 = *((_QWORD *)this + 64);
  if ( v20 )
  {
    if ( (*(_BYTE *)(v20 + 84) & 8) == 0 )
    {
      v21 = *((_QWORD *)this + 34);
      if ( v21 )
      {
        if ( (*(_BYTE *)(v21 + 84) & 8) == 0 )
        {
          v22 = *((_QWORD *)this + 35);
          v23 = v22 && (*(_BYTE *)(v22 + 84) & 8) == 0;
          v24 = *((_QWORD *)this + 36);
          v25 = v24 && (*(_BYTE *)(v24 + 84) & 8) == 0;
          v26 = *((_QWORD *)this + 33);
          v27 = v26 && (*(_BYTE *)(v26 + 84) & 8) == 0;
          v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 32) + 48LL) + 8LL * (unsigned int)(v25 + v27 + v23));
          if ( v28 )
          {
            *((_QWORD *)v11 + 64) = **(_QWORD **)(v28 + 48);
            v29 = *(_QWORD *)(v28 + 48);
            if ( *(_QWORD *)v29 )
              _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v29 + 8LL), 1u);
          }
        }
      }
    }
  }
  v30 = *((_BYTE *)v11 + 240);
  *(_OWORD *)((char *)v11 + 588) = *(_OWORD *)((char *)this + 588);
  *(_OWORD *)((char *)v11 + 604) = *(_OWORD *)((char *)this + 604);
  *(_OWORD *)((char *)v11 + 620) = *(_OWORD *)((char *)this + 620);
  *(_OWORD *)((char *)v11 + 636) = *(_OWORD *)((char *)this + 636);
  *(_OWORD *)((char *)v11 + 652) = *(_OWORD *)((char *)this + 652);
  *((_BYTE *)v11 + 240) ^= (*((_BYTE *)this + 240) ^ v30) & 8;
  *((_BYTE *)v11 + 241) ^= (*((_BYTE *)v11 + 241) ^ *((_BYTE *)this + 241)) & 2;
  if ( (*((_BYTE *)this + 240) & 0x20) == 0 )
  {
    v31 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v31 )
      CRenderDataVisual::ClearInstructions(v31);
    CTopLevelWindow::SetShadowOpacity(v11, 0.0);
    v32 = (CBaseObject *)*((_QWORD *)this + 68);
    if ( v32 )
    {
      CBaseObject::Release(v32);
      *((_QWORD *)this + 68) = 0LL;
    }
    v33 = (CBaseObject *)*((_QWORD *)this + 69);
    if ( v33 )
    {
      CBaseObject::Release(v33);
      *((_QWORD *)this + 69) = 0LL;
    }
    v34 = (CBaseObject *)*((_QWORD *)this + 71);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *((_QWORD *)this + 71) = 0LL;
    }
    v35 = (CBaseObject *)*((_QWORD *)this + 72);
    if ( v35 )
    {
      CBaseObject::Release(v35);
      *((_QWORD *)this + 72) = 0LL;
    }
    CVisual::SetDirtyFlags(this, 0x4000u);
  }
LABEL_45:
  *((_BYTE *)this + 240) &= ~0x20u;
  if ( v11 )
    CBaseObject::Release(v11);
  return v13;
}
