/*
 * XREFs of _lambda_188a207fec6f48f56ea356ceda17ab16_::operator() @ 0x180086710
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_188a207fec6f48f56ea356ceda17ab16___::Run @ 0x180087770 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_188a207fec6f48f56ea356ceda17ab16___--Run.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_188a207fec6f48f56ea356ceda17ab16_::operator()(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v1 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 176LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 176LL),
           &GUID_05357b73_71a8_4328_801f_d28e07a3d3ff,
           &v5);
    if ( v1 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v1);
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    if ( v2 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xBB,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v2);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBD,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      v3);
  }
}
