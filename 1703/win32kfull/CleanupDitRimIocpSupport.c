/*
 * XREFs of CleanupDitRimIocpSupport @ 0x1C0109940
 * Callers:
 *     DitPrepRitTakeOver @ 0x1C0109914 (DitPrepRitTakeOver.c)
 *     InitDitRimIocpSupport @ 0x1C01A0494 (InitDitRimIocpSupport.c)
 * Callees:
 *     <none>
 */

PRKEVENT CleanupDitRimIocpSupport()
{
  PRKEVENT result; // rax
  PRKEVENT v1; // rcx
  void *v2; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  result = (PRKEVENT)gdwMitConfig;
  if ( (gdwMitConfig & 4) == 0 )
  {
    result = aDeviceTemplate[0];
    v1 = aDeviceTemplate[157];
    if ( v1 )
    {
      ZwClose(v1);
      aDeviceTemplate[157] = (PRKEVENT)-1LL;
      LOBYTE(aDeviceTemplate[158]) = 0;
      result = aDeviceTemplate[0];
    }
    v2 = *(void **)&result[54].Header.Lock;
    if ( v2 )
    {
      ZwClose(v2);
      aDeviceTemplate[162] = (PRKEVENT)-1LL;
      LOBYTE(aDeviceTemplate[163]) = 0;
      result = aDeviceTemplate[0];
    }
    Blink = result[55].Header.WaitListHead.Blink;
    if ( Blink )
    {
      ZwClose(Blink);
      aDeviceTemplate[167] = (PRKEVENT)-1LL;
      LOBYTE(aDeviceTemplate[168]) = 0;
      result = aDeviceTemplate[0];
    }
    Flink = result[57].Header.WaitListHead.Flink;
    if ( Flink )
    {
      ZwClose(Flink);
      aDeviceTemplate[172] = (PRKEVENT)-1LL;
      LOBYTE(aDeviceTemplate[173]) = 0;
      result = aDeviceTemplate[0];
    }
    v5 = *(void **)&result[60].Header.Lock;
    if ( v5 )
    {
      ZwClose(v5);
      aDeviceTemplate[180] = (PRKEVENT)-1LL;
      LOBYTE(aDeviceTemplate[181]) = 0;
      result = aDeviceTemplate[0];
    }
    v6 = *(void **)&result[62].Header.Lock;
    if ( v6 )
    {
      ZwClose(v6);
      aDeviceTemplate[186] = (PRKEVENT)-1LL;
      LOBYTE(aDeviceTemplate[187]) = 0;
      result = aDeviceTemplate[0];
    }
    v7 = *(void **)&result[64].Header.Lock;
    if ( v7 )
    {
      ZwClose(v7);
      aDeviceTemplate[192] = (PRKEVENT)-1LL;
      result = aDeviceTemplate[0];
      LOBYTE(aDeviceTemplate[193]) = 0;
    }
  }
  return result;
}
