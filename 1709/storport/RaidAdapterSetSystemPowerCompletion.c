/*
 * XREFs of RaidAdapterSetSystemPowerCompletion @ 0x1C000F5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterSetSystemPowerCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  int v5; // r15d
  __int64 v6; // rbx
  POWER_STATE v7; // edi
  REQUEST_POWER_COMPLETE *v8; // r9
  void *Context; // rdx
  NTSTATUS v10; // ebp
  int v11; // ecx
  bool v12; // al

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 42LL, &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids, v2, a2);
  }
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD *)(v2 + 264);
  v6 = *(int *)(v4 + 24);
  v7.SystemState = (_SYSTEM_POWER_STATE)DeviceStateTable[v6];
  if ( v5 >= (int)v6 && *(_QWORD *)(v2 + 5088) )
  {
    v8 = StorPortAdapterPoFxD0Completion;
    Context = (void *)v2;
  }
  else
  {
    v8 = RaidAdapterSetDevicePowerCompletionRoutine;
    Context = (void *)a2;
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v4 + 3) |= 1u;
  v10 = *(_DWORD *)(a2 + 48);
  if ( v10 >= 0 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    v12 = (_DWORD)v6 != 1 && *(_DWORD *)(v2 + 264) < (int)v6;
    *(_BYTE *)(v2 + 276) = v12;
    *(_DWORD *)(v2 + 264) = v6;
    *(_DWORD *)(v2 + 272) = v11;
    v10 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v2 + 8), 2u, v7, v8, Context, 0LL);
    if ( v10 == 259 )
    {
      if ( v7.SystemState == PowerSystemWorking )
        *(_BYTE *)(v2 + 108) |= 1u;
      else
        *(_BYTE *)(v2 + 108) |= 2u;
      v10 = 0;
    }
  }
  if ( v5 >= (int)v6 || v10 < 0 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 256));
  else
    v10 = -1073741802;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids, v2, a2, v10);
  }
  return (unsigned int)v10;
}
