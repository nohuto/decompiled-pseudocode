/*
 * XREFs of Mutex @ 0x1C0023420
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     PerformMutexDriverCallbacks @ 0x1C00234C8 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0023600 (InitMutex.c)
 */

__int64 __fastcall Mutex(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a2 + 64;
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             (_QWORD *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
  {
    result = InitMutex(a1, *(_QWORD *)(a1 + 320), *(_QWORD *)v2, *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0);
    if ( !(_DWORD)result )
    {
      if ( gDeviceLockMutexSupported )
        return PerformMutexDriverCallbacks(0, *(_QWORD *)(*(_QWORD *)v2 + 96LL), a1, 0, 0);
    }
  }
  return result;
}
