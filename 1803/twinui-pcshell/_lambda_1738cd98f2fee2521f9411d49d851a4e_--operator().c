/*
 * XREFs of _lambda_1738cd98f2fee2521f9411d49d851a4e_::operator() @ 0x1801EFD2C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1738cd98f2fee2521f9411d49d851a4e___::Run @ 0x1801F3120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1738cd98f2fee2521f9411d49d851a4e___--Run.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1801F1FEC (-CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

__int64 __fastcall lambda_1738cd98f2fee2521f9411d49d851a4e_::operator()(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // edx
  __int16 v5; // cx

  v2 = *a1;
  if ( *((_DWORD *)a1 + 2) == 1 )
    *(_DWORD *)(v2 + 232) |= 0x100u;
  else
    *(_DWORD *)(v2 + 232) &= ~0x100u;
  result = *a1;
  v4 = *((_DWORD *)a1 + 2);
  if ( (*(_BYTE *)(*a1 + 232LL) & 0x40) != 0 )
  {
    if ( v4 )
      return result;
    *(_WORD *)(result + 292) &= ~0x80u;
    WindowWrapperBase::CommitImportanceVector(*a1, *(unsigned int *)(*a1 + 292LL));
    result = *a1;
    v5 = 128;
  }
  else
  {
    *(_WORD *)(result + 292) &= ~0x40u;
    v5 = 0;
    if ( v4 == 1 )
      v5 = 64;
  }
  *(_WORD *)(result + 292) |= v5;
  return WindowWrapperBase::CommitImportanceVector(*a1, *(unsigned int *)(*a1 + 292LL));
}
