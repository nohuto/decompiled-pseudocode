/*
 * XREFs of ?NotifyHostChanged@ViewWrapperBase@@UEAAXXZ @ 0x180114800
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_c548e16b200961cdbec772528a46f987___ @ 0x18011A2F8 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_c548e16b200961cdbec772528a46f987___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewWrapperBase::NotifyHostChanged(ViewWrapperBase *this)
{
  char *v1; // rbx
  IUnknown *v2; // rbx
  DWORD CurrentThreadId; // eax
  int v4; // ebx
  __int64 v5; // rcx
  char *v6; // [rsp+38h] [rbp-20h] BYREF
  char *v7; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this - 8;
  if ( this != (ViewWrapperBase *)8 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))((char *)this - 8);
  v6 = v1;
  v7 = v1;
  v2 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_c548e16b200961cdbec772528a46f987___(&v9, &v6);
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v2, 0LL);
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33C,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v4);
  if ( v7 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
}
