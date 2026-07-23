/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E1EC0
 * Callers:
 *     sub_1800D31B0 @ 0x1800D31B0 (sub_1800D31B0.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x180074F10 (RtlTryAcquireSRWLockShared.c)
 *     sub_1800F4858 @ 0x1800F4858 (sub_1800F4858.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r15
  bool v4; // si
  void *v5; // rbx
  _UNKNOWN **v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // rcx

  v2 = v1;
  v4 = 0;
  v5 = 0LL;
  if ( !EventHandle || !RtlTryAcquireSRWLockShared(&stru_18015D258) )
    return 0LL;
  v7 = (_UNKNOWN **)off_180156628;
  v8 = off_180156628;
  while ( v7 != &off_180156628 )
  {
    if ( !*((_WORD *)v7 - 8) )
    {
      v9 = (__int64)*(v7 - 1);
      if ( v2 )
      {
        if ( (_BYTE *)v9 == (char *)EventHandle - 8 )
        {
          v5 = *(void **)(v9 + 16);
          break;
        }
      }
      else if ( *(HANDLE *)(v9 + 24) == EventHandle )
      {
        v5 = *(void **)(v9 + 16);
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
  RtlReleaseSRWLockShared(&stru_18015D258);
  return v5;
}
