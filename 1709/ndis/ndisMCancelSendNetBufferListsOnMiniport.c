/*
 * XREFs of ndisMCancelSendNetBufferListsOnMiniport @ 0x1C0054600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0071374 (ndisSetBusyAsync.c)
 */

__int64 __fastcall ndisMCancelSendNetBufferListsOnMiniport(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a1[560] || (result = ndisSetBusyAsync((_DWORD)a1, 1, 53, a2, 0), (_BYTE)result) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1[473] + 200LL))(a1[3], a2);
    if ( a1[560] )
      return ndisClearBusy(a1, 1LL, 53LL);
  }
  return result;
}
