/*
 * XREFs of StorpAdapterInitializePoFxPower @ 0x1C00317EC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C000EBC0 (RaidGetStorPoFxComponent.c)
 *     RaidSetD3Cold @ 0x1C0015EC4 (RaidSetD3Cold.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     McTemplateK0pqtqq @ 0x1C0024340 (McTemplateK0pqtqq.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C002F498 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C002F560 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C002F58C (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C00352CC (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpAdapterInitializePoFxPower(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v5; // rbx
  char v6; // al
  __int64 v8; // rdx
  int *v9; // rcx
  int *StorPoFxComponent; // rax
  int *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v16; // r15
  SIZE_T v17; // r12
  _QWORD *Pool; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rax
  unsigned __int8 v21; // dl
  int v22; // eax
  char v23; // dl
  int v24; // eax
  __int64 v25; // r8
  bool v26; // zf
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF

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
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid((int *)a2) )
    return 3238002694LL;
  if ( *(_DWORD *)(v8 + 8) != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(v9, 0);
  v11 = StorPoFxComponent;
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v13 + 8) - 1) > 7 )
  {
    return 3238002694LL;
  }
  v14 = *(_QWORD *)(v13 + 16) - 0x481F895FDCAF9C10LL;
  if ( *(_QWORD *)(v13 + 16) == 0x481F895FDCAF9C10LL )
    v14 = *(_QWORD *)(v13 + 24) - 0x3356F5D2CED492A4LL;
  if ( v14 )
    return 3238002694LL;
  v30 &= v12;
  if ( (int)RaidRegisterForRuntimePowerManagement(*(_QWORD *)(v5 + 8), a2, v5, &v30) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize((int *)a2);
  v16 = TotalStorPoFxDeviceSize;
  v17 = TotalStorPoFxDeviceSize + 96;
  Pool = RaidAllocatePool(NonPagedPoolNx, v17, 0x4F506152u, *(_QWORD *)(v5 + 8));
  v19 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v17);
    v20 = v30;
    *((_DWORD *)v19 + 4) = 0;
    *((_DWORD *)v19 + 5) |= 3u;
    *v19 = v20;
    v19[1] = v19 + 12;
    memmove(v19 + 12, (const void *)a2, v16);
    v21 = *(_BYTE *)(v5 + 108);
    if ( ((v21 >> 2) & ((*(_BYTE *)(a2 + 12) & 4) != 0)) != 0
      && (v22 = RaidSetD3Cold(*(struct _DEVICE_OBJECT **)(v5 + 8), 1), v21 = *(_BYTE *)(v5 + 108), v22 >= 0) )
    {
      *(_BYTE *)(v5 + 108) = v21 | 8;
      *a3 = 1;
      v23 = *(_BYTE *)(v5 + 108);
    }
    else
    {
      v23 = v21 & 0xF7;
      *(_BYTE *)(v5 + 108) = v23;
    }
    v24 = *(_DWORD *)(a2 + 12);
    if ( (v24 & 8) != 0 )
    {
      *(_BYTE *)(v5 + 108) = v23 | 0x20;
      v24 = *(_DWORD *)(a2 + 12);
    }
    if ( (v24 & 0x200) != 0 )
    {
      *(_BYTE *)(v5 + 109) |= 0x40u;
      v24 = *(_DWORD *)(a2 + 12);
    }
    if ( (v24 & 0x40) != 0 )
    {
      *(_BYTE *)(v5 + 109) |= 4u;
      v24 = *(_DWORD *)(a2 + 12);
    }
    if ( (v24 & 0x400) != 0 )
      *(_BYTE *)(v5 + 109) |= 0x80u;
    PoFxSetComponentLatency(*v19, 0LL, -1LL);
    PoFxSetComponentResidency(*v19, 0LL, -1LL);
    if ( (*(_BYTE *)(v5 + 108) & 0x40) == 0 && *(_DWORD *)a2 >= 2u && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
      *(_DWORD *)(v5 + 5104) = *(_DWORD *)(a2 + 16);
    PoFxSetDeviceIdleTimeout(*v19, 10000LL * *(unsigned int *)(v5 + 5104));
    v26 = StorEtwLoggingEnabled == 0;
    v27 = v19;
    *(_QWORD *)(v5 + 5088) = v19;
    if ( !v26 )
    {
      v28 = *(unsigned int *)(v5 + 56);
      if ( (_DWORD)v28 != -1 && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      {
        v29 = (*(unsigned __int8 *)(v5 + 108) >> 3) & 1;
        McTemplateK0pqtqq(v29, v28, v25, *v19, v28, v29, *(_DWORD *)(v5 + 5104), v11[2]);
        v27 = *(_QWORD **)(v5 + 5088);
      }
    }
    PoFxStartDevicePowerManagement(*v27);
    return 0LL;
  }
  PoFxUnregisterDevice(v30);
  return 3238002691LL;
}
