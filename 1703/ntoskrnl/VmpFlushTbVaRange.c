/*
 * XREFs of VmpFlushTbVaRange @ 0x140251F98
 * Callers:
 *     VmpFlushTb @ 0x140251E58 (VmpFlushTb.c)
 *     VmpRemoveMemoryRange @ 0x140252564 (VmpRemoveMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpInvalidateOutstandingFaults @ 0x1402523AC (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockExclusive @ 0x1402524DC (VmpProcessContextLockExclusive.c)
 *     VmpProcessMemoryRangeCompareVpn @ 0x140252548 (VmpProcessMemoryRangeCompareVpn.c)
 *     HvlMapGpaPages @ 0x140269DC4 (HvlMapGpaPages.c)
 */

void __fastcall VmpFlushTbVaRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r10
  _QWORD *v11; // r13
  unsigned __int64 v12; // rdi
  int v13; // ebp
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // r10
  bool v24; // cf
  __int64 *v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  char v30; // [rsp+80h] [rbp+18h] BYREF

  v6 = *a4;
  v29 = a2;
  v9 = a2;
  if ( a2 <= a3 )
  {
    v11 = a5;
    do
    {
      if ( !v6 || v9 < *(_QWORD *)(v6 + 64) || v9 > *(_QWORD *)(v6 + 72) )
      {
        v6 = 0LL;
        v12 = *((_QWORD *)SpinLock + 3);
        v13 = SpinLock[8] & 1;
        if ( !v12 )
          goto LABEL_48;
        while ( 1 )
        {
          v14 = VmpProcessMemoryRangeCompareVpn(&v29, v12);
          if ( !v14 )
            break;
          if ( v14 >= 0 )
          {
            v15 = *(_QWORD *)(v12 + 8);
          }
          else
          {
            v15 = *(_QWORD *)v12;
            v6 = v12;
          }
          if ( v13 && v15 )
            v12 ^= v15;
          else
            v12 = v15;
          if ( !v12 )
            goto LABEL_33;
        }
        v16 = *(_QWORD *)v12;
        v6 = v12;
        if ( v13 && v16 )
          v16 ^= v12;
        v17 = 0LL;
        if ( v16 )
        {
          while ( 1 )
          {
            v18 = VmpProcessMemoryRangeCompareVpn(&v29, v16);
            if ( v18 >= 0 )
            {
              if ( v18 > 0 )
              {
                v19 = *(_QWORD *)(v16 + 8);
                goto LABEL_26;
              }
              v17 = v16;
            }
            v19 = *(_QWORD *)v16;
LABEL_26:
            if ( v13 && v19 )
              v16 ^= v19;
            else
              v16 = v19;
            if ( !v16 )
            {
              if ( v17 )
                v6 = v17;
              break;
            }
          }
        }
LABEL_33:
        if ( !v6 )
        {
LABEL_48:
          v6 = 0LL;
          break;
        }
        v9 = v29;
      }
      v20 = *(_QWORD *)(v6 + 64);
      if ( v9 < v20 )
      {
        if ( a3 < v20 )
          break;
        v9 = *(_QWORD *)(v6 + 64);
        v29 = v9;
      }
      v21 = a3;
      if ( a3 > *(_QWORD *)(v6 + 72) )
        v21 = *(_QWORD *)(v6 + 72);
      v22 = 1 - v9 + v21;
      if ( v22 > 0x40000LL - *v11 )
        v22 = 0x40000LL - *v11;
      HvlMapGpaPages(
        *((_QWORD *)SpinLock + 9),
        v9 + *(_DWORD *)(v6 + 48) - *(_DWORD *)(v6 + 64),
        1024,
        v22,
        0LL,
        (__int64)&v30);
      VmpInvalidateOutstandingFaults(SpinLock, v29, v22);
      v23 = v29;
      *v11 += v22;
      v9 = v22 + v23;
      v24 = *v11 < 0x40000uLL;
      v29 = v9;
      if ( !v24 )
      {
        v25 = a6;
        v26 = *((_QWORD *)SpinLock + 5);
        v27 = *a6;
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8((unsigned __int8)v27);
        *v11 = 0LL;
        v28 = VmpProcessContextLockExclusive(SpinLock);
        v9 = v29;
        if ( v26 != *((_QWORD *)SpinLock + 5) )
          v6 = 0LL;
        *v25 = v28;
      }
    }
    while ( v9 <= a3 );
  }
  *a4 = v6;
}
