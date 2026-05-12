/*
 * XREFs of StorpUnitInitializePoFxPower @ 0x1C0033890
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C000EBC0 (RaidGetStorPoFxComponent.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C002F498 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x1C002F560 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C002F58C (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C00352CC (RaidRegisterForRuntimePowerManagement.c)
 */

__int64 __fastcall StorpUnitInitializePoFxPower(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  __int64 v6; // rcx
  __int64 Unit; // rax
  __int64 v8; // rbx
  int *v10; // rcx
  int *StorPoFxComponent; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v16; // rbp
  SIZE_T v17; // r15
  char *Pool; // rax
  char *v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v22; // rcx
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( !a3 )
    return 3238002694LL;
  v6 = **(_QWORD **)(a1 - 16);
  if ( !v6 )
    return 3238002694LL;
  if ( !a2 )
    return 3238002694LL;
  if ( *(_WORD *)a2 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v23) = *(_WORD *)(a2 + 8);
  BYTE2(v23) = *(_BYTE *)(a2 + 10);
  Unit = RaidAdapterFindUnit(v6, (unsigned int)v23, (__int64)a3, (__int64)a4);
  v8 = Unit;
  if ( !Unit )
    return 3238002694LL;
  if ( *(char *)(Unit + 153) < 0 )
    return 3238002689LL;
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  StorPoFxComponent = (int *)RaidGetStorPoFxComponent(v10, 0);
  if ( !StorPoFxComponent
    || !RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v13 + 8) - 1) > 1 )
  {
    return 3238002694LL;
  }
  v14 = *(_QWORD *)(v13 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v13 + 16) == 0x40880B3A585D326BLL )
    v14 = *(_QWORD *)(v13 + 24) + 0x41A796F04F77C677LL;
  if ( v14 )
    return 3238002694LL;
  v23 &= v12;
  if ( (int)RaidRegisterForRuntimePowerManagement(*(_QWORD *)(v8 + 8), a3, v8, &v23) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a3);
  v16 = TotalStorPoFxDeviceSize;
  v17 = TotalStorPoFxDeviceSize + 168;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v17, 0x4F506152u, *(_QWORD *)(v8 + 8));
  v19 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v17);
    v20 = v23;
    *((_DWORD *)v19 + 4) = 0;
    *((_DWORD *)v19 + 8) |= 0xEu;
    *(_QWORD *)v19 = v20;
    *((_QWORD *)v19 + 12) = v19 + 88;
    *((_QWORD *)v19 + 11) = v19 + 88;
    KeInitializeSpinLock((PKSPIN_LOCK)v19 + 13);
    v21 = a3[3];
    if ( (v21 & 8) != 0 )
    {
      *(_BYTE *)(v8 + 153) |= 0x40u;
      v21 = a3[3];
    }
    if ( (v21 & 0x200) != 0 )
      *(_BYTE *)(v8 + 154) |= 4u;
    *((_QWORD *)v19 + 1) = v19 + 168;
    memmove(v19 + 168, a3, v16);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *((_DWORD *)v19 + 8) |= 0x80u;
    v22 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v8 + 1480);
    *(_QWORD *)(v8 + 1488) = v19;
    ExReInitializeRundownProtectionCacheAware(v22);
    *(_BYTE *)(v8 + 153) |= 0x80u;
    return 0LL;
  }
  else
  {
    PoFxUnregisterDevice(v23);
    return 3238002691LL;
  }
}
