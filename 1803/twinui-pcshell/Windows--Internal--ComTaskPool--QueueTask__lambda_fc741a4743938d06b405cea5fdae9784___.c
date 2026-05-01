/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x18011B000
 * Callers:
 *     ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x18011B944 (-_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784_____lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x18011AF64 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc741a4743938.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___(
        __int64 a1,
        _QWORD *a2)
{
  struct Windows::Internal::IComPoolTask **v2; // rax
  struct Windows::Internal::IComPoolTask *v3; // rbx
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  struct Windows::Internal::IComPoolTask *v9; // [rsp+68h] [rbp+20h] BYREF

  v2 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784_____lambda_fc741a4743938d06b405cea5fdae9784___(
                                                    &v8,
                                                    a2);
  v3 = *v2;
  v9 = *v2;
  *v2 = 0LL;
  v4 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(3u, 0, CurrentThreadId, 0, v3, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v9);
  return v6;
}
