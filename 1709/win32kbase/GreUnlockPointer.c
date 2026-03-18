/*
 * XREFs of GreUnlockPointer @ 0x1C00984C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockPointer(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemPointer()", *(_QWORD *)(a1 + 48), a3);
  v5 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
