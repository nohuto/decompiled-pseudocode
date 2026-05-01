/*
 * XREFs of _lambda_de3f4501c60332f424e3ead36a7d18c4_::__lambda_de3f4501c60332f424e3ead36a7d18c4_ @ 0x180071640
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C144 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ??_E?$CTaskWrapper@V_lambda_de3f4501c60332f424e3ead36a7d18c4_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180071710 (--_E-$CTaskWrapper@V_lambda_de3f4501c60332f424e3ead36a7d18c4_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _CSingleViewShellExperience::Launch_::_1_::dtor$4 @ 0x1800B52F4 (_CSingleViewShellExperience--Launch_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180071360 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_de3f4501c60332f424e3ead36a7d18c4_::__lambda_de3f4501c60332f424e3ead36a7d18c4_(__int64 a1)
{
  HRESULT result; // eax
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, volatile int *); // rax

  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(a1 + 32));
  result = WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    v4 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
               v3,
               (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      return ((__int64 (__fastcall *)(__int64))v4)(v3);
  }
  return result;
}
