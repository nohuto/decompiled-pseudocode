/*
 * XREFs of ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x180114BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_03414d84f3d5ff7225f9a5327e0534d9___ @ 0x18011A33C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_03414d84f3d5ff7225f9a5327e0534d9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewWrapperBase::ChangeSuppressPopupsCount(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  IUnknown *v7; // rbx
  DWORD CurrentThreadId; // eax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h]

  v3 = 0;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 272);
    if ( v5 > a3 )
    {
      *(_QWORD *)(a1 + 272) = v5 - a3;
      return v3;
    }
    *(_QWORD *)(a1 + 272) = 0LL;
    LOBYTE(v3) = v5 != 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 272);
    *(_QWORD *)(a1 + 272) = v4 + a3;
    LOBYTE(v3) = v4 == 0;
  }
  if ( v3 == 1 )
  {
    v6 = a1 - 8;
    if ( a1 != 8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(a1 - 8);
    v12 = v6;
    v13 = v6;
    v16 = 0LL;
    v7 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_03414d84f3d5ff7225f9a5327e0534d9___(
                         &v15,
                         &v12);
    CurrentThreadId = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v7, 0LL);
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B5,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v9);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v3;
}
