/*
 * XREFs of MmShutdownSystem @ 0x14042EF70
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x14021EC70 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140388B0C < 2 )
    {
      dword_140388B0C = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_14038B760;
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
  else if ( (unsigned int)dword_140388B0C < 3 )
  {
    dword_140388B0C = 3;
  }
  return 1;
}
