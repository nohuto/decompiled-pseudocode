/*
 * XREFs of ?s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z @ 0x180004990
 * Callers:
 *     <none>
 * Callees:
 *     ?s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z @ 0x180005FA4 (-s_AttachAndRecoverTask@ComTaskPool@Internal@Windows@@CAXPEAUTaskData@123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CDelayedTask::s_TPWake(volatile __int64 *a1)
{
  void *v2; // rdx
  __int64 v3; // rcx

  if ( a1 )
    (*(void (__fastcall **)(volatile __int64 *))(*a1 + 8))(a1);
  v2 = (void *)_InterlockedExchange64(a1 + 2, 0LL);
  if ( v2 )
    DeleteTimerQueueTimer(0LL, v2, 0LL);
  Windows::Internal::ComTaskPool::s_AttachAndRecoverTask(*((struct Windows::Internal::ComTaskPool::TaskData **)a1 + 3));
  *((_QWORD *)a1 + 3) = 0LL;
  v3 = *((_QWORD *)a1 + 4);
  if ( v3 )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  (*(void (__fastcall **)(volatile __int64 *))(*a1 + 16))(a1);
}
