/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E1EC0
 * Callers:
 *     sub_1800D31B0 @ 0x1800D31B0 (sub_1800D31B0.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x180074F10 (RtlTryAcquireSRWLockShared.c)
 *     sub_1800F4858 @ 0x1800F4858 (sub_1800F4858.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(__int64 a1, char a2)
{
  bool v4; // si
  __int64 v5; // rbx
  _UNKNOWN **v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // rcx

  v4 = 0;
  v5 = 0LL;
  if ( !a1 || !RtlTryAcquireSRWLockShared(&qword_18015D258) )
    return 0LL;
  v7 = (_UNKNOWN **)off_180156628;
  v8 = off_180156628;
  while ( v7 != &off_180156628 )
  {
    if ( !*((_WORD *)v7 - 8) )
    {
      v9 = (__int64)*(v7 - 1);
      if ( a2 )
      {
        if ( v9 == a1 - 8 )
        {
          v5 = *(_QWORD *)(v9 + 16);
          break;
        }
      }
      else if ( *(_QWORD *)(v9 + 24) == a1 )
      {
        v5 = *(_QWORD *)(v9 + 16);
        break;
      }
    }
    v7 = (_UNKNOWN **)*v7;
    if ( v7 == v8 )
      break;
    if ( v4 )
      v8 = (_QWORD *)*v8;
    v4 = !v4;
  }
  RtlReleaseSRWLockShared(&qword_18015D258);
  return v5;
}
