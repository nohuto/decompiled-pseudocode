/*
 * XREFs of APPLICATIONSUBMIXCONTEXT_rundown @ 0x1800AFB90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall APPLICATIONSUBMIXCONTEXT_rundown(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return (*(__int64 (__fastcall **)(CProcessSubmixManager *, __int64 *))(*(_QWORD *)g_ProcessSubmixManager + 32LL))(
           g_ProcessSubmixManager,
           &v2);
}
