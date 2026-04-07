/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180016C8C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021FE8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800445EC (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180043070 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // ebx
  unsigned int v2; // edi
  int v3; // esi
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CTopLevelWindow::WindowFrame *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !dword_1800C10D8 )
  {
    v2 = v9;
    v3 = 0;
    while ( 1 )
    {
      v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      v5 = v4 == WPF::ProcessHeapImpl::AllocClear
         ? (CTopLevelWindow::WindowFrame *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x760uLL)
         : (CTopLevelWindow::WindowFrame *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(
                                             WPF::g_pProcessHeap,
                                             1888LL);
      if ( v5 )
      {
        v6 = CTopLevelWindow::WindowFrame::WindowFrame(v5);
        v9 = v6;
      }
      else
      {
        v6 = 0LL;
        v9 = 0LL;
      }
      if ( !v6 )
        break;
      v7 = dword_1800C10D8 + 1;
      if ( dword_1800C10D8 + 1 >= (unsigned int)dword_1800C10D8 )
        v2 = dword_1800C10D8 + 1;
      if ( v7 < dword_1800C10D8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7 < dword_1800C10D8 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v2 > dword_1800C10D4 )
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet(&CTopLevelWindow::s_rgpwfWindowFrames, 8LL, 1LL, &v9);
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1800C10D8) = v9;
        dword_1800C10D8 = v2;
      }
      if ( (unsigned int)++v3 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x242u);
  }
  return v0;
}
