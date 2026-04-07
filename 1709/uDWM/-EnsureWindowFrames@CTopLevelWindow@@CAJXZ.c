/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180036238
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x180039F90 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18003CD00 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // ebx
  unsigned int v2; // edi
  int v3; // esi
  unsigned int v4; // ebp
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rax
  CTopLevelWindow::WindowFrame *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !dword_1800C1948 )
  {
    v2 = v10;
    v3 = 0;
    while ( 1 )
    {
      v4 = v2;
      v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      v6 = v5 == WPF::ProcessHeapImpl::AllocClear
         ? (CTopLevelWindow::WindowFrame *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x760uLL)
         : (CTopLevelWindow::WindowFrame *)v5(WPF::g_pProcessHeap, 1888LL);
      if ( v6 )
      {
        v7 = CTopLevelWindow::WindowFrame::WindowFrame(v6);
        v10 = v7;
      }
      else
      {
        v7 = 0LL;
        v10 = 0LL;
      }
      if ( !v7 )
        break;
      v8 = dword_1800C1948 + 1;
      v2 = dword_1800C1948 + 1;
      if ( dword_1800C1948 + 1 < (unsigned int)dword_1800C1948 )
        v2 = v4;
      if ( v8 < dword_1800C1948 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8 < dword_1800C1948 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v2 > dword_1800C1944 )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8u, 1, &v10);
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1800C1948) = v10;
        dword_1800C1948 = v2;
      }
      if ( (unsigned int)++v3 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x23Bu);
  }
  return v0;
}
