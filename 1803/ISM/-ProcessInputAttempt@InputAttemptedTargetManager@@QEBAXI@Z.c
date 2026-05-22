/*
 * XREFs of ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002535C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7acb0610d562435f37746a706592db82__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call @ 0x180023AD0 (std--_Func_impl_no_alloc__lambda_7acb0610d562435f37746a706592db82__void__MIT_KEYBOA_ea_180023AD0.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x180080700 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEBI@Z @ 0x18002563C (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAIAEBI@Z.c)
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTargetManager::ProcessInputAttempt(InputAttemptedTargetManager *this, unsigned int a2)
{
  int *v3; // r14
  int *v4; // r15
  int v5; // ebx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  int v8; // eax
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = a2;
  if ( *(_QWORD *)this != *((_QWORD *)this + 1) && a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3), v9, a2);
    std::vector<unsigned int>::emplace_back<unsigned int const &>(v9, &v11);
    v3 = (int *)v9[0];
    v4 = (int *)v9[1];
    while ( v3 != v4 )
    {
      v5 = *v3;
      v6 = *(_QWORD **)this;
      v7 = (_QWORD *)*((_QWORD *)this + 1);
      while ( v6 != v7 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*v6 + 8LL) + 32LL))(*v6 + 8LL) != v5 )
        ++v6;
      if ( v6 != *((_QWORD **)this + 1) )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*v6 + 8LL) + 24LL))(*v6 + 8LL);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x3B,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
            (const char *)(unsigned int)v8);
          JUMPOUT(0x18002545CLL);
        }
      }
      ++v3;
    }
    std::vector<enum _Button>::_Tidy(v9);
  }
}
