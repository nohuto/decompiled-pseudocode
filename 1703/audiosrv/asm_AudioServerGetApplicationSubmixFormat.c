/*
 * XREFs of asm_AudioServerGetApplicationSubmixFormat @ 0x1800AFC50
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall asm_AudioServerGetApplicationSubmixFormat(_QWORD *a1, _QWORD *a2)
{
  unsigned __int16 *v3; // rdi
  void *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 136LL))(*a1);
  v4 = MIDL_user_allocate(v3[8] + 18LL);
  *a2 = v4;
  if ( v4 )
  {
    memcpy_0(v4, v3, v3[8] + 18LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
