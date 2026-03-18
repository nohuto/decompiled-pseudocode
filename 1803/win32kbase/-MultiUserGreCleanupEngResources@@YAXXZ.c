/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00C3E6C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C00348B0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C005AD60 (EngFreeMem.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C00D8E28 (GreDeleteSemaphoreNonTracked.c)
 */

void MultiUserGreCleanupEngResources(void)
{
  int v0; // edx
  int v1; // edx
  int v2; // edx
  struct _LIST_ENTRY *Flink; // [rsp+30h] [rbp+8h]

  if ( MultiUserEngAllocListLock )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        Flink = MultiUserGreEngAllocList.Flink;
        if ( MultiUserGreEngAllocList.Flink == &MultiUserGreEngAllocList )
          goto LABEL_12;
        v0 = (int)MultiUserGreEngAllocList.Flink[1].Flink;
        if ( v0 )
          break;
        EngFreeMem(&MultiUserGreEngAllocList.Flink[2]);
      }
      v1 = v0 - 1;
      if ( v1 )
      {
        v2 = v1 - 1;
        if ( v2 )
        {
          if ( v2 == 2 )
            goto LABEL_7;
        }
        else if ( (int)IsVerifierEngFreeMemSupported() >= 0 )
        {
          VerifierEngFreeMem(&Flink[2]);
        }
      }
      else
      {
LABEL_7:
        GreDeleteSemaphore((PERESOURCE)&MultiUserGreEngAllocList.Flink[2]);
      }
    }
  }
LABEL_12:
  if ( GreEngLoadModuleAllocListLock )
  {
    while ( GreEngLoadModuleAllocList.Flink != &GreEngLoadModuleAllocList )
    {
      LODWORD(GreEngLoadModuleAllocList.Flink[1].Flink) = 1;
      if ( (int)IsEngFreeModuleSupported() >= 0 )
        EngFreeModule(&GreEngLoadModuleAllocList.Flink[1].Blink);
    }
  }
  GreDeleteSemaphoreNonTracked(MultiUserEngAllocListLock);
  MultiUserEngAllocListLock = 0LL;
  GreDeleteSemaphoreNonTracked(GreEngLoadModuleAllocListLock);
  GreEngLoadModuleAllocListLock = 0LL;
}
