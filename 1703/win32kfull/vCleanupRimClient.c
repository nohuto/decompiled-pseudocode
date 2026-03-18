/*
 * XREFs of vCleanupRimClient @ 0x1C0109970
 * Callers:
 *     xxxDesktopThread @ 0x1C00C7B20 (xxxDesktopThread.c)
 * Callees:
 *     vCleanupRimClientWorker @ 0x1C0109B6C (vCleanupRimClientWorker.c)
 */

__int64 __fastcall vCleanupRimClient(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi

  v1 = a1;
  result = vCleanupRimClientWorker(a1);
  if ( v1 == -1 )
  {
    v3 = 0LL;
    v4 = 3LL;
    do
    {
      if ( (&aDeviceTemplate[0][11].Header.WaitListHead.Flink)[v3 / 8] )
      {
        result = Win32FreePool((&aDeviceTemplate[0][11].Header.WaitListHead.Flink)[v3 / 8]);
        (&aDeviceTemplate[0][11].Header.WaitListHead.Flink)[v3 / 8] = 0LL;
      }
      if ( (&aDeviceTemplate[0][11].Header.WaitListHead.Blink)[v3 / 8] )
      {
        result = Win32FreePool((&aDeviceTemplate[0][11].Header.WaitListHead.Blink)[v3 / 8]);
        (&aDeviceTemplate[0][11].Header.WaitListHead.Blink)[v3 / 8] = 0LL;
      }
      if ( *(_QWORD *)((char *)&aDeviceTemplate[0][14].Header.Lock + v3) )
      {
        result = Win32FreePool(*(_QWORD *)((char *)&aDeviceTemplate[0][14].Header.Lock + v3));
        *(_QWORD *)((char *)&aDeviceTemplate[0][14].Header.Lock + v3) = 0LL;
      }
      if ( *(_QWORD *)((char *)&aDeviceTemplate[0][16].Header.Lock + v3) )
      {
        result = Win32FreePool(*(_QWORD *)((char *)&aDeviceTemplate[0][16].Header.Lock + v3));
        *(_QWORD *)((char *)&aDeviceTemplate[0][16].Header.Lock + v3) = 0LL;
      }
      if ( *(_QWORD *)((char *)&aDeviceTemplate[0][18].Header.Lock + v3) )
      {
        result = Win32FreePool(*(_QWORD *)((char *)&aDeviceTemplate[0][18].Header.Lock + v3));
        *(_QWORD *)((char *)&aDeviceTemplate[0][18].Header.Lock + v3) = 0LL;
      }
      v3 += 560LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
