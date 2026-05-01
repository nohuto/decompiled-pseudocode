/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UPeoplePaneViewInfo@@@std@@EEAAXXZ @ 0x1801175D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<PeoplePaneViewInfo>::_Destroy(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx

  v1 = (unsigned __int64 *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    v1[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = v1[4];
  if ( v3 )
  {
    v1[4] = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return std::wstring::~wstring(v1);
}
