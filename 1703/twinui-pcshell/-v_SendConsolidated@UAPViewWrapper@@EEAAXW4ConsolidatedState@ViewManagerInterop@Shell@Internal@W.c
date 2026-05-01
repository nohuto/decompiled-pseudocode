/*
 * XREFs of ?v_SendConsolidated@UAPViewWrapper@@EEAAXW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801118F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UAPViewWrapper::v_SendConsolidated(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    LOBYTE(v2) = (_DWORD)v2 == 2;
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 152) + 448LL) + 88LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 152) + 448LL),
             v3,
             v2);
  }
  return result;
}
