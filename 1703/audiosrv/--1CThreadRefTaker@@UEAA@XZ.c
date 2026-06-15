/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x1800D4DC4
 * Callers:
 *     ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x1800D5180 (--_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z.c)
 *     ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1800D52F0 (--_GCThreadRefTaker@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThreadRefTaker::~CThreadRefTaker(CThreadRefTaker *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
