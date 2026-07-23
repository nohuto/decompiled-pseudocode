/*
 * XREFs of sub_180076258 @ 0x180076258
 * Callers:
 *     LdrFindEntryForAddress @ 0x180076210 (LdrFindEntryForAddress.c)
 *     sub_1800DA4EC @ 0x1800DA4EC (sub_1800DA4EC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180076338 @ 0x180076338 (sub_180076338.c)
 */

__int64 __fastcall sub_180076258(__int64 a1, volatile signed __int32 **a2, _DWORD *a3)
{
  unsigned __int64 Root; // rbx
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  volatile signed __int32 *v10; // rdx
  _RTL_BALANCED_NODE *v11; // rax

  RtlAcquireSRWLockExclusive(&stru_18015C040);
  Root = (unsigned __int64)stru_18015C208.Root;
  v7 = (__int64)stru_18015C208.Min & 1;
  if ( stru_18015C208.Root )
  {
    do
    {
      v8 = sub_180076338(a1, Root);
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)Root;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(Root + 8);
      }
      if ( v7 && v9 )
        Root ^= v9;
      else
        Root = v9;
    }
    while ( Root );
    if ( Root )
    {
      v10 = (volatile signed __int32 *)(Root - 200);
      v11 = *(_RTL_BALANCED_NODE **)(Root - 200 + 152);
      if ( LODWORD(v11[1].Children[0]) != -1 && (*(_BYTE *)&v11->Children[0][-3].16 & 0x20) == 0 )
        _InterlockedIncrement(v10 + 69);
      *a2 = v10;
      if ( a3 )
        *a3 = *(_DWORD *)(*((_QWORD *)v10 + 19) + 56LL);
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C040);
  return Root == 0 ? 0xC0000135 : 0;
}
