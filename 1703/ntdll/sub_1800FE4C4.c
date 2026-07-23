/*
 * XREFs of sub_1800FE4C4 @ 0x1800FE4C4
 * Callers:
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 * Callees:
 *     sub_1800076D0 @ 0x1800076D0 (sub_1800076D0.c)
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800FE220 @ 0x1800FE220 (sub_1800FE220.c)
 */

__int64 __fastcall sub_1800FE4C4(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // r15
  unsigned int v8; // r14d
  unsigned __int64 v9; // rsi
  char v10; // di
  unsigned __int64 v11; // rbx
  char *v12; // r8
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r9
  _QWORD *Ptr; // r12
  _QWORD *v17; // r10
  __int64 v18; // rdx
  PVOID v19; // rcx
  unsigned int Ptr_high; // edi
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // [rsp+68h] [rbp+48h]
  __int64 v25; // [rsp+68h] [rbp+48h]

  v6 = sub_1800093FC(0x18uLL, 0);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = a3;
  RtlAcquireSRWLockExclusive(SRWLock);
  v9 = (unsigned __int64)&SRWLock[1];
  v8 = 1;
  if ( LODWORD(SRWLock[1].Ptr) < 2 * (HIDWORD(SRWLock[1].Ptr) >> 5) )
    goto LABEL_24;
  v10 = -1;
  v11 = 2 * ((unsigned __int64)HIDWORD(SRWLock[1].Ptr) >> 5);
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_24;
  if ( (unsigned int)v11 < 4 )
    v11 = 4LL;
  v12 = (char *)sub_1800FE220(8LL * (unsigned int)v11);
  if ( v12 )
  {
    if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
    {
      do
      {
        ++v10;
        LODWORD(v11) = (unsigned int)v11 >> 1;
      }
      while ( (_DWORD)v11 );
      v11 = (unsigned int)(1 << v10);
    }
    if ( (unsigned int)v11 > 0x4000000 )
      v11 = 0x4000000LL;
    v13 = (8 * v11 + 7) >> 3;
    if ( v12 > &v12[8 * v11] )
      v13 = 0LL;
    if ( v13 )
      memset64(v12, v9 | 1, v13);
    v14 = 0;
    v15 = -1LL << (BYTE4(SRWLock[1].Ptr) & 0x1F);
    if ( (HIDWORD(SRWLock[1].Ptr) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        Ptr = SRWLock[2].Ptr;
        while ( 1 )
        {
          v17 = (_QWORD *)Ptr[v14];
          if ( ((unsigned __int8)v17 & 1) != 0 )
            break;
          Ptr[v14] = *v17;
          v24 = v15 & v17[1];
          v18 = (37
               * (BYTE6(v24)
                + 37
                * (BYTE5(v24)
                 + 37
                 * (BYTE4(v24)
                  + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
               + HIBYTE(v24)) & (unsigned int)(v11 - 1);
          *v17 = *(_QWORD *)&v12[8 * v18];
          *(_QWORD *)&v12[8 * v18] = v17;
        }
        ++v14;
      }
      while ( v14 < HIDWORD(SRWLock[1].Ptr) >> 5 );
    }
    HIDWORD(SRWLock[1].Ptr) &= 0x1Fu;
    v19 = SRWLock[2].Ptr;
    HIDWORD(SRWLock[1].Ptr) |= 32 * v11;
    SRWLock[2].Ptr = v12;
    if ( v19 )
      sub_1800076D0((int)v19);
    goto LABEL_24;
  }
  if ( HIDWORD(SRWLock[1].Ptr) >= 0x20 )
  {
LABEL_24:
    Ptr_high = HIDWORD(SRWLock[1].Ptr);
    v25 = v7[1] & (-1LL << (Ptr_high & 0x1F));
    v21 = SRWLock[2].Ptr;
    v22 = (37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
         + HIBYTE(v25)) & ((Ptr_high >> 5) - 1);
    *v7 = v21[v22];
    v21[v22] = v7;
    ++*(_DWORD *)v9;
    RtlReleaseSRWLockExclusive(SRWLock);
    v7 = 0LL;
    goto LABEL_25;
  }
  v8 = 0;
LABEL_25:
  if ( v7 )
    sub_18000913C((int)v7);
  return v8;
}
