/*
 * XREFs of s_getEmergencyCallbackMode @ 0x1800A2200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_getEmergencyCallbackMode(__int64 a1, _DWORD *a2)
{
  *a2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 368LL))(g_PolicyManager);
  return 0LL;
}
