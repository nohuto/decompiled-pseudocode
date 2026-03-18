/*
 * XREFs of ViFilterDeviceUsageNotificationCompletion @ 0x140830100
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 */

__int64 __fastcall ViFilterDeviceUsageNotificationCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  KIRQL v6; // r15
  int v7; // eax
  int v8; // eax

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(a2 + 48) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
    v7 = *(_DWORD *)(v4 + 96);
    if ( *(_BYTE *)(v5 + 8) )
    {
      *(_DWORD *)(v4 + 96) = v7 + 1;
      if ( !v7 )
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    else
    {
      v8 = v7 - 1;
      *(_DWORD *)(v4 + 96) = v8;
      if ( !v8 )
        *(_DWORD *)(a1 + 48) |= *(_DWORD *)(*(_QWORD *)(v4 + 8) + 48LL) & 0x2000;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 88));
    __writecr8(v6);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
