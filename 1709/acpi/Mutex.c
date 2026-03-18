/*
 * XREFs of Mutex @ 0x1C0011A20
 * Callers:
 *     <none>
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C0011AC8 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0011BF0 (InitMutex.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 */

__int64 __fastcall Mutex(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a2 + 64;
  result = CreateNameSpaceObject(a1[40], *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), a1[10], a1[11], a2 + 64, 0);
  if ( !(_DWORD)result )
  {
    result = InitMutex((_DWORD)a1, a1[40], *(_QWORD *)v2, *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0);
    if ( !(_DWORD)result )
    {
      if ( gDeviceLockMutexSupported )
        return PerformMutexDriverCallbacks(0, *(_QWORD *)(*(_QWORD *)v2 + 96LL), (_DWORD)a1, 0, 0);
    }
  }
  return result;
}
