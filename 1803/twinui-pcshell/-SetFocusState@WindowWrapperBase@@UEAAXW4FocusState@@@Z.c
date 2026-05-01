/*
 * XREFs of ?SetFocusState@WindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1801F37B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1738cd98f2fee2521f9411d49d851a4e___ @ 0x1801EEC0C (Windows--Internal--ComTaskPool--QueueTask__lambda_1738cd98f2fee2521f9411d49d851a4e___.c)
 */

void __fastcall WindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 168LL))(*(_QWORD *)(a1 + 296));
  *(_QWORD *)&v8 = a1 - 16;
  DWORD2(v8) = a2;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_1738cd98f2fee2521f9411d49d851a4e___(
         v6,
         v5,
         CurrentThreadId,
         &v8);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1440LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7);
}
