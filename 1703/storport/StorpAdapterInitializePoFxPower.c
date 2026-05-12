/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C001CFF8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidSetD3Cold @ 0x1C0013674 (RaidSetD3Cold.c)
 *     RaidGetStorPoFxComponent @ 0x1C0018E74 (RaidGetStorPoFxComponent.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0018EB8 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C001D23C (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C001D264 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C001D314 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     Template_pqtqq @ 0x1C002FEE4 (Template_pqtqq.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, _DWORD *a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rdx
  int *v8; // rcx
  char *StorPoFxComponent; // rax
  char *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int TotalStorPoFxDeviceSize; // r15d
  _QWORD *Pool; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  int v18; // r8d
  bool v19; // zf
  int v20; // edx
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0;
  if ( !a2 )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  v6 = *(_BYTE *)(v5 + 108);
  if ( (v6 & 0x10) != 0 )
    return 3221225473LL;
  if ( *(_QWORD *)(v5 + 5088) )
  {
    *a3 = (v6 & 8) != 0;
    return 0LL;
  }
  if ( !(unsigned __int8)RaidStorPoFxDeviceVersionAndSizeIsValid(a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v7 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = RaidGetStorPoFxComponent(v8, 0);
  v10 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !(unsigned __int8)RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v12 + 8) - 1) > 7 )
  {
    return 3238002694LL;
  }
  v13 = *(_QWORD *)(v12 + 16) - 0x481F895FDCAF9C10LL;
  if ( *(_QWORD *)(v12 + 16) == 0x481F895FDCAF9C10LL )
    v13 = *(_QWORD *)(v12 + 24) - 0x3356F5D2CED492A4LL;
  if ( v13 )
    return 3238002694LL;
  v22 &= v11;
  if ( (int)RaidRegisterForRuntimePowerManagement(
              *(_QWORD *)(v5 + 8),
              (unsigned __int64)a2,
              (const unsigned __int16 *)v5,
              (unsigned __int64)&v22) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a2);
  Pool = RaidAllocatePool(NonPagedPoolNx, TotalStorPoFxDeviceSize + 96, 0x4F506152u, *(_QWORD *)(v5 + 8));
  v16 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, TotalStorPoFxDeviceSize + 96);
    v17 = v22;
    *((_DWORD *)v16 + 4) = 0;
    *((_DWORD *)v16 + 5) |= 3u;
    *v16 = v17;
    v16[1] = v16 + 12;
    memmove(v16 + 12, a2, TotalStorPoFxDeviceSize);
    if ( ((*(_BYTE *)(v5 + 108) >> 2) & ((a2[3] & 4) != 0)) != 0 )
    {
      if ( (int)RaidSetD3Cold(*(struct _DEVICE_OBJECT **)(v5 + 8), 1) >= 0 )
      {
        *(_BYTE *)(v5 + 108) |= 8u;
        *a3 = 1;
      }
      else
      {
        *(_BYTE *)(v5 + 108) &= ~8u;
      }
    }
    else
    {
      *(_BYTE *)(v5 + 108) &= ~8u;
    }
    if ( (a2[3] & 8) != 0 )
      *(_BYTE *)(v5 + 108) |= 0x20u;
    if ( (a2[3] & 0x200) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x40u;
    if ( (a2[3] & 0x40) != 0 )
      *(_BYTE *)(v5 + 109) |= 4u;
    if ( (a2[3] & 0x400) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x80u;
    PoFxSetComponentLatency(*v16, 0LL, -1LL);
    PoFxSetComponentResidency(*v16, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && *a2 >= 2u && (a2[3] & 0x10) != 0 )
      *(_DWORD *)(v5 + 5104) = a2[4];
    PoFxSetDeviceIdleTimeout(*v16, 10000LL * *(unsigned int *)(v5 + 5104));
    v19 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v5 + 5088) = v16;
    if ( !v19 )
    {
      v20 = *(_DWORD *)(v5 + 56);
      if ( v20 != -1 && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_pqtqq(
          (*(unsigned __int8 *)(v5 + 108) >> 3) & 1,
          v20,
          v18,
          *v16,
          v20,
          (*(_BYTE *)(v5 + 108) & 8) != 0,
          *(_DWORD *)(v5 + 5104),
          *((_DWORD *)v10 + 2));
    }
    PoFxStartDevicePowerManagement(**(_QWORD **)(v5 + 5088));
    return 0LL;
  }
  PoFxUnregisterDevice(v22);
  return 3238002691LL;
}
