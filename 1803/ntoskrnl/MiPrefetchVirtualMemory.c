/*
 * XREFs of MiPrefetchVirtualMemory @ 0x14007F6B0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 *     MiPrefetchRestOfCluster @ 0x1400CFC78 (MiPrefetchRestOfCluster.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1405BB2D0 (MiPrefetchDriverPages.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiPfCompletePrefetchIos @ 0x14003F2B0 (MiPfCompletePrefetchIos.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiVaIsUltra @ 0x14007FBA4 (MiVaIsUltra.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400C5F28 (MiPfCoalesceAndIssueIOs.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     MiLeapPrefetch @ 0x140154650 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v9; // al
  _KPROCESS *Process; // r14
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 LeafVa; // r8
  __int64 v17; // rcx
  ULONG_PTR *v18; // rdx
  unsigned __int64 v19; // rcx
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // r8d
  int v32; // eax
  ULONG_PTR *v33; // rcx
  ULONG_PTR *v34; // rdx
  unsigned __int16 **v35; // r11
  __int64 v36; // rbx
  unsigned __int16 *v37; // r8
  unsigned int v38; // r9d
  int v39; // eax
  __int64 v40; // [rsp+20h] [rbp-88h] BYREF
  __int64 v41; // [rsp+28h] [rbp-80h]
  unsigned __int64 v42; // [rsp+30h] [rbp-78h]
  unsigned __int64 v43; // [rsp+38h] [rbp-70h]
  unsigned __int64 v44; // [rsp+40h] [rbp-68h]
  ULONG_PTR v45[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v46[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-40h] BYREF
  int v48; // [rsp+70h] [rbp-38h]
  int v49; // [rsp+C8h] [rbp+20h]

  LOWORD(v40) = 1;
  v45[1] = (ULONG_PTR)v45;
  v4 = 0;
  v41 = a2;
  v45[0] = (ULONG_PTR)v45;
  v5 = 0;
  v42 = a1;
  v46[1] = v46;
  v43 = 0LL;
  v46[0] = v46;
  v44 = 0LL;
  v47 = 0LL;
  v48 = a4;
  CurrentThread = KeGetCurrentThread();
  v49 = 0;
  v9 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v9 >= 2u )
    return 3221225626LL;
  BYTE6(CurrentThread[1].Queue) = v9 + 1;
  --CurrentThread->KernelApcDisable;
  if ( v43 >= v42 )
    goto LABEL_32;
  v11 = 0xFFFFF68000000000uLL;
  while ( 1 )
  {
    v12 = 0xFFFF800000000000uLL;
    v13 = *(_QWORD *)(a2 + 16 * v43 + 8);
    v14 = ((unsigned __int64)(*(_DWORD *)(a2 + 16 * v43) & 0xFFF) + v13 + 4095) >> 12;
    if ( v44 >= v14 )
    {
LABEL_76:
      MiAdvanceFaultList(&v40);
      goto LABEL_30;
    }
    if ( !v13 )
      break;
    v15 = *(_QWORD *)(a2 + 16 * v43) + (v44 << 12);
    LeafVa = v15;
    if ( v15 >= qword_1403CD100 && v15 <= qword_1403CBB70
      || v15 >= 0xFFFF800000000000uLL
      && ((unsigned int)MiVaIsUltra(*(_QWORD *)(a2 + 16 * v43) + (v44 << 12), v14, v15, 0xFFFF800000000000uLL, v40)
       || *((_BYTE *)&MiState[946] + ((v15 >> 39) & 0x1FF)) == 1
       && v15 >= qword_1403CB640
       && v15 < qword_1403CB640 + 4485120) )
    {
      goto LABEL_76;
    }
    if ( v15 >= v11 && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v15 >= v11 + 0x4000000000LL )
        goto LABEL_76;
      LeafVa = MiGetLeafVa(v15);
    }
    if ( LeafVa < v12 )
    {
LABEL_10:
      if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 0 )
        goto LABEL_76;
      v17 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 3);
LABEL_13:
      v18 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v17);
      goto LABEL_14;
    }
    if ( *((_BYTE *)&MiState[946] + ((LeafVa >> 39) & 0x1FF)) == 1 )
    {
      if ( a3 == 1 )
        goto LABEL_76;
      if ( (*(_BYTE *)(a3 + 184) & 7) != 1 )
        goto LABEL_76;
      v30 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v30 )
        goto LABEL_76;
      v17 = *(unsigned __int16 *)(v30 + 3182);
      goto LABEL_13;
    }
    if ( LeafVa < v12 )
      goto LABEL_10;
    if ( a3 != 1 )
      goto LABEL_76;
    v18 = &MiSystemPartition;
LABEL_14:
    if ( (v48 & 0x80u) == 0 )
    {
      v19 = v18[880];
      if ( v19 < 0x120 )
      {
        v35 = (unsigned __int16 **)(v18 + 517);
        v36 = 0LL;
        while ( 1 )
        {
          v37 = *v35;
          v38 = 0;
          if ( dword_1403CB6DC )
            break;
LABEL_84:
          ++v36;
          ++v35;
          if ( v36 > 1 )
            goto LABEL_31;
        }
        while ( 1 )
        {
          v19 += *v37;
          if ( v19 >= 0x120 )
            break;
          ++v38;
          v37 += 8;
          if ( v38 >= dword_1403CB6DC )
            goto LABEL_84;
        }
      }
      v20 = v18[941];
      v21 = v18[925];
      if ( v21 > v20 || v20 - v21 < 0x1080 || (__int64)v18[888] < 288 )
        goto LABEL_31;
    }
    v22 = v43;
    v23 = v44;
    v24 = MmAccessFault(0LL, v15, 0, (ULONG_PTR)&v40 + 1);
    switch ( BYTE1(v40) )
    {
      case 2:
        if ( (v48 & 0x80u) == 0 )
          goto LABEL_31;
        BYTE1(v40) = 0;
        break;
      case 1:
        BYTE1(v40) = 0;
        break;
      case 3:
        BYTE1(v40) = 0;
        v43 = v22;
        v44 = v23;
        break;
      default:
        if ( v43 == v22 && v44 == v23 )
        {
          v25 = *(_QWORD *)(v41 + 16 * v43 + 8) + 4095LL;
          v26 = *(_DWORD *)(v41 + 16 * v43) & 0xFFF;
          if ( ++v44 == (unsigned __int64)(v25 + v26) >> 12 )
          {
            v29 = v43 + 1;
            v43 = v29;
            v44 = 0LL;
            if ( v29 < v42 && !*(_QWORD *)(v41 + 16 * v29 + 8) )
              v43 = v42;
          }
        }
        break;
    }
    if ( v24 < 0 )
    {
      v4 = v24;
      v49 = v24;
      if ( v24 != -1073741819 || v43 == v42 || !(unsigned int)MiLeapPrefetch(&v40, 0LL) )
        goto LABEL_32;
    }
    if ( v47 >= 0x200000 )
      MiPfCoalesceAndIssueIOs(v46, v45, &v47);
    if ( (v48 & 0x400) != 0 )
    {
      v31 = 0;
      v32 = 0;
      while ( 1 )
      {
        v33 = v45;
        if ( !v32 )
          v33 = v46;
        v34 = (ULONG_PTR *)*v33;
        if ( (ULONG_PTR *)*v33 != v33 )
          break;
LABEL_60:
        if ( (unsigned int)++v32 >= 2 )
          goto LABEL_29;
      }
      while ( ++v31 != 4 )
      {
        v34 = (ULONG_PTR *)*v34;
        if ( v34 == v33 )
          goto LABEL_60;
      }
      v39 = MiPfCompletePrefetchIos(v45, (__int64)v46, a3);
      if ( v39 < 0 && v5 >= 0 )
        v5 = v39;
      v47 = 0LL;
    }
LABEL_29:
    v11 = 0xFFFFF68000000000uLL;
LABEL_30:
    if ( v43 >= v42 )
      goto LABEL_31;
  }
  v43 = v42;
  v44 = 0LL;
LABEL_31:
  v4 = v49;
LABEL_32:
  v27 = MiPfCompletePrefetchIos(v45, (__int64)v46, a3);
  if ( v27 < 0 )
  {
    if ( v5 >= 0 )
    {
      v5 = v27;
      goto LABEL_33;
    }
  }
  else
  {
LABEL_33:
    if ( v5 >= 0 && v4 < 0 && (v48 & 0x8000) != 0 )
      v5 = v4;
  }
  KeLeaveCriticalRegionThread(CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v5;
}
