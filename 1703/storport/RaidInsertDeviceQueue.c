/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C0007A90
 * Callers:
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C0009F58 (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C000A030 (RiPeekDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000A058 (RiEnqueueDeviceQueue.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pqccqqq @ 0x1C00315AC (Template_pqccqqq.c)
 */

char __fastcall RaidInsertDeviceQueue(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  char v11; // cl
  char result; // al
  char v13; // r14
  int EnqueueReason; // eax
  __int64 v15; // rcx
  KIRQL v16; // r11
  char v17; // r15
  char v18; // bp
  __int64 v19; // rax
  char v20; // [rsp+50h] [rbp-48h]
  _QWORD v21[2]; // [rsp+58h] [rbp-40h] BYREF

  v5 = a2 + 120;
  v21[0] = 0LL;
  v21[1] = 0LL;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a2 + 142) |= 2u;
  else
    *(_BYTE *)(a2 + 142) &= ~2u;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a2 + 142) |= 4u;
  else
    *(_BYTE *)(a2 + 142) &= ~4u;
  if ( (a3 & 1) != 0 )
    *(_BYTE *)(a2 + 142) |= 1u;
  else
    *(_BYTE *)(a2 + 142) &= ~1u;
  if ( (a3 & 8) != 0 )
    *(_BYTE *)(a2 + 142) |= 8u;
  else
    *(_BYTE *)(a2 + 142) &= ~8u;
  if ( (a3 & 0x10) != 0 )
    *(_BYTE *)(a2 + 142) |= 0x20u;
  else
    *(_BYTE *)(a2 + 142) &= ~0x20u;
  *(_BYTE *)(a2 + 142) ^= (*(_BYTE *)(a2 + 142) ^ (16 * a5)) & 0x10;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( *(_DWORD *)(a1 + 32)
    || (v10 = *(unsigned int *)(a1 + 76), (int)v10 > *(_DWORD *)(a1 + 4))
    || *(_BYTE *)(a1 + 37) && (*(_BYTE *)(v5 + 22) & 4) == 0
    || *(_BYTE *)(a1 + 36) && (*(_BYTE *)(v5 + 22) & 2) == 0
    || *(int *)(a1 + 28) > 0
    || *(_BYTE *)(a1 + 38)
    || (*(_DWORD *)(a1 + 20) || *(_DWORD *)(a1 + 16))
    && (v19 = RiPeekDeviceQueue(a1, v8, v10, v9), v5 != v19)
    && (*(_BYTE *)(v19 + 22) & 1) != 0
    && (*(_BYTE *)(v5 + 22) & 6) == 0
    || (v11 = *(_BYTE *)(v5 + 22), (v11 & 1) != 0) && (int)v10 >= 1
    || *(_BYTE *)(a1 + 39) && (v11 & 8) == 0
    || (v11 & 0x10) != 0
    || (v11 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v9);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
    {
      IoGetActivityIdIrp(a2, v21);
      v13 = ((*(_BYTE *)(v5 + 22) & 6) != 0) + 1;
    }
    else
    {
      v13 = v20;
    }
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    EnqueueReason = RiGetEnqueueReason(a1, v5, 0LL);
    v17 = EnqueueReason;
    if ( EnqueueReason )
    {
      RiEnqueueDeviceQueue(v15, v5);
      v18 = 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 76);
      v18 = 0;
      if ( (*(_BYTE *)(v5 + 22) & 1) != 0 )
        *(_BYTE *)(a1 + 38) = 1;
    }
    *(_BYTE *)(v5 + 20) = v18;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v16);
    if ( v18 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_pqccqqq(
          *(_DWORD *)(a1 + 76),
          *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
          (unsigned int)v21,
          a1,
          v13,
          3,
          v17,
          *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
          *(_DWORD *)(a1 + 76));
    }
    return v18;
  }
  else
  {
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v9);
    result = 0;
    *(_BYTE *)(v5 + 20) = 0;
  }
  return result;
}
