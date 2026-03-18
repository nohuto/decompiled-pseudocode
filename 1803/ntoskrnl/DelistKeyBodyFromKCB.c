/*
 * XREFs of DelistKeyBodyFromKCB @ 0x1406F3A84
 * Callers:
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 */

void __fastcall DelistKeyBodyFromKCB(__int64 *a1, char a2, __int64 a3)
{
  __int64 i; // r9
  __int64 v6; // rdx
  signed __int64 v7; // rax
  __int64 v8; // rcx

  LOBYTE(a3) = 0;
LABEL_2:
  for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    v6 = (unsigned int)i;
    v7 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)(a1[1] + 8LL * (unsigned int)i + 128),
           0LL,
           (signed __int64)a1);
    if ( a1 == (__int64 *)v7 )
      goto LABEL_14;
    if ( (unsigned __int64)(v7 - 1) <= 1 )
    {
      CmpLockKcbExclusive(a1[1]);
      LOBYTE(a3) = 1;
      goto LABEL_2;
    }
  }
  if ( !a2 && !(_BYTE)a3 )
  {
    CmpLockKcbExclusive(a1[1]);
    LOBYTE(a3) = 1;
  }
  v8 = a1[4];
  if ( *(__int64 **)(v8 + 8) != a1 + 4 || (v6 = a1[5], *(__int64 **)v6 != a1 + 4) )
    __fastfail(3u);
  *(_QWORD *)v6 = v8;
  *(_QWORD *)(v8 + 8) = v6;
LABEL_14:
  if ( (_BYTE)a3 )
    CmpUnlockKcb(a1[1], v6, a3, i);
}
