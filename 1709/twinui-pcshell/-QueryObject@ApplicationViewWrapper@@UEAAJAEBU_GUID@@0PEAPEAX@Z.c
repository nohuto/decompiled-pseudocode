/*
 * XREFs of ?QueryObject@ApplicationViewWrapper@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180190F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewWrapper::QueryObject(
        ApplicationViewWrapper *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  *a4 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea )
    return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 9))(
             *((_QWORD *)this + 9),
             a3,
             a4);
  else
    return 2147942487LL;
}
