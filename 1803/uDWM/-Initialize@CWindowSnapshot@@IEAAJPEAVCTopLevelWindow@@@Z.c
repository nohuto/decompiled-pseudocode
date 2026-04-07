/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002FFB4
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18002FE90 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800158C0 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180016598 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800195E0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18001D5A0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  __int64 v2; // rbx
  char v5; // bp
  int v6; // eax
  unsigned int v7; // edi
  void *(__fastcall *v8)(WPF::ProcessHeapImpl *, size_t); // rax
  CWindowData *v9; // rax
  CWindowData *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  CBaseObject *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-28h]
  CBaseObject *v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 90);
  v18 = 0LL;
  v5 = *(_BYTE *)(v2 + 592);
  if ( (v5 & 4) == 0 )
  {
    *(_BYTE *)(v2 + 592) = v5 & 0xFD;
    CWindowData::OnWindowStyleUpdated((CWindowData *)v2);
  }
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 392));
  v6 = CVisual::RenderRecursive(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 93;
    goto LABEL_27;
  }
  v8 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v8 == WPF::ProcessHeapImpl::AllocClear )
    v9 = (CWindowData *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x2E8uLL);
  else
    v9 = (CWindowData *)v8(WPF::g_pProcessHeap, 744LL);
  if ( v9 )
    v10 = CWindowData::CWindowData(v9);
  else
    v10 = 0LL;
  *((_QWORD *)this + 4) = v10;
  if ( !v10 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x62u);
    goto LABEL_18;
  }
  *((_QWORD *)v10 + 5) = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *(_QWORD *)(v2 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_OWORD *)(*((_QWORD *)this + 4) + 180LL) = *(_OWORD *)(v2 + 180);
  *(_OWORD *)(*((_QWORD *)this + 4) + 244LL) = *(_OWORD *)(v2 + 244);
  *(_OWORD *)(*((_QWORD *)this + 4) + 260LL) = *(_OWORD *)(v2 + 260);
  *(_DWORD *)(*((_QWORD *)this + 4) + 368LL) = *(_DWORD *)(v2 + 368);
  *(_BYTE *)(*((_QWORD *)this + 4) + 595LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 595LL) ^ *(_BYTE *)(v2 + 595)) & 2;
  *(_QWORD *)(*((_QWORD *)this + 4) + 120LL) = *(_QWORD *)(v2 + 120);
  *(_DWORD *)(*((_QWORD *)this + 4) + 600LL) = *(_DWORD *)(v2 + 600);
  *(_BYTE *)(*((_QWORD *)this + 4) + 596LL) ^= (*(_BYTE *)(v2 + 596) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 596LL)) & 4;
  *(_BYTE *)(*((_QWORD *)this + 4) + 344LL) = *(_BYTE *)(v2 + 344);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *(_DWORD *)(v2 + 112);
  *(_OWORD *)(*((_QWORD *)this + 4) + 604LL) = *(_OWORD *)(v2 + 604);
  *(_OWORD *)(*((_QWORD *)this + 4) + 620LL) = *(_OWORD *)(v2 + 620);
  *(_OWORD *)(*((_QWORD *)this + 4) + 636LL) = *(_OWORD *)(v2 + 636);
  *(_OWORD *)(*((_QWORD *)this + 4) + 652LL) = *(_OWORD *)(v2 + 652);
  *(_DWORD *)(*((_QWORD *)this + 4) + 100LL) = *(_DWORD *)(v2 + 100);
  *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(*((_QWORD *)this + 4) + 96LL) = *(_DWORD *)(v2 + 96);
  *(_OWORD *)(*((_QWORD *)this + 4) + 280LL) = *(_OWORD *)(v2 + 280);
  *(_QWORD *)(*((_QWORD *)this + 4) + 296LL) = *(_QWORD *)(v2 + 296);
  *(_BYTE *)(*((_QWORD *)this + 4) + 596LL) = *(_BYTE *)(v2 + 596) ^ (*(_BYTE *)(*((_QWORD *)this + 4) + 596LL) ^ *(_BYTE *)(v2 + 596)) & 0x7F;
  *(_BYTE *)(*((_QWORD *)this + 4) + 593LL) = (CWindowData::IsSimpleClientArea((CWindowData *)v2) == 0 ? 0x10 : 0) | *(_BYTE *)(*((_QWORD *)this + 4) + 593LL) & 0xEF;
  *(_QWORD *)(*((_QWORD *)this + 4) + 360LL) = *(_QWORD *)(v2 + 360);
  v11 = *(_QWORD *)(v2 + 360);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  *(_QWORD *)(*((_QWORD *)this + 4) + 376LL) = *(_QWORD *)(v2 + 376);
  v12 = *(_QWORD *)(v2 + 376);
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( (*(_BYTE *)(v2 + 596) & 4) == 0 )
  {
    v6 = CTopLevelWindow::CloneVisualTree(a2, &v18, 0, 0, 1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v17 = 135;
    }
    else
    {
      v13 = v18;
      v14 = *((_QWORD *)this + 4);
      v18 = 0LL;
      *((_QWORD *)this + 3) = v13;
      *(_QWORD *)(v14 + 392) = v13;
      v15 = *((_QWORD *)this + 3);
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = *((_QWORD *)this + 3);
      }
      *(_QWORD *)(v15 + 720) = *((_QWORD *)this + 4);
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 3));
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_18;
      v17 = 144;
    }
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v17);
  }
LABEL_18:
  *(_BYTE *)(v2 + 592) &= ~2u;
  *(_BYTE *)(v2 + 592) |= v5 & 2;
  if ( v18 )
    CBaseObject::Release(v18);
  return v7;
}
