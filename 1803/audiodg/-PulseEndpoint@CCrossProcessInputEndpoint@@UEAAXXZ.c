/*
 * XREFs of ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140016FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 */

void __fastcall CCrossProcessInputEndpoint::PulseEndpoint(CCrossProcessInputEndpoint *this)
{
  CCrossProcessBaseServerEndpoint *v2; // rcx
  void (*v3)(void); // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_77d6672618f634e744a5fd91239ca162_Traceguids);
  }
  v2 = (CCrossProcessBaseServerEndpoint *)(*((_QWORD *)this + 1) + 8LL);
  v3 = *(void (**)(void))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v3 == (char *)CCrossProcessBaseServerEndpoint::ProcessingComplete )
    CCrossProcessBaseServerEndpoint::ProcessingComplete(v2);
  else
    v3();
}
