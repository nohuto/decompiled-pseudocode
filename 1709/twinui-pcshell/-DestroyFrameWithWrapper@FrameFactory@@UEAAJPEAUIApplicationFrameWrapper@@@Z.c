/*
 * XREFs of ?DestroyFrameWithWrapper@FrameFactory@@UEAAJPEAUIApplicationFrameWrapper@@@Z @ 0x1800644C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FrameFactory::DestroyFrameWithWrapper(FrameFactory *this, struct IApplicationFrameWrapper *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *))(*(_QWORD *)a2 + 88LL))(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v11);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), v11);
      v5 = v7;
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16C,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
          (const char *)(unsigned int)v7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x16B,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v6);
    }
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x169,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
