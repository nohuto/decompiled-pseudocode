/*
 * XREFs of ?get_IsActive@VirtualDesktop@@UEAAJPEAE@Z @ 0x1801B8CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::get_IsActive(VirtualDesktop *this, bool *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 15)
                                                                                           + 48LL))(
         *((_QWORD *)this + 15),
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a2 = (unsigned int)SHIsSameObject(v9, *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14)) != 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x76,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v4);
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
  }
  return v5;
}
