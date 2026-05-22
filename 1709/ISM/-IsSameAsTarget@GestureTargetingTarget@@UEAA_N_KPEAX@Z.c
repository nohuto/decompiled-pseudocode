/*
 * XREFs of ?IsSameAsTarget@GestureTargetingTarget@@UEAA_N_KPEAX@Z @ 0x180014E90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall GestureTargetingTarget::IsSameAsTarget(GestureTargetingTarget *this, __int64 a2, void *a3)
{
  __int64 v5; // rax
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  char v7; // bl
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( !v6 )
    goto LABEL_11;
  if ( (**v6)(v6, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v9) < 0 )
  {
    v5 = v9;
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  if ( !v9 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, v9 + 4, 165, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v9 + 24LL))(v9, a2, a3);
  v5 = v9;
LABEL_12:
  if ( v5 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v7;
}
