/*
 * XREFs of VfFreeAdapterObject @ 0x140769AA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14076832C (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140768624 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14076C20C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeAdapterObject(__int64 a1, unsigned int a2)
{
  __int64 RealDmaOperation; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, _QWORD); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 result; // rax
  KIRQL v9; // r14
  __int64 i; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  RealDmaOperation = ViGetRealDmaOperation(a1, 216LL);
  LOBYTE(v5) = 1;
  v6 = (__int64 (__fastcall *)(__int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v5);
  result = v6(a1, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    for ( i = *(_QWORD *)(AdapterInformationInternal + 128); ; i = *(_QWORD *)(v11 + 72) )
    {
      v11 = i - 72;
      if ( AdapterInformationInternal + 128 == v11 + 72 )
        break;
      if ( *(_DWORD *)(v11 + 52) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v11 + 52) = 3;
        }
        else
        {
          v12 = *(_QWORD *)(v11 + 72);
          v13 = *(_QWORD **)(v11 + 80);
          if ( *(_QWORD *)(v12 + 8) != v11 + 72 || *v13 != v11 + 72 )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v11 + 48));
          if ( *(_QWORD *)(v11 + 96) )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v11);
        }
        break;
      }
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    result = v9;
    __writecr8(v9);
  }
  return result;
}
