/*
 * XREFs of PiEventQueryRemoveNotifyKernel @ 0x14059B004
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404A6548 (PnpNotifyTargetDeviceChange.c)
 *     PiEventRemovalCanceledNotifyKernel @ 0x1406AA370 (PiEventRemovalCanceledNotifyKernel.c)
 */

__int64 __fastcall PiEventQueryRemoveNotifyKernel(
        __int64 a1,
        _QWORD **a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5,
        PUNICODE_STRING DestinationString)
{
  unsigned int v6; // edi
  int v7; // ebx
  _QWORD **i; // rsi
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d

  v6 = 0;
  v7 = 0;
  if ( !a3 )
    return v6;
  for ( i = a2; ; ++i )
  {
    v13 = *i;
    if ( *i )
      v14 = *(_QWORD *)(v13[39] + 40LL);
    else
      v14 = 0LL;
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 300);
      if ( ((v15 - 769) & 0xFFFFFFEE) == 0 && v15 != 785 )
        goto LABEL_9;
    }
    if ( *(_BYTE *)(a1 + 72) )
      break;
    v6 = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_QUERY_REMOVE, v13, 0LL, a4);
    if ( (v6 & 0x80000000) != 0 )
      goto LABEL_15;
LABEL_9:
    if ( ++v7 >= a3 )
      return v6;
  }
  v6 = -1073741536;
LABEL_15:
  *a5 = 7;
  if ( *a4 )
    RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(*a4 + 56LL));
  else
    RtlInitUnicodeString(DestinationString, 0LL);
  if ( v7 )
    PiEventRemovalCanceledNotifyKernel(a2, (unsigned int)(v7 - 1));
  return v6;
}
