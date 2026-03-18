/*
 * XREFs of PfSnBeginBootPhase @ 0x14047892C
 * Callers:
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PfSnSetPrefetcherInformation @ 0x14048E1F0 (PfSnSetPrefetcherInformation.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     PfSnUpdatePrefetcherFlags @ 0x1400D26EC (PfSnUpdatePrefetcherFlags.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140478A18 (PfSnAllocateEnablePrefetcherTimer.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x140655414 (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnDetermineEnablePrefetcher @ 0x140655CA4 (PfSnDetermineEnablePrefetcher.c)
 */

__int64 __fastcall PfSnBeginBootPhase(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  int v4; // ecx
  unsigned int v6; // ecx
  __int64 EnablePrefetcherTimer; // rdi
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 >= 5 )
    return (unsigned int)-1073741811;
  v1 = 0;
  if ( !a1 )
  {
    EtwRegister(&MS_Kernel_Prefetch_Provider, 0LL, 0LL, &RegHandle);
    PfSnDetermineEnablePrefetcher();
    PfSnUpdatePrefetcherFlags(3, 1);
    v8 = -3000000000LL;
    PfSnQueueEnablePrefetcherTimer(&v8);
    return v1;
  }
  v2 = a1 - 1;
  if ( !v2 )
    goto LABEL_12;
  v3 = v2 - 1;
  if ( !v3 )
  {
    PfSnUpdatePrefetcherFlags(4, 1);
    v4 = 17;
LABEL_6:
    PfSnUpdatePrefetcherFlags(v4, 0);
    return v1;
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    if ( (PfSnUpdatePrefetcherFlags(8, 1) & 4) == 0 )
      return v1;
LABEL_12:
    v4 = 1;
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(16LL);
    if ( EnablePrefetcherTimer )
    {
      PfSnUpdatePrefetcherFlags(16, 1);
      KiSetTimerEx(EnablePrefetcherTimer, -600000000LL, 0, 0, EnablePrefetcherTimer + 64);
    }
  }
  return v1;
}
