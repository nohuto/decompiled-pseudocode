/*
 * XREFs of ?Stop@CISMInputThread@@QEAAXXZ @ 0x180192334
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x1801899C0 (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CISMInputThread::Stop(CISMInputThread *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 232LL))(*((_QWORD *)this + 4));
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 16LL))(*((_QWORD *)this + 4));
  v3 = *(_QWORD **)this;
  *((_QWORD *)this + 4) = 0LL;
  WaitForSingleObject(v3, 0xFFFFFFFF);
  CloseHandle(*(HANDLE *)this);
  *(_QWORD *)this = 0LL;
}
