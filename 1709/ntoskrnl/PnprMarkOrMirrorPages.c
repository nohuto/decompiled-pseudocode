/*
 * XREFs of PnprMarkOrMirrorPages @ 0x14042C918
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x140200040 (PnprMirrorPhysicalMemory.c)
 *     PnprRecopyAddress @ 0x140200224 (PnprRecopyAddress.c)
 *     PnprRecopyMappingReserve @ 0x14020027C (PnprRecopyMappingReserve.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnprMarkOrMirrorPages(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  _RTL_BITMAP *v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = PnprContext;
  v6 = a1 >> 12;
  v7 = PnprContext + 152;
  v8 = *(_RTL_BITMAP **)(PnprContext + 152);
  v9 = (a2 >> 12) + v6;
  v10 = v9 - 1;
  while ( v8 != (_RTL_BITMAP *)v7 )
  {
    v11 = *(_QWORD *)&v8[1].SizeOfBitMap;
    v12 = (unsigned __int64)v8[1].Buffer + v11;
    if ( v10 < v11 )
      break;
    v13 = *(_QWORD *)&v8[1].SizeOfBitMap;
    v14 = v9;
    v15 = v12 - 1;
    if ( v6 > v11 )
      v13 = v6;
    if ( v10 < v12 - 1 )
      v15 = v9 - 1;
    else
      v14 = (unsigned __int64)v8[1].Buffer + v11;
    if ( v13 <= v14 - 1 )
    {
      if ( a3 )
      {
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v5 + 20928))(
               *(_QWORD *)(v5 + 20880),
               v13 << 12,
               (v15 << 12) - (v13 << 12) + 4096) < 0 )
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
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 168), &LockHandle);
        RtlClearBits(v8 + 2, v13 - v11, v15 - v13 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v5 = PnprContext;
    v8 = *(_RTL_BITMAP **)&v8->SizeOfBitMap;
    v7 = PnprContext + 152;
  }
  return 0LL;
}
