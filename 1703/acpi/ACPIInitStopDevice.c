/*
 * XREFs of ACPIInitStopDevice @ 0x1C009F658
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0013214 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0045F80 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0046510 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C004E610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C004E890 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIBusIrpStopDevice @ 0x1C009D790 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C00020E4 (ACPIInternalClearFlags.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00077D8 (ACPIDeviceInternalDeviceRequest.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     IsNsobjPciBus @ 0x1C0090500 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  __int64 *v2; // rsi
  char *v3; // rbx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rsi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // r11d
  __int64 v15; // r9
  const char *v16; // rcx
  const char *v17; // r10
  __int64 v18; // r9
  const char *v19; // rcx
  const char *v20; // r10
  void *v21; // rcx
  void *v22; // rcx
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 712);
  v3 = (char *)(a1 + 952);
  if ( (*(_DWORD *)(a1 + 952) & 0x40000) == 0 && !IsNsobjPciBus(*(volatile signed __int32 **)(a1 + 712)) )
  {
    v6 = *(_DWORD *)(a1 + 336);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v3 < 0 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             (_QWORD *)a1,
                             4u,
                             (__int64)ACPIInitPowerRequestCompletion,
                             (__int64)&Event,
                             a2 != 0 ? 8 : 0) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
    }
  }
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(a1 + 184) )
  {
    v7 = (__int64 *)(a1 + 192);
    v8 = 3LL;
    do
    {
      v9 = *v7++;
      *(_BYTE *)(v9 + 130) = 0;
      --v8;
    }
    while ( v8 );
  }
  ACPIInternalClearFlags(v3, 1LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)v3 & 0x40100) == 0 )
    {
      v10 = AMLIGetNamedChild(v2, 1397310559);
      v11 = (volatile signed __int32 *)v10;
      if ( v10 )
      {
        v12 = AMLIEvalNameSpaceObject(v10, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v11, v13);
        if ( v12 >= 0 )
        {
          v14 = ACPIGet((__int64 *)a1, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v25, 0LL);
          if ( v14 >= 0 )
          {
            if ( (v25 & 2) != 0 )
            {
              v18 = *(_QWORD *)(a1 + 8);
              v19 = byte_1C0066CD0;
              v20 = byte_1C0066CD0;
              if ( (v18 & 0x200000000000LL) != 0 )
              {
                v19 = *(const char **)(a1 + 560);
                if ( (v18 & 0x400000000000LL) != 0 )
                  v20 = *(const char **)(a1 + 568);
              }
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0x1Du,
                (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
                v25,
                a1,
                v19,
                v20);
            }
          }
          else
          {
            v15 = *(_QWORD *)(a1 + 8);
            v16 = byte_1C0066CD0;
            v17 = byte_1C0066CD0;
            if ( (v15 & 0x200000000000LL) != 0 )
            {
              v16 = *(const char **)(a1 + 560);
              if ( (v15 & 0x400000000000LL) != 0 )
                v17 = *(const char **)(a1 + 568);
            }
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              1u,
              0x1Cu,
              (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
              v14,
              a1,
              v16,
              v17);
          }
        }
      }
    }
  }
  v21 = *(void **)(a1 + 624);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  v22 = *(void **)(a1 + 632);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  return 0LL;
}
