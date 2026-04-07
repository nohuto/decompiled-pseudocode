/*
 * XREFs of ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180031138
 * Callers:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18000D5B4 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180030E3C (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Create(struct CBitmapSource *a1, struct CDrawNineGridInstruction **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  struct _MARGINS *v5; // rax
  struct CDrawNineGridInstruction *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (struct _MARGINS *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x80uLL);
  else
    v5 = (struct _MARGINS *)v4(WPF::g_pProcessHeap, 128LL);
  v6 = (struct CDrawNineGridInstruction *)v5;
  if ( v5 )
  {
    v5->cyTopHeight = 1;
    *(_QWORD *)&v5->cxLeftWidth = &CDrawNineGridInstruction::`vftable';
    v7 = CDrawNineGridInstruction::Initialize(v5, a1);
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
