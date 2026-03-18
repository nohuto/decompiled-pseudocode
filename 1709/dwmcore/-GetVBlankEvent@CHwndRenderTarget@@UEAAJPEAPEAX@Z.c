/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180018320
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x18002BD00 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwndRenderTarget *this, void **a2)
{
  CHwndRenderTarget *v2; // rdi
  unsigned int v5; // ebx
  bool (__fastcall *v6)(CHwndRenderTarget *); // rax
  bool IsPrimaryMonitor; // al
  CHwDisplayRenderTarget *v8; // rcx
  int (*v9)(CHwDisplayRenderTarget *__hidden, void **); // rax
  int VBlankEvent; // eax

  v2 = (CHwndRenderTarget *)((char *)this - 64);
  v5 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 200LL))((char *)this - 64) )
  {
    v6 = *(bool (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v2 + 224LL);
    if ( v6 == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor(v2);
    else
      IsPrimaryMonitor = v6(v2);
    if ( IsPrimaryMonitor && (v8 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 7)) != 0LL )
    {
      v9 = *(int (**)(CHwDisplayRenderTarget *__hidden, void **))(*(_QWORD *)v8 + 312LL);
      if ( v9 == CHwDisplayRenderTarget::GetVBlankEvent )
        VBlankEvent = CHwDisplayRenderTarget::GetVBlankEvent(v8, a2);
      else
        VBlankEvent = ((__int64 (__fastcall *)(CHwDisplayRenderTarget *, void **))v9)(v8, a2);
      v5 = VBlankEvent;
      if ( VBlankEvent < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201DF8, 2u, VBlankEvent, 0x6AEu);
    }
    else
    {
      v5 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201DF8, 2u, -2147467263, 0x6B2u);
    }
  }
  return v5;
}
