/*
 * XREFs of ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x18007AB70
 * Callers:
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1800AE0DC (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetUniqueStreamIdentifier(CVADServer *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 24);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 8) + 72LL))(v1 + 8);
  return result;
}
