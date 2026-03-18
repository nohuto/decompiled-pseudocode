/*
 * XREFs of ViAdapterCallback @ 0x140819D70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x1402AA034 (ViIsActiveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140817018 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140817310 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64); // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  char v13; // cl
  _DWORD *v15; // rdx
  KIRQL v16; // bp
  __int64 v17; // r9
  __int64 **v18; // r8

  v4 = a4[7];
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 192) < 3u )
    {
      v9 = a4[12];
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = a4[12];
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))a4[1];
  v11 = *a4;
  a4[11] = v6;
  v12 = v10(a1, a2, v6, v11);
  if ( !v4 || !ViIsActiveChannelWcb(v4, a4) )
    return v12;
  *((_DWORD *)a4 + 13) = v12;
  v13 = *(_BYTE *)(v4 + 196);
  if ( v12 != 1 )
  {
    if ( !v13 )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v12 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, *((_DWORD *)a4 + 12));
    v15 = (_DWORD *)a4[12];
    if ( v15 && *v15 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      a4[12] = 0LL;
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    v17 = a4[9];
    if ( *(__int64 **)(v17 + 8) != a4 + 9 || (v18 = (__int64 **)a4[10], *v18 != a4 + 9) )
      __fastfail(3u);
    *v18 = (__int64 *)v17;
    *(_QWORD *)(v17 + 8) = v18;
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 144));
    __writecr8(v16);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, a4);
    return v12;
  }
  if ( v13 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 184));
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 40));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 256) = *((_DWORD *)a4 + 12);
  return 1LL;
}
