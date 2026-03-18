/*
 * XREFs of ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801D9948
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x1801CDA44 (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CISMInputThread::Stop(CISMInputThread *this)
{
  _QWORD *v2; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 232LL))(*((_QWORD *)this + 4));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 16LL))(*((_QWORD *)this + 4));
  v2 = *(_QWORD **)this;
  *((_QWORD *)this + 4) = 0LL;
  WaitForSingleObject(v2, 0xFFFFFFFF);
  CloseHandle(*(HANDLE *)this);
  *(_QWORD *)this = 0LL;
}
