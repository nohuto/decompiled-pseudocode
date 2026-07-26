/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00AC47C
 * Callers:
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00AC760 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
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
    xmmword_1C0093DC0 = result[1];
    xmmword_1C0093DD0 = result[2];
    xmmword_1C0093DE0 = result[3];
    xmmword_1C0093DF0 = result[4];
    xmmword_1C0093E00 = result[5];
    xmmword_1C0093E10 = result[6];
    xmmword_1C0093E20 = result[7];
  }
  return result;
}
