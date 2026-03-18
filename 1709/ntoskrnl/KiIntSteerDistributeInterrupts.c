/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x140002A00
 * Callers:
 *     KeIntSteerPeriodic @ 0x140002920 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiIntSteerSetDestination @ 0x140002DDC (KiIntSteerSetDestination.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 */

__int64 KiIntSteerDistributeInterrupts()
{
  ULONG_PTR i; // rbx
  __int64 v1; // rcx
  ULONG_PTR j; // rbx
  __int64 v4; // rcx
  __int64 Prcb; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int16 v10; // [rsp+30h] [rbp-18h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  for ( i = KiIntTrackRootList; (ULONG_PTR *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 132) )
    {
      v1 = *(_QWORD *)(i + 160);
      if ( *(_QWORD *)(i + 176) != v1 && *(_DWORD *)(i + 128) == 1 )
      {
        if ( *(_WORD *)(i + 184) == *(_WORD *)(i + 168) )
          v4 = *(_QWORD *)(i + 176) & ~v1;
        else
          v4 = *(_QWORD *)(i + 176);
        v10 = *(_WORD *)(i + 184);
        v9 = v4;
        v8 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v8) )
        {
          Prcb = KeGetPrcb(v11);
          ++*(_DWORD *)(Prcb + 11672);
        }
      }
    }
  }
  for ( j = KiIntTrackRootList; (ULONG_PTR *)j != &KiIntTrackRootList; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 132) && *(_QWORD *)(j + 176) != *(_QWORD *)(j + 160) )
    {
      KiIntSteerSetDestination(j);
      if ( *(_DWORD *)(j + 128) == 1 )
      {
        if ( *(_WORD *)(j + 168) == *(_WORD *)(j + 184) )
          v6 = *(_QWORD *)(j + 160) & ~*(_QWORD *)(j + 176);
        else
          v6 = *(_QWORD *)(j + 160);
        v10 = *(_WORD *)(j + 184);
        v9 = v6;
        v8 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v8) )
        {
          v7 = KeGetPrcb(v11);
          --*(_DWORD *)(v7 + 11672);
        }
      }
      *(_WORD *)(j + 168) = *(_WORD *)(j + 184);
      *(_QWORD *)(j + 160) = *(_QWORD *)(j + 176);
    }
  }
  return 0LL;
}
