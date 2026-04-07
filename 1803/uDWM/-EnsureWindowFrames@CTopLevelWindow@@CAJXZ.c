/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180038E54
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800402BC (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18004004C (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // ebx
  unsigned int v2; // edi
  int v3; // esi
  CTopLevelWindow::WindowFrame *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !dword_1800CA1A8 )
  {
    v2 = v8;
    v3 = 0;
    while ( 1 )
    {
      v4 = (CTopLevelWindow::WindowFrame *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                             WPF::g_pProcessHeap,
                                             1888LL);
      v5 = v4 ? CTopLevelWindow::WindowFrame::WindowFrame(v4) : 0LL;
      v8 = v5;
      if ( !v5 )
        break;
      v6 = dword_1800CA1A8 + 1;
      if ( dword_1800CA1A8 + 1 >= (unsigned int)dword_1800CA1A8 )
        v2 = dword_1800CA1A8 + 1;
      if ( v6 < dword_1800CA1A8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6 < dword_1800CA1A8 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v2 > dword_1800CA1A4 )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8, 1, &v8);
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
      }
      else
      {
        *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_1800CA1A8) = v8;
        dword_1800CA1A8 = v2;
      }
      if ( (unsigned int)++v3 >= 6 )
        return v0;
    }
    v0 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27Au);
  }
  return v0;
}
