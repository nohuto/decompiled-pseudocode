/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C001DF18
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RaidSetD3Cold @ 0x1C0012F34 (RaidSetD3Cold.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C001900C (RaidRegisterForRuntimePowerManagement.c)
 *     RaidGetStorPoFxComponent @ 0x1C0019534 (RaidGetStorPoFxComponent.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C001E164 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C001E214 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     McTemplateK0pqtqq @ 0x1C002BB8C (McTemplateK0pqtqq.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, unsigned __int64 a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rdx
  char *StorPoFxComponent; // rax
  __int64 v9; // rdx
  char *v10; // rsi
  int v11; // eax
  bool v12; // cf
  __int64 v13; // rax
  unsigned int TotalStorPoFxDeviceSize; // ebp
  _QWORD *Pool; // rax
  _QWORD *v16; // r14
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
  StorPoFxComponent = RaidGetStorPoFxComponent((int *)a2, 0);
  v10 = StorPoFxComponent;
  if ( !StorPoFxComponent )
    return 3238002694LL;
  v11 = *(_DWORD *)StorPoFxComponent;
  if ( v11 == 1 )
  {
    v12 = *((_DWORD *)v10 + 1) < 0x20u;
  }
  else
  {
    if ( v11 != 2 )
    {
      if ( (unsigned int)(v11 - 1) <= 1 )
        goto LABEL_11;
      return 3238002694LL;
    }
    v12 = *((_DWORD *)v10 + 1) < 0x28u;
  }
  if ( v12 )
    return 3238002694LL;
LABEL_11:
  if ( (unsigned int)(*((_DWORD *)v10 + 2) - 1) > 7 )
    return 3238002694LL;
  v13 = *((_QWORD *)v10 + 2) - 0x481F895FDCAF9C10LL;
  if ( *((_QWORD *)v10 + 2) == 0x481F895FDCAF9C10LL )
    v13 = *((_QWORD *)v10 + 3) - 0x3356F5D2CED492A4LL;
  if ( v13 )
    return 3238002694LL;
  v22 &= v9;
  if ( (int)RaidRegisterForRuntimePowerManagement(
              *(_QWORD *)(v5 + 8),
              a2,
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
    memmove(v16 + 12, (const void *)a2, TotalStorPoFxDeviceSize);
    if ( ((*(_BYTE *)(v5 + 108) >> 2) & ((*(_BYTE *)(a2 + 12) & 4) != 0)) != 0 )
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
    if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
      *(_BYTE *)(v5 + 108) |= 0x20u;
    if ( (*(_DWORD *)(a2 + 12) & 0x200) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x40u;
    if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
      *(_BYTE *)(v5 + 109) |= 4u;
    if ( (*(_DWORD *)(a2 + 12) & 0x400) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x80u;
    PoFxSetComponentLatency(*v16, 0LL, -1LL);
    PoFxSetComponentResidency(*v16, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      *(_DWORD *)(v5 + 5104) = *(_DWORD *)(a2 + 16);
    PoFxSetDeviceIdleTimeout(*v16, 10000LL * *(unsigned int *)(v5 + 5104));
    v19 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v5 + 5088) = v16;
    if ( !v19 )
    {
      v20 = *(_DWORD *)(v5 + 56);
      if ( v20 != -1 && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        McTemplateK0pqtqq(
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
