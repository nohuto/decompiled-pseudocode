/*
 * XREFs of ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1801E1B48
 * Callers:
 *     _lambda_f2dcd8ae08335fe0e2886b29354d7ff7_::_lambda_invoker_cdecl_ @ 0x1801E1660 (_lambda_f2dcd8ae08335fe0e2886b29354d7ff7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0_____lambda_9d1d8d58343981d67c57f7f39dcd56a0___ @ 0x1801E1668 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___--CTaskW.c)
 */

__int64 __fastcall ConnectedStandbyHelper::NotificationCallback(ConnectedStandbyHelper *this, int a2)
{
  __int64 v2; // r9
  signed __int32 v3; // eax
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // r14d
  void *v7; // rbx
  std::_Ref_count_base *v8; // rsi
  void *v9; // rax
  __int64 v10; // rax
  _QWORD pExceptionObject[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+60h] [rbp-10h]
  void *v16; // [rsp+90h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
LABEL_2:
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v3 = *(_DWORD *)(v2 + 8);
    if ( !v3 )
      goto LABEL_2;
  }
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) );
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  v5 = *(_QWORD *)this;
  v13[0] = this;
  if ( v4 )
    _InterlockedIncrement(v4 + 2);
  v6 = *((_DWORD *)this + 4);
  v7 = 0LL;
  v15 = a2;
  v8 = (std::_Ref_count_base *)v4;
  v13[1] = v5;
  v14 = (std::_Ref_count_base *)v4;
  v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0_____lambda_9d1d8d58343981d67c57f7f39dcd56a0___(
            (__int64)v9,
            (__int64)v13);
    v8 = v14;
    v7 = (void *)v10;
  }
  v16 = v7;
  Windows::Internal::ComTaskPool::RunTask(3u, 2u, v6, 0, (struct Windows::Internal::IComPoolTask *)v7, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v16);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  return 0LL;
}
