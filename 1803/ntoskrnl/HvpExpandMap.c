/*
 * XREFs of HvpExpandMap @ 0x140566878
 * Callers:
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1406F86F4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvpFreeMap @ 0x14057F99C (HvpFreeMap.c)
 *     HvpAllocateMap @ 0x1405818CC (HvpAllocateMap.c)
 */

__int64 __fastcall HvpExpandMap(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // ebp
  void *v13; // rax
  void *v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // r14

  v4 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v13 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(12288LL, 0LL, 925977923LL);
    v14 = v13;
    if ( !v13 )
      return (unsigned int)-1073741801;
    memset(v13, 0, 0x3000uLL);
    v15 = (_QWORD *)(632 * v5 + a1 + 288);
    *(_QWORD *)(632 * v5 + a1 + 280) = v15;
    *v15 = v14;
  }
  if ( a3 )
    v9 = (a3 >> 12) - 1;
  else
    v9 = 0;
  v10 = v9 >> 9;
  v11 = ((a4 >> 12) - 1) >> 9;
  if ( v11 > v10 )
  {
    if ( v10 || (v16 = 632 * v5, *(_QWORD *)(632 * v5 + a1 + 280) != 632 * v5 + a1 + 288) )
    {
LABEL_14:
      v19 = 632 * v5;
      if ( !(unsigned __int8)HvpAllocateMap(a1, *(_QWORD *)(v19 + a1 + 280), v10 + 1, v11) )
      {
        v4 = -1073741801;
        HvpFreeMap(a1, *(_QWORD *)(v19 + a1 + 280), v10 + 1, v11);
      }
      return v4;
    }
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(0x2000LL, 0LL, 942755139LL);
    v18 = v17;
    if ( v17 )
    {
      memset(v17, 0, 0x2000uLL);
      *v18 = *(_QWORD *)(v16 + a1 + 288);
      *(_QWORD *)(v16 + a1 + 280) = v18;
      goto LABEL_14;
    }
    return (unsigned int)-1073741801;
  }
  return v4;
}
