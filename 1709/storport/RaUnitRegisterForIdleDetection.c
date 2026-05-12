/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C0060A88
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C000FC40 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidSetD3Cold @ 0x1C0012F34 (RaidSetD3Cold.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00166F4 (RaCallMiniportUnitControl.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C001900C (RaidRegisterForRuntimePowerManagement.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     McTemplateK0pqcccqttqqttq @ 0x1C003677C (McTemplateK0pqcccqttqqttq.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0037E40 (RaidUnitAdaptiveIdleTimeout.c)
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
  _QWORD *Pool; // rax
  _QWORD *v15; // rsi
  unsigned int v16; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // r8
  int v27; // edx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v29; // [rsp+48h] [rbp-51h]
  int v30; // [rsp+80h] [rbp-19h]
  int v31; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v3 = 0;
  v31 = 0;
  v30 = -1;
  v6 = 0;
  if ( !v2 || (*(_BYTE *)(v2 + 109) & 4) != 0 || *((_DWORD *)Context + 390) == 1 )
    goto LABEL_51;
  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    if ( (Context[153] & 0x80u) != 0 )
    {
      v6 = -1073741738;
      goto LABEL_15;
    }
    v7 = _interlockedbittestandset((volatile signed __int32 *)Context + 40, 0);
    v31 = v7;
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
          v18 = *((_DWORD *)Context + 391);
          if ( v18 == -1 )
          {
            v19 = *((_QWORD *)Context + 186);
            v20 = *(_DWORD **)(v19 + 8);
            if ( *v20 >= 2u && (v20[3] & 0x10) != 0 )
            {
              *(_DWORD *)(v19 + 24) = v20[4];
            }
            else if ( *v20 >= 3u && (v20[3] & 0x20) != 0 )
            {
              *(_DWORD *)(v19 + 24) = 0;
            }
            else
            {
              *(_DWORD *)(v19 + 24) = 300000;
            }
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)Context + 186) + 24LL) = v18;
          }
          *(_DWORD *)(*((_QWORD *)Context + 186) + 20LL) = *(_DWORD *)(a2 + 12);
          RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
          PoFxStartDevicePowerManagement(**((_QWORD **)Context + 186));
          v22 = *((_QWORD *)Context + 186);
          if ( (*(_DWORD *)(v22 + 32) & 0x80u) != 0 )
          {
            LOBYTE(v21) = 1;
            PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v21, v22 + 96, Context);
            PoRegisterPowerSettingCallback(
              *((PDEVICE_OBJECT *)Context + 1),
              &GUID_ACDC_POWER_SOURCE,
              (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
              Context,
              (PVOID *)(*((_QWORD *)Context + 186) + 104LL));
            *(_QWORD *)(*((_QWORD *)Context + 186) + 112LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, Context, 0LL);
            *(_QWORD *)(*((_QWORD *)Context + 186) + 120LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, Context, 0LL);
          }
        }
        else
        {
          Context[153] &= ~4u;
        }
        RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[153] & 4) != 0);
        goto LABEL_15;
      }
      Pool = RaidAllocatePool(NonPagedPoolNx, 0xE0uLL, 0x4F506152u, *((_QWORD *)Context + 1));
      v15 = Pool;
      if ( !Pool )
      {
        v6 = -1073741670;
        goto LABEL_12;
      }
      memset(Pool, 0, 0xE0uLL);
      v16 = v15[4] & 0xFFFFFFFB;
      *((_DWORD *)v15 + 4) = 0;
      *((_DWORD *)v15 + 8) = v16 | 0xA;
      v15[9] = v15 + 8;
      v15[8] = v15 + 8;
      KeInitializeSpinLock(v15 + 10);
      v15[1] = v15 + 18;
      *((_DWORD *)v15 + 37) = 16;
      *((_DWORD *)v15 + 36) = 1;
      *((_DWORD *)v15 + 38) = 1;
      *((_DWORD *)v15 + 40) = 1;
      *((_DWORD *)v15 + 41) = 32;
      *((_DWORD *)v15 + 42) = 1;
      *((_OWORD *)v15 + 11) = xmmword_1C004B040;
      *((_DWORD *)v15 + 48) = 1;
      *((_DWORD *)v15 + 49) = 32;
      v15[25] = 0LL;
      v15[26] = 0LL;
      *((_DWORD *)v15 + 54) = -1;
      v6 = RaidRegisterForRuntimePowerManagement(
             *((_QWORD *)Context + 1),
             (unsigned __int64)(v15 + 18),
             (const unsigned __int16 *)Context,
             (unsigned __int64)v15);
      if ( v6 >= 0 )
      {
        if ( *v15 )
        {
          PoFxSetComponentLatency(*v15, 0LL, -1LL);
          PoFxSetComponentResidency(*v15, 0LL, -1LL);
          v17 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 185);
          *((_QWORD *)Context + 186) = v15;
          ExReInitializeRundownProtectionCacheAware(v17);
          Context[153] |= 0x80u;
          goto LABEL_12;
        }
        v6 = -1073741823;
      }
      ExFreePoolWithTag(v15, 0x4F506152u);
      goto LABEL_12;
    }
LABEL_51:
    v6 = -1073741823;
    goto LABEL_15;
  }
  v24 = *((_QWORD *)Context + 186);
  v25 = *(_DWORD *)(a2 + 12);
  if ( v25 != *(_DWORD *)(v24 + 20) )
  {
    *(_DWORD *)(v24 + 20) = v25;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 186) + 32LL) & 0x80u) == 0 )
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
    else
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
  }
  v26 = *((_QWORD *)Context + 186);
  v27 = *(_DWORD *)(a2 + 8) & 1;
  if ( v27 != (*(_DWORD *)(v26 + 32) & 1) )
    *(_DWORD *)(v26 + 32) = v27 | *(_DWORD *)(v26 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 185));
LABEL_15:
  if ( StorEtwLoggingEnabled )
  {
    v8 = *((_QWORD *)Context + 3);
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    if ( v8 )
      v30 = *(_DWORD *)(v8 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v23 = (__int64 *)*((_QWORD *)Context + 186);
      v9 = *v23;
      v11 = v23[4] & 1;
      v3 = *((_DWORD *)v23 + 5);
      v10 = *(_DWORD *)(v23[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 185));
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      v29 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v30;
      McTemplateK0pqcccqttqqttq(
        *(_DWORD *)(a2 + 8) & 1,
        v29,
        v12,
        v9,
        Handle,
        Context[88],
        Context[89],
        Context[90],
        v6,
        v29,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v10,
        (Context[153] >> 2) & 1,
        v11,
        v3);
    }
  }
  if ( !v31 )
    *((_DWORD *)Context + 40) &= ~1u;
  return (unsigned int)v6;
}
