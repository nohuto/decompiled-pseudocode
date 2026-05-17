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

__int64 __fastcall sub_180076258(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive(&qword_18015C040);
  v6 = qword_18015C208;
  v7 = byte_18015C210 & 1;
  if ( qword_18015C208 )
  {
    do
    {
      v8 = sub_180076338(a1, v6);
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)v6;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 8);
      }
      if ( v7 && v9 )
        v6 ^= v9;
      else
        v6 = v9;
    }
    while ( v6 );
    if ( v6 )
    {
      v10 = v6 - 200;
      v11 = *(_QWORD *)(v6 - 200 + 152);
      if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 276));
      *a2 = v10;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL);
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015C040);
  return v6 == 0 ? 0xC0000135 : 0;
}
