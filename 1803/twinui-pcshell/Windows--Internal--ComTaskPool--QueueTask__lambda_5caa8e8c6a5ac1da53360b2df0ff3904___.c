/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5caa8e8c6a5ac1da53360b2df0ff3904___ @ 0x1801E3E3C
 * Callers:
 *     ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x1801E4E60 (-ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA-AW4StateChangeResult@@W4PopupCountOperation@@_K.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5caa8e8c6a5ac1da53360b2df0ff3904_____lambda_5caa8e8c6a5ac1da53360b2df0ff3904___ @ 0x1801E3CFC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5caa8e8c6a5ac.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5caa8e8c6a5ac1da53360b2df0ff3904___(
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

  v2 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5caa8e8c6a5ac1da53360b2df0ff3904_____lambda_5caa8e8c6a5ac1da53360b2df0ff3904___(
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
