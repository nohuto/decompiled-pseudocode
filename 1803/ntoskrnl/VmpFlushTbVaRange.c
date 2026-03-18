/*
 * XREFs of VmpFlushTbVaRange @ 0x1402ABFDC
 * Callers:
 *     VmpFlushTb @ 0x1402ABEA8 (VmpFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x1402ACBE0 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402ABA88 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInvalidateOutstandingFaults @ 0x1402AC3E4 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockExclusive @ 0x1402AC838 (VmpProcessContextLockExclusive.c)
 *     HvlMapGpaPages @ 0x1402CA7E4 (HvlMapGpaPages.c)
 */

__int64 __fastcall VmpFlushTbVaRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6)
{
  __int64 v6; // r8
  __int64 *v7; // r12
  __int64 *v9; // r13
  _QWORD *v10; // r14
  unsigned __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  __int64 result; // rax
  int v23; // [rsp+20h] [rbp-30h]
  unsigned __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h]
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-8h]
  __int64 v28; // [rsp+98h] [rbp+48h] BYREF
  char v29; // [rsp+A0h] [rbp+50h] BYREF
  __int64 *v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  v6 = a3 - a2;
  v28 = *a4;
  v7 = a4;
  v24 = a2;
  v25 = v6 + 1;
  if ( v6 != -1 )
  {
    v9 = a6;
    v10 = a5;
    do
    {
      v11 = VmpConvertPortionVpnRangeToGpnRange((__int64)SpinLock, &v24, &v26, &v28);
      v13 = v27;
      v14 = v11;
      if ( !v27 )
        break;
      v15 = v25;
      v16 = 0x40000LL - *v10;
      if ( v27 > v16 )
      {
        v13 = 0x40000LL - *v10;
        v24 -= v27 - v16;
        v15 = v27 - v16 + v25;
        v25 = v15;
      }
      HvlMapGpaPages(*((_QWORD *)SpinLock + 9), v26, v12, v13, v23, (__int64)&v29);
      VmpInvalidateOutstandingFaults(SpinLock, v14, v13);
      *v10 += v13;
      if ( *v10 >= 0x40000uLL )
      {
        v17 = *((_QWORD *)SpinLock + 5);
        v18 = *v9;
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8((unsigned __int8)v18);
        *v10 = 0LL;
        v19 = VmpProcessContextLockExclusive(SpinLock);
        v20 = v17 == *((_QWORD *)SpinLock + 5);
        *v9 = v19;
        v21 = v28;
        if ( !v20 )
          v21 = 0LL;
        v28 = v21;
      }
    }
    while ( v15 );
    v7 = v30;
  }
  result = v28;
  *v7 = v28;
  return result;
}
