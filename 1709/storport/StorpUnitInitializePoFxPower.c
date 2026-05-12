/*
 * XREFs of StorpUnitInitializePoFxPower @ 0x1C003616C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C001900C (RaidRegisterForRuntimePowerManagement.c)
 *     RaidGetStorPoFxComponent @ 0x1C0019534 (RaidGetStorPoFxComponent.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C001E164 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C001E214 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall StorpUnitInitializePoFxPower(__int64 a1, __int64 a2, int *a3, _BYTE *a4)
{
  __int64 v6; // rcx
  __int64 Unit; // rax
  __int64 v8; // rbx
  char *StorPoFxComponent; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  int v13; // eax
  bool v14; // cf
  __int64 v15; // rax
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v17; // r15
  SIZE_T v18; // rbp
  char *Pool; // rax
  char *v20; // rsi
  __int64 v21; // rax
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
  Unit = RaidAdapterFindUnit(v6, v23);
  v8 = Unit;
  if ( !Unit )
    return 3238002694LL;
  if ( *(char *)(Unit + 153) < 0 )
    return 3238002689LL;
  if ( !RaidStorPoFxDeviceVersionAndSizeIsValid(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  StorPoFxComponent = RaidGetStorPoFxComponent(a3, 0);
  v12 = StorPoFxComponent;
  if ( !StorPoFxComponent )
    return 3238002694LL;
  v13 = *(_DWORD *)StorPoFxComponent;
  if ( v13 == 1 )
  {
    v14 = *((_DWORD *)v12 + 1) < 0x20u;
  }
  else
  {
    if ( v13 != 2 )
    {
      if ( (unsigned int)(v13 - 1) > 1 )
        return 3238002694LL;
      goto LABEL_21;
    }
    v14 = *((_DWORD *)v12 + 1) < 0x28u;
  }
  if ( v14 )
    return 3238002694LL;
LABEL_21:
  if ( (unsigned int)(*((_DWORD *)v12 + 2) - 1) > 1 )
    return 3238002694LL;
  v15 = *((_QWORD *)v12 + 2) - 0x40880B3A585D326BLL;
  if ( *((_QWORD *)v12 + 2) == 0x40880B3A585D326BLL )
    v15 = *((_QWORD *)v12 + 3) + 0x41A796F04F77C677LL;
  if ( v15 )
    return 3238002694LL;
  v23 &= v11;
  if ( (int)RaidRegisterForRuntimePowerManagement(
              *(_QWORD *)(v8 + 8),
              (unsigned __int64)a3,
              (const unsigned __int16 *)v8,
              (unsigned __int64)&v23) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a3);
  v17 = TotalStorPoFxDeviceSize;
  v18 = TotalStorPoFxDeviceSize + 144;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v18, 0x4F506152u, *(_QWORD *)(v8 + 8));
  v20 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v18);
    v21 = v23;
    *((_DWORD *)v20 + 4) = 0;
    *((_DWORD *)v20 + 8) |= 0xEu;
    *(_QWORD *)v20 = v21;
    *((_QWORD *)v20 + 9) = v20 + 64;
    *((_QWORD *)v20 + 8) = v20 + 64;
    KeInitializeSpinLock((PKSPIN_LOCK)v20 + 10);
    if ( (a3[3] & 8) != 0 )
      *(_BYTE *)(v8 + 153) |= 0x40u;
    if ( (a3[3] & 0x200) != 0 )
      *(_BYTE *)(v8 + 154) |= 4u;
    *((_QWORD *)v20 + 1) = v20 + 144;
    memmove(v20 + 144, a3, v17);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *((_DWORD *)v20 + 8) |= 0x80u;
    v22 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v8 + 1480);
    *(_QWORD *)(v8 + 1488) = v20;
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
