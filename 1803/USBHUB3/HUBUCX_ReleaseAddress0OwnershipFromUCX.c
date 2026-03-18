/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C002118C
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure @ 0x1C001AFD0 (HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 432LL))(*(_QWORD *)(*a1 + 240LL), a1[3]);
}
