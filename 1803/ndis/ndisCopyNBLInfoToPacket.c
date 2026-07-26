/*
 * XREFs of ndisCopyNBLInfoToPacket @ 0x1C004DBEC
 * Callers:
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004E054 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004E5E8 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E77C (ndisXlateSendNetBufferListsToPacketArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCopyNBLInfoToPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  int v8; // ecx

  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 40) = *(_QWORD *)(a1 + 144);
  if ( !a3 )
    *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 56) = *(_DWORD *)(a1 + 160) & 0xFFFFF;
  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 64) = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 88) = *(_QWORD *)(a1 + 176);
  *(_WORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 90) = 0;
  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 104) = *(_QWORD *)(a1 + 184);
  if ( (a3 & 0xFFFFFFFD) != 0 || (result = *(_QWORD *)(a1 + 152)) == 0 )
  {
    result = *(unsigned __int16 *)(a2 + 42);
    *(_QWORD *)(result + a2 + 48) = 0LL;
  }
  else
  {
    v6 = *(unsigned __int16 *)(a2 + 42);
    v7 = (_QWORD *)(a2 + 128);
    if ( !a3 )
    {
      *v7 = result;
      *(_QWORD *)(a2 + 136) = 0LL;
      *(_QWORD *)(v6 + a2 + 48) = v7;
    }
    if ( a3 == 2 )
    {
      *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ *(unsigned __int16 *)(a1 + 152)) & 1;
      v8 = *(_DWORD *)v7 ^ (*(_DWORD *)v7 ^ *(unsigned __int16 *)(a1 + 152)) & 2;
      *(_DWORD *)v7 = v8;
      *(_DWORD *)v7 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*(_WORD *)(a1 + 152)) & 4;
      result = *(unsigned __int16 *)(a1 + 154);
      *(_DWORD *)(a2 + 132) = result;
      *(_QWORD *)(v6 + a2 + 48) = v7;
    }
  }
  return result;
}
