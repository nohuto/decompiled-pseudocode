/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x1C000E7F4
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C001C944 (WPP_RECORDER_SF_qsL.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C00480C0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0049F9C (ACPIIsPowerNodeMissingDependencies.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  char v0; // bp
  char v1; // r9
  char v2; // r12
  __int64 *v3; // r13
  char v4; // cl
  __int64 *v5; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r9
  __int32 v9; // ecx
  __int64 *v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  const char *v15; // r15
  __int64 (__fastcall *v16)(); // r14
  int v17; // edx
  unsigned int v18; // edi
  __int64 v19; // rax
  __int64 *v20; // rbx
  unsigned int v21; // eax
  int v22; // edx
  unsigned int v23; // esi
  char v24; // [rsp+80h] [rbp+8h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    67,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids);
  v0 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 1 )
  {
LABEL_2:
    if ( Phase3PendingOffWorkCount )
    {
      v1 = 1;
      v24 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v1 = 0;
      v24 = 0;
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
        v7 = v3;
        v3 = (__int64 *)*v3;
        if ( v2 && *((unsigned __int8 *)v7 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
          break;
        if ( v1
          && *((unsigned __int8 *)v7 + 40) > (unsigned int)Phase3CurrentOffResourceOrder
          && _InterlockedCompareExchange((volatile signed __int32 *)v7 + 16, 1, 1) == 3 )
        {
          v4 = 1;
          goto LABEL_10;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v7 + 16, 4, 3) == 3 )
        {
          v0 = 0;
          v8 = (__int64 *)v7[6];
          v9 = 0;
          while ( v8 != v7 + 6 )
          {
            v10 = v8 - 5;
            v11 = *(v8 - 1);
            v8 = (__int64 *)*v8;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 504), 0, 0) || !*((_BYTE *)v10 + 24) )
            {
              v12 = *(_DWORD *)(v11 + 496);
              if ( v12 != *((_DWORD *)v10 + 5)
                || v12 == 4 && ((*(_DWORD *)(v11 + 8) & 0x800LL) == 0 || (*(_DWORD *)(v11 + 952) & 0x10000000) != 0) )
              {
                continue;
              }
            }
            ++v9;
          }
          _InterlockedExchange((volatile __int32 *)v7 + 6, v9);
          v13 = v7[2];
          if ( (v13 & 0x440) == 0 && ((v13 & 0x2220) != 0 || v9) )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v7 + 16, 1, 4);
            ++Phase3PendingOnWorkCount;
            *((_DWORD *)v7 + 17) = 0;
            KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
            if ( (v7[2] & 0x2000) != 0 )
            {
              v14 = v7[11];
              v15 = "_RST";
              v16 = ACPIDeviceCompletePhase3Reset;
            }
            else
            {
              v14 = v7[9];
              v15 = "_ON";
              v16 = ACPIDeviceCompletePhase3On;
            }
            if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v7) )
            {
              v18 = -1073741661;
            }
            else
            {
              v18 = AMLIAsyncEvalObject(v14, 0LL, 0LL, 0LL);
              v19 = v7[2];
              if ( (v19 & 0x2000) != 0 )
                v7[2] = v19 & 0xFFFFFFFFFFFFDFFFuLL;
            }
            WPP_RECORDER_SF_qsL(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              10,
              68,
              (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
              (char)v7,
              (__int64)v15,
              v18);
            if ( v18 != 259 )
              ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))v16)(v14, v18, 0LL, v7);
            KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
            v1 = v24;
            if ( v18 == 259 && !v2 )
            {
              v2 = 1;
              Phase3CurrentOnResourceOrder = *((unsigned __int8 *)v7 + 40);
            }
          }
          else
          {
            v1 = v24;
          }
        }
      }
      while ( v3 != &AcpiPowerNodeList );
      v4 = 0;
    }
LABEL_10:
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
        v5 = (__int64 *)qword_1C0079118;
        while ( v5 != &AcpiPowerNodeList )
        {
          v20 = v5;
          v5 = (__int64 *)v5[1];
          v21 = *((unsigned __int8 *)v20 + 40);
          if ( v21 <= Phase3CurrentOffResourceOrder )
          {
            if ( v1 && v21 < Phase3CurrentOffResourceOrder )
              break;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v20 + 16, 1, 4) == 4 )
            {
              ++Phase3PendingOffWorkCount;
              v0 = 0;
              *((_DWORD *)v20 + 17) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v20) )
                v23 = -1073741661;
              else
                v23 = AMLIAsyncEvalObject(v20[10], 0LL, 0LL, 0LL);
              LOBYTE(v22) = 4;
              WPP_RECORDER_SF_qD(
                WPP_GLOBAL_Control->DeviceExtension,
                v22,
                10,
                69,
                (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
                (char)v20,
                v23);
              if ( v23 != 259 )
                ACPIDeviceCompletePhase3Off(v20[10], v23, 0LL, v20);
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              if ( v23 == 259 )
              {
                v1 = 1;
                Phase3CurrentOffResourceOrder = *((unsigned __int8 *)v20 + 40);
                v24 = 1;
              }
              else
              {
                v1 = v24;
              }
            }
          }
        }
        if ( !--Phase3PendingOffWorkCount )
        {
          Phase3CurrentOffResourceOrder = -1;
          v1 = 0;
          v24 = 0;
        }
        if ( v1 )
          goto LABEL_21;
        if ( v5 == &AcpiPowerNodeList )
        {
          if ( !v0 )
            goto LABEL_2;
          goto LABEL_21;
        }
      }
    }
  }
LABEL_21:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v0 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v0 == 0 ? 0x103 : 0;
}
