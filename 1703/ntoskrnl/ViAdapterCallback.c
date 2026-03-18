/*
 * XREFs of ViAdapterCallback @ 0x14076AF30
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x1402506B8 (ViIsActiveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14076832C (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140768624 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64); // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  _DWORD *v14; // rdx
  KIRQL v15; // bp
  __int64 v16; // r9
  _QWORD *v17; // r8

  v4 = *((_QWORD *)a4 + 7);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 192) < 3u )
    {
      v9 = *((_QWORD *)a4 + 12);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *((_QWORD *)a4 + 12);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))*((_QWORD *)a4 + 1);
  v11 = *(_QWORD *)a4;
  *((_QWORD *)a4 + 11) = v6;
  v12 = v10(a1, a2, v6, v11);
  if ( !v4 || !ViIsActiveChannelWcb(v4, (__int64)a4) )
    return v12;
  a4[13] = v12;
  if ( v12 != 1 )
  {
    if ( !*(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v12 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, a4[12]);
    v14 = (_DWORD *)*((_QWORD *)a4 + 12);
    if ( v14 && *v14 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *((_QWORD *)a4 + 12) = 0LL;
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    v16 = *((_QWORD *)a4 + 9);
    v17 = (_QWORD *)*((_QWORD *)a4 + 10);
    if ( *(_DWORD **)(v16 + 8) != a4 + 18 || (_DWORD *)*v17 != a4 + 18 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 144));
    __writecr8(v15);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, a4);
    return v12;
  }
  if ( *(_BYTE *)(v4 + 196) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 184));
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 40));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 256) = a4[12];
  return 1LL;
}
