/*
 * XREFs of MiPrefetchVirtualMemory @ 0x140108070
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 *     MiPrefetchRestOfCluster @ 0x1400374F4 (MiPrefetchRestOfCluster.c)
 *     MmCopyMemory @ 0x140210B00 (MmCopyMemory.c)
 *     MiPrefetchDriverPages @ 0x1404414C8 (MiPrefetchDriverPages.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1404C9B00 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     MiPfCoalesceAndIssueIOs @ 0x14002EF8C (MiPfCoalesceAndIssueIOs.c)
 *     MiLeapPrefetch @ 0x14003A5C0 (MiLeapPrefetch.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiAdvanceFaultList @ 0x1401084A0 (MiAdvanceFaultList.c)
 *     MiPfCompletePrefetchIos @ 0x14010B05C (MiPfCompletePrefetchIos.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v9; // al
  _KPROCESS *Process; // r14
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  ULONG_PTR *v17; // r8
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r11d
  int v25; // eax
  unsigned __int64 v27; // rax
  int v28; // r8d
  int v29; // eax
  __int64 **v30; // rcx
  __int64 *v31; // rdx
  int v32; // eax
  _QWORD v33[2]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-48h]
  unsigned __int64 v36; // [rsp+40h] [rbp-40h]
  _QWORD v37[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v38[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-18h] BYREF
  int v40; // [rsp+70h] [rbp-10h]
  int v41; // [rsp+C8h] [rbp+48h]

  LOWORD(v33[0]) = 1;
  v37[1] = v37;
  v4 = 0;
  v33[1] = a2;
  v37[0] = v37;
  v5 = 0;
  v34 = a1;
  v38[1] = (__int64 *)v38;
  v35 = 0LL;
  v38[0] = (__int64 *)v38;
  v36 = 0LL;
  v39 = 0LL;
  v40 = a4;
  CurrentThread = KeGetCurrentThread();
  v41 = 0;
  v9 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v9 >= 2u )
    return 3221225626LL;
  BYTE6(CurrentThread[1].Queue) = v9 + 1;
  --CurrentThread->KernelApcDisable;
  v11 = v34;
  if ( v35 >= v34 )
    goto LABEL_30;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a2 + 16 * v35 + 8);
    v13 = ((*(_DWORD *)(a2 + 16 * v35) & 0xFFF) + v12 + 4095) >> 12;
    if ( v36 >= v13 )
    {
LABEL_41:
      MiAdvanceFaultList(v33, v13, v12);
      goto LABEL_28;
    }
    if ( !v12 )
      break;
    v13 = *(_QWORD *)(a2 + 16 * v35) + (v36 << 12);
    v12 = v13;
    if ( v13 >= qword_14036D870 && v13 <= qword_14036C5D0
      || (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a2 + 16 * v35) + (v36 << 12)) == 1
      && v13 >= qword_14036C178
      && v13 < qword_14036C178 + 4481024 )
    {
      goto LABEL_41;
    }
    if ( v13 >= v15 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v13 >= v15 + 0x4000000000LL )
        goto LABEL_41;
      do
      {
        if ( v12 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v12 = (__int64)((v12 << 25) - (v15 << 25)) >> 16;
      }
      while ( v12 >= v15 );
    }
    if ( v12 < v14 )
    {
LABEL_9:
      if ( a3 == 1 || (*(_BYTE *)(a3 + 192) & 7) != 0 )
        goto LABEL_41;
      v16 = WORD2(Process[1].SecurePid);
LABEL_12:
      v17 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v16);
      goto LABEL_13;
    }
    if ( byte_14036D700[((v12 >> 39) & 0x1FF) - 256] == 1 )
    {
      if ( a3 == 1 )
        goto LABEL_41;
      if ( (*(_BYTE *)(a3 + 192) & 7) != 1 )
        goto LABEL_41;
      v27 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v27 )
        goto LABEL_41;
      v16 = *(unsigned __int16 *)(v27 + 3180);
      goto LABEL_12;
    }
    if ( v12 < v14 )
      goto LABEL_9;
    if ( a3 != 1 )
      goto LABEL_41;
    v17 = &MiSystemPartition;
LABEL_13:
    if ( (v40 & 0x80u) == 0 )
    {
      if ( v17[720] < 0x120 )
        goto LABEL_29;
      v18 = v17[781];
      v19 = v17[766];
      if ( v19 > v18 || v18 - v19 < 0x1080 || (__int64)v17[728] < 288 )
        goto LABEL_29;
    }
    v20 = v35;
    v21 = v36;
    v24 = MmAccessFault(0LL, v13, 0, (ULONG_PTR)v33 + 1);
    switch ( BYTE1(v33[0]) )
    {
      case 2:
        if ( (v40 & 0x80u) == 0 )
          goto LABEL_29;
        BYTE1(v33[0]) = 0;
        break;
      case 1:
        BYTE1(v33[0]) = 0;
        break;
      case 3:
        BYTE1(v33[0]) = 0;
        v35 = v20;
        v36 = v21;
        break;
      default:
        if ( v35 == v20 && v36 == v21 )
          MiAdvanceFaultList(v33, v22, v23);
        break;
    }
    if ( v24 < 0 )
    {
      v4 = v24;
      v41 = v24;
      if ( v24 != -1073741819 || v35 == v34 || !(unsigned int)MiLeapPrefetch(v33, 0LL) )
        goto LABEL_30;
    }
    if ( v39 >= 0x200000 )
      MiPfCoalesceAndIssueIOs(v38, (__int64)v37, &v39);
    if ( (v40 & 0x400) != 0 )
    {
      v28 = 0;
      v29 = 0;
      while ( 1 )
      {
        v30 = (__int64 **)v37;
        if ( !v29 )
          v30 = v38;
        v31 = *v30;
        if ( *v30 != (__int64 *)v30 )
          break;
LABEL_53:
        if ( (unsigned int)++v29 >= 2 )
          goto LABEL_28;
      }
      while ( ++v28 != 4 )
      {
        v31 = (__int64 *)*v31;
        if ( v31 == (__int64 *)v30 )
          goto LABEL_53;
      }
      v32 = MiPfCompletePrefetchIos(v37, v38, a3);
      if ( v32 < 0 && v5 >= 0 )
        v5 = v32;
      v39 = 0LL;
    }
LABEL_28:
    v11 = v34;
    if ( v35 >= v34 )
      goto LABEL_29;
  }
  v35 = v11;
  v36 = 0LL;
LABEL_29:
  v4 = v41;
LABEL_30:
  v25 = MiPfCompletePrefetchIos(v37, v38, a3);
  if ( v25 < 0 )
  {
    if ( v5 >= 0 )
    {
      v5 = v25;
      goto LABEL_31;
    }
  }
  else
  {
LABEL_31:
    if ( v5 >= 0 && v4 < 0 && (v40 & 0x8000) != 0 )
      v5 = v4;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v5;
}
