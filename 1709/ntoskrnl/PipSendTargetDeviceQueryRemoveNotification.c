/*
 * XREFs of PipSendTargetDeviceQueryRemoveNotification @ 0x14055BB28
 * Callers:
 *     PipProcessQueryRemovalInKernelMode @ 0x14055BBFC (PipProcessQueryRemovalInKernelMode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1406D5448 (PiSendTargetDeviceRemoveCanceledNotification.c)
 */

__int64 __fastcall PipSendTargetDeviceQueryRemoveNotification(__int64 a1, _QWORD **a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // edi
  int v5; // ebx
  _QWORD **i; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  PCWSTR v15; // rdx
  UNICODE_STRING *v16; // rcx
  PCWSTR SourceString[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  SourceString[0] = 0LL;
  if ( !a3 )
    return v4;
  for ( i = a2; ; ++i )
  {
    v11 = *i;
    if ( *i )
      v12 = *(_QWORD *)(v11[39] + 40LL);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 300);
      if ( ((v13 - 769) & 0xFFFFFFEE) == 0 && v13 != 785 )
        goto LABEL_9;
    }
    if ( *(_BYTE *)(a1 + 72) )
      break;
    v4 = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_QUERY_REMOVE, v11, 0LL, SourceString);
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_15;
LABEL_9:
    if ( ++v5 >= a3 )
      return v4;
  }
  v4 = -1073741536;
LABEL_15:
  v15 = SourceString[0];
  v16 = (UNICODE_STRING *)(a4 + 2);
  *a4 = 7;
  if ( v15 )
    RtlCopyUnicodeString(v16, (PCUNICODE_STRING)(v15 + 28));
  else
    RtlInitUnicodeString(v16, 0LL);
  if ( v5 )
    PiSendTargetDeviceRemoveCanceledNotification(a2, (unsigned int)(v5 - 1));
  return v4;
}
