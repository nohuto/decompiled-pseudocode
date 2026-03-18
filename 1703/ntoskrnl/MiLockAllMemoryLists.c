/*
 * XREFs of MiLockAllMemoryLists @ 0x14013ACC0
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 */

__int64 MiLockAllMemoryLists()
{
  unsigned int v0; // r13d
  unsigned int v1; // r9d
  unsigned int v2; // edx
  int v3; // r10d
  char *v4; // r11
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v7; // r8
  char *v8; // rcx
  __int64 i; // rax
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rsi
  int v14; // eax
  __int64 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rbp
  _QWORD *v20; // rcx
  volatile __int64 *v21; // rdx
  volatile __int64 *v22; // rbp
  __int64 v23; // r14
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  volatile __int64 *v27; // rbp
  __int64 v28; // r14
  _QWORD *v29; // rcx
  unsigned int v30; // r14d
  volatile __int64 *v31; // rbp
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
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
        goto LABEL_27;
      v7 = (1LL << (v6 & 0x3F)) - 1;
      v8 = &v4[8 * ((unsigned __int64)v6 >> 6)];
      for ( i = v7 | ~*(_QWORD *)v8; i == -1; i = ~*(_QWORD *)v8 )
      {
        v8 += 8;
        if ( v8 > &v4[8 * ((unsigned __int64)v5 >> 6)] )
          goto LABEL_27;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v10 = i + ((unsigned int)((v8 - v4) >> 3) << 6);
      if ( v10 > v5 )
      {
LABEL_27:
        v10 = -1;
      }
      else if ( v10 != -1 )
      {
        break;
      }
      if ( !v1 )
        break;
      SizeOfBitMap = v0 + 1;
      v1 = 0;
      if ( v0 + 1 > qword_14036C8D8->SizeOfBitMap )
        SizeOfBitMap = qword_14036C8D8->SizeOfBitMap;
      v2 = SizeOfBitMap - 1;
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
      v13 = *(_QWORD **)(v12 + 4776);
      v13[1] = v12 + 3872;
      *v13 = 0LL;
      KxAcquireQueuedSpinLock((__int64)v13, (volatile __int64 *)(v12 + 3872));
      v14 = dword_14036C1FC;
      v15 = (__int64 *)(v12 + 1920);
      LODWORD(v16) = 1;
      v17 = 2LL;
      do
      {
        v18 = *v15;
        v19 = 0LL;
        if ( v14 )
        {
          do
          {
            v20 = &v13[3 * (unsigned int)v16];
            *v20 = 0LL;
            v21 = (volatile __int64 *)(v18 + 8 * (v19 + 4 * v19 + 4));
            v20[1] = v21;
            KxAcquireQueuedSpinLock((__int64)v20, v21);
            v14 = dword_14036C1FC;
            LODWORD(v16) = v16 + 1;
            v19 = (unsigned int)(v19 + 1);
          }
          while ( (unsigned int)v19 < dword_14036C1FC );
        }
        ++v15;
        --v17;
      }
      while ( v17 );
      v22 = (volatile __int64 *)(v12 + 2208);
      v23 = 8LL;
      do
      {
        v24 = &v13[3 * (unsigned int)v16];
        v24[1] = v22;
        *v24 = 0LL;
        KxAcquireQueuedSpinLock((__int64)v24, v22);
        v22 += 5;
        v16 = (unsigned int)(v16 + 1);
        --v23;
      }
      while ( v23 );
      v25 = &v13[3 * v16];
      v25[1] = v12 + 6176;
      *v25 = 0LL;
      KxAcquireQueuedSpinLock((__int64)v25, (volatile __int64 *)(v12 + 6176));
      v26 = (unsigned int)(v16 + 1);
      v27 = (volatile __int64 *)(v12 + 3232);
      v28 = 16LL;
      do
      {
        v29 = &v13[3 * v26];
        v29[1] = v27;
        *v29 = 0LL;
        KxAcquireQueuedSpinLock((__int64)v29, v27);
        v27 += 5;
        v26 = (unsigned int)(v26 + 1);
        --v28;
      }
      while ( v28 );
      v30 = 0;
      if ( KeNumberNodes )
      {
        v31 = (volatile __int64 *)(*(_QWORD *)(v12 + 48) + 2176LL);
        do
        {
          v32 = &v13[3 * v26];
          v32[1] = v31;
          *v32 = 0LL;
          KxAcquireQueuedSpinLock((__int64)v32, v31);
          v26 = (unsigned int)(v26 + 1);
          v31 += 273;
          ++v30;
        }
        while ( v30 < (unsigned __int16)KeNumberNodes );
      }
      v33 = &v13[3 * v26];
      v33[1] = v12 + 6240;
      *v33 = 0LL;
      KxAcquireQueuedSpinLock((__int64)v33, (volatile __int64 *)(v12 + 6240));
    }
  }
}
