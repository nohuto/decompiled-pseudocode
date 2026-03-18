/*
 * XREFs of ?GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z @ 0x1C0052D90
 * Callers:
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     ?SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z @ 0x1C00D2D8C (-SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z.c)
 *     DrvGetMonitorBrightness @ 0x1C00D50C0 (DrvGetMonitorBrightness.c)
 *     DrvSetMonitorBrightness2 @ 0x1C00D5B80 (DrvSetMonitorBrightness2.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0052E00 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

struct tagPER_MONITOR_DATA *__fastcall GetPerMonitorData(struct _LUID a1)
{
  wchar_t *v1; // r9
  __int64 v2; // r8
  int v3; // r10d
  unsigned int v4; // ecx
  struct tagPER_MONITOR_DATA *result; // rax
  struct _LUID v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = gpGraphicsDeviceList;
  v2 = 0LL;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    if ( (unsigned __int8)operator==(v1 + 124, &v6, v2) )
      break;
    v1 = (wchar_t *)*((_QWORD *)v1 + 16);
  }
  while ( v1 );
  if ( !v1 )
    return 0LL;
  v4 = *((_DWORD *)v1 + 54);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = (struct tagPER_MONITOR_DATA *)(*((_QWORD *)v1 + 28) + 32LL * (unsigned int)v2);
    if ( *((_DWORD *)result + 1) == v3 )
      break;
    LODWORD(v2) = v2 + 1;
    if ( (unsigned int)v2 >= v4 )
      return 0LL;
  }
  return result;
}
