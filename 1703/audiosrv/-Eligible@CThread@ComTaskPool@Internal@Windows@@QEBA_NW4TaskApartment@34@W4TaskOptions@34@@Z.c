/*
 * XREFs of ?Eligible@CThread@ComTaskPool@Internal@Windows@@QEBA_NW4TaskApartment@34@W4TaskOptions@34@@Z @ 0x1800D58E8
 * Callers:
 *     ?s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z @ 0x1800D8150 (-s_ClearOrGetNextTask@ComTaskPool@Internal@Windows@@CAXPEAVCThread@123@@Z.c)
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x1800D85E0 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::ComTaskPool::CThread::Eligible(__int64 a1, int a2, unsigned __int8 a3)
{
  char v3; // r9

  v3 = 0;
  if ( (a2 == *(_DWORD *)(a1 + 80) || a2 == 3) && ((a3 ^ *(_BYTE *)(a1 + 84)) & 9) == 0 && *(int *)(a1 + 48) >= 0 )
    return 1;
  return v3;
}
