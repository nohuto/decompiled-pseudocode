/*
 * XREFs of ??0CApplicationViewBase@@QEAA@XZ @ 0x1800848B8
 * Callers:
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x18007DF48 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18008212C (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     <none>
 */

CApplicationViewBase *__fastcall CApplicationViewBase::CApplicationViewBase(CApplicationViewBase *this)
{
  CApplicationViewBase *result; // rax

  *(_QWORD *)this = &CApplicationViewBase::`vftable';
  *((_QWORD *)this + 1) = &CApplicationViewBase::`vftable'{for `IApplicationViewBase'};
  *((_QWORD *)this + 2) = &CApplicationViewBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewWithEnterpriseId>'};
  InitializeSRWLock((PSRWLOCK)this + 4);
  InitializeSRWLock((PSRWLOCK)this + 5);
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)((char *)this + 84) = 0LL;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *(GUID *)((char *)this + 104) = GUID_NULL;
  return result;
}
