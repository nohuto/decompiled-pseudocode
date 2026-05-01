/*
 * XREFs of ??0CApplicationViewBase@@QEAA@XZ @ 0x180081944
 * Callers:
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x18007B284 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18007F240 (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     <none>
 */

CApplicationViewBase *__fastcall CApplicationViewBase::CApplicationViewBase(CApplicationViewBase *this)
{
  CApplicationViewBase *result; // rax

  *(_QWORD *)this = &CApplicationViewBase::`vftable';
  *((_QWORD *)this + 1) = &CApplicationViewBase::`vftable'{for `IApplicationViewBase'};
  *((_QWORD *)this + 2) = &CApplicationViewBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationViewWithEnterpriseId,Microsoft::WRL::Details::Nil>,1,0>'};
  InitializeSRWLock((PSRWLOCK)this + 3);
  InitializeSRWLock((PSRWLOCK)this + 4);
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = 0LL;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((GUID *)this + 6) = GUID_NULL;
  return result;
}
