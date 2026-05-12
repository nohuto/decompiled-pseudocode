/*
 * XREFs of RiGetEnqueueReason @ 0x1C0009BD8
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C0007EF0 (RaidInsertDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C0009ADC (RiNormalizeDeviceQueue.c)
 * Callees:
 *     RiIsDeviceQueueBusy @ 0x1C0009CAC (RiIsDeviceQueueBusy.c)
 *     RiPeekDeviceQueue @ 0x1C0009CD4 (RiPeekDeviceQueue.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int IsDeviceQueueBusy; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rax
  char v10; // al
  bool v12; // zf
  int v13; // eax

  v3 = a2;
  LOBYTE(a2) = a3;
  IsDeviceQueueBusy = RiIsDeviceQueueBusy(a1, a2, a3, v3);
  LOBYTE(v8) = 0;
  if ( IsDeviceQueueBusy )
    return 1LL;
  if ( *(_BYTE *)(v6 + 37) && (*(_BYTE *)(v7 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(v6 + 36) && (*(_BYTE *)(v7 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(v6 + 28) > 0 )
    return 4LL;
  if ( *(_BYTE *)(v6 + 38) )
    return 5LL;
  if ( *(_DWORD *)(v6 + 20) || *(_DWORD *)(v6 + 16) )
  {
    v9 = RiPeekDeviceQueue(v6, v5, 0LL, v7);
    if ( v7 != v9 )
    {
      v12 = (*(_BYTE *)(v9 + 22) & 1) == 0;
      v13 = v8;
      if ( !v12 )
        LOBYTE(v13) = (*(_BYTE *)(v7 + 22) & 6) == 0;
      if ( v13 )
        return 6LL;
    }
  }
  v10 = *(_BYTE *)(v7 + 22);
  if ( (v10 & 1) != 0 && *(int *)(v6 + 76) >= 1 )
    return 7LL;
  if ( *(_BYTE *)(v6 + 39) != (_BYTE)v8 && (v10 & 8) == 0 )
    return 8LL;
  if ( (v10 & 0x10) != 0 )
    return 9LL;
  return (v10 & 0x40) != 0 ? 0xA : 0;
}
