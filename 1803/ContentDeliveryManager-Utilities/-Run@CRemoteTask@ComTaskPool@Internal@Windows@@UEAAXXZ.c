/*
 * XREFs of ?Run@CRemoteTask@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180004900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CRemoteTask::Run(Windows::Internal::ComTaskPool::CRemoteTask *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_BYTE *)(*((_QWORD *)this + 3) + 40LL) = 1;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 16LL))(v2 + 16);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
