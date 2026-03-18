/*
 * XREFs of MmStoreCheckPagefiles @ 0x1405D94EC
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmStoreRegister @ 0x1405D92AC (MmStoreRegister.c)
 * Callees:
 *     <none>
 */

__int64 MmStoreCheckPagefiles()
{
  int v0; // edx
  char *i; // r9

  v0 = 0;
  if ( Count )
  {
    for ( i = (char *)&unk_1403817E0; (*(_WORD *)(*(_QWORD *)i + 204LL) & 0x400) == 0; i += 8 )
    {
      if ( ++v0 >= Count )
        return 1LL;
    }
  }
  return 0LL;
}
