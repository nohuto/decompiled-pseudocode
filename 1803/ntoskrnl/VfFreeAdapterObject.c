/*
 * XREFs of VfFreeAdapterObject @ 0x1408188E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140817018 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140817310 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14081B044 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14081B294 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeAdapterObject(__int64 a1, unsigned int a2)
{
  __int64 RealDmaOperation; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, _QWORD); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 result; // rax
  KIRQL v9; // r14
  _QWORD *i; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rdx

  RealDmaOperation = ViGetRealDmaOperation(a1, 216LL);
  LOBYTE(v5) = 1;
  v6 = (__int64 (__fastcall *)(__int64, _QWORD))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v5);
  result = v6(a1, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    for ( i = *(_QWORD **)(AdapterInformationInternal + 128); ; i = (_QWORD *)*i )
    {
      v11 = i - 9;
      if ( (_QWORD *)(AdapterInformationInternal + 128) == i )
        break;
      if ( *((_DWORD *)v11 + 13) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *((_DWORD *)v11 + 13) = 3;
        }
        else
        {
          v12 = v11[9];
          if ( *(_QWORD **)(v12 + 8) != v11 + 9 || (v13 = (_QWORD *)v11[10], (_QWORD *)*v13 != v11 + 9) )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *((_DWORD *)v11 + 12));
          if ( v11[12] )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v11);
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
