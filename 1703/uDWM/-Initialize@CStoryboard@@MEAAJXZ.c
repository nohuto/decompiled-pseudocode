/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x180005F40
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000513C (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180005680 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::Initialize(CStoryboard *this, __int64 a2)
{
  CStoryboard::_LogStoryboardEvent((unsigned __int64)this, a2);
  *((_DWORD *)this + 18) = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  CStoryboard::_EnsurePriority(this);
  return 0LL;
}
