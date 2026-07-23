/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x140471E40
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401575A0 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiAllocateFixupVad @ 0x140471D10 (MiAllocateFixupVad.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(_RTL_BITMAP *a1, _QWORD **a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r8d
  __int64 v6; // r8
  __int64 v7; // rdx
  _QWORD **v8; // rbx
  __int64 v9; // r9
  unsigned __int64 v10; // rcx

  v4 = *a2[12];
  v5 = *((_DWORD *)*a2 + 2);
  a1->Buffer = &a1[1].SizeOfBitMap;
  a1->SizeOfBitMap = v5;
  RtlClearAllBits(a1);
  v6 = 0LL;
  v7 = 0LL;
  v8 = a2 + 16;
  do
  {
    v9 = *((unsigned int *)v8 + 11);
    if ( v8[1] < &v8[1][v9] )
    {
      v10 = ((unsigned __int64)(8 * v9 - 1) >> 3) + 1;
      while ( (unsigned __int64)(unsigned int)v6 >= *(_QWORD *)(v4 + 56) || !*(_QWORD *)(v4 + 8 * v6 + 96) )
      {
        if ( ((_BYTE)v8[4] & 0xA) == 0xA )
          goto LABEL_11;
LABEL_7:
        v6 = (unsigned int)(v6 + 1);
        if ( !--v10 )
          goto LABEL_8;
      }
      _bittestandset((signed __int32 *)a1->Buffer, v6);
LABEL_11:
      ++v7;
      goto LABEL_7;
    }
LABEL_8:
    v8 = (_QWORD **)v8[2];
  }
  while ( v8 );
  return v7;
}
