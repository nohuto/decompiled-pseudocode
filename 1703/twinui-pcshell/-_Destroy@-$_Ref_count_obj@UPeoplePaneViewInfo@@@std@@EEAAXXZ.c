/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UPeoplePaneViewInfo@@@std@@EEAAXXZ @ 0x1800ECAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<PeoplePaneViewInfo>::_Destroy(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 >= 8 )
    std::_Deallocate(*(char **)(a1 + 16), v3 + 1, 2uLL);
}
