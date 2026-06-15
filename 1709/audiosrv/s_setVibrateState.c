/*
 * XREFs of s_setVibrateState @ 0x1800A27D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 s_setVibrateState()
{
  int v0; // eax
  unsigned int v1; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 344LL))(g_PolicyManager);
  v1 = v0;
  if ( v0 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x19,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v0);
  return v1;
}
