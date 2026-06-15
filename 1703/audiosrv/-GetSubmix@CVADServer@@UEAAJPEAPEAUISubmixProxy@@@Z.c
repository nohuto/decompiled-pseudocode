/*
 * XREFs of ?GetSubmix@CVADServer@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x1800A0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetSubmix(CVADServer *this, struct ISubmixProxy **a2)
{
  unsigned int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (*(__int64 (__fastcall **)(__int64, struct ISubmixProxy **))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 120LL))(
         *((_QWORD *)this + 24) + 8LL,
         a2);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
