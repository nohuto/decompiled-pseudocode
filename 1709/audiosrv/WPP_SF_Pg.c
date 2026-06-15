/*
 * XREFs of WPP_SF_Pg @ 0x18006B914
 * Callers:
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x18006B410 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, 38LL, (__int64 *)va);
}
