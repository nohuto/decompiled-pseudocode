/*
 * XREFs of MmRelocatePfnList @ 0x1406BF984
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x14003C924 (MiEmptyKernelStackCache.c)
 *     MiPfnsWorthTrying @ 0x1400B6AD0 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfnWrapper @ 0x1400DBBE0 (MiIdentifyPfnWrapper.c)
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // esi
  _QWORD *v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // xmm1_8
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  _BYTE v16[24]; // [rsp+68h] [rbp-18h] BYREF
  int v17; // [rsp+C0h] [rbp+40h] BYREF

  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_14036C1B9) | (a4 << byte_14036C1BA);
  MiCreatePteCopyList(a1, 0x100uLL, (__int64)v16);
  v8 = &a2[3 * a1];
  while ( a2 < v8 )
  {
    v9 = a2[1];
    v10 = 0LL;
    *(_QWORD *)&v14 = 0LL;
    v15 = 0LL;
    *((_QWORD *)&v14 + 1) = v9;
    if ( !MiIsPfn(v9) )
      goto LABEL_15;
    MiIdentifyPfnWrapper(48 * v9 - 0x58000000000LL, (__int64)&v14);
    v10 = v15;
    if ( v15 != a2[2]
      || (((unsigned __int64)v14 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0
      || MiPfnsWorthTrying((__int16 *)&MiSystemPartition, 48 * v9 - 0x58000000000LL, 1LL, 0, &v17, &v13) )
    {
      goto LABEL_15;
    }
    if ( v17 == 1 )
      MiEmptyKernelStackCache();
    if ( MiClaimPhysicalRun((__int64)&MiSystemPartition, v9, 1LL, (__int64)v16, 0x400000u, v7, &v12) || v12 == -1 )
LABEL_15:
      v15 = v10 | 2;
    else
      *((_QWORD *)&v14 + 1) = v12;
    v11 = v15;
    *(_OWORD *)a2 = v14;
    a2[2] = v11;
    a2 += 3;
  }
  MiReleasePteCopyList((__int64)v16);
  return 0LL;
}
