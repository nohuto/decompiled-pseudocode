/*
 * XREFs of ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18000F10C
 * Callers:
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x18000ECD0 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18000F200 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x18000F250 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18000F5BC (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x18000F718 (--0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::Create(struct IDXGIAdapter *a1, unsigned int a2, struct CDWMDXGIAdapter **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CDWMDXGIAdapter *v7; // rax
  CMILRefCountBase *v8; // rbx
  unsigned int (__fastcall *v9)(CMILRefCountBase *__hidden); // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int (__fastcall *v12)(CMILRefCountBase *__hidden); // rax
  unsigned int (__fastcall *v13)(CMILRefCountBase *__hidden); // rax

  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v6 == WPF::ProcessHeapImpl::Alloc )
    v7 = (CDWMDXGIAdapter *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x180uLL);
  else
    v7 = (CDWMDXGIAdapter *)v6(WPF::g_pProcessHeap, 384uLL);
  if ( v7 )
    v8 = CDWMDXGIAdapter::CDWMDXGIAdapter(v7, a2, a1);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = **(unsigned int (__fastcall ***)(CMILRefCountBase *__hidden))v8;
    if ( v9 == CMILRefCountBase::AddRef )
      CMILRefCountBase::AddRef(v8);
    else
      v9(v8);
    v10 = CDWMDXGIAdapter::Initialize(v8);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x5Au);
    }
    else
    {
      *a3 = v8;
      v12 = **(unsigned int (__fastcall ***)(CMILRefCountBase *__hidden))v8;
      if ( v12 == CMILRefCountBase::AddRef )
        CMILRefCountBase::AddRef(v8);
      else
        v12(v8);
    }
    v13 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v8 + 8LL);
    if ( v13 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v8);
    else
      v13(v8);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56u);
  }
  return v11;
}
