/*
 * XREFs of ?GetProcessId@ViewWrapperBase@@UEAAIXZ @ 0x1801E5A60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::GetProcessId(ViewWrapperBase *this)
{
  __int64 v1; // rdx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v1 = *((_QWORD *)this + 23);
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)this + 20) + 520LL)
                                                                    + 280LL))(
           *(_QWORD *)(*((_QWORD *)this + 20) + 520LL),
           v1,
           &v5);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        380LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v2);
  }
  return v5;
}
