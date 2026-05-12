/*
 * XREFs of RaidInitializeAdapter @ 0x1C0064BA8
 * Callers:
 *     RaDriverAddDevice @ 0x1C002CCB0 (RaDriverAddDevice.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0011818 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidAllocateDeviceProperty @ 0x1C00295F8 (RaidAllocateDeviceProperty.c)
 *     RaGetBusInterface @ 0x1C0038F1C (RaGetBusInterface.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C0043188 (StorpInitializeAdapterTelemetry.c)
 *     PortGetLinkTimeoutValue @ 0x1C00483C4 (PortGetLinkTimeoutValue.c)
 *     PortRegistryReadDeviceKey @ 0x1C005F7A0 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C005F850 (PortRegistryWriteDeviceKey.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C00661C4 (RiAllocateMiniportDeviceExtension.c)
 *     PortGetDriverParameters @ 0x1C0067AE8 (PortGetDriverParameters.c)
 *     PortGetIoLatencyCapValue @ 0x1C0067B6C (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C0067C54 (PortGetIoTimeoutValue.c)
 *     PortGetRegistrySettings @ 0x1C0067D44 (PortGetRegistrySettings.c)
 *     PortReadStorageBusType @ 0x1C0067F44 (PortReadStorageBusType.c)
 */

__int64 __fastcall RaidInitializeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  int v9; // r13d
  __int128 v10; // xmm0
  int BusInterface; // r8d
  _QWORD **v12; // r9
  _QWORD *i; // rdx
  _QWORD *v14; // rcx
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // r14
  __int64 v20; // rcx
  __int64 *v21; // rsi
  int v22; // eax
  unsigned int v23; // ecx
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  const struct _TlgProvider_t *v36; // rcx
  const struct _TlgProvider_t *v37; // rcx
  const GUID *v38; // r8
  const GUID *v39; // r9
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  UUID *p_Uuid; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v42; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  int v48; // [rsp+64h] [rbp-9Ch] BYREF
  int v49; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v51; // [rsp+80h] [rbp-80h] BYREF
  ULONG Seed; // [rsp+84h] [rbp-7Ch] BYREF
  int v53; // [rsp+88h] [rbp-78h] BYREF
  int v54; // [rsp+8Ch] [rbp-74h] BYREF
  int v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v58[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h]
  _OWORD v60[21]; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+210h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  const GUID *v63; // [rsp+240h] [rbp+140h]
  __int64 v64; // [rsp+248h] [rbp+148h]
  int *v65; // [rsp+250h] [rbp+150h]
  __int64 v66; // [rsp+258h] [rbp+158h]
  int *v67; // [rsp+260h] [rbp+160h]
  __int64 v68; // [rsp+268h] [rbp+168h]
  __int64 *v69; // [rsp+270h] [rbp+170h]
  __int64 v70; // [rsp+278h] [rbp+178h]
  int *v71; // [rsp+280h] [rbp+180h]
  __int64 v72; // [rsp+288h] [rbp+188h]
  __int64 *v73; // [rsp+290h] [rbp+190h]
  __int64 v74; // [rsp+298h] [rbp+198h]

  v7 = a1 + 296;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  v9 = a2;
  *(_QWORD *)(a1 + 24) = a4;
  v56 = a3;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v10 = *a6;
  *(_DWORD *)(a1 + 2072) = a7;
  *(_DWORD *)(a1 + 2156) = 1;
  *(_OWORD *)(a1 + 40) = v10;
  *(_BYTE *)(a1 + 4989) = 1;
  *(_DWORD *)(a1 + 5456) = 0;
  *(_QWORD *)(a1 + 296) = a1;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  BusInterface = RaGetBusInterface(DeviceObject);
  if ( BusInterface == -1 )
    BusInterface = 0;
  if ( !BusInterface )
    *(_BYTE *)(a1 + 104) |= 8u;
  v12 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 96LL);
  for ( i = *v12; ; i = (_QWORD *)*i )
  {
    if ( i == v12 )
    {
      v14 = 0LL;
      goto LABEL_11;
    }
    v14 = i - 26;
    if ( (*(_DWORD *)(i - 3) & 0x800) != 0 )
      break;
    if ( *((_DWORD *)v14 + 1) == BusInterface )
      goto LABEL_11;
  }
  *((_DWORD *)v14 + 1) = BusInterface;
LABEL_11:
  *(_QWORD *)(a1 + 528) = v14;
  if ( !v14 )
    return 3221225486LL;
  v16 = *((_DWORD *)v14 + 1);
  *(_BYTE *)(a1 + 110) |= 2u;
  *(_DWORD *)(a1 + 312) = v16;
  result = RiAllocateMiniportDeviceExtension(v7);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 2080);
    v17 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2152) = 30;
    PortGetLinkTimeoutValue(v17, a7);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = (_DWORD *)(a1 + 4204);
    *(_DWORD *)(a1 + 4204) = 0;
    PortGetIoTimeoutValue(v18 + 40, a1 + 4204);
    v20 = *(_QWORD *)(a1 + 16);
    v21 = (__int64 *)(a1 + 5000);
    *(_QWORD *)(a1 + 5000) = 0LL;
    PortGetIoLatencyCapValue(v20 + 40, a1 + 5000);
    if ( *(_QWORD *)(a1 + 5000) )
      *v21 = 10000LL * *(_QWORD *)(a1 + 5000);
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v42, L"TotalSenseDataBytes");
    p_Uuid = (UUID *)&v43;
    v40 = 4;
    v22 = PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 4, (__int64)&p_Uuid, &v40);
    v23 = v43;
    if ( v22 < 0 )
      v23 = 256;
    v43 = v23;
    if ( v23 > 0x12 )
    {
      v24 = v23;
      if ( v23 >= 0xFF )
        v24 = -1;
      *(_BYTE *)(a1 + 4988) = v24;
    }
    else
    {
      *(_BYTE *)(a1 + 4988) = 18;
    }
    RtlInitUnicodeString(&v42, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v44;
    v40 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 4, (__int64)&p_Uuid, &v40) >= 0 )
    {
      v25 = *(_BYTE *)(a1 + 104);
      if ( v44 )
        v26 = v25 | 0x20;
      else
        v26 = v25 & 0xDF;
      *(_BYTE *)(a1 + 104) = v26;
    }
    RtlInitUnicodeString(&v42, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 108) &= ~0x10u;
    p_Uuid = (UUID *)&v45;
    v40 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 4, (__int64)&p_Uuid, &v40) >= 0 )
    {
      v27 = *(_BYTE *)(a1 + 108);
      if ( v45 )
        v28 = v27 | 0x10;
      else
        v28 = v27 & 0xEF;
      *(_BYTE *)(a1 + 108) = v28;
    }
    RtlInitUnicodeString(&v42, L"DisableD3Cold");
    v29 = *(_BYTE *)(a1 + 108) & 0xF3 | 4;
    v40 = 4;
    *(_BYTE *)(a1 + 108) = v29;
    p_Uuid = (UUID *)&v46;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 4, (__int64)&p_Uuid, &v40) >= 0 )
    {
      v30 = *(_BYTE *)(a1 + 108);
      if ( v46 )
        v31 = v30 & 0xFB;
      else
        v31 = v30 | 4;
      *(_BYTE *)(a1 + 108) = v31;
    }
    RtlInitUnicodeString(&v42, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 5104) = 60000;
    v40 = 4;
    p_Uuid = (UUID *)&v47;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 4, (__int64)&p_Uuid, &v40) >= 0 )
    {
      v32 = v47;
      *(_BYTE *)(a1 + 108) |= 0x40u;
      *(_DWORD *)(a1 + 5104) = v32;
    }
    RtlInitUnicodeString(&v42, L"UseDMAv3");
    *(_BYTE *)(a1 + 109) &= ~2u;
    p_Uuid = (UUID *)&v48;
    v40 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 4, (__int64)&p_Uuid, &v40) >= 0 )
      *(_BYTE *)(a1 + 109) = (v48 != 0 ? 2 : 0) | *(_BYTE *)(a1 + 109) & 0xFD;
    RtlInitUnicodeString(&v42, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5688) = *v19;
    p_Uuid = (UUID *)&v49;
    v40 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 4, (__int64)&p_Uuid, &v40) >= 0
      && v49 )
    {
      *(_DWORD *)(a1 + 5688) = v49;
    }
    if ( *(_DWORD *)(a1 + 5688) > 0x6Eu )
      *(_DWORD *)(a1 + 5688) = 110;
    *(_BYTE *)(a1 + 108) &= ~0x80u;
    *(_BYTE *)(a1 + 109) |= 0x10u;
    *(_QWORD *)(a1 + 5096) = 0LL;
    memset(v60, 0, 0x148uLL);
    v33 = *(_QWORD *)(a1 + 16);
    HIDWORD(v60[2]) = 0;
    LODWORD(v60[0]) = 255;
    LODWORD(v60[2]) = -1;
    v60[1] = _mm_load_si128((const __m128i *)&_xmm);
    PortGetRegistrySettings(v33 + 40, a7, v60);
    *(_QWORD *)(a1 + 4368) = *((_QWORD *)&v60[1] + 1);
    *(_QWORD *)(a1 + 4376) = *(_QWORD *)&v60[1];
    *(_DWORD *)(a1 + 4352) = v60[2];
    *(_DWORD *)(a1 + 4360) = HIDWORD(v60[2]);
    *(_QWORD *)(a1 + 4400) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4384) = 0LL;
    *(_QWORD *)(a1 + 4392) = 0LL;
    *(_DWORD *)(a1 + 4356) = 6;
    if ( (unsigned __int8)PortReadStorageBusType(*(_QWORD *)(a1 + 16) + 40LL, &v51) )
      *(_DWORD *)(a1 + 4356) = v51;
    RaidDriverGetName(v56, (__int64)v58);
    *(_QWORD *)(a1 + 4800) = v59;
    RaidAllocateDeviceProperty(DeviceObject, v34, (_QWORD *)(a1 + 4808));
    Seed = MEMORY[0xFFFFF78000000320] ^ v9 ^ MEMORY[0xFFFFF78000000324] ^ (unsigned int)KeGetCurrentThread();
    *(_DWORD *)(a1 + 4816) = RtlRandomEx(&Seed);
    *(_DWORD *)(a1 + 5056) = -1;
    v35 = RaidLogListSize;
    *(_DWORD *)(a1 + 5060) = RaidLogListSize;
    *(_QWORD *)(a1 + 5064) = (a1 + 5824) & -(__int64)(v35 != 0);
    *(_QWORD *)&Uuid.Data1 = 0LL;
    *(_QWORD *)Uuid.Data4 = 0LL;
    RtlInitUnicodeString(&v42, L"AdapterGuid");
    p_Uuid = &Uuid;
    v40 = 16;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v42, 3, (__int64)&p_Uuid, &v40) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(DeviceObject, (__int64)&DestinationString, (__int64)&v42, 3u, (__int64)p_Uuid, 16);
    }
    *(UUID *)(a1 + 5192) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    if ( (unsigned int)dword_1C0056060 > 5 )
    {
      if ( TlgKeywordOn(v36, 0x400000000000uLL) )
      {
        v53 = *(_DWORD *)(a1 + 2152);
        v54 = *v19;
        v57 = *v21;
        v55 = *(unsigned __int8 *)(a1 + 4988);
        LODWORD(v56) = *(_DWORD *)(a1 + 5104);
        v65 = &v53;
        v67 = &v54;
        v69 = &v57;
        v71 = &v55;
        v73 = &v56;
        v63 = v39;
        v64 = 16LL;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 8LL;
        v72 = 4LL;
        v74 = 4LL;
        TlgWrite(v37, &unk_1C004BDDC, v38, v39, 8u, &pData);
      }
    }
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    return 0LL;
  }
  return result;
}
