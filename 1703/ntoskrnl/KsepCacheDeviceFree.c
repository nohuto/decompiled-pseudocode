/*
 * XREFs of KsepCacheDeviceFree @ 0x1405ACEF0
 * Callers:
 *     KseQueryDeviceData @ 0x1405AC9D0 (KseQueryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1405ACD7C (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceDataList @ 0x1406AF480 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1404B4E70 (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (_QWORD *)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      KsepStringFree(v4 + 2);
      KsepPoolFreePaged((void *)v4[5]);
      KsepPoolFreePaged(v4);
    }
    KsepStringFree(a1 + 5);
    KsepPoolFreePaged(a1);
  }
}
