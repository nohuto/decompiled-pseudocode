/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_c375c8f4cb799a2f5bee00a6619de85c_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18008B320
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c375c8f4cb799a2f5bee00a6619de85c_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, volatile int *); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(__int64, volatile int *); // rax

  v4 = a1[4];
  if ( v4 )
  {
    a1[4] = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        v4,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release);
    else
      ((void (__fastcall *)(__int64))v5)(v4);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[2] = 0LL;
    v7 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(
        v6,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release);
    else
      ((void (__fastcall *)(__int64))v7)(v6);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
