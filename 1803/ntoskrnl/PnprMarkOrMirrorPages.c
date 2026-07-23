/*
 * XREFs of PnprMarkOrMirrorPages @ 0x1404834A8
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14023CE20 (PnprMirrorPhysicalMemory.c)
 *     PnprRecopyAddress @ 0x14023D004 (PnprRecopyAddress.c)
 *     PnprRecopyMappingReserve @ 0x14023D05C (PnprRecopyMappingReserve.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnprMarkOrMirrorPages(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  _RTL_BITMAP *v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = PnprContext;
  v4 = a1 >> 12;
  v6 = PnprContext + 152;
  v7 = *(_RTL_BITMAP **)(PnprContext + 152);
  v8 = (a2 >> 12) + (a1 >> 12);
  v9 = v8 - 1;
  while ( v7 != (_RTL_BITMAP *)v6 )
  {
    v10 = *(_QWORD *)&v7[1].SizeOfBitMap;
    v11 = (unsigned __int64)v7[1].Buffer + v10;
    if ( v9 < v10 )
      break;
    v12 = *(_QWORD *)&v7[1].SizeOfBitMap;
    v13 = v4;
    v14 = v8;
    if ( v4 <= v10 )
      v13 = *(_QWORD *)&v7[1].SizeOfBitMap;
    else
      v12 = v4;
    v15 = v11 - 1;
    if ( v9 < v11 - 1 )
      v15 = v8 - 1;
    else
      v14 = (unsigned __int64)v7[1].Buffer + v10;
    if ( v13 <= v14 - 1 )
    {
      if ( a3 )
      {
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v3 + 20928))(
               *(_QWORD *)(v3 + 20880),
               v12 << 12,
               (v15 << 12) - (v12 << 12) + 4096) < 0 )
        {
          v16 = PnprContext;
          v17 = *(_DWORD *)(PnprContext + 20984);
          if ( !v17 )
            v17 = 3407;
          *(_DWORD *)(PnprContext + 20984) = v17;
          v18 = *(_DWORD *)(v16 + 20988);
          if ( !v18 )
            v18 = 8;
          *(_DWORD *)(v16 + 20988) = v18;
        }
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 168), &LockHandle);
        RtlClearBits(v7 + 2, v12 - v10, v15 - v12 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v3 = PnprContext;
    v7 = *(_RTL_BITMAP **)&v7->SizeOfBitMap;
    v6 = PnprContext + 152;
  }
  return 0LL;
}
