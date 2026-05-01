/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x180091690
 * Callers:
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800267AC (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ??_G?$CTaskWrapper@V_lambda_9d6c54c6eac66a68e681dddf193e983c_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800910F0 (--_G-$CTaskWrapper@V_lambda_9d6c54c6eac66a68e681dddf193e983c_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _lambda_9d6c54c6eac66a68e681dddf193e983c_::__lambda_9d6c54c6eac66a68e681dddf193e983c_ @ 0x1800F8CF4 (_lambda_9d6c54c6eac66a68e681dddf193e983c_--__lambda_9d6c54c6eac66a68e681dddf193e983c_.c)
 *     ??1?$ComPtr@V?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8D38 (--1-$ComPtr@V-$CRefCountedObject@V-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@@WRL@Microsoft@@QE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  void **v3; // rsi

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v3 = (void **)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    if ( v3 )
    {
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v3 + 1);
      operator delete(v3, (const struct std::nothrow_t *)0x10);
    }
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
