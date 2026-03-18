/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x14062E454
 * Callers:
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x1408B0FCC (CmpCreateRegistryRoot.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 */

void __fastcall EnlistKeyBodyWithKCB(ULONG_PTR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 **v10; // rcx

  v4 = (__int64 *)(a1 + 4);
  a1[5] = (ULONG_PTR)(a1 + 4);
  v6 = a2;
  a1[4] = (ULONG_PTR)(a1 + 4);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = a1[1];
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v7 + 128), (signed __int64)a1, 0LL) )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 4 )
    {
      if ( (a2 & 1) != 0 )
        CmpUnlockKcb(a1[1], a2, v8, a4);
      if ( (v6 & 2) == 0 )
        CmpLockKcbExclusive(a1[1]);
      v9 = a1[1] + 112;
      v10 = *(__int64 ***)(a1[1] + 120);
      if ( *v10 != (__int64 *)v9 )
        __fastfail(3u);
      *v4 = v9;
      v4[1] = (__int64)v10;
      *v10 = v4;
      *(_QWORD *)(v9 + 8) = v4;
      if ( (v6 & 3) == 0 )
        CmpUnlockKcb(a1[1], a2, v8, a4);
      return;
    }
  }
}
