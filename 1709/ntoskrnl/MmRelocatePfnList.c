/*
 * XREFs of MmRelocatePfnList @ 0x1406ED4E8
 * Callers:
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400011F0 (MiIdentifyPfnWrapper.c)
 *     MiEmptyKernelStackCache @ 0x14000F458 (MiEmptyKernelStackCache.c)
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140125EF4 (MiReleasePteCopyList.c)
 *     MiClaimPhysicalRun @ 0x1402168A0 (MiClaimPhysicalRun.c)
 */

__int64 __fastcall MmRelocatePfnList(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  _QWORD *v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // xmm1_8
  __int64 v15; // [rsp+50h] [rbp-9h] BYREF
  __int64 v16; // [rsp+58h] [rbp-1h] BYREF
  __int128 v17; // [rsp+60h] [rbp+7h] BYREF
  __int64 v18; // [rsp+70h] [rbp+17h]
  _BYTE v19[24]; // [rsp+78h] [rbp+1Fh] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF

  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v7 = (a3 << byte_140388501) | (a4 << byte_140388502);
  MiCreatePteCopyList(a1, 0x100uLL, (__int64)v19);
  v11 = &a2[3 * a1];
  while ( a2 < v11 )
  {
    v12 = a2[1];
    v13 = 0LL;
    *(_QWORD *)&v17 = 0LL;
    v18 = 0LL;
    *((_QWORD *)&v17 + 1) = v12;
    if ( !MiIsPfn(v12) )
      goto LABEL_15;
    MiIdentifyPfnWrapper(48 * v12 - 0x58000000000LL, (__int64)&v17);
    v13 = v18;
    if ( v18 != a2[2]
      || (((unsigned __int64)v17 ^ *a2) & 0x1FFFFFFFFFFFE00LL) != 0
      || MiPfnsWorthTrying((__int16 *)&MiSystemPartition, 48 * v12 - 0x58000000000LL, 1LL, 0, &v20, &v16) )
    {
      goto LABEL_15;
    }
    if ( v20 == 1 )
      MiEmptyKernelStackCache();
    if ( MiClaimPhysicalRun(
           (__int64)&MiSystemPartition,
           v12,
           1LL,
           qword_1403885E0,
           (__int64)v19,
           0x400000,
           v7,
           0LL,
           *(unsigned __int8 *)(48 * v12 - 0x58000000000LL + 34) >> 6,
           &v15)
      || v15 == -1 )
    {
LABEL_15:
      v18 = v13 | 2;
    }
    else
    {
      *((_QWORD *)&v17 + 1) = v15;
    }
    v14 = v18;
    *(_OWORD *)a2 = v17;
    a2[2] = v14;
    a2 += 3;
  }
  MiReleasePteCopyList((__int64)v19, v8, v9, v10);
  return 0LL;
}
