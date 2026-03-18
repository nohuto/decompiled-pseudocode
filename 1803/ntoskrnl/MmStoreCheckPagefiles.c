/*
 * XREFs of MmStoreCheckPagefiles @ 0x14063CE00
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 * Callees:
 *     <none>
 */

__int64 MmStoreCheckPagefiles()
{
  int v0; // edx
  _QWORD *i; // r9

  v0 = 0;
  if ( Count )
  {
    for ( i = qword_1403CFA20; (*(_WORD *)(*i + 204LL) & 0x400) == 0; ++i )
    {
      if ( ++v0 >= Count )
        return 1LL;
    }
  }
  return 0LL;
}
