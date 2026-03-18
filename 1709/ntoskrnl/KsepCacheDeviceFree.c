/*
 * XREFs of KsepCacheDeviceFree @ 0x1404F5490
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceDataList @ 0x1406DA8D0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(void **a1)
{
  void **v1; // r14
  void **v3; // rsi
  void **v4; // rbx

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (void **)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (void **)*v3;
      KsepStringFree(v4 + 2);
      KsepPoolFreePaged(v4[5]);
      KsepPoolFreePaged(v4);
    }
    KsepStringFree(a1 + 5);
    KsepPoolFreePaged(a1);
  }
}
