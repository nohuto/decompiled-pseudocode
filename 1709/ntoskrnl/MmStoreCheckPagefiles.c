/*
 * XREFs of MmStoreCheckPagefiles @ 0x1406EAAD0
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
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
    for ( i = (char *)&unk_14038B760; (*(_WORD *)(*(_QWORD *)i + 204LL) & 0x400) == 0; i += 8 )
    {
      if ( ++v0 >= Count )
        return 1LL;
    }
  }
  return 0LL;
}
