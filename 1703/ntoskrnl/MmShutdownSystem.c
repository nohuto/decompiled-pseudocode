/*
 * XREFs of MmShutdownSystem @ 0x140419790
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x140215BA0 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1404193D0 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_14036C914 < 2 )
    {
      dword_14036C914 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_1403817E0;
          v3 = Count;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v2 + 204LL) & 0x40) == 0 )
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)v2 + 56LL));
            v2 += 8;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_14036C914 < 3 )
  {
    dword_14036C914 = 3;
  }
  return 1;
}
