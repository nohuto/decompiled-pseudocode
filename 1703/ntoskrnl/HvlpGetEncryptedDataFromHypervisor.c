/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1401EAB9C
 * Callers:
 *     HvlGetEncryptedData @ 0x1401EA9E0 (HvlGetEncryptedData.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14017BB00 (KeFlushCurrentTbImmediately.c)
 *     HvlpGetPageList @ 0x1401EC2A8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1401EC59C (HvlpStartPageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, _OWORD *a2, unsigned int a3, _DWORD *a4, __int64 *a5)
{
  __int64 *v5; // r13
  unsigned int v10; // ebx
  __int64 v11; // rdi
  unsigned int v12; // ebp
  unsigned int v13; // esi
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+20h]

  v23 = a1;
  v5 = a5;
  *a4 = 0;
  *v5 = 0LL;
  if ( (HvlpRootFlags & 4) == 0 )
    return 3221226021LL;
  if ( HvlpCrashdumpIterationState )
  {
    v10 = dword_14036A750;
    v11 = qword_14036A748;
  }
  else
  {
    HvlpStartPageListIteration(1LL);
    v10 = 0;
    qword_14036A748 = -1LL;
    dword_14036A750 = 0;
    v11 = -1LL;
    HvlpCrashdumpIterationState = 1;
  }
  if ( v10 )
  {
    a5 = (__int64 *)v11;
    LODWORD(v23) = v10;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &a5, &v23) )
    {
      qword_14036A628 = 0LL;
      HvlpIteratorCrashdump = 0;
      HvlpCrashdumpIterationState = 0;
      qword_14036A748 = -1LL;
      dword_14036A750 = 0;
      return 3221226021LL;
    }
    v10 = v23;
    v11 = (__int64)a5;
  }
  v12 = a3 >> 12;
  v13 = v10;
  if ( v12 < v10 )
    v13 = v12;
  if ( v13 )
  {
    v14 = v13;
    v15 = v11 << 12;
    do
    {
      v16 = 0LL;
      v17 = 1LL;
      v18 = 2LL;
      do
      {
        v16 |= v17++;
        --v18;
      }
      while ( v18 );
      v24 = ((v16 | 0x8000000000000000uLL) ^ v15) & 0xFFFFFFFFF000LL ^ (v16 | 0x8000000000000000uLL);
      *(_QWORD *)(8 * (((unsigned __int64)qword_14036A720 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v24;
      KeFlushCurrentTbImmediately();
      v19 = (_OWORD *)qword_14036A720;
      v20 = 32LL;
      v21 = a2;
      do
      {
        *v21 = *v19;
        v21[1] = v19[1];
        v21[2] = v19[2];
        v21[3] = v19[3];
        v21[4] = v19[4];
        v21[5] = v19[5];
        v21[6] = v19[6];
        v21 += 8;
        v22 = v19[7];
        v19 += 8;
        *(v21 - 1) = v22;
        --v20;
      }
      while ( v20 );
      a2 += 256;
      v15 += 4096LL;
      --v14;
    }
    while ( v14 );
  }
  *v5 = v11;
  *a4 = v13 << 12;
  dword_14036A750 = v10 - v13;
  qword_14036A748 = v11 + v13;
  return 0LL;
}
