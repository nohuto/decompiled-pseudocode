/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C005FBD8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006648 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0006714 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 *     RaidSetD3Cold @ 0x1C0015EC4 (RaidSetD3Cold.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     McTemplateK0pqcccqttqqttq @ 0x1C0033E04 (McTemplateK0pqcccqttqqttq.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C00352CC (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall RaUnitRegisterForIdleDetection(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // r13d
  int v6; // edi
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // r12d
  int v11; // esi
  __int64 v12; // r8
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  _QWORD *Pool; // rax
  _QWORD *v19; // rsi
  unsigned int v20; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v21; // rcx
  int v22; // eax
  __int64 v23; // r8
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 *v29; // rcx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v31; // [rsp+48h] [rbp-51h]
  int v32; // [rsp+80h] [rbp-19h]
  int v33; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v3 = 0;
  v33 = 0;
  v32 = -1;
  v6 = 0;
  if ( !v2 || (*(_BYTE *)(v2 + 109) & 4) != 0 || *((_DWORD *)Context + 390) == 1 )
    goto LABEL_49;
  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    if ( (Context[153] & 0x80u) != 0 )
    {
      v6 = -1073741738;
      goto LABEL_15;
    }
    v7 = _interlockedbittestandset((volatile signed __int32 *)Context + 40, 0);
    v33 = v7;
    if ( !v7 )
    {
      Context[153] ^= (Context[153] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
      if ( RaidIsUnitControlSupported((__int64)Context, 4) )
        v6 = RaCallMiniportUnitControl(*((_QWORD *)Context + 3) + 296LL);
      if ( *((_QWORD *)Context + 186) )
        goto LABEL_12;
      if ( (*(_BYTE *)(v2 + 104) & 0x20) == 0 )
      {
        v6 = -1073741637;
LABEL_12:
        if ( v6 >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)Context + 186) + 32LL) ^= (*(_DWORD *)(*((_QWORD *)Context + 186) + 32LL) ^ *(_DWORD *)(a2 + 8)) & 1;
          v22 = *((_DWORD *)Context + 391);
          v23 = *((_QWORD *)Context + 186);
          if ( v22 == -1 )
          {
            v24 = *(_DWORD **)(v23 + 8);
            if ( *v24 >= 2u && (v24[3] & 0x10) != 0 )
            {
              v22 = v24[4];
            }
            else if ( *v24 < 3u || (v22 = 0, (v24[3] & 0x20) == 0) )
            {
              v22 = 300000;
            }
          }
          *(_DWORD *)(v23 + 24) = v22;
          *(_DWORD *)(*((_QWORD *)Context + 186) + 20LL) = *(_DWORD *)(a2 + 12);
          RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
          PoFxStartDevicePowerManagement(**((_QWORD **)Context + 186));
          v26 = *((_QWORD *)Context + 186);
          if ( (*(_DWORD *)(v26 + 32) & 0x80u) != 0 )
          {
            LOBYTE(v25) = 1;
            PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v25, v26 + 120, Context);
            PoRegisterPowerSettingCallback(
              *((PDEVICE_OBJECT *)Context + 1),
              &GUID_ACDC_POWER_SOURCE,
              (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
              Context,
              (PVOID *)(*((_QWORD *)Context + 186) + 128LL));
            *(_QWORD *)(*((_QWORD *)Context + 186) + 136LL) = ExAllocateTimer(
                                                                RaidUnitPowerCycleCheck,
                                                                Context,
                                                                0LL,
                                                                v27);
            *(_QWORD *)(*((_QWORD *)Context + 186) + 144LL) = ExAllocateTimer(
                                                                RaidUnitEndMaintenanceTime,
                                                                Context,
                                                                0LL,
                                                                v28);
          }
        }
        else
        {
          Context[153] &= ~4u;
        }
        RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[153] & 4) != 0);
        goto LABEL_15;
      }
      Pool = RaidAllocatePool(NonPagedPoolNx, 0xF8uLL, 0x4F506152u, *((_QWORD *)Context + 1));
      v19 = Pool;
      if ( !Pool )
      {
        v6 = -1073741670;
        goto LABEL_12;
      }
      memset(Pool, 0, 0xF8uLL);
      v20 = v19[4] & 0xFFFFFFFB;
      *((_DWORD *)v19 + 4) = 0;
      *((_DWORD *)v19 + 8) = v20 | 0xA;
      v19[12] = v19 + 11;
      v19[11] = v19 + 11;
      KeInitializeSpinLock(v19 + 13);
      v19[1] = v19 + 21;
      *((_DWORD *)v19 + 43) = 16;
      *((_DWORD *)v19 + 42) = 1;
      *((_DWORD *)v19 + 44) = 1;
      *((_DWORD *)v19 + 46) = 1;
      *((_DWORD *)v19 + 47) = 32;
      *((_DWORD *)v19 + 48) = 1;
      *(_OWORD *)(v19 + 25) = xmmword_1C004FC90;
      *((_DWORD *)v19 + 54) = 1;
      *((_DWORD *)v19 + 55) = 32;
      v19[28] = 0LL;
      v19[29] = 0LL;
      *((_DWORD *)v19 + 60) = -1;
      v6 = RaidRegisterForRuntimePowerManagement(
             *((_QWORD *)Context + 1),
             (unsigned __int64)(v19 + 21),
             (const unsigned __int16 *)Context,
             (unsigned __int64)v19);
      if ( v6 >= 0 )
      {
        if ( *v19 )
        {
          PoFxSetComponentLatency(*v19, 0LL, -1LL);
          PoFxSetComponentResidency(*v19, 0LL, -1LL);
          v21 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 185);
          *((_QWORD *)Context + 186) = v19;
          ExReInitializeRundownProtectionCacheAware(v21);
          Context[153] |= 0x80u;
          goto LABEL_12;
        }
        v6 = -1073741823;
      }
      ExFreePoolWithTag(v19, 0x4F506152u);
      goto LABEL_12;
    }
LABEL_49:
    v6 = -1073741823;
    goto LABEL_15;
  }
  v14 = *((_QWORD *)Context + 186);
  v15 = *(_DWORD *)(a2 + 12);
  if ( v15 != *(_DWORD *)(v14 + 20) )
  {
    *(_DWORD *)(v14 + 20) = v15;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 186) + 32LL) & 0x80u) == 0 )
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
    else
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
  }
  v16 = *((_QWORD *)Context + 186);
  v17 = *(_DWORD *)(a2 + 8) & 1;
  if ( v17 != (*(_DWORD *)(v16 + 32) & 1) )
    *(_DWORD *)(v16 + 32) = v17 | *(_DWORD *)(v16 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 185));
LABEL_15:
  if ( StorEtwLoggingEnabled )
  {
    v8 = *((_QWORD *)Context + 3);
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    if ( v8 )
      v32 = *(_DWORD *)(v8 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v29 = (__int64 *)*((_QWORD *)Context + 186);
      v9 = *v29;
      v11 = v29[4] & 1;
      v3 = *((_DWORD *)v29 + 5);
      v10 = *(_DWORD *)(v29[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 185));
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      v31 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v32;
      McTemplateK0pqcccqttqqttq(
        *(_DWORD *)(a2 + 8) & 1,
        v31,
        v12,
        v9,
        Handle,
        Context[88],
        Context[89],
        Context[90],
        v6,
        v31,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v10,
        (Context[153] >> 2) & 1,
        v11,
        v3);
    }
  }
  if ( !v33 )
    *((_DWORD *)Context + 40) &= ~1u;
  return (unsigned int)v6;
}
