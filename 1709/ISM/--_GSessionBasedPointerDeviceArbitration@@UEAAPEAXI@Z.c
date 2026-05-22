/*
 * XREFs of ??_GSessionBasedPointerDeviceArbitration@@UEAAPEAXI@Z @ 0x180071CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

SessionBasedPointerDeviceArbitration *__fastcall SessionBasedPointerDeviceArbitration::`scalar deleting destructor'(
        SessionBasedPointerDeviceArbitration *this,
        char a2)
{
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
