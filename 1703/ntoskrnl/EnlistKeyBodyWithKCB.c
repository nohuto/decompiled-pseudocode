/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x1405A3D84
 * Callers:
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140808574 (CmpCreateRegistryRoot.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 */

void __fastcall EnlistKeyBodyWithKCB(__int64 *a1, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rcx

  v2 = a1 + 4;
  a1[5] = (__int64)(a1 + 4);
  a1[4] = (__int64)(a1 + 4);
  v5 = 0LL;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1[1] + 8 * v5 + 128), (signed __int64)a1, 0LL) )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 4 )
    {
      if ( (a2 & 1) != 0 )
        CmpUnlockKcb(a1[1]);
      if ( (a2 & 2) == 0 )
        CmpLockKcbExclusive(a1[1]);
      v6 = a1[1] + 112;
      v7 = *(__int64 ***)(a1[1] + 120);
      if ( *v7 != (__int64 *)v6 )
        __fastfail(3u);
      *v2 = v6;
      v2[1] = (__int64)v7;
      *v7 = v2;
      *(_QWORD *)(v6 + 8) = v2;
      if ( (a2 & 3) == 0 )
        CmpUnlockKcb(a1[1]);
      return;
    }
  }
}
