/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00C1170
 * Callers:
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C0B70 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
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
    xmmword_1C0098880 = result[1];
    xmmword_1C0098890 = result[2];
    xmmword_1C00988A0 = result[3];
    xmmword_1C00988B0 = result[4];
    xmmword_1C00988C0 = result[5];
    xmmword_1C00988D0 = result[6];
    xmmword_1C00988E0 = result[7];
  }
  return result;
}
