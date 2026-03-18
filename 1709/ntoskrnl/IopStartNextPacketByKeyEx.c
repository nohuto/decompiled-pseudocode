/*
 * XREFs of IopStartNextPacketByKeyEx @ 0x1401FA424
 * Callers:
 *     IoStartNextPacket @ 0x1401F9C20 (IoStartNextPacket.c)
 *     IoStartNextPacketByKey @ 0x1401F9C60 (IoStartNextPacketByKey.c)
 * Callees:
 *     IopStartNextPacket @ 0x1401FA2A0 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x1401FA360 (IopStartNextPacketByKey.c)
 */

__int64 __fastcall IopStartNextPacketByKeyEx(__int64 a1, ULONG a2, int a3)
{
  signed __int32 v5; // eax
  bool v6; // zf
  bool v7; // sf
  bool v8; // of
  __int64 v9; // rax
  int v10; // edx
  __int64 result; // rax

  do
  {
    v5 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL));
    v8 = __OFSUB__(v5, 1);
    v6 = v5 == 1;
    v7 = v5 - 1 < 0;
    v9 = *(_QWORD *)(a1 + 312);
    if ( v7 ^ v8 | v6 )
    {
      *(_DWORD *)(v9 + 64) &= 0xFFFFFF1F;
      v10 = a3 & 0x80;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = 0;
      if ( (a3 & 0x40) != 0 )
      {
        IopStartNextPacketByKey(a1, v10, a2);
      }
      else if ( (a3 & 0x20) != 0 )
      {
        IopStartNextPacket(a1, v10);
      }
    }
    else
    {
      *(_DWORD *)(v9 + 64) |= a3;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 60LL) = a2;
    }
    result = (unsigned int)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 312) + 56LL),
                             0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    result = *(_QWORD *)(a1 + 312);
    a2 = *(_DWORD *)(result + 60);
    a3 = *(_DWORD *)(result + 64) & 0xE0;
  }
  while ( (*(_BYTE *)(result + 64) & 0x60) != 0 );
  return result;
}
