/*
 * XREFs of NdisMSetTimer @ 0x1C0012C60
 * Callers:
 *     NdisSetTimer @ 0x1C0023050 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1C0061100 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1C0061140 (NdisSetTimerEx.c)
 *     ndisMTimerDpc @ 0x1C0062460 (ndisMTimerDpc.c)
 * Callees:
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

BOOLEAN __fastcall NdisMSetTimer(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 144);
  v5 = -10000LL * a2;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3784) + 26LL) & 2) != 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
    v8 = *(_QWORD *)(a1 + 144);
    v9 = *(_QWORD *)(v8 + 560);
    v10 = v9;
    if ( !v9 )
      goto LABEL_9;
    do
    {
      if ( v10 == a1 )
        break;
      v10 = *(_QWORD *)(v10 + 152);
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 152) = v9;
      *(_QWORD *)(v8 + 560) = a1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 144) + 1880LL), v7);
  }
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_qqd(10LL, &WPP_8a5864e380f63192cebb74f600d7ef38_Traceguids, *(_QWORD *)(a1 + 144), a1, a2);
  return KeSetTimer((PKTIMER)a1, (LARGE_INTEGER)v5, (PKDPC)(a1 + 64));
}
