/*
 * XREFs of ?Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016360
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x18002ECB0 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18002ED88 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::Create(struct IDwmChannel *a1, struct CTopLevelWindow3D **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CTopLevelWindow3D *v5; // rax
  CTopLevelWindow3D *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x40u);
    return v8;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CTopLevelWindow3D *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1E8uLL);
  else
    v5 = (CTopLevelWindow3D *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 488LL);
  if ( v5 )
    v6 = CTopLevelWindow3D::CTopLevelWindow3D(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_16;
  }
  v7 = CTopLevelWindow3D::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x40u);
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
