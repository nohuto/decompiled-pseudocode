/*
 * XREFs of ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180082B08
 * Callers:
 *     ?ProcessInputAttempt@InputDeliveryServer@@UEAAXI@Z @ 0x18007EC00 (-ProcessInputAttempt@InputDeliveryServer@@UEAAXI@Z.c)
 *     std::_Func_impl__lambda_0af14be5e26ae7c36c83d7629202f60d__std::allocator_int__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call @ 0x180081330 (std--_Func_impl__lambda_0af14be5e26ae7c36c83d7629202f60d__std--allocator_int__void__ea_180081330.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAA@XZ @ 0x18002B640 (--1-$vector@W4GamepadButtons@Input@Gaming@Windows@@V-$allocator@W4GamepadButtons@Input@Gaming@Wi.c)
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x18002B8F4 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTargetManager::ProcessInputAttempt(InputAttemptedTargetManager *this, unsigned int a2)
{
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 *v11; // rcx
  int v12; // eax
  unsigned __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  if ( *((_QWORD *)this + 2) && a2 )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))(**((_QWORD **)this + 8) + 48LL))(
      *((_QWORD *)this + 8),
      v13,
      a2);
    std::vector<unsigned int>::emplace_back<unsigned int const &>((__int64)v13, &v15);
    v3 = (_DWORD *)v13[0];
    v4 = v13[1];
    while ( v3 != (_DWORD *)v4 )
    {
      v5 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 4; ++i )
        v5 = 0x100000001B3LL * (*((unsigned __int8 *)v3 + i) ^ (unsigned __int64)v5);
      v7 = *((_QWORD *)this + 3);
      v8 = *(__int64 **)(v7 + 16 * (v5 & *((_QWORD *)this + 6)));
      v9 = 2 * (v5 & *((_QWORD *)this + 6));
      v10 = (__int64 *)*((_QWORD *)this + 1);
      while ( 1 )
      {
        v11 = *(__int64 **)(v7 + 8 * v9) == v10 ? (__int64 *)*((_QWORD *)this + 1) : **(__int64 ***)(v7 + 8 * v9 + 8);
        if ( v8 == v11 )
          break;
        if ( *((_DWORD *)v8 + 4) == *v3 )
          goto LABEL_15;
        v8 = (__int64 *)*v8;
      }
      v8 = (__int64 *)*((_QWORD *)this + 1);
LABEL_15:
      if ( v8 != v10 )
      {
        v12 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, __int64 *, _QWORD, _QWORD))(*(_QWORD *)InputDeliveryServer::s_pInputDeliveryServer
                                                                                                  + 32LL))(
                InputDeliveryServer::s_pInputDeliveryServer,
                v8 + 3,
                0LL,
                0LL);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x38,
            (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputattemptedtargetmanager.cpp",
            (const char *)(unsigned int)v12);
          break;
        }
      }
      ++v3;
    }
    std::vector<enum Windows::Gaming::Input::GamepadButtons>::~vector<enum Windows::Gaming::Input::GamepadButtons>(v13);
  }
}
