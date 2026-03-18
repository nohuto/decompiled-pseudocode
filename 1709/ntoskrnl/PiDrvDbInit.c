/*
 * XREFs of PiDrvDbInit @ 0x1405C6358
 * Callers:
 *     PnpBootPhaseComplete @ 0x1405C4A2C (PnpBootPhaseComplete.c)
 *     PiPnpRtlInit @ 0x1405C620C (PiPnpRtlInit.c)
 * Callees:
 *     DrvDbOpenContext @ 0x1405C4F28 (DrvDbOpenContext.c)
 *     PiDrvDbRegisterNode @ 0x1405C645C (PiDrvDbRegisterNode.c)
 *     DrvDbSuspendDatabase @ 0x1405C6778 (DrvDbSuspendDatabase.c)
 */

__int64 __fastcall PiDrvDbInit(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r8
  unsigned int v4; // esi
  wchar_t **v5; // rdi
  __int64 v6; // rcx
  __int64 j; // rdi
  __int64 i; // rdi

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 2) == 0 )
        {
          v1 = DrvDbSuspendDatabase(a1, *(_QWORD *)(i + 24), 0LL);
          if ( v1 < 0 )
            break;
        }
      }
    }
  }
  else
  {
    qword_140382688 = (__int64)&PiDrvDbNodeList;
    PiDrvDbNodeList = (__int64)&PiDrvDbNodeList;
    v1 = DrvDbOpenContext();
    if ( v1 >= 0 )
    {
      v4 = 0;
      v5 = &PiDrvDbNodeDescriptors;
      while ( 1 )
      {
        v6 = *((unsigned int *)v5 + 2);
        if ( (v6 & 4) == 0 || (MEMORY[0xFFFFF780000002F0] & 0x400) == 0 )
        {
          v1 = PiDrvDbRegisterNode(*v5, (unsigned int)v6);
          if ( v1 < 0 )
            break;
        }
        ++v4;
        v5 += 2;
        if ( v4 >= 2 )
        {
          for ( j = PiDrvDbNodeList; (__int64 *)j != &PiDrvDbNodeList; j = *(_QWORD *)j )
          {
            if ( (*(_DWORD *)(j + 64) & 2) == 0 )
            {
              LOBYTE(v3) = 1;
              v1 = DrvDbSuspendDatabase(v6, *(_QWORD *)(j + 24), v3);
              if ( v1 < 0 )
                break;
            }
          }
          return (unsigned int)v1;
        }
      }
    }
  }
  return (unsigned int)v1;
}
