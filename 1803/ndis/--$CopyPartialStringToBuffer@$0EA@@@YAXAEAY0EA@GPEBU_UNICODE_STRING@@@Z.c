/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00C68DC
 * Callers:
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C6320 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

_OWORD *__fastcall CopyPartialStringToBuffer<64>(__int64 a1, const void **a2)
{
  _OWORD *result; // rax

  if ( *(_WORD *)a2 < 0x80u )
  {
    memset(&g_DeviceReadyNotificationName, 0, 0x80uLL);
    return memmove(&g_DeviceReadyNotificationName, a2[1], *(unsigned __int16 *)a2);
  }
  else
  {
    result = a2[1];
    *(_OWORD *)&g_DeviceReadyNotificationName = *result;
    xmmword_1C009AD20 = result[1];
    xmmword_1C009AD30 = result[2];
    xmmword_1C009AD40 = result[3];
    xmmword_1C009AD50 = result[4];
    xmmword_1C009AD60 = result[5];
    xmmword_1C009AD70 = result[6];
    xmmword_1C009AD80 = result[7];
  }
  return result;
}
