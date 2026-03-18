/*
 * XREFs of MmShutdownSystem @ 0x1404853A0
 * Callers:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x14025AAC0 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_1403CBDA4 < 2 )
    {
      dword_1403CBDA4 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = qword_1403CFA20;
          v3 = Count;
          do
          {
            if ( (*(_BYTE *)(*v2 + 204LL) & 0x40) == 0 )
              ObfDereferenceObject(*(PVOID *)(*v2 + 56LL));
            ++v2;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_1403CBDA4 < 3 )
  {
    dword_1403CBDA4 = 3;
  }
  return 1;
}
