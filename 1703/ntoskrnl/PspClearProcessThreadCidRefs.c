/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1404F8D74
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x140024B3C (ObDereferenceObjectEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 */

__int64 __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile signed __int64 *v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 result; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int64 *)ExMapHandleToPointer(PspCidTable, a2);
  v6 = (unsigned __int64)*v5 >> 1;
  *v5 &= 0xFFFFFFFFFFFE0001uLL;
  v7 = PspCidTable;
  v8 = (unsigned __int16)v6;
  _InterlockedExchangeAdd64(v5, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(v7 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  result = KiLeaveGuardedRegionUnsafe(a1);
  if ( v8 )
    return ObDereferenceObjectEx(a3, v8);
  return result;
}
