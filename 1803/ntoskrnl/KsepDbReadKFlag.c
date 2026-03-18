/*
 * XREFs of KsepDbReadKFlag @ 0x14061DEC8
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14061DB54 (KsepDbCacheReadDevice.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x14061DF68 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbReadKFlag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v9; // eax

  v4 = a2;
  v6 = -1073741823;
  if ( (_DWORD)a2 )
  {
    FirstTag = SdbFindFirstTag(a1, a2, 24577);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
      if ( StringTagPtr )
      {
        *(_QWORD *)a3 = StringTagPtr;
        v9 = SdbFindFirstTag(a1, v4, 20485);
        if ( v9 )
        {
          *(_DWORD *)(a3 + 8) = 11;
          *(_QWORD *)(a3 + 32) = SdbReadQWORDTag(a1, v9, 0LL);
          v6 = 0;
          *(_QWORD *)(a3 + 16) = a3 + 32;
          *(_DWORD *)(a3 + 12) = 8;
        }
      }
    }
  }
  return v6;
}
