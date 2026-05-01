/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1bed2b100b1af394f2735e08786001a___ @ 0x18006BFC4
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180067DA4 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___ @ 0x18006C958 (Windows--Internal--ComTaskPool--QueueTask__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1bed2b100b1af394f2735e08786001a___(
        unsigned int *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  char v12; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a1[16] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v10[0] = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v10[1] = a1;
    v10[2] = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v12 = *(_BYTE *)(a2 + 16);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___(
           v7,
           v6,
           a1[14],
           v10,
           -2LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
    if ( v8 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return (unsigned int)v8;
  }
}
