/*
 * XREFs of MiPrefetchVirtualMemory @ 0x140109C80
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1400AD4B4 (MiInPageSingleKernelStack.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiPrefetchRestOfCluster @ 0x140109954 (MiPrefetchRestOfCluster.c)
 *     MmCopyMemory @ 0x140218220 (MmCopyMemory.c)
 *     MmPrefetchVirtualMemory @ 0x140444728 (MmPrefetchVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x140507470 (MiPrefetchDriverPages.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400207A4 (MiPfCompletePrefetchIos.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiVaIsUltra @ 0x14010A160 (MiVaIsUltra.c)
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140129B30 (MiPfCoalesceAndIssueIOs.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v9; // al
  _KPROCESS *Process; // r14
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  ULONG_PTR *v19; // rdx
  unsigned __int64 v20; // rcx
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  int v25; // r11d
  int v26; // eax
  unsigned __int64 v28; // rax
  int v29; // r8d
  int v30; // eax
  _QWORD **v31; // rcx
  _QWORD *v32; // rdx
  int v33; // eax
  unsigned __int16 **v34; // r11
  __int64 v35; // rbx
  unsigned __int16 *v36; // r8
  unsigned int v37; // r9d
  __int16 v38; // [rsp+20h] [rbp-60h] BYREF
  __int64 v39; // [rsp+28h] [rbp-58h]
  unsigned __int64 v40; // [rsp+30h] [rbp-50h]
  unsigned __int64 v41; // [rsp+38h] [rbp-48h]
  unsigned __int64 v42; // [rsp+40h] [rbp-40h]
  _QWORD *v43[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v44[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-18h] BYREF
  int v46; // [rsp+70h] [rbp-10h]
  int v47; // [rsp+C8h] [rbp+48h]

  v38 = 1;
  v39 = a2;
  v43[1] = v43;
  v4 = 0;
  v40 = a1;
  v43[0] = v43;
  v41 = 0LL;
  v44[1] = v44;
  v42 = 0LL;
  v44[0] = v44;
  v7 = 0;
  v45 = 0LL;
  v46 = a4;
  CurrentThread = KeGetCurrentThread();
  v47 = 0;
  v9 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v9 >= 2u )
    return 3221225626LL;
  BYTE6(CurrentThread[1].Queue) = v9 + 1;
  --CurrentThread->KernelApcDisable;
  v11 = v40;
  if ( v41 >= v40 )
    goto LABEL_33;
  v12 = 0xFFFF800000000000uLL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a2 + 16 * v41 + 8);
    if ( v42 >= ((unsigned __int64)(*(_DWORD *)(a2 + 16 * v41) & 0xFFF) + v13 + 4095) >> 12 )
    {
LABEL_78:
      MiAdvanceFaultList(&v38);
      goto LABEL_31;
    }
    if ( !v13 )
      break;
    v14 = *(_QWORD *)(a2 + 16 * v41) + (v42 << 12);
    if ( v14 >= qword_140389B40 && v14 <= qword_140388958
      || v14 >= v12
      && (unsigned int)MiVaIsUltra(
                         *(_QWORD *)(a2 + 16 * v41) + (v42 << 12),
                         2 * v41,
                         *(_QWORD *)(a2 + 16 * v41) + (v42 << 12))
      || (unsigned int)MiGetSystemRegionType(v14) == 1 && v16 >= qword_1403884B8 && v16 < qword_1403884B8 + 4481024 )
    {
      goto LABEL_78;
    }
    if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v16 >= 0xFFFFF6C000000000uLL )
        goto LABEL_78;
      do
      {
        if ( v15 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v15 = (__int64)(v15 << 25) >> 16;
      }
      while ( v15 >= 0xFFFFF68000000000uLL );
    }
    if ( v15 < v17 )
    {
LABEL_11:
      if ( a3 == 1 || (*(_BYTE *)(a3 + 192) & 7) != 0 )
        goto LABEL_78;
      v18 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 2);
LABEL_14:
      v19 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v18);
      goto LABEL_15;
    }
    if ( byte_1403899D0[((v15 >> 39) & 0x1FF) - 256] == 1 )
    {
      if ( a3 == 1 )
        goto LABEL_78;
      if ( (*(_BYTE *)(a3 + 192) & 7) != 1 )
        goto LABEL_78;
      v28 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v28 )
        goto LABEL_78;
      v18 = *(unsigned __int16 *)(v28 + 3180);
      goto LABEL_14;
    }
    if ( v15 < v17 )
      goto LABEL_11;
    if ( a3 != 1 )
      goto LABEL_78;
    v19 = &MiSystemPartition;
LABEL_15:
    if ( (v46 & 0x80u) == 0 )
    {
      v20 = v19[744];
      if ( v20 < 0x120 )
      {
        v34 = (unsigned __int16 **)(v19 + 509);
        v35 = 0LL;
        while ( 1 )
        {
          v36 = *v34;
          v37 = 0;
          if ( dword_140388544 )
            break;
LABEL_88:
          ++v35;
          ++v34;
          if ( v35 > 1 )
            goto LABEL_32;
        }
        while ( 1 )
        {
          v20 += *v36;
          if ( v20 >= 0x120 )
            break;
          ++v37;
          v36 += 8;
          if ( v37 >= dword_140388544 )
            goto LABEL_88;
        }
      }
      v21 = v19[805];
      v22 = v19[790];
      if ( v22 > v21 || v21 - v22 < 0x1080 || (__int64)v19[752] < 288 )
        goto LABEL_32;
    }
    v23 = v41;
    v24 = v42;
    v25 = MmAccessFault(0LL, v16, 0LL, (ULONG_PTR)&v38 + 1);
    switch ( HIBYTE(v38) )
    {
      case 2:
        if ( (v46 & 0x80u) == 0 )
          goto LABEL_32;
        HIBYTE(v38) = 0;
        break;
      case 1:
        HIBYTE(v38) = 0;
        break;
      case 3:
        HIBYTE(v38) = 0;
        v41 = v23;
        v42 = v24;
        break;
      default:
        if ( v41 == v23 && v42 == v24 )
          MiAdvanceFaultList(&v38);
        break;
    }
    if ( v25 < 0 )
    {
      v4 = v25;
      v47 = v25;
      if ( v25 != -1073741819 || v41 == v40 || !(unsigned int)MiLeapPrefetch(&v38, 0LL) )
        goto LABEL_33;
    }
    if ( v45 >= 0x200000 )
      MiPfCoalesceAndIssueIOs(v44, v43, &v45);
    if ( (v46 & 0x400) != 0 )
    {
      v29 = 0;
      v30 = 0;
      while ( 1 )
      {
        v31 = v43;
        if ( !v30 )
          v31 = (_QWORD **)v44;
        v32 = *v31;
        if ( *v31 != v31 )
          break;
LABEL_58:
        if ( (unsigned int)++v30 >= 2 )
          goto LABEL_30;
      }
      while ( ++v29 != 4 )
      {
        v32 = (_QWORD *)*v32;
        if ( v32 == v31 )
          goto LABEL_58;
      }
      v33 = MiPfCompletePrefetchIos(v43, (__int64)v44);
      if ( v33 < 0 && v7 >= 0 )
        v7 = v33;
      v45 = 0LL;
    }
LABEL_30:
    v12 = 0xFFFF800000000000uLL;
LABEL_31:
    v11 = v40;
    if ( v41 >= v40 )
      goto LABEL_32;
  }
  v41 = v11;
  v42 = 0LL;
LABEL_32:
  v4 = v47;
LABEL_33:
  v26 = MiPfCompletePrefetchIos(v43, (__int64)v44);
  if ( v26 < 0 )
  {
    if ( v7 >= 0 )
    {
      v7 = v26;
      goto LABEL_34;
    }
  }
  else
  {
LABEL_34:
    if ( v7 >= 0 && v4 < 0 && (v46 & 0x8000) != 0 )
      v7 = v4;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v7;
}
