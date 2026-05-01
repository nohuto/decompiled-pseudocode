/*
 * XREFs of ?OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z @ 0x1802E9960
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180151734 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1802E8CF4 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?Commit@JointResize@@AEAAJXZ @ 0x1802E8D58 (-Commit@JointResize@@AEAAJXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1802E906C (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x1802E9110 (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeCompleted(JointResize *this, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 136) )
  {
    *((_BYTE *)this + 136) = 0;
    v4 = *((_QWORD *)this + 11);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
      if ( a2 )
      {
        v6 = JointResize::Commit((JointResize *)((char *)this - 88));
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            346LL,
            (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v6);
      }
      LOBYTE(v5) = a2 == 0;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16), v5);
      v7 = JointResize::HideDropFeedback((JointResize *)((char *)this - 88), 1);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          351LL,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v7);
    }
    JointResize::DestroyGhostDivider((JointResize *)((char *)this - 88));
    JointResize::Cleanup((JointResize *)((char *)this - 88));
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)this + 344);
  }
}
