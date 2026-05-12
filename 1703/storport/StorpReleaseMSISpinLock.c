/*
 * XREFs of StorpReleaseMSISpinLock @ 0x1C000DEF0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 */

__int64 __fastcall StorpReleaseMSISpinLock(__int64 a1, unsigned int a2, KIRQL a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = 0;
  if ( a1 )
  {
    v5 = **(_QWORD **)(a1 - 16);
    if ( !*(_BYTE *)(v5 + 4449) )
      return (unsigned int)-1056964601;
    v6 = *(_QWORD *)(v5 + 4432);
    if ( a2 < *(_DWORD *)(v6 + 4) )
    {
      KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v6 + 48LL * a2 + 24), a3);
      return v4;
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 56LL, &WPP_b8c4fabb6c503934ded1881555415092_Traceguids, a4);
  }
  return (unsigned int)-1056964602;
}
