/*
 * XREFs of ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18001A520
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001BCAC (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawImageInstruction::Create(
        struct CBitmapSource *a1,
        const struct tagRECT *a2,
        struct CDrawImageInstruction **a3)
{
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  CBaseObject *v10; // rcx
  __int64 v11; // rax

  v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x28uLL);
  else
    v7 = (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(WPF::g_pProcessHeap, 40LL);
  v8 = v7;
  v9 = 0;
  if ( v7 )
  {
    v7[2] = 1;
    *(_QWORD *)v7 = &CDrawImageInstruction::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v10 = (CBaseObject *)*((_QWORD *)v8 + 4);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *((_QWORD *)v8 + 4) = 0LL;
    }
    if ( a1 )
    {
      *((_QWORD *)v8 + 4) = *((_QWORD *)a1 + 2);
      v11 = *((_QWORD *)a1 + 2);
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    }
    if ( a2 )
    {
      *((struct tagRECT *)v8 + 1) = *a2;
    }
    else
    {
      *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 3) = 0LL;
    }
    *a3 = (struct CDrawImageInstruction *)v8;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  return v9;
}
