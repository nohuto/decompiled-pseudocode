/*
 * XREFs of NdisMSetTimer @ 0x1C00027C0
 * Callers:
 *     NdisSetTimer @ 0x1C0002A50 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1C00613E0 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1C0061430 (NdisSetTimerEx.c)
 *     ndisMTimerDpc @ 0x1C0062950 (ndisMTimerDpc.c)
 * Callees:
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

BOOLEAN __fastcall NdisMSetTimer(_LIST_ENTRY *Timer, int a2)
{
  _LIST_ENTRY *Flink; // rcx
  __int64 v5; // rbx
  KIRQL v7; // al
  _LIST_ENTRY *v8; // rdx
  _ULARGE_INTEGER v9; // r8
  struct _KTIMER *QuadPart; // rcx

  Flink = Timer[9].Flink;
  v5 = -10000LL * a2;
  if ( (BYTE2(Flink[236].Blink[1].Blink) & 2) != 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[117].Blink);
    v8 = Timer[9].Flink;
    v9 = (_ULARGE_INTEGER)v8[35].Flink;
    QuadPart = (struct _KTIMER *)v9.QuadPart;
    if ( !v9.QuadPart )
      goto LABEL_9;
    do
    {
      if ( QuadPart == (struct _KTIMER *)Timer )
        break;
      QuadPart = (struct _KTIMER *)QuadPart[2].DueTime.QuadPart;
    }
    while ( QuadPart );
    if ( !QuadPart )
    {
LABEL_9:
      Timer[9].Blink = (_LIST_ENTRY *)v9.QuadPart;
      v8[35].Flink = Timer;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&Timer[9].Flink[117].Blink, v7);
  }
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_qqd(10LL, &WPP_89199a78c9ed372c807b20ed02a65825_Traceguids, Timer[9].Flink, Timer, a2);
  return KeSetTimer((PKTIMER)Timer, (LARGE_INTEGER)v5, (PKDPC)&Timer[4]);
}
