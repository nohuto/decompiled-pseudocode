/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x140045400
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiIntSteerSetDestination @ 0x14002A6C8 (KiIntSteerSetDestination.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 */

__int64 KiIntSteerDistributeInterrupts()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rcx
  ULONG_PTR i; // rbx
  __int64 v4; // rcx
  __int64 Prcb; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int16 v10; // [rsp+30h] [rbp-18h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v0 = KiIntTrackRootList;
  if ( (ULONG_PTR *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    do
    {
      if ( *(_BYTE *)(v0 + 132) )
      {
        v1 = *(_QWORD *)(v0 + 160);
        if ( *(_QWORD *)(v0 + 176) != v1 && *(_DWORD *)(v0 + 128) == 1 )
        {
          if ( *(_WORD *)(v0 + 184) == *(_WORD *)(v0 + 168) )
            v4 = *(_QWORD *)(v0 + 176) & ~v1;
          else
            v4 = *(_QWORD *)(v0 + 176);
          v10 = *(_WORD *)(v0 + 184);
          v9 = v4;
          v8 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v8) )
          {
            Prcb = KeGetPrcb(v11);
            ++*(_DWORD *)(Prcb + 11672);
          }
        }
      }
      v0 = *(_QWORD *)v0;
    }
    while ( (ULONG_PTR *)v0 != &KiIntTrackRootList );
    for ( i = KiIntTrackRootList; (ULONG_PTR *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 132) && *(_QWORD *)(i + 176) != *(_QWORD *)(i + 160) )
      {
        KiIntSteerSetDestination(i);
        if ( *(_DWORD *)(i + 128) == 1 )
        {
          if ( *(_WORD *)(i + 168) == *(_WORD *)(i + 184) )
            v6 = *(_QWORD *)(i + 160) & ~*(_QWORD *)(i + 176);
          else
            v6 = *(_QWORD *)(i + 160);
          v10 = *(_WORD *)(i + 184);
          v9 = v6;
          v8 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v8) )
          {
            v7 = KeGetPrcb(v11);
            --*(_DWORD *)(v7 + 11672);
          }
        }
        *(_WORD *)(i + 168) = *(_WORD *)(i + 184);
        *(_QWORD *)(i + 160) = *(_QWORD *)(i + 176);
      }
    }
  }
  return 0LL;
}
