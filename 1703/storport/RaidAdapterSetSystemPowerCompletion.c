/*
 * XREFs of RaidAdapterSetSystemPowerCompletion @ 0x1C000EF40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  PDEVICE_OBJECT v4; // rcx
  __int64 v5; // rdx
  int v6; // r15d
  __int64 v7; // rbx
  POWER_STATE v8; // edi
  REQUEST_POWER_COMPLETE *v9; // r9
  void *Context; // r8
  NTSTATUS v11; // ebp
  int v12; // ecx
  bool v13; // al

  v2 = *(_QWORD *)(a1 + 64);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 42LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, v2, a2);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_DWORD *)(v2 + 264);
  v7 = *(int *)(v5 + 24);
  v8.SystemState = (_SYSTEM_POWER_STATE)DeviceStateTable[v7];
  if ( v6 >= (int)v7 && *(_QWORD *)(v2 + 5088) )
  {
    v9 = StorPortAdapterPoFxD0Completion;
    Context = (void *)v2;
  }
  else
  {
    v9 = RaidAdapterSetDevicePowerCompletionRoutine;
    Context = (void *)a2;
  }
  if ( *(_BYTE *)(a2 + 65) )
  {
    *(_BYTE *)(v5 + 3) |= 1u;
    v4 = WPP_GLOBAL_Control;
  }
  v11 = *(_DWORD *)(a2 + 48);
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    v13 = (_DWORD)v7 != 1 && *(_DWORD *)(v2 + 264) < (int)v7;
    *(_BYTE *)(v2 + 276) = v13;
    *(_DWORD *)(v2 + 264) = v7;
    *(_DWORD *)(v2 + 272) = v12;
    v11 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v2 + 8), 2u, v8, v9, Context, 0LL);
    if ( v11 == 259 )
    {
      if ( v8.SystemState == PowerSystemWorking )
        *(_BYTE *)(v2 + 108) |= 1u;
      else
        *(_BYTE *)(v2 + 108) |= 2u;
      v11 = 0;
    }
    v4 = WPP_GLOBAL_Control;
  }
  if ( v6 >= (int)v7 || v11 < 0 )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 256));
    v4 = WPP_GLOBAL_Control;
  }
  else
  {
    v11 = -1073741802;
  }
  if ( v4 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v4->Timer) & 4) != 0 && BYTE1(v4->Timer) >= 4u )
    WPP_SF_qqD(v4->AttachedDevice, 43LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, v2, a2, v11);
  return (unsigned int)v11;
}
