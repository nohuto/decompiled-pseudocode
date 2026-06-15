/*
 * XREFs of ServiceDeviceEvent @ 0x1800AD01C
 * Callers:
 *     ServiceDeviceEventCallback @ 0x1800AD1D0 (ServiceDeviceEventCallback.c)
 * Callees:
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x1800AC504 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800ACC48 (-OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800ACCA0 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800ACD1C (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     McTemplateU0qzq @ 0x1800ACF80 (McTemplateU0qzq.c)
 *     WPP_SF_DPS @ 0x1800AD514 (WPP_SF_DPS.c)
 *     WPP_SF_PS @ 0x1800AD5B4 (WPP_SF_PS.c)
 */

__int64 __fastcall ServiceDeviceEvent(unsigned int a1, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  unsigned __int64 v3; // rdi
  CAudioDGProcess *v4; // r10
  const unsigned __int16 *v5; // rax
  __int64 v6; // r10
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  DWORD dbcc_devicetype; // r9d
  int v13; // eax
  int v14; // ebx
  const unsigned __int16 *v15; // rax
  __int64 v16; // rdx
  char v17; // cl
  int v18; // r8d
  const wchar_t *v19; // rax
  __int64 v20; // rcx

  v3 = a1;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = EventTypeNameFromEventType(a1);
    WPP_SF_PS(*(_QWORD *)(v6 + 16), v7, v8, v3, (__int64)v5);
    v4 = WPP_GLOBAL_Control;
  }
  v9 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( v9 )
  {
    v10 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data4;
    if ( v10 )
    {
      v11 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
      if ( !v11 )
        v11 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
      if ( v11 )
        return 0LL;
    }
  }
  dbcc_devicetype = a2->dbcc_devicetype;
  if ( dbcc_devicetype != 5 )
  {
    if ( v4 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 0x20) != 0 && *((_BYTE *)v4 + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)v4 + 2), 0x17u, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, dbcc_devicetype);
    return 120LL;
  }
  switch ( (_DWORD)v3 )
  {
    case 0x8000:
      v13 = OnAudioDeviceArrival(a2);
LABEL_22:
      v14 = v13;
      if ( v13 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v15 = EventTypeNameFromEventType(v3);
          WPP_SF_DPS(*(_QWORD *)(v16 + 16), v16, v18, v14, v17, (__int64)v15);
        }
        if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
        {
          v19 = EventTypeNameFromEventType(v3);
          McTemplateU0qzq(v20, &EVT_AUDIOSRV_FAIL_SERVICE_DEVICE_EVENT, v3, v19, v14);
        }
      }
      return 0LL;
    case 0x8001:
      v13 = PostDeviceEvent(2, &a2->dbcc_size);
      goto LABEL_22;
    case 0x8002:
      return 0LL;
  }
  if ( (unsigned int)(v3 - 32771) <= 1 )
  {
    v13 = OnAudioDeviceRemoval(a2);
    goto LABEL_22;
  }
  return 120LL;
}
