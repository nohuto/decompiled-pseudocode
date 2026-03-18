/*
 * XREFs of AcpiPccRingDoorbell @ 0x1C0052B70
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x1C0052700 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0052D54 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0052E08 (WriteIoMemRaw.c)
 */

void __fastcall AcpiPccRingDoorbell(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v6; // al
  unsigned int v7; // edx
  char v8; // r8
  int v9; // r8d
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v13; // cl
  char v14; // cl
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // r9

  v4 = (KSPIN_LOCK *)(DeferredContext + 520);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 65);
  v7 = *(_DWORD *)DeferredContext;
  v8 = *(_DWORD *)DeferredContext;
  *((_DWORD *)DeferredContext + 128) = 0;
  v9 = v8 & 0x3C;
  if ( ((v9 - 28) & 0xFFFFFFE7) == 0 && v9 != 52 )
    *(_DWORD *)DeferredContext = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(4 * (v7 >> 2) - 4)) & 0x3C;
  _InterlockedExchange((volatile __int32 *)DeferredContext + 78, 1);
  KeReleaseSpinLock(v4, v6);
  if ( **((_WORD **)DeferredContext + 5) >= 0x8000u )
    _InterlockedIncrement(&AcpiPccSciReferenceCount);
  v10 = DeferredContext[80];
  if ( v10 < 2u )
  {
    IoMemRaw = ReadIoMemRaw(*(_QWORD *)(DeferredContext + 84), v10, (unsigned __int8)DeferredContext[83]);
    v11 = IoMemRaw;
    if ( IoMemRaw )
    {
      v13 = DeferredContext[82];
      if ( v13 )
        v11 = IoMemRaw >> v13;
      v14 = DeferredContext[81];
      if ( (unsigned __int8)v14 < 0x40u )
        v11 &= (1LL << v14) - 1;
    }
  }
  else
  {
    v11 = 0LL;
  }
  v15 = DeferredContext[80];
  v16 = *((_QWORD *)DeferredContext + 7) | v11 & *((_QWORD *)DeferredContext + 8);
  if ( v15 <= 1u )
  {
    if ( DeferredContext[82] )
    {
      v17 = ReadIoMemRaw(*(_QWORD *)(DeferredContext + 84), v15, (unsigned __int8)DeferredContext[83]);
      v18 = DeferredContext[82];
      v19 = (__int64)((1 << DeferredContext[81]) - 1) << v18;
      v16 = v17 & ~v19 | v19 & (v16 << v18);
    }
    WriteIoMemRaw(
      *(_QWORD *)(DeferredContext + 84),
      (unsigned __int8)DeferredContext[80],
      (unsigned __int8)DeferredContext[83],
      v16);
  }
  KeSetTimer((PKTIMER)DeferredContext + 5, (LARGE_INTEGER)-10000LL, (PKDPC)DeferredContext + 6);
}
