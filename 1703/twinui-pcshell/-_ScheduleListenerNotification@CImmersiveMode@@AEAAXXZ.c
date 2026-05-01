/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800315E0
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180030FE0 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??$CreateRefCountedObj@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@V1@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@@WRL@Microsoft@@$$QEAV?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@Z @ 0x1800328B8 (--$CreateRefCountedObj@V-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@V1@@@YA-AV-$ComPtr@V-$CRefCoun.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_9bedd51116fa11b33adb0b90decd23b1___ @ 0x180032C08 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_9bedd51116fa11b33adb0b90decd23b1___.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  __int64 v2; // rbx
  int Ptr; // edi
  IUnknown **v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  void *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  void *Block; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  Block = (void *)*((_QWORD *)this + 38);
  CreateRefCountedObj<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>,CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>(&v13, &Block);
  v2 = v13;
  if ( v13 )
  {
    *((_QWORD *)this + 38) = 0LL;
    v11 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    Ptr = (int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
    v4 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_9bedd51116fa11b33adb0b90decd23b1___(
                        &v10,
                        &v11);
    Windows::Internal::ComTaskPool::RunTask(3, 2u, Ptr, 0, *v4, 0LL);
    v5 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v6 = (_QWORD *)*((_QWORD *)this + 38);
    if ( v6 )
    {
      v7 = v6[1];
      if ( v7 )
      {
        v6[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      operator delete(v6);
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v8 = Block;
  if ( Block )
  {
    v9 = *((_QWORD *)Block + 1);
    if ( v9 )
    {
      *((_QWORD *)Block + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    operator delete(v8);
  }
}
