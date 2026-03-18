/*
 * XREFs of ACPIInitStopDevice @ 0x1C007D3C0
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0024910 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0024F40 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001A984 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIInternalClearFlags @ 0x1C0029B08 (ACPIInternalClearFlags.c)
 *     IsNsobjPciBus @ 0x1C007FC90 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  _QWORD *v2; // rsi
  char *v3; // rbx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rsi
  int v12; // ebx
  int v13; // r11d
  __int64 v14; // r9
  const char *v15; // rcx
  const char *v16; // r10
  __int64 v17; // r9
  const char *v18; // rcx
  const char *v19; // r10
  void *v20; // rcx
  void *v21; // rcx
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(a1 + 712);
  v3 = (char *)(a1 + 952);
  if ( (*(_DWORD *)(a1 + 952) & 0x40000) == 0 && !(unsigned __int8)IsNsobjPciBus(*(_QWORD *)(a1 + 712)) )
  {
    v6 = *(_DWORD *)(a1 + 336);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v3 < 0 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             (_QWORD *)a1,
                             4LL,
                             (void (__fastcall *)(__int64, __int64, _QWORD))ACPIInitPowerRequestCompletion,
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
        AMLIDereferenceHandleEx(v11);
        if ( v12 >= 0 )
        {
          v13 = ACPIGet(a1, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v24, 0LL);
          if ( v13 >= 0 )
          {
            if ( (v24 & 2) != 0 )
            {
              v17 = *(_QWORD *)(a1 + 8);
              v18 = byte_1C005B1F0;
              v19 = byte_1C005B1F0;
              if ( (v17 & 0x200000000000LL) != 0 )
              {
                v18 = *(const char **)(a1 + 560);
                if ( (v17 & 0x400000000000LL) != 0 )
                  v19 = *(const char **)(a1 + 568);
              }
              WPP_RECORDER_SF_Dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0x1Du,
                (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
                v24,
                a1,
                v18,
                v19);
            }
          }
          else
          {
            v14 = *(_QWORD *)(a1 + 8);
            v15 = byte_1C005B1F0;
            v16 = byte_1C005B1F0;
            if ( (v14 & 0x200000000000LL) != 0 )
            {
              v15 = *(const char **)(a1 + 560);
              if ( (v14 & 0x400000000000LL) != 0 )
                v16 = *(const char **)(a1 + 568);
            }
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              1u,
              0x1Cu,
              (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
              v13,
              a1,
              v15,
              v16);
          }
        }
      }
    }
  }
  v20 = *(void **)(a1 + 624);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  v21 = *(void **)(a1 + 632);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  return 0LL;
}
