/*
 * XREFs of ??0CApplicationViewBase@@QEAA@XZ @ 0x180025050
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18002DED0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180092D94 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32Applicat.c)
 * Callees:
 *     <none>
 */

CApplicationViewBase *__fastcall CApplicationViewBase::CApplicationViewBase(CApplicationViewBase *this)
{
  CApplicationViewBase *result; // rax

  *(_QWORD *)this = &CApplicationViewBase::`vftable'{for `IApplicationView'};
  *((_QWORD *)this + 1) = &CApplicationViewBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
  *((_QWORD *)this + 2) = &CApplicationViewBase::`vftable'{for `IApplicationViewBase'};
  *((_QWORD *)this + 3) = &CApplicationViewBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewWithEnterpriseId>'};
  InitializeSRWLock((PSRWLOCK)this + 5);
  InitializeSRWLock((PSRWLOCK)this + 6);
  *((_BYTE *)this + 56) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  result = this;
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 33) = 0;
  return result;
}
