/*
 * XREFs of StorpTelemetryDeviceStatisticsCommand @ 0x1C0001DAC
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002D70 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     SendAtaPassthrough @ 0x1C0001E78 (SendAtaPassthrough.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall StorpTelemetryDeviceStatisticsCommand(__int64 a1, __int64 a2, char a3)
{
  struct _DEVICE_OBJECT *v6; // rcx
  int v7; // edx
  int v9; // [rsp+20h] [rbp-60h]
  int v10; // [rsp+28h] [rbp-58h]
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  _QWORD InputBuffer[6]; // [rsp+48h] [rbp-38h] BYREF

  memset(InputBuffer, 0, sizeof(InputBuffer));
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  LODWORD(v11) = 0;
  LODWORD(InputBuffer[0]) = 196656;
  InputBuffer[3] = a2;
  InputBuffer[1] = 0xA00000200LL;
  LOWORD(InputBuffer[5]) = 256;
  BYTE2(InputBuffer[5]) = 4;
  BYTE3(InputBuffer[5]) = a3;
  HIDWORD(InputBuffer[5]) = 3137536;
  v7 = SendAtaPassthrough(v6, InputBuffer, v9, v10, (__int64)&v11);
  if ( v7 >= 0 )
  {
    if ( (InputBuffer[5] & 0x1000000000000LL) != 0 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 2) != a3 )
        v7 = -1073741637;
      if ( !*(_WORD *)a2 )
        return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v7;
}
