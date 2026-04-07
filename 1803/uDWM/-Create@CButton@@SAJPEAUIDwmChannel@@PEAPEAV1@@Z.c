/*
 * XREFs of ?Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037B24
 * Callers:
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001D82C (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800175C0 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x180017760 (--0CButton@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::Create(struct IDwmChannel *a1, struct CButton **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  CButton *v5; // rax
  CButton *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x10u);
    return v8;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CButton *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1A0uLL);
  else
    v5 = (CButton *)v4(WPF::g_pProcessHeap, 416LL);
  if ( v5 )
    v6 = CButton::CButton(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_16;
  }
  v7 = CButton::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x10u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
