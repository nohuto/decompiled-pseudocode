/*
 * XREFs of ?v_SendConsolidated@LegacyViewWrapper@@EEAAXW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180110BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyViewWrapper::v_SendConsolidated(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, bool, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 152)
                                                                                           + 400LL)
                                                                             + 24LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 152) + 400LL),
             v3,
             2LL,
             a2 == 2,
             0LL);
  return result;
}
