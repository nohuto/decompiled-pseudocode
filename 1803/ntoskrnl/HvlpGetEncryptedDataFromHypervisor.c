/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x14022CD7C
 * Callers:
 *     HvlGetEncryptedData @ 0x14022CC10 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpGetPageList @ 0x14022EC2C (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14022EF18 (HvlpStartPageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, _OWORD *a2, unsigned int a3, _DWORD *a4, __int64 *a5)
{
  __int64 *v5; // r14
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // r8d
  __int64 v14; // r11
  __int64 v15; // r10
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rbx
  __int128 v21; // xmm1
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp+20h]

  v22 = a1;
  v5 = a5;
  *a4 = 0;
  *v5 = 0LL;
  if ( (HvlpRootFlags & 4) == 0 )
    return 3221226021LL;
  if ( !HvlpCrashdumpIterationState )
  {
    HvlpStartPageListIteration(1LL);
    qword_1403C9C08 = -1LL;
    dword_1403C9C10 = 0;
    HvlpCrashdumpIterationState = 1;
  }
  v10 = dword_1403C9C10;
  if ( dword_1403C9C10 )
  {
    v11 = qword_1403C9C08;
    a5 = (__int64 *)qword_1403C9C08;
    LODWORD(v22) = dword_1403C9C10;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &a5, &v22) )
    {
      qword_1403C9AE8 = 0LL;
      HvlpIteratorCrashdump = 0;
      HvlpCrashdumpIterationState = 0;
      qword_1403C9C08 = -1LL;
      dword_1403C9C10 = 0;
      return 3221226021LL;
    }
    v10 = v22;
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
      v23 = v15 & 0xFFFFFFFFF000LL | 0x8000000000000001uLL;
      *(_QWORD *)(8 * (((unsigned __int64)qword_1403C9BE0 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v23;
      v16 = __readcr4();
      if ( (v16 & 0x20080) != 0 )
      {
        __writecr4(v16 ^ 0x80);
        __writecr4(v16);
      }
      else
      {
        v17 = __readcr3();
        __writecr3(v17);
      }
      v18 = (_OWORD *)qword_1403C9BE0;
      v19 = a2;
      v20 = 32LL;
      do
      {
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
        v19[3] = v18[3];
        v19[4] = v18[4];
        v19[5] = v18[5];
        v19[6] = v18[6];
        v19 += 8;
        v21 = v18[7];
        v18 += 8;
        *(v19 - 1) = v21;
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
  dword_1403C9C10 = v10 - v13;
  qword_1403C9C08 = v11 + v13;
  return 0LL;
}
