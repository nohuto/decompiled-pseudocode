/*
 * XREFs of NdisMWanIndicateReceive @ 0x1C005E5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisMWanIndicateReceive(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  KSPIN_LOCK *v5; // rdi
  KIRQL v10; // bp
  __int64 v11; // rsi

  v5 = (KSPIN_LOCK *)(a2 + 96);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v11 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 725486;
  while ( 1 )
  {
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    if ( !v11 )
      break;
    KeReleaseSpinLockFromDpcLevel(v5);
    *a1 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v11 + 24) + 264LL))(a3, a4, a5);
    KeAcquireSpinLockAtDpcLevel(v5);
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 725502;
    v11 = *(_QWORD *)(v11 + 392);
  }
  KeReleaseSpinLock(v5, v10);
}
