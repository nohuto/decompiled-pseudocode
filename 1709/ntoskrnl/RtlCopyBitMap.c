/*
 * XREFs of RtlCopyBitMap @ 0x1400D4E00
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     MiSelectRelocationStartHint @ 0x140504844 (MiSelectRelocationStartHint.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x1400D4F0C (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r10
  unsigned int SizeOfBitMap; // r8d
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  unsigned int *Buffer; // rdx
  unsigned int *v11; // rsi
  unsigned int *v12; // r11
  unsigned __int64 v13; // rbp
  __int64 v14; // rbx
  size_t v15; // rdi
  _BYTE *v16; // r9
  unsigned __int64 v17; // rdi
  int v18; // r12d
  unsigned int v19; // edx
  char v20; // r9

  v4 = Destination->SizeOfBitMap - TargetBit;
  v5 = TargetBit;
  SizeOfBitMap = Source->SizeOfBitMap;
  if ( Source->SizeOfBitMap <= v4 )
  {
    v8 = Source->SizeOfBitMap;
    v4 = SizeOfBitMap;
  }
  else
  {
    v8 = v4;
  }
  v9 = v4;
  if ( v4 )
  {
    Buffer = Destination->Buffer;
    v11 = Source->Buffer;
    v12 = &Buffer[v5 >> 5];
    if ( v11 > v12 || v12 > &v11[((unsigned __int64)v4 - 1) >> 5] )
    {
      v13 = v5 >> 3;
      if ( (v5 & 7) != 0 )
      {
        if ( v4 >= 0x20uLL )
        {
          v17 = (unsigned __int64)v4 >> 5;
          v18 = 1 << (32 - (v5 & 0x1F));
          v9 = -32LL * v17 + v4;
          do
          {
            *v12 = ((*v11 & (v18 - 1)) << (v5 & 0x1F)) | ((1 << (v5 & 0x1F)) - 1) & *v12;
            ++v12;
            v19 = (*v11++ & ~(v18 - 1)) >> (32 - (v5 & 0x1F));
            *v12 = v19 | *v12 & ~((1 << (v5 & 0x1F)) - 1);
            --v17;
          }
          while ( v17 );
        }
        if ( v9 )
        {
          v20 = 32 - (v5 & 0x1F);
          if ( v9 > 32 - (v5 & 0x1F) )
          {
            *v12 = ((*v11 & ((1 << v20) - 1)) << (v5 & 0x1F)) | *v12 & ((1 << (v5 & 0x1F)) - 1);
            v12[1] = ((*v11 & (((1 << (v9 + (v5 & 0x1F) - 32)) - 1) << v20)) >> v20) | v12[1] & ~((1 << (v9 + (v5 & 0x1F) - 32))
                                                                                                - 1);
          }
          else
          {
            *v12 = ((*v11 & ((1 << v9) - 1)) << (v5 & 0x1F)) | *v12 & ~(((1 << v9) - 1) << (v5 & 0x1F));
          }
        }
      }
      else
      {
        v14 = v4 & 7;
        v15 = (unsigned __int64)v4 >> 3;
        if ( v15 )
          memmove((char *)Buffer + v13, Source->Buffer, v15);
        if ( v14 )
        {
          v16 = (char *)Destination->Buffer + v15 + v13;
          *v16 &= ~((1 << v14) - 1);
          *v16 |= (unsigned __int8)((1 << v14) - 1) & *((_BYTE *)Source->Buffer + v15);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(Source, Destination, v5, v8);
    }
  }
}
