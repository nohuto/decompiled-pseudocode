/*
 * XREFs of ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x180039CB8
 * Callers:
 *     ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800395C0 (-CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x18003A580 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_fc741a4743938d06b405cea5fdae9784___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CRotationManagerSync::_CheckForInitialSuppression(CRotationManagerSync *this)
{
  char *v2; // rdi
  IUnknown *v3; // rbx
  DWORD CurrentThreadId; // eax
  int v5; // ebx
  __int64 v6; // rcx
  CRotationManagerSync *v7; // [rsp+48h] [rbp-18h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-10h]
  char v9; // [rsp+58h] [rbp-8h]
  __int64 v10; // [rsp+88h] [rbp+28h] BYREF
  CRotationManagerSync *v11; // [rsp+90h] [rbp+30h]

  v2 = (char *)OpenMutexW(0x100000u, 0, L"ShellRMSM");
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *((_BYTE *)this + 112) = 1;
    v11 = this;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 8LL))(this);
    v7 = this;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 8LL))(this);
    hObject = v2;
    v2 = 0LL;
    v9 = 0;
    v3 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_fc741a4743938d06b405cea5fdae9784___(
                         &v10,
                         &v7);
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v7 )
      (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 < 0 )
      *((_BYTE *)this + 112) = 0;
    (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
}
