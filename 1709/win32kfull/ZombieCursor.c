/*
 * XREFs of ZombieCursor @ 0x1C01C7320
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0109BD0 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

__int64 __fastcall ZombieCursor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rsi

  if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
    UnlinkCursor((struct tagCURSOR *)a1, a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    v5 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v6 = 0LL;
      do
      {
        HMChangeOwnerPheProcess(
          gSharedInfo[1]
        + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)**(_DWORD **)(v6 + *(_QWORD *)(a1 + 96)),
          gptiRit);
        ++v5;
        v6 += 8LL;
      }
      while ( v5 < *(_DWORD *)(a1 + 88) );
    }
  }
  return HMChangeOwnerPheProcess(
           gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1,
           gptiRit);
}
