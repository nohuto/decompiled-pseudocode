/*
 * XREFs of ?Navigate@CAltTabViewHost@@UEAAJI@Z @ 0x180275340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAltTabViewHost::Navigate(CAltTabViewHost *this, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 19);
  if ( !v2 )
  {
    v3 = -2147023728;
    v4 = 243LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v3);
    return v3;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 96LL))(v2, 1LL, a2);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 244LL;
    goto LABEL_5;
  }
  return v3;
}
