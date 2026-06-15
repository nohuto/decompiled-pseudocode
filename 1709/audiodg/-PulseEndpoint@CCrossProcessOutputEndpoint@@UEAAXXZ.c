/*
 * XREFs of ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x140053710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 */

void __fastcall CCrossProcessOutputEndpoint::PulseEndpoint(CCrossProcessOutputEndpoint *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_91ab2b97ab4d34707bf437e2d8233063_Traceguids);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 32LL))(*((_QWORD *)this + 1) + 8LL);
}
