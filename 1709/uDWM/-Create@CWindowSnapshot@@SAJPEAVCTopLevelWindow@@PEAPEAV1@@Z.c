/*
 * XREFs of ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18000D10C
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000B810 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010FBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000D234 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::Create(struct CTopLevelWindow *a1, struct CWindowSnapshot **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CWindowSnapshot *v5; // rax
  struct CWindowSnapshot *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (struct CWindowSnapshot *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v5 = (struct CWindowSnapshot *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(
                                     WPF::g_pProcessHeap,
                                     104LL);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_QWORD *)v5 + 12) = 0LL;
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &CWindowSnapshot::`vftable'{for `CBaseObject'};
    *((_QWORD *)v5 + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    *((_DWORD *)v5 + 18) = 1065353216;
    v7 = CWindowSnapshot::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x36u);
    }
    else
    {
      *a2 = v6;
      v6 = 0LL;
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x34u);
  }
  return v8;
}
