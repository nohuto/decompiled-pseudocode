/*
 * XREFs of PnpProcessTargetDeviceEvent @ 0x14054DF70
 * Callers:
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     McTemplateK0z @ 0x1401FEBA8 (McTemplateK0z.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 */

__int64 __fastcall PnpProcessTargetDeviceEvent(__int64 *a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = 0;
  v2 = *a1;
  v4 = *(_QWORD *)(*a1 + 144);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&P);
  v7 = (_QWORD *)(v2 + 104);
  v8 = *(_QWORD *)(v2 + 104) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(v2 + 112) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
  if ( !v8 )
    goto LABEL_16;
  v9 = *v7 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
  if ( *v7 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
    v9 = *(_QWORD *)(v2 + 112) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
  if ( v9 )
  {
    v10 = *v7 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( *v7 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
      v10 = *(_QWORD *)(v2 + 112) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( v10 )
    {
      memcmp(v7, &GUID_DEVICE_NOOP, 0x10uLL);
      v1 = 0;
    }
    else
    {
      PiUEventNotifyUserMode(v2);
    }
  }
  else
  {
LABEL_16:
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
      McTemplateK0z((__int64)v7, &KMPnPEvt_DeviceRemoval_Start, v6, *(const wchar_t **)(v5 + 48));
    v1 = PnpProcessQueryRemoveAndEject(a1);
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
      McTemplateK0z(v12, &KMPnPEvt_DeviceRemoval_Stop, v13, *(const wchar_t **)(v5 + 48));
  }
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v1;
}
