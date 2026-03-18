/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x18006CC90
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800687D0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x18003A1B0 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwndRenderTarget *this, void **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  CHwDisplayRenderTarget *v6; // rcx
  __int64 (__fastcall *v7)(CHwDisplayRenderTarget *, void **); // rax
  int VBlankEvent; // eax

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 184LL))((char *)this - 64) )
  {
    if ( !*((_BYTE *)this + 725)
      && (v5 = *((_QWORD *)this + 6), *(_BYTE *)(v5 + 294))
      && *(_BYTE *)(v5 + 295)
      && (v6 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 7)) != 0LL )
    {
      v7 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, void **))(*(_QWORD *)v6 + 304LL);
      if ( v7 == CHwDisplayRenderTarget::GetVBlankEvent )
        VBlankEvent = CHwDisplayRenderTarget::GetVBlankEvent(v6, a2);
      else
        VBlankEvent = v7(v6, a2);
      v4 = VBlankEvent;
      if ( VBlankEvent < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F3570, 2u, VBlankEvent, 0x754u);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_1801F3570, 2u, -2147467263, 0x758u);
    }
  }
  return v4;
}
