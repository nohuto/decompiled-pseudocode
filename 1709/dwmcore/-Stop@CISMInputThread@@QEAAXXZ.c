/*
 * XREFs of ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801A0DE4
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x1801949E0 (--1CInputManager@@MEAA@XZ.c)
 *     ?Reset@CISMInputThread@@QEAAJXZ @ 0x1801A0C0C (-Reset@CISMInputThread@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
