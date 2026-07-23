/*
 * XREFs of sub_1800FE840 @ 0x1800FE840
 * Callers:
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800FE774 @ 0x1800FE774 (sub_1800FE774.c)
 */

__int64 __fastcall sub_1800FE840(PRTL_SRWLOCK SRWLock, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h]

  RtlAcquireSRWLockExclusive(SRWLock);
  v4 = (_QWORD *)sub_1800FE774((__int64)SRWLock, a2);
  v5 = v4;
  if ( v4 )
  {
    v9 = v4[1] & (-1LL << (HIDWORD(SRWLock[1].Ptr) & 0x1F));
    v7 = (char *)SRWLock[2].Ptr
       + 8
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & (unsigned int)((HIDWORD(SRWLock[1].Ptr) >> 5) - 1));
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v7 = (char *)SRWLock[2].Ptr
         + 8
         * ((37
           * (BYTE6(v9)
            + 37
            * (BYTE5(v9)
             + 37
             * (BYTE4(v9)
              + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
           + HIBYTE(v9)) & (unsigned int)((HIDWORD(SRWLock[1].Ptr) >> 5) - 1));
    while ( (*v7 & 1) == 0 )
    {
      if ( (_QWORD *)*v7 == v4 )
      {
        *v7 = *v4;
        --LODWORD(SRWLock[1].Ptr);
        *v4 |= 0x8000000000000002uLL;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
    v6 = v4[2];
  }
  else
  {
    v6 = 0LL;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  if ( v5 )
    sub_18000913C((int)v5);
  return v6;
}
