/*
 * XREFs of StorpTelemetryDeviceStatisticsCommand @ 0x1C0002B14
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0003454 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     SendAtaPassthrough @ 0x1C0002BD4 (SendAtaPassthrough.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall StorpTelemetryDeviceStatisticsCommand(__int64 a1, __int64 a2, char a3)
{
  struct _DEVICE_OBJECT *v6; // rcx
  int v7; // edx
  int v9; // [rsp+20h] [rbp-60h]
  int v10; // [rsp+28h] [rbp-58h]
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  _BYTE InputBuffer[48]; // [rsp+48h] [rbp-38h] BYREF

  memset(&InputBuffer[2], 0, 0x2EuLL);
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  LODWORD(v11) = 0;
  *(_DWORD *)InputBuffer = 196656;
  *(_DWORD *)&InputBuffer[12] = 10;
  *(_QWORD *)&InputBuffer[24] = a2;
  *(_DWORD *)&InputBuffer[8] = 512;
  *(_WORD *)&InputBuffer[40] = 256;
  InputBuffer[42] = 4;
  InputBuffer[43] = a3;
  *(_DWORD *)&InputBuffer[44] = 3137536;
  v7 = SendAtaPassthrough(v6, InputBuffer, v9, v10, (__int64)&v11);
  if ( v7 >= 0 )
  {
    if ( (InputBuffer[46] & 1) != 0 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 2) != a3 )
        v7 = -1073741637;
      if ( !(unsigned __int16)*(_DWORD *)a2 )
        return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v7;
}
