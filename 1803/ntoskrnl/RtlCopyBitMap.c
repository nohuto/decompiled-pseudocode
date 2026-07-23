/*
 * XREFs of RtlCopyBitMap @ 0x1400BD530
 * Callers:
 *     HvpGrowDirtyVectors @ 0x1400BD380 (HvpGrowDirtyVectors.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     MiSelectRelocationStartHint @ 0x1404F1D2C (MiSelectRelocationStartHint.c)
 *     PspQueryRateControlHistory @ 0x14053716C (PspQueryRateControlHistory.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x1400BD690 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned int SizeOfBitMap; // r9d
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbx
  unsigned int *Buffer; // rdx
  unsigned int *v10; // rsi
  unsigned int *v11; // r11
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx
  size_t v14; // rdi
  _BYTE *v15; // r9
  __int64 v16; // r8
  unsigned int v17; // edi
  char v18; // r9
  int v19; // ebp
  int v20; // edi
  int v21; // r13d
  unsigned __int64 v22; // rbp
  unsigned int v23; // eax

  SizeOfBitMap = Source->SizeOfBitMap;
  v6 = Destination->SizeOfBitMap - TargetBit;
  v7 = v6;
  if ( SizeOfBitMap <= v6 )
  {
    v7 = SizeOfBitMap;
    v6 = SizeOfBitMap;
  }
  v8 = v6;
  if ( v6 )
  {
    Buffer = Destination->Buffer;
    v10 = Source->Buffer;
    v11 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v10 > v11 || v11 > &v10[((unsigned __int64)v6 - 1) >> 5] )
    {
      v12 = (unsigned __int64)TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v16 = TargetBit & 0x1F;
        if ( v6 >= 0x20uLL )
        {
          v20 = *v11;
          v21 = 1 << (32 - v16);
          v22 = (unsigned __int64)v6 >> 5;
          v8 = -32LL * v22 + v6;
          do
          {
            *v11++ = ((*v10 & (v21 - 1)) << v16) | v20 & ((1 << v16) - 1);
            v23 = *v10++ & ~(v21 - 1);
            v20 = (v23 >> (32 - v16)) | *v11 & ~((1 << v16) - 1);
            *v11 = v20;
            --v22;
          }
          while ( v22 );
        }
        if ( v8 )
        {
          v17 = *v10;
          v18 = 32 - v16;
          v19 = *v11;
          if ( v8 > 32 - v16 )
          {
            *v11 = v19 & ((1 << v16) - 1) | ((v17 & ((1 << v18) - 1)) << v16);
            v11[1] = ((*v10 & (((1 << (v8 + v16 - 32)) - 1) << v18)) >> v18) | v11[1] & ~((1 << (v8 + v16 - 32)) - 1);
          }
          else
          {
            *v11 = ((v17 & ((1 << v8) - 1)) << v16) | v19 & ~(((1 << v8) - 1) << v16);
          }
        }
      }
      else
      {
        v13 = v6 & 7;
        v14 = (unsigned __int64)v6 >> 3;
        if ( v14 )
          memmove((char *)Buffer + v12, Source->Buffer, v14);
        if ( v13 )
        {
          v15 = (char *)Destination->Buffer + v14 + v12;
          *v15 &= ~((1 << v13) - 1);
          *v15 |= (unsigned __int8)((1 << v13) - 1) & *((_BYTE *)Source->Buffer + v14);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(Source, Destination, TargetBit, v7);
    }
  }
}
