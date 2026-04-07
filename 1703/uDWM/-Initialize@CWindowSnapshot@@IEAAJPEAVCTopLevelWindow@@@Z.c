/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18003B5E4
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003B4BC (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024A00 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180028C98 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180035A54 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180036650 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180036B50 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v15; // rax
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
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 400));
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x62u);
    goto LABEL_18;
  }
  *((_QWORD *)v10 + 5) = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *(_QWORD *)(v2 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_OWORD *)(*((_QWORD *)this + 4) + 188LL) = *(_OWORD *)(v2 + 188);
  *(_OWORD *)(*((_QWORD *)this + 4) + 252LL) = *(_OWORD *)(v2 + 252);
  *(_OWORD *)(*((_QWORD *)this + 4) + 268LL) = *(_OWORD *)(v2 + 268);
  *(_DWORD *)(*((_QWORD *)this + 4) + 376LL) = *(_DWORD *)(v2 + 376);
  *(_BYTE *)(*((_QWORD *)this + 4) + 595LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 595LL) ^ *(_BYTE *)(v2 + 595)) & 4;
  *(_QWORD *)(*((_QWORD *)this + 4) + 120LL) = *(_QWORD *)(v2 + 120);
  *(_DWORD *)(*((_QWORD *)this + 4) + 600LL) = *(_DWORD *)(v2 + 600);
  *(_BYTE *)(*((_QWORD *)this + 4) + 596LL) ^= (*(_BYTE *)(v2 + 596) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 596LL)) & 8;
  *(_BYTE *)(*((_QWORD *)this + 4) + 352LL) = *(_BYTE *)(v2 + 352);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *(_DWORD *)(v2 + 112);
  *(_OWORD *)(*((_QWORD *)this + 4) + 604LL) = *(_OWORD *)(v2 + 604);
  *(_OWORD *)(*((_QWORD *)this + 4) + 620LL) = *(_OWORD *)(v2 + 620);
  *(_OWORD *)(*((_QWORD *)this + 4) + 636LL) = *(_OWORD *)(v2 + 636);
  *(_OWORD *)(*((_QWORD *)this + 4) + 652LL) = *(_OWORD *)(v2 + 652);
  *(_DWORD *)(*((_QWORD *)this + 4) + 100LL) = *(_DWORD *)(v2 + 100);
  *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(*((_QWORD *)this + 4) + 96LL) = *(_DWORD *)(v2 + 96);
  *(_OWORD *)(*((_QWORD *)this + 4) + 288LL) = *(_OWORD *)(v2 + 288);
  *(_QWORD *)(*((_QWORD *)this + 4) + 304LL) = *(_QWORD *)(v2 + 304);
  *(_QWORD *)(*((_QWORD *)this + 4) + 312LL) = *(_QWORD *)(v2 + 312);
  *(_BYTE *)(*((_QWORD *)this + 4) + 597LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 597LL) ^ *(_BYTE *)(v2 + 597)) & 1;
  *(_BYTE *)(*((_QWORD *)this + 4) + 593LL) = (CWindowData::IsSimpleClientArea((CWindowData *)v2) == 0 ? 0x10 : 0) | *(_BYTE *)(*((_QWORD *)this + 4) + 593LL) & 0xEF;
  *(_QWORD *)(*((_QWORD *)this + 4) + 368LL) = *(_QWORD *)(v2 + 368);
  v11 = *(_QWORD *)(v2 + 368);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  *(_QWORD *)(*((_QWORD *)this + 4) + 384LL) = *(_QWORD *)(v2 + 384);
  v12 = *(_QWORD *)(v2 + 384);
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( (*(_BYTE *)(v2 + 596) & 8) == 0 )
  {
    v6 = CTopLevelWindow::CloneVisualTree(a2, &v18, 0);
    v7 = v6;
    if ( v6 < 0 )
    {
      v17 = 136;
    }
    else
    {
      v13 = v18;
      v14 = *((_QWORD *)this + 4);
      v18 = 0LL;
      *((_QWORD *)this + 3) = v13;
      *(_QWORD *)(v14 + 400) = v13;
      v15 = *((_QWORD *)this + 3);
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      *(_QWORD *)(*((_QWORD *)this + 3) + 720LL) = *((_QWORD *)this + 4);
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 3));
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_18;
      v17 = 145;
    }
LABEL_27:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v17);
  }
LABEL_18:
  *(_BYTE *)(v2 + 592) &= ~2u;
  *(_BYTE *)(v2 + 592) |= v5 & 2;
  if ( v18 )
    CBaseObject::Release(v18);
  return v7;
}
