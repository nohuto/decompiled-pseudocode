/*
 * XREFs of MiUnlockAllMemoryLists @ 0x14013AF68
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  unsigned int v0; // ebx
  unsigned int v1; // r9d
  unsigned int v2; // edx
  int v3; // r10d
  char *v4; // r11
  unsigned int v5; // esi
  unsigned int v6; // ecx
  __int64 v7; // r8
  char *v8; // rcx
  __int64 i; // rax
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // edi
  int v15; // edx
  int j; // ecx
  unsigned int SizeOfBitMap; // edx

  v0 = 0;
  while ( 1 )
  {
    v1 = v0 < qword_14036C8D8->SizeOfBitMap ? v0 : 0;
    v2 = qword_14036C8D8->SizeOfBitMap - 1;
    v3 = ((__int64)qword_14036C8D8->Buffer & 4) != 0LL ? 0x20 : 0;
    v4 = (char *)qword_14036C8D8->Buffer - (((__int64)qword_14036C8D8->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v5 = v3 + v2;
      v6 = v3 + v1;
      if ( v2 - v1 == -1 )
        goto LABEL_18;
      v7 = (1LL << (v6 & 0x3F)) - 1;
      v8 = &v4[8 * ((unsigned __int64)v6 >> 6)];
      for ( i = v7 | ~*(_QWORD *)v8; i == -1; i = ~*(_QWORD *)v8 )
      {
        v8 += 8;
        if ( v8 > &v4[8 * ((unsigned __int64)v5 >> 6)] )
          goto LABEL_18;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v10 = i + ((unsigned int)((v8 - v4) >> 3) << 6);
      if ( v10 > v5 )
      {
LABEL_18:
        v10 = -1;
      }
      else if ( v10 != -1 )
      {
        break;
      }
      if ( !v1 )
        break;
      SizeOfBitMap = v0 + 1;
      if ( v0 + 1 > qword_14036C8D8->SizeOfBitMap )
        SizeOfBitMap = qword_14036C8D8->SizeOfBitMap;
      v2 = SizeOfBitMap - 1;
      v1 = 0;
    }
    result = v10 - v3;
    if ( v10 == -1 )
      result = 0xFFFFFFFFLL;
    if ( (unsigned int)result < v0 || (_DWORD)result == -1 )
      return result;
    v0 = result + 1;
    v12 = *(_QWORD *)(qword_14036C8F8 + 8LL * (unsigned int)result);
    if ( (*(_DWORD *)(v12 + 4) & 4) != 0 )
    {
      v13 = *(_QWORD *)(v12 + 4776);
      v14 = 0;
      v15 = dword_14036C1FC;
      for ( j = (unsigned __int16)KeNumberNodes;
            v14 < (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14036C1FC + 27;
            j = (unsigned __int16)KeNumberNodes )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v13 + 24LL * (j + 2 * v15 + 26 - v14)));
        v15 = dword_14036C1FC;
        ++v14;
      }
    }
  }
}
