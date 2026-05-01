/*
 * XREFs of ?CancelPendingComTaskPoolTasks@@YAXK_N@Z @ 0x180023218
 * Callers:
 *     ?UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D3ED0 (-UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_a847f980382ff80e4546269ffbdc31c5___ @ 0x180020880 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_a847f980382ff80e4546269ffbdc31c5___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___ @ 0x1800231D0 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CancelPendingComTaskPoolTasks(int a1, __int64 a2)
{
  char *Event; // rdi
  signed int LastError; // eax
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  IUnknown **v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  char *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( !(_BYTE)a2 )
    goto LABEL_17;
  Event = (char *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    v5 = 0;
  }
  else
  {
    LastError = GetLastError();
    v5 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v5 = LastError;
    if ( v5 >= 0 )
      v5 = -2147467259;
  }
  if ( v5 >= 0 )
  {
    v11 = Event;
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_a847f980382ff80e4546269ffbdc31c5___(
                        &v10,
                        &v11);
    v5 = Windows::Internal::ComTaskPool::RunTask(3, 0x102u, a1, 0, *v6, 0LL);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v5 >= 0 )
      WaitForSingleObjectEx(Event, 0xFFFFFFFF, 0);
  }
  if ( (unsigned __int64)(Event - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(Event);
  if ( v5 < 0 )
  {
LABEL_17:
    v8 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___(&v10, a2);
    Windows::Internal::ComTaskPool::RunTask(3, 0x102u, a1, 0, *v8, 0LL);
    v9 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
