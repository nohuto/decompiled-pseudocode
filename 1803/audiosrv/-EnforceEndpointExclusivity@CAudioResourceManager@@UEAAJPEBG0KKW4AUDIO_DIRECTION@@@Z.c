/*
 * XREFs of ?EnforceEndpointExclusivity@CAudioResourceManager@@UEAAJPEBG0KKW4AUDIO_DIRECTION@@@Z @ 0x1800D1490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioResourceManager::EnforceEndpointExclusivity(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 88LL))(*(_QWORD *)(a1 + 40));
}
