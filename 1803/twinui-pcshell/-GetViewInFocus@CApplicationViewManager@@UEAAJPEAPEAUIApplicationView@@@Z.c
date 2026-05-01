/*
 * XREFs of ?GetViewInFocus@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18002E510
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B0C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBa.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView **a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 Ptr; // rcx
  void (*v6)(void); // rax
  struct IApplicationView *v7; // rax
  unsigned int v8; // edi

  *a2 = 0LL;
  v2 = this + 48;
  AcquireSRWLockShared(this + 48);
  Ptr = (__int64)this[53].Ptr;
  if ( !Ptr || ((__int64)this[54].Ptr & 1) != 0 )
  {
    v8 = -2147023728;
  }
  else
  {
    v6 = *(void (**)(void))(*(_QWORD *)Ptr + 8LL);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef(Ptr);
    }
    else if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef(Ptr);
    }
    else
    {
      v6();
    }
    v7 = (struct IApplicationView *)this[53].Ptr;
    v8 = 0;
    *a2 = v7;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v8;
}
