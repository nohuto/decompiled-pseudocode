/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E71F0
 * Callers:
 *     sub_1800D9DB4 @ 0x1800D9DB4 (sub_1800D9DB4.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B450 (RtlTryAcquireSRWLockShared.c)
 *     sub_1800F7520 @ 0x1800F7520 (sub_1800F7520.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(__int64 a1, char a2)
{
  bool v4; // r14
  __int64 v5; // rbx
  _UNKNOWN **v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rdx

  v4 = 0;
  v5 = 0LL;
  if ( !a1 || !RtlTryAcquireSRWLockShared(&qword_18015C1F8) )
    return 0LL;
  v7 = (_UNKNOWN **)off_180155620;
  v8 = off_180155620;
  while ( v7 != &off_180155620 )
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
  RtlReleaseSRWLockShared(&qword_18015C1F8);
  return v5;
}
