/*
 * XREFs of MiDeletePartialCloneVad @ 0x1406BF360
 * Callers:
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiDereferenceExtendInfo @ 0x14013109C (MiDereferenceExtendInfo.c)
 *     MiFreeVadEvents @ 0x140214958 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MiRemoveSharedCommitNode @ 0x140512380 (MiRemoveSharedCommitNode.c)
 *     MiFreeVadEventBitmap @ 0x1406B6404 (MiFreeVadEventBitmap.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 *     MiFreeLargePageView @ 0x1406BEB6C (MiFreeLargePageView.c)
 */

void __fastcall MiDeletePartialCloneVad(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Process; // rsi
  unsigned int SessionId; // eax
  __int64 i; // rdi
  int v8; // ecx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = (unsigned __int64)CurrentThread->ApcState.Process;
  if ( (a2 & 1) != 0 )
    MiFreeVadEventBitmap(CurrentThread->ApcState.Process, a1, 4);
  if ( (a2 & 2) != 0 )
    MiFreeLargePageView(Process, a1, 2);
  if ( (a2 & 4) != 0 )
  {
    SessionId = MmGetSessionIdEx((struct _KPROCESS *)Process);
    MiDereferencePerSessionProtos(**(__int64 ***)(a1 + 72), SessionId);
  }
  if ( (a2 & 8) != 0 )
    ObfDereferenceObject(*(PVOID *)(a1 + 128));
  if ( (a2 & 0x10) != 0 )
    MiRemoveSharedCommitNode(**(_QWORD **)(a1 + 72), Process, 0);
  if ( (a2 & 0x40) != 0 )
  {
    MiGetProtoPteAddress(
      a1,
      *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32),
      0,
      &v10);
    MiGetProtoPteAddress(
      a1,
      *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
      0,
      &v9);
    for ( i = v10; ; i = *(_QWORD *)(i + 16) )
    {
      MiDecrementLargeSubsections((volatile LONG **)i, (volatile LONG **)i);
      if ( i == v9 )
        break;
    }
  }
  v8 = *(_DWORD *)(a1 + 48);
  if ( (v8 & 7) == 2 && (v8 & 0x10000) != 0 )
    --*(_QWORD *)(*(_QWORD *)(Process + 1296) + 248LL);
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && *(__int64 *)(a1 + 120) < 0 )
    MiDereferenceExtendInfo(a1, **(_QWORD **)(a1 + 72));
  MiFreeVadEvents(a1);
  ExFreePoolWithTag((PVOID)a1, 0);
}
