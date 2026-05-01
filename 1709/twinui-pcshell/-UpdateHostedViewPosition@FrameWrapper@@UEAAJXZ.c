/*
 * XREFs of ?UpdateHostedViewPosition@FrameWrapper@@UEAAJXZ @ 0x180063C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FrameWrapper::UpdateHostedViewPosition(FrameWrapper *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7[1] = -2LL;
  if ( !*((_QWORD *)this + 5) )
  {
    v2 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)0x8007139FLL);
    return v2;
  }
  v7[0] = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 5))(
         *((_QWORD *)this + 5),
         &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
         v7);
  v2 = v3;
  if ( v3 < 0 )
  {
    v4 = 241LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v3 = (*(__int64 (__fastcall **)(FrameWrapper *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v8);
  v2 = v3;
  if ( v3 < 0 )
  {
    v4 = 243LL;
    goto LABEL_9;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v7[0] + 32LL))(v7[0], v8);
  v2 = v3;
  if ( v3 < 0 )
  {
    v4 = 244LL;
    goto LABEL_9;
  }
  v2 = 0;
LABEL_11:
  v5 = v7[0];
  if ( v7[0] )
  {
    v7[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v2;
}
