/*
 * XREFs of GreUnlockPointer @ 0x1C008F940
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockPointer(__int64 a1)
{
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemPointer()");
  v3 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion(v4);
  }
  return result;
}
