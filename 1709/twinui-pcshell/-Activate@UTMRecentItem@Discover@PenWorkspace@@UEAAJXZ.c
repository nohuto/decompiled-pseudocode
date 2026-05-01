/*
 * XREFs of ?Activate@UTMRecentItem@Discover@PenWorkspace@@UEAAJXZ @ 0x1800EE540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E661C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::Activate(PenWorkspace::Discover::UTMRecentItem *this)
{
  int v1; // eax
  int v2; // edx
  char *v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(__int64, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v9)(__int64, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(**((_QWORD **)this + 3)
                                                                                                + 120LL))(
         *((_QWORD *)this + 3),
         &v9);
  v4 = v1;
  if ( v1 < 0 )
  {
    v5 = 116LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_7;
  }
  v1 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
         v9,
         v2,
         v3);
  v4 = v1;
  if ( v1 < 0 )
  {
    v5 = 118LL;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_7:
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v6)[2])(v6);
  }
  return v4;
}
