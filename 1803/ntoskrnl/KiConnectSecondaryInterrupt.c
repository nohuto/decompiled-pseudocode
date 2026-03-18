/*
 * XREFs of KiConnectSecondaryInterrupt @ 0x140244B14
 * Callers:
 *     KeConnectInterrupt @ 0x140168E80 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140244A8C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140244AB0 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInsertInterruptObjectOrdered @ 0x140249128 (KiInsertInterruptObjectOrdered.c)
 */

__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  int v3; // edx
  char v4; // si
  unsigned int v5; // r8d
  char v6; // bp
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r10
  unsigned __int8 v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !KiSecondaryInterruptServicesEnabled )
    return 3221225473LL;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 96);
  v6 = 0;
  if ( (unsigned int)(v3 - 256) > 0xFF )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 92);
  if ( v7 > 0xCu )
    return 3221225711LL;
  if ( v5 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v8 = *(_BYTE *)(a1 + 93);
  if ( v8 < v7 )
  {
    if ( v8 )
      return 3221225711LL;
  }
  v9 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(v3 - 256);
  KiAcquireSecondaryPassiveConnectLock(v9);
  KiAcquireSecondaryInterruptConnectLock((KSPIN_LOCK *)v9, &v12);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( v10 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_17;
      if ( !*(_BYTE *)(v10 + 100) )
        goto LABEL_17;
      if ( *(_DWORD *)(v10 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_17;
      v6 = 1;
      v4 = 1;
      KiInsertInterruptObjectOrdered(*(_QWORD *)(v9 + 40), a1);
      if ( *(_BYTE *)(v11 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_17;
    }
    else
    {
      v6 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v9 + 32) = 0;
    }
    *(_QWORD *)(v9 + 40) = a1;
LABEL_17:
    *(_BYTE *)(a1 + 95) = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v9);
  __writecr8(v12);
  KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
    return v4 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
