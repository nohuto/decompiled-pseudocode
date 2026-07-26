/*
 * XREFs of ndisDataPathExpandStackCallback @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDataPathExpandStackCallback(int *Parameter)
{
  off_1C007F350[Parameter[11]](
    *((void **)Parameter + 1),
    *((void (**)(void))Parameter + 3),
    *((void **)Parameter + 2),
    *((struct _NET_BUFFER_LIST **)Parameter + 4),
    Parameter[10],
    Parameter[12],
    Parameter[13]);
}
