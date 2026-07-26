/*
 * XREFs of ndisMInitializeMiniportBlockFront @ 0x1C01073C8
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00C12F0 (ndisMInitializeMiniportBlock.c)
 *     ndisReinitializeMiniportBlock @ 0x1C010F99C (ndisReinitializeMiniportBlock.c)
 * Callees:
 *     ndisInitializeULongRef @ 0x1C002300C (ndisInitializeULongRef.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

__int64 __fastcall ndisMInitializeMiniportBlockFront(char *DeferredContext, int a2)
{
  __int64 v3; // rcx
  char v4; // al
  char v5; // al
  size_t v6; // r8
  char v7; // al
  char *v8; // rcx
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax

  v3 = *((_QWORD *)DeferredContext + 473);
  *((_DWORD *)DeferredContext + 380) = 0;
  *(_WORD *)DeferredContext = 273;
  *((_WORD *)DeferredContext + 1) = a2;
  *((_QWORD *)DeferredContext + 22) = DeferredContext;
  *((_DWORD *)DeferredContext + 564) = 1;
  *((_QWORD *)DeferredContext + 68) = &ndisGlobalTriageBlock;
  v4 = *(_BYTE *)(v3 + 24);
  if ( (unsigned __int8)v4 < 6u )
  {
    DeferredContext[3156] = 6;
    v5 = 0;
  }
  else
  {
    DeferredContext[3156] = v4;
    v5 = *(_BYTE *)(v3 + 25);
  }
  DeferredContext[3157] = v5;
  v6 = ndisMaxNumberOfProcessors;
  DeferredContext[32] = *(_BYTE *)(v3 + 24);
  v7 = *(_BYTE *)(v3 + 25);
  *((_DWORD *)DeferredContext + 142) = 0;
  v6 *= 8LL;
  DeferredContext[33] = v7;
  v8 = &DeferredContext[a2 - v6];
  DeferredContext[88] = 0;
  *((_QWORD *)DeferredContext + 200) = v8;
  memset(v8, 0, v6);
  *((_DWORD *)DeferredContext + 30) |= 0x400000u;
  *((_QWORD *)DeferredContext + 276) = DeferredContext + 2200;
  *((_QWORD *)DeferredContext + 275) = DeferredContext + 2200;
  *((_QWORD *)DeferredContext + 342) = DeferredContext + 2728;
  *((_QWORD *)DeferredContext + 341) = DeferredContext + 2728;
  *((_QWORD *)DeferredContext + 436) = DeferredContext + 3480;
  *((_QWORD *)DeferredContext + 435) = DeferredContext + 3480;
  *((_QWORD *)DeferredContext + 440) = DeferredContext + 3512;
  *((_QWORD *)DeferredContext + 439) = DeferredContext + 3512;
  *((_QWORD *)DeferredContext + 451) = DeferredContext + 3600;
  *((_QWORD *)DeferredContext + 450) = DeferredContext + 3600;
  *((_QWORD *)DeferredContext + 170) = DeferredContext + 1352;
  *((_QWORD *)DeferredContext + 169) = DeferredContext + 1352;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 398);
  *((_QWORD *)DeferredContext + 409) = 0LL;
  *((_QWORD *)DeferredContext + 411) = ndisPeriodicReceivesWorker;
  *((_QWORD *)DeferredContext + 412) = DeferredContext;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 12);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 250);
  *((_QWORD *)DeferredContext + 17) = DeferredContext + 128;
  *((_QWORD *)DeferredContext + 16) = DeferredContext + 128;
  if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 473) + 26LL) & 2) != 0 )
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 235);
  KeInitializeDpc((PRKDPC)(DeferredContext + 1528), (PKDEFERRED_ROUTINE)ndisMDeferredDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 242) = 0LL;
  *((_QWORD *)DeferredContext + 244) = ndisQueuedCheckForHang;
  *((_QWORD *)DeferredContext + 245) = DeferredContext;
  ndisInitializeULongRef((__int64)(DeferredContext + 4464));
  *((_DWORD *)DeferredContext + 1118) = 0;
  v9 = (__int64 *)(DeferredContext + 880);
  v10 = (__int64 *)(DeferredContext + 1632);
  v11 = 6LL;
  do
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    result = *v9;
    *v10 = *v9;
    *v9 = (__int64)v10;
    v10 += 3;
    ++v9;
    --v11;
  }
  while ( v11 );
  *((_DWORD *)DeferredContext + 502) = 6;
  return result;
}
