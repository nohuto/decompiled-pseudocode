/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x18006C724
 * Callers:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18006B2C8 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___ @ 0x18006DFD8 (Windows--Internal--ComTaskPool--QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___(
        unsigned int *a1,
        __int128 *a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  _QWORD v8[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a1[16] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[0] = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v8[1] = a1;
    v9 = *a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___(v6, v5, a1[14], v8, -2LL);
    if ( v8[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
    if ( v7 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)v7;
  }
}
