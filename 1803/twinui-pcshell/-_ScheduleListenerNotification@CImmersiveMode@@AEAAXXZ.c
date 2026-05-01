/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800267AC
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800269E0 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9d6c54c6eac66a68e681dddf193e983c___ @ 0x18000D0AC (Windows--Internal--ComTaskPool--QueueTask__lambda_9d6c54c6eac66a68e681dddf193e983c___.c)
 *     ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x180091690 (-Release@-$CRefCountedObject@V-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1800F8CCC (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v2; // rbx
  unsigned int v3; // edx
  _QWORD *v4; // rdi
  ZBAND_NOTIFICATION_DATA *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(void *); // rax
  __int64 (__fastcall *v9)(void *); // rax
  ZBAND_NOTIFICATION_DATA *v10; // rcx
  void *v11; // [rsp+50h] [rbp+8h] BYREF
  ZBAND_NOTIFICATION_DATA *v12; // [rsp+58h] [rbp+10h]
  _QWORD *v13; // [rsp+60h] [rbp+18h]

  v2 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
  v12 = v2;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = v2;
    v2 = 0LL;
    v12 = 0LL;
    v4[1] = v5;
    *v4 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v4 + 4) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  v13 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *((_QWORD *)this + 44) = 0LL;
    v11 = v4;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    Windows::Internal::ComTaskPool::QueueTask__lambda_9d6c54c6eac66a68e681dddf193e983c___(
      v7,
      v6,
      (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
      &v11);
    if ( v11 )
    {
      v8 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL);
      if ( v8 == CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release )
        CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(v11);
      else
        v8(v11);
    }
  }
  else
  {
    v10 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
    if ( v10 )
      ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v10, v3);
  }
  if ( v4 )
  {
    v9 = *(__int64 (__fastcall **)(void *))(*v4 + 16LL);
    if ( v9 == CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release )
      CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(v4);
    else
      v9(v4);
  }
  if ( v2 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v2, v3);
}
