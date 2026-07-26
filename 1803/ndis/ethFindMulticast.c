/*
 * XREFs of ethFindMulticast @ 0x1C0064B08
 * Callers:
 *     ndisMIsLoopbackNetBuffer @ 0x1C005604C (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C00562A0 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0059F3C (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C0063A60 (EthFilterDprIndicateReceive.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C00640D0 (ethFilterDprIndicateReceivePacket.c)
 * Callees:
 *     <none>
 */

char __fastcall ethFindMulticast(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r11d
  __int64 v5; // rax
  unsigned int i; // r10d
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned __int16 v10; // cx
  unsigned int v11; // ecx

  v4 = 0;
  v5 = a1 >> 1;
  if ( a1 )
  {
    for ( i = a1 - 1; ; v5 = v4 + ((i - v4 + 1) >> 1) )
    {
      if ( (unsigned int)v5 > i || (unsigned int)v5 < v4 )
        return 0;
      v8 = *(_DWORD *)(a4 + 2);
      if ( a3 )
      {
        v9 = *(_DWORD *)(a3 + 6 * v5 + 2);
        if ( v9 > v8 )
          goto LABEL_14;
        if ( v9 < v8 )
          goto LABEL_13;
        v10 = *(_WORD *)(a3 + 6 * v5);
      }
      else
      {
        v11 = *(_DWORD *)(a2 + 12 * v5 + 6);
        if ( v11 > v8 )
          goto LABEL_14;
        if ( v11 < v8 )
          goto LABEL_13;
        v10 = *(_WORD *)(a2 + 12 * v5 + 4);
      }
      if ( v10 <= *(_WORD *)a4 )
      {
        if ( v10 >= *(_WORD *)a4 )
          return 1;
LABEL_13:
        v4 = v5 + 1;
        continue;
      }
LABEL_14:
      if ( !(_DWORD)v5 )
        return 0;
      i = v5 - 1;
    }
  }
  return 0;
}
