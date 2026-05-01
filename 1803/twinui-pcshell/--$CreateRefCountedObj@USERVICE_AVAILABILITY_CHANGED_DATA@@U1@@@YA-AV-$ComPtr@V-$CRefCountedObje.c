/*
 * XREFs of ??$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@@WRL@Microsoft@@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x180102158
 * Callers:
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800F0A40 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?0USERVICE_AVAILABILITY_CHANGED_DATA@@@?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@QEAA@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x1800F5B78 (--$-0USERVICE_AVAILABILITY_CHANGED_DATA@@@-$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA.c)
 */

__int64 *__fastcall CreateRefCountedObj<SERVICE_AVAILABILITY_CHANGED_DATA,SERVICE_AVAILABILITY_CHANGED_DATA>(
        __int64 *a1,
        __int64 *a2)
{
  void *v4; // rcx
  __int64 v5; // rax

  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>(
           (__int64)v4,
           a2);
  *a1 = v5;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}
