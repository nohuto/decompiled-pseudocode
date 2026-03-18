/*
 * XREFs of ACPIInitStopDevice @ 0x1C0085A38
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0010698 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C004E290 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0001E68 (ACPIDeviceInternalDeviceRequest.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C000EF34 (ACPIInternalClearFlags.c)
 *     IsNsobjPciBus @ 0x1C008CD04 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  __int64 *v2; // rsi
  char *v3; // rbx
  int v6; // eax
  void *v7; // rcx
  void *v8; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rsi
  int v15; // ebx
  int v16; // r11d
  __int64 v17; // r9
  const char *v18; // rcx
  const char *v19; // r10
  __int64 v20; // r9
  const char *v21; // rcx
  const char *v22; // r10
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 712);
  v3 = (char *)(a1 + 952);
  if ( (*(_DWORD *)(a1 + 952) & 0x40000LL) == 0 && !(unsigned __int8)IsNsobjPciBus(*(_QWORD *)(a1 + 712)) )
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
    v10 = (__int64 *)(a1 + 192);
    v11 = 3LL;
    do
    {
      v12 = *v10++;
      *(_BYTE *)(v12 + 130) = 0;
      --v11;
    }
    while ( v11 );
  }
  ACPIInternalClearFlags(v3, 1LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)v3 & 0x40100) == 0 )
    {
      v13 = AMLIGetNamedChild(v2, 1397310559);
      v14 = (__int64)v13;
      if ( v13 )
      {
        v15 = AMLIEvalNameSpaceObject(v13, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v14);
        if ( v15 >= 0 )
        {
          v16 = ACPIGet((__int64 *)a1, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v24, 0LL);
          if ( v16 >= 0 )
          {
            if ( (v24 & 2) != 0 )
            {
              v20 = *(_QWORD *)(a1 + 8);
              v21 = byte_1C0067B08;
              v22 = byte_1C0067B08;
              if ( (v20 & 0x200000000000LL) != 0 )
              {
                v21 = *(const char **)(a1 + 560);
                if ( (v20 & 0x400000000000LL) != 0 )
                  v22 = *(const char **)(a1 + 568);
              }
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0x1Du,
                (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
                v24,
                a1,
                v21,
                v22);
            }
          }
          else
          {
            v17 = *(_QWORD *)(a1 + 8);
            v18 = byte_1C0067B08;
            v19 = byte_1C0067B08;
            if ( (v17 & 0x200000000000LL) != 0 )
            {
              v18 = *(const char **)(a1 + 560);
              if ( (v17 & 0x400000000000LL) != 0 )
                v19 = *(const char **)(a1 + 568);
            }
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              1u,
              0x1Cu,
              (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
              v16,
              a1,
              v18,
              v19);
          }
        }
      }
    }
  }
  v7 = *(void **)(a1 + 624);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  v8 = *(void **)(a1 + 632);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  return 0LL;
}
