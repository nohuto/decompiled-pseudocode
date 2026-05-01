/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000E4E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2baf3fdec4539f0a74e4b03503ed3c33__&___ptr64_ @ 0x180019924 (Windows--Internal--ComTaskPool--QueueTask__lambda_2baf3fdec4539f0a74e4b03503ed3c33__-___ptr64_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 68);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v6[0] = a2;
    v6[1] = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_2baf3fdec4539f0a74e4b03503ed3c33______ptr64_(v4, v6);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE5D,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5,
        -2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
