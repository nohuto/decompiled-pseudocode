/*
 * XREFs of ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x18013F130
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d6acbb3e081afa0e4e5dd79f28d1dee4___ @ 0x18014461C (Windows--Internal--ComTaskPool--QueueTask__lambda_d6acbb3e081afa0e4e5dd79f28d1dee4___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::ChangeSuppressPopupsCount(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 296);
    if ( v5 > a3 )
    {
      *(_QWORD *)(a1 + 296) = v5 - a3;
      return v3;
    }
    *(_QWORD *)(a1 + 296) = 0LL;
    LOBYTE(v3) = v5 != 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 296) = v4 + a3;
    LOBYTE(v3) = v4 == 0;
  }
  if ( v3 == 1 )
  {
    v6 = a1 - 8;
    if ( a1 != 8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(a1 - 8);
    v9 = v6;
    v10 = v6;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d6acbb3e081afa0e4e5dd79f28d1dee4___(a1, &v9);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v3;
}
