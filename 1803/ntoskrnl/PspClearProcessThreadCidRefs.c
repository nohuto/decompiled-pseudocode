/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1404B7BE4
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x14005A5F0 (ObDereferenceObjectEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
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
  v5 = ExMapHandleToPointer(*(__int64 *)((char *)&Mm64BitPhysicalAddress + 6), a2);
  v6 = (unsigned __int64)*v5 >> 1;
  *v5 &= 0xFFFFFFFFFFFE0001uLL;
  v7 = *(__int64 *)((char *)&Mm64BitPhysicalAddress + 6);
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
