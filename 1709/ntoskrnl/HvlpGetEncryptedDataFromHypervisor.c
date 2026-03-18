/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1401EFD6C
 * Callers:
 *     HvlGetEncryptedData @ 0x1401EFC00 (HvlGetEncryptedData.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14017B290 (KeFlushCurrentTbImmediately.c)
 *     HvlpGetPageList @ 0x1401F10AC (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1401F139C (HvlpStartPageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, _OWORD *a2, unsigned int a3, _DWORD *a4, __int64 *a5)
{
  __int64 *v5; // r13
  unsigned int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // edi
  __int64 v14; // r14
  __int64 v15; // rbp
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+20h]

  v20 = a1;
  v5 = a5;
  *a4 = 0;
  *v5 = 0LL;
  if ( (HvlpRootFlags & 4) == 0 )
    return 3221226021LL;
  if ( !HvlpCrashdumpIterationState )
  {
    HvlpStartPageListIteration(1LL);
    qword_1403866E8 = -1LL;
    dword_1403866F0 = 0;
    HvlpCrashdumpIterationState = 1;
  }
  v10 = dword_1403866F0;
  if ( dword_1403866F0 )
  {
    v11 = qword_1403866E8;
    a5 = (__int64 *)qword_1403866E8;
    LODWORD(v20) = dword_1403866F0;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &a5, &v20) )
    {
      qword_1403865C8 = 0LL;
      HvlpIteratorCrashdump = 0;
      HvlpCrashdumpIterationState = 0;
      qword_1403866E8 = -1LL;
      dword_1403866F0 = 0;
      return 3221226021LL;
    }
    v10 = v20;
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
      v21 = v15 & 0xFFFFFFFFF000LL | 0x8000000000000001uLL;
      *(_QWORD *)(8 * (((unsigned __int64)qword_1403866C0 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v21;
      KeFlushCurrentTbImmediately();
      v16 = (_OWORD *)qword_1403866C0;
      v17 = 32LL;
      v18 = a2;
      do
      {
        *v18 = *v16;
        v18[1] = v16[1];
        v18[2] = v16[2];
        v18[3] = v16[3];
        v18[4] = v16[4];
        v18[5] = v16[5];
        v18[6] = v16[6];
        v18 += 8;
        v19 = v16[7];
        v16 += 8;
        *(v18 - 1) = v19;
        --v17;
      }
      while ( v17 );
      a2 += 256;
      v15 += 4096LL;
      --v14;
    }
    while ( v14 );
  }
  *v5 = v11;
  *a4 = v13 << 12;
  dword_1403866F0 = v10 - v13;
  qword_1403866E8 = v11 + v13;
  return 0LL;
}
