/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E71F0
 * Callers:
 *     sub_1800D9DB4 @ 0x1800D9DB4 (sub_1800D9DB4.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B450 (RtlTryAcquireSRWLockShared.c)
 *     sub_1800F7520 @ 0x1800F7520 (sub_1800F7520.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r15
  bool v4; // r14
  void *v5; // rbx
  _UNKNOWN **v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rdx

  v2 = v1;
  v4 = 0;
  v5 = 0LL;
  if ( !EventHandle || !RtlTryAcquireSRWLockShared(&stru_18015C1F8) )
    return 0LL;
  v7 = (_UNKNOWN **)off_180155620;
  v8 = off_180155620;
  while ( v7 != &off_180155620 )
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
  RtlReleaseSRWLockShared(&stru_18015C1F8);
  return v5;
}
