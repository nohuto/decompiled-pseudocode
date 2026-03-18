/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x140164C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 InbvNotifyDisplayOwnershipChange()
{
  __int64 (*v0)(void); // rax

  if ( qword_1403CDD28 && (v0 = *(__int64 (**)(void))(qword_1403CDD28 + 16)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
