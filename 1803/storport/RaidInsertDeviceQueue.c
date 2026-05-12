/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C0009780
 * Callers:
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C000CAE8 (RiPeekDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C000CB10 (RiGetEnqueueReason.c)
 *     RiEnqueueDeviceQueue @ 0x1C000CC0C (RiEnqueueDeviceQueue.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pqccqqq @ 0x1C002D5E8 (McTemplateK0pqccqqq.c)
 */

char __fastcall RaidInsertDeviceQueue(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // al
  char result; // al
  char v19; // r14
  int EnqueueReason; // eax
  KIRQL v21; // r11
  char v22; // r15
  char v23; // bp
  __int64 v24; // rax
  char v25; // [rsp+50h] [rbp-48h]
  _QWORD v26[2]; // [rsp+58h] [rbp-40h] BYREF

  v5 = a2 + 120;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v8 = *(_BYTE *)(a2 + 142);
  if ( (a3 & 2) != 0 )
    v9 = v8 | 2;
  else
    v9 = v8 & 0xFD;
  *(_BYTE *)(a2 + 142) = v9;
  if ( (a3 & 4) != 0 )
    v10 = v9 | 4;
  else
    v10 = v9 & 0xFB;
  *(_BYTE *)(a2 + 142) = v10;
  if ( (a3 & 1) != 0 )
    v11 = v10 | 1;
  else
    v11 = v10 & 0xFE;
  *(_BYTE *)(a2 + 142) = v11;
  if ( (a3 & 8) != 0 )
    v12 = v11 | 8;
  else
    v12 = v11 & 0xF7;
  *(_BYTE *)(a2 + 142) = v12;
  if ( (a3 & 0x10) != 0 )
    v13 = v12 | 0x20;
  else
    v13 = v12 & 0xDF;
  *(_BYTE *)(a2 + 142) = v13;
  if ( (a3 & 0x20) != 0 )
    v14 = v13 | 0x40;
  else
    v14 = v13 & 0xBF;
  *(_BYTE *)(a2 + 142) = v14 ^ (v14 ^ (16 * a5)) & 0x10;
  v16 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( *(_DWORD *)(a1 + 32)
    || *(_DWORD *)(a1 + 76) > *(_DWORD *)(a1 + 4)
    || *(_BYTE *)(a1 + 37) && (*(_BYTE *)(v5 + 22) & 4) == 0
    || *(_BYTE *)(a1 + 36) && (*(_BYTE *)(v5 + 22) & 2) == 0
    || *(int *)(a1 + 28) > 0
    || *(_BYTE *)(a1 + 38)
    || (*(_DWORD *)(a1 + 20) || *(_DWORD *)(a1 + 16))
    && (v24 = RiPeekDeviceQueue(a1, v15, v16), v5 != v24)
    && (*(_BYTE *)(v24 + 22) & 1) != 0
    && (*(_BYTE *)(v5 + 22) & 6) == 0
    || (v17 = *(_BYTE *)(v5 + 22), (v17 & 1) != 0) && *(int *)(a1 + 76) >= 1
    || *(_BYTE *)(a1 + 39) && (v17 & 8) == 0
    || (v17 & 0x10) != 0
    || (v17 & 0x40) != 0
    || (v17 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v16);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
    {
      IoGetActivityIdIrp(a2, v26);
      v19 = ((*(_BYTE *)(v5 + 22) & 6) != 0) + 1;
    }
    else
    {
      v19 = v25;
    }
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    EnqueueReason = RiGetEnqueueReason(a1, v5, 0LL);
    v22 = EnqueueReason;
    if ( EnqueueReason )
    {
      RiEnqueueDeviceQueue(a1, v5);
      v23 = 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 76);
      v23 = 0;
      if ( (*(_BYTE *)(v5 + 22) & 1) != 0 )
        *(_BYTE *)(a1 + 38) = 1;
    }
    *(_BYTE *)(v5 + 20) = v23;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v21);
    if ( v23 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        McTemplateK0pqccqqq(
          *(_DWORD *)(a1 + 76),
          *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
          (unsigned int)v26,
          a1,
          v19,
          3,
          v22,
          *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
          *(_DWORD *)(a1 + 76));
    }
    return v23;
  }
  else
  {
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v16);
    result = 0;
    *(_BYTE *)(v5 + 20) = 0;
  }
  return result;
}
