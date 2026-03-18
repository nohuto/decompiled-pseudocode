/*
 * XREFs of ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009528
 * Callers:
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0006970 (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0006D64 (AcpiDiagTraceConstraintEvent.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1C0006FA8 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x1C00070CC (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x1C0007208 (AcpiDiagTraceDevicePassiveCooling.c)
 *     AcpiDiagTraceFanEvent @ 0x1C00074B4 (AcpiDiagTraceFanEvent.c)
 *     AcpiDiagTraceTemperatureChange @ 0x1C000771C (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x1C000783C (AcpiDiagTraceTemperatureTelemetry.c)
 *     AcpiDiagTraceThermalNotification @ 0x1C0007964 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0007BA0 (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIReserveDependencies @ 0x1C0012138 (ACPIReserveDependencies.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C003677C (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C00369BC (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00890F8 (ACPIThermalGetOverrideHandle.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C0009444 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathnameUnicode(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v4; // si
  __int16 *PoolWithTag; // rbx
  __int64 result; // rax
  char *v7; // r12
  int v8; // r14d
  unsigned int v9; // edi
  unsigned __int16 v10; // bp
  char *v11; // r8
  __int16 *v12; // r9
  char v13; // dl
  char v14; // cl
  __int16 v15; // ax
  __int16 v16; // ax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v4 = 0;
  PoolWithTag = 0LL;
  result = ACPIAmliBuildObjectPathname(a1, (char **)&P, a3);
  if ( (int)result >= 0 )
  {
    v7 = (char *)P;
    v8 = 0;
    v9 = 0;
    while ( 2 )
    {
      v10 = 0;
      v11 = v7;
      v12 = PoolWithTag;
      v13 = 1;
      do
      {
        if ( v10 > 0xFFFDu )
        {
          v9 = -1073741675;
          goto LABEL_32;
        }
        v14 = *v11;
        v10 += 2;
        if ( v4 < v10 )
        {
          v13 &= -(v14 != 0);
        }
        else
        {
          if ( (unsigned __int8)(v14 - 97) > 0x19u
            && (unsigned __int8)(v14 - 65) > 0x19u
            && (unsigned __int8)(v14 - 48) > 9u )
          {
            if ( v14 == 95 )
            {
              v15 = 95;
            }
            else if ( v14 == 92 )
            {
              v15 = 92;
            }
            else
            {
              v15 = 46;
              if ( v14 != 46 )
              {
                if ( v14 )
                {
                  v9 = -1073741811;
                  goto LABEL_32;
                }
                v15 = 0;
                v13 = 0;
              }
            }
          }
          else
          {
            v15 = v14;
          }
          *v12++ = v15;
        }
        ++v11;
      }
      while ( v13 );
      if ( v10 > v4 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
        PoolWithTag = 0LL;
        if ( !v8 )
        {
          PoolWithTag = (__int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x53706341u);
          if ( PoolWithTag )
          {
            v4 = v10;
            goto LABEL_26;
          }
          v9 = -1073741670;
LABEL_34:
          v16 = 0;
          PoolWithTag = 0LL;
          v4 = 0;
          goto LABEL_35;
        }
        v9 = -2147483643;
LABEL_32:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x53706341u);
        goto LABEL_34;
      }
LABEL_26:
      if ( ++v8 < 2 )
        continue;
      break;
    }
    v16 = v4 - 2;
LABEL_35:
    *(_WORD *)(a2 + 2) = v4;
    *(_QWORD *)(a2 + 8) = PoolWithTag;
    *(_WORD *)a2 = v16;
    if ( v7 )
      ExFreePoolWithTag(v7, 0x53706341u);
    return v9;
  }
  return result;
}
