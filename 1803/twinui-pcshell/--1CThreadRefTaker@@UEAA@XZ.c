/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x1800960B8
 * Callers:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x180027AB4 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x1801055E0 (--_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z.c)
 *     ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1801056C0 (--_GCThreadRefTaker@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
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
