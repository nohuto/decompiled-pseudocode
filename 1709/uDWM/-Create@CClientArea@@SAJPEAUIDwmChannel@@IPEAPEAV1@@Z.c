/*
 * XREFs of ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C3AC
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019C60 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18001E5B8 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002C4C0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180037920 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180018320 (--0CVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x18002C5B0 (-Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::Create(struct IDwmChannel *a1, unsigned int a2, struct CClientArea **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
  CVisual *v7; // rax
  CClientArea *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  if ( a3 )
  {
    v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v6 == WPF::ProcessHeapImpl::AllocClear )
      v7 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0xF8uLL);
    else
      v7 = (CVisual *)v6(WPF::g_pProcessHeap, 248LL);
    v8 = v7;
    if ( v7 )
    {
      CVisual::CVisual(v7);
      *(_QWORD *)v8 = &CClientArea::`vftable';
    }
    if ( v8 )
    {
      v9 = CClientArea::Initialize(v8, a1, a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x32u);
      }
      else
      {
        *a3 = v8;
        v8 = 0LL;
      }
      if ( v8 )
        CBaseObject::Release(v8);
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x30u);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2Cu);
  }
  return v10;
}
