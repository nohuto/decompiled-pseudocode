/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x1C001D28C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BBD0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C0019DD0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C001F3EC (ACPIIsPowerNodeMissingDependencies.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C002010C (WPP_RECORDER_SF_qsL.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  char v0; // bp
  char v1; // r9
  char v2; // r15
  __int64 *v3; // r12
  char v4; // cl
  __int64 *v5; // rbx
  __int64 *v6; // r9
  __int32 v7; // ecx
  __int64 *v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  void (__fastcall *v14)(__int64, int, __int64, __int64); // r14
  const char *v15; // r13
  int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // rbx
  unsigned int v21; // eax
  int v22; // edx
  int v23; // esi
  char v25; // [rsp+80h] [rbp+8h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    67,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids);
  v0 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 1 )
  {
LABEL_2:
    if ( Phase3PendingOffWorkCount )
    {
      v1 = 1;
      v25 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v1 = 0;
      v25 = 0;
    }
    if ( Phase3PendingOnWorkCount )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v0 = 1;
    v3 = (__int64 *)AcpiPowerNodeList;
    ++Phase3PendingOnWorkCount;
    v4 = 0;
    if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
    {
      do
      {
        v5 = v3;
        v3 = (__int64 *)*v3;
        if ( v2 && *((unsigned __int8 *)v5 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
          break;
        if ( v1
          && *((unsigned __int8 *)v5 + 40) > (unsigned int)Phase3CurrentOffResourceOrder
          && _InterlockedCompareExchange((volatile signed __int32 *)v5 + 16, 1, 1) == 3 )
        {
          v4 = 1;
          goto LABEL_51;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v5 + 16, 4, 3) == 3 )
        {
          v0 = 0;
          v6 = (__int64 *)v5[6];
          v7 = 0;
          while ( v6 != v5 + 6 )
          {
            v8 = v6 - 5;
            v9 = *(v6 - 1);
            v6 = (__int64 *)*v6;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 504), 0, 0) || !*((_BYTE *)v8 + 24) )
            {
              v10 = *(_DWORD *)(v9 + 496);
              if ( v10 != *((_DWORD *)v8 + 5)
                || v10 == 4 && ((*(_DWORD *)(v9 + 8) & 0x800LL) == 0 || (*(_DWORD *)(v9 + 952) & 0x10000000) != 0) )
              {
                continue;
              }
            }
            ++v7;
          }
          _InterlockedExchange((volatile __int32 *)v5 + 6, v7);
          v11 = v5[2];
          if ( (v11 & 0x440) == 0 && ((v11 & 0x2220) != 0 || v7) )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v5 + 16, 1, 4);
            ++Phase3PendingOnWorkCount;
            *((_DWORD *)v5 + 17) = 0;
            KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
            v12 = v5[2] & 0x2000;
            if ( (v5[2] & 0x2000) != 0 )
              v13 = v5[11];
            else
              v13 = v5[9];
            v14 = ACPIDeviceCompletePhase3Reset;
            if ( !v12 )
              v14 = ACPIDeviceCompletePhase3On;
            v15 = "_RST";
            if ( !v12 )
              v15 = "_ON";
            if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v5) )
            {
              v17 = -1073741661;
            }
            else
            {
              v17 = AMLIAsyncEvalObject(v13, 0LL, 0LL, 0LL, v14, v5);
              v18 = v5[2];
              if ( (v18 & 0x2000) != 0 )
                v5[2] = v18 & 0xFFFFFFFFFFFFDFFFuLL;
            }
            WPP_RECORDER_SF_qsL(
              WPP_GLOBAL_Control->DeviceExtension,
              v16,
              10,
              68,
              (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
              (char)v5,
              (__int64)v15,
              v17);
            if ( v17 != 259 )
              v14(v13, v17, 0LL, (__int64)v5);
            KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
            v1 = v25;
            if ( v17 == 259 && !v2 )
            {
              v2 = 1;
              Phase3CurrentOnResourceOrder = *((unsigned __int8 *)v5 + 40);
            }
          }
          else
          {
            v1 = v25;
          }
        }
      }
      while ( v3 != &AcpiPowerNodeList );
      v4 = 0;
    }
LABEL_51:
    if ( !--Phase3PendingOnWorkCount )
    {
      v2 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( v2 )
      break;
    if ( v3 == &AcpiPowerNodeList || v4 )
    {
      while ( 1 )
      {
        ++Phase3PendingOffWorkCount;
        v19 = (__int64 *)qword_1C0067178;
        while ( v19 != &AcpiPowerNodeList )
        {
          v20 = (__int64)v19;
          v19 = (__int64 *)v19[1];
          v21 = *(unsigned __int8 *)(v20 + 40);
          if ( v21 <= Phase3CurrentOffResourceOrder )
          {
            if ( v1 && v21 < Phase3CurrentOffResourceOrder )
              break;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 64), 1, 4) == 4 )
            {
              ++Phase3PendingOffWorkCount;
              v0 = 0;
              *(_DWORD *)(v20 + 68) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v20) )
                v23 = -1073741661;
              else
                v23 = AMLIAsyncEvalObject(*(_QWORD *)(v20 + 80), 0LL, 0LL, 0LL, ACPIDeviceCompletePhase3Off, v20);
              LOBYTE(v22) = 4;
              WPP_RECORDER_SF_qd(
                WPP_GLOBAL_Control->DeviceExtension,
                v22,
                10,
                69,
                (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
                v20,
                v23);
              if ( v23 != 259 )
                ACPIDeviceCompletePhase3Off(*(_QWORD *)(v20 + 80), v23, 0LL, v20);
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              if ( v23 == 259 )
              {
                v1 = 1;
                Phase3CurrentOffResourceOrder = *(unsigned __int8 *)(v20 + 40);
                v25 = 1;
              }
              else
              {
                v1 = v25;
              }
            }
          }
        }
        if ( !--Phase3PendingOffWorkCount )
        {
          Phase3CurrentOffResourceOrder = -1;
          v1 = 0;
          v25 = 0;
        }
        if ( v1 )
          goto LABEL_75;
        if ( v19 == &AcpiPowerNodeList )
        {
          if ( !v0 )
            goto LABEL_2;
          goto LABEL_75;
        }
      }
    }
  }
LABEL_75:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v0 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v0 == 0 ? 0x103 : 0;
}
