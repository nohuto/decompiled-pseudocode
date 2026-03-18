/*
 * XREFs of PnpSetPlugPlayEvent @ 0x1404DA0E0
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404DA388 (PnpCreateDeviceEventEntry.c)
 */

void __fastcall PnpSetPlugPlayEvent(__int128 *a1, _QWORD *a2)
{
  void *v2; // rbp
  __int64 v4; // rsi
  int v5; // r14d
  __int64 DeviceEventEntry; // rax
  __int64 v7; // rbx
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = a2;
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    v4 = *(_QWORD *)(a2[39] + 40LL);
    if ( v4 )
    {
      v5 = *(unsigned __int16 *)(v4 + 40) + 80;
      DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(v4 + 40) + 184);
      v7 = DeviceEventEntry;
      if ( DeviceEventEntry )
      {
        v8 = *a1;
        *(_DWORD *)(DeviceEventEntry + 140) = v5;
        *(_OWORD *)(DeviceEventEntry + 104) = v8;
        v9 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v9 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( v9 )
          *(_DWORD *)(v7 + 120) = 1;
        else
          *(_DWORD *)(v7 + 120) = 4;
        memmove((void *)(v7 + 152), *(const void **)(v4 + 48), *(unsigned __int16 *)(v4 + 40));
        *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v4 + 40) >> 1) + 152) = 0;
        v10 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v10 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( !v10 )
          goto LABEL_11;
        v11 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
          v11 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
        if ( v11 )
          ObfReferenceObjectWithTag(v2, 0x56706E50u);
        else
LABEL_11:
          v2 = 0LL;
        *(_QWORD *)(v7 + 144) = v2;
        PnpInsertEventInQueue(v7);
      }
    }
  }
}
