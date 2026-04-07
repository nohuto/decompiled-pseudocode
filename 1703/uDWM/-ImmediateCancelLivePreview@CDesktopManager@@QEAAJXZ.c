/*
 * XREFs of ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x18000DDB8
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180005354 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ImmediateCancelLivePreview(CDesktopManager *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  WPARAM v4; // rdi
  signed int LastError; // eax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         56LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_DWORD *)(v3 + 24) = 1;
    *(_DWORD *)(v3 + 32) = 1;
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 144), 0x405u, v4, 0LL) )
    {
      v4 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v2 = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x8E8u);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8DBu);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WPARAM))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return v2;
}
