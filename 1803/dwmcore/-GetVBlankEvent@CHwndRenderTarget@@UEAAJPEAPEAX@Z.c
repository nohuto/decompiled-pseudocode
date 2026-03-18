/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180060AE0
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x180046730 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwndRenderTarget *this, void **a2)
{
  __int64 v4; // rax
  CHwDisplayRenderTarget *v5; // rcx
  __int64 (__fastcall *v6)(CHwDisplayRenderTarget *, void **); // rax
  int VBlankEvent; // eax
  unsigned int v8; // ebx

  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 216LL))((char *)this - 64)
    && (v4 = *((_QWORD *)this + 13), *(_BYTE *)(v4 + 324))
    && *(_BYTE *)(v4 + 325)
    && (v5 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 14)) != 0LL )
  {
    v6 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, void **))(*(_QWORD *)v5 + 360LL);
    if ( v6 == CHwDisplayRenderTarget::GetVBlankEvent )
      VBlankEvent = CHwDisplayRenderTarget::GetVBlankEvent(v5, a2);
    else
      VBlankEvent = v6(v5, a2);
    v8 = VBlankEvent;
    if ( VBlankEvent < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, VBlankEvent, 0x66Cu);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x670u);
  }
  return v8;
}
