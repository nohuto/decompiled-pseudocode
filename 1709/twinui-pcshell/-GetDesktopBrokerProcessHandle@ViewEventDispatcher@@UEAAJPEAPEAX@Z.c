/*
 * XREFs of ?GetDesktopBrokerProcessHandle@ViewEventDispatcher@@UEAAJPEAPEAX@Z @ 0x180121350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::GetDesktopBrokerProcessHandle(ViewEventDispatcher *this, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 41))(
         *((_QWORD *)this + 41),
         &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1899LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1900LL;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_7:
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
