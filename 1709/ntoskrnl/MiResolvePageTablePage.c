/*
 * XREFs of MiResolvePageTablePage @ 0x1400422D0
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiLockPageTableRange @ 0x140229E4C (MiLockPageTableRange.c)
 * Callees:
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiIsVadLarge @ 0x14003D7C0 (MiIsVadLarge.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     MiDecreaseUsedPtesCount @ 0x1400EB520 (MiDecreaseUsedPtesCount.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     MiAdvanceFaultList @ 0x14010A0F4 (MiAdvanceFaultList.c)
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     MiCheckFatalAccessViolation @ 0x140125200 (MiCheckFatalAccessViolation.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiGetLargeVadMappingIndex @ 0x1402287CC (MiGetLargeVadMappingIndex.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MiInsertLargeVadMapping @ 0x140228908 (MiInsertLargeVadMapping.c)
 *     MiWaitForForkToComplete @ 0x14023027C (MiWaitForForkToComplete.c)
 */

__int64 __fastcall MiResolvePageTablePage(
        ULONG_PTR a1,
        ULONG_PTR a2,
        _QWORD *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  _QWORD *v6; // r10
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 **v10; // rbp
  unsigned __int64 v11; // r11
  __int64 *v12; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 i; // rdi
  _KPROCESS *Process; // r13
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // r14
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned int LargeVadMappingIndex; // ecx
  ULONG_PTR v22; // r14
  __int64 DemandZeroPte; // rax
  __int64 *v24; // rcx
  char v25; // cl
  __int64 v26; // rdi
  unsigned __int64 *v27; // r14
  int v28; // eax
  ULONG_PTR v29; // r9
  unsigned int v30; // r8d
  _DWORD **v31; // rdx
  __int64 result; // rax
  _QWORD *v33; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rcx
  ULONG_PTR v39; // rbp
  unsigned __int64 v40; // rcx
  int v41; // [rsp+50h] [rbp-78h]
  unsigned int v42; // [rsp+54h] [rbp-74h] BYREF
  __int64 **v43; // [rsp+58h] [rbp-70h]
  __int64 v44; // [rsp+60h] [rbp-68h] BYREF
  ULONG_PTR v45; // [rsp+68h] [rbp-60h]
  ULONG_PTR v46; // [rsp+70h] [rbp-58h]
  ULONG_PTR v47[2]; // [rsp+78h] [rbp-50h] BYREF
  ULONG_PTR v51; // [rsp+E8h] [rbp+20h]
  int v52; // [rsp+100h] [rbp+38h]

  v51 = a4;
  v41 = -1;
  v52 = 0;
  v45 = 0LL;
  v46 = a4 & 1;
  v6 = a3;
  v7 = a2;
  if ( (a4 & 1) == 0 || (v8 = a4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v8 = 0LL;
  v9 = 0;
  v43 = (__int64 **)a3;
  v10 = (__int64 **)a3;
  v11 = 0xFFFFF6FFFFFFFFFFuLL;
  while ( 1 )
  {
    v12 = *v10;
    PteShadow = **v10;
    if ( (unsigned __int64)*v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v12, **v10);
    if ( (PteShadow & 1) == 0 )
      break;
    if ( (PteShadow & 0x80u) != 0LL )
    {
      if ( !v8 && v7 >= 0xFFFFF68000000000uLL && v7 <= v11 )
        KeBugCheckEx(0x50u, v7, a1, a4, 8uLL);
      return 3221225494LL;
    }
LABEL_68:
    ++v10;
    ++v9;
    v43 = v10;
    if ( v9 >= 3 )
      return 3221225494LL;
  }
  for ( i = v7; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > v11 )
      break;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( PteShadow )
    goto LABEL_52;
  if ( v7 >= 0xFFFF800000000000uLL )
  {
    if ( v8 )
      return 0LL;
    if ( v7 >= 0xFFFFF68000000000uLL && v7 <= v11 && a4 )
      KeBugCheckEx(0x50u, v7, a1, v6[v9], 6uLL);
  }
  v16 = MiCheckVirtualAddress(v7, &v42, &v44);
  v17 = v42;
  v18 = v16;
  if ( v42 == 24 )
  {
    v35 = v44;
    if ( !(unsigned int)MiCheckFatalAccessViolation(v7) && v7 <= 0x7FFFFFFEFFFFLL && v35 && v8 )
    {
      v36 = a3[v9] + 8LL;
      v37 = 4 - v9;
      do
      {
        v36 = v36 << 25 >> 16;
        --v37;
      }
      while ( v37 );
      MiLeapPrefetch(v8, v36);
      *(_BYTE *)(v8 + 1) = 1;
    }
    return 3221225477LL;
  }
  v19 = v44;
  if ( v44 && (*(_DWORD *)(v44 + 48) & 0x8000) != 0 && v8 )
  {
    if ( ((v20 = v51 & 0xFFFFFFFFFFFFFFFEuLL, v42 >> 3 != 3) || (v42 & 7) == 0) && v42 >> 3 != 1
      || (*(_DWORD *)(v20 + 80) & 0x4000) == 0 )
    {
      MiAdvanceFaultList(v20);
      return 0LL;
    }
  }
  if ( !v52
    && Process[1].Affinity.Bitmap[10]
    && (v8 && *(_QWORD *)(v8 + 56) != v8 + 56 || (unsigned int)MiWaitForForkToComplete(Process, a5) == 1) )
  {
    return 3221226548LL;
  }
  if ( v19 )
  {
    if ( v8 && (unsigned int)MiIsVadLarge(v19) )
    {
      MiLeapPrefetch(
        v8,
        (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF)
      + 4096);
      result = 0LL;
      *(_BYTE *)(v8 + 1) = 1;
      return result;
    }
    if ( (*(_BYTE *)(v19 + 48) & 7) == 7 && !(unsigned int)MiVadPureReserve(v19) )
    {
      LargeVadMappingIndex = v41;
      if ( v41 == -1 )
      {
        LargeVadMappingIndex = MiGetLargeVadMappingIndex(v19, a2);
        v41 = LargeVadMappingIndex;
      }
      if ( v9 == LargeVadMappingIndex )
      {
        v33 = &a3[v9];
        if ( !(unsigned int)MiInsertLargeVadMapping(a2, v18, a5, LargeVadMappingIndex, *v33, v17) )
          return 3221226548LL;
        if ( (*v33 < 0xFFFFF6FB7DBED000uLL || *v33 > 0xFFFFF6FB7DBEDFFFuLL) && i <= 0x7FFFFFFEFFFFLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle(a3[v9 + 1]);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
        }
        return 3221225494LL;
      }
    }
  }
  v10 = v43;
  if ( ((unsigned __int64)*v43 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)*v43 > 0xFFFFF6FB7DBEDFFFuLL)
    && i <= 0x7FFFFFFEFFFFLL )
  {
    v45 = MiGetUsedPtesHandle(a3[v9 + 1]);
    v22 = v45;
    MiLockPageAtDpcInline(v45);
    *(_QWORD *)(v22 + 16) ^= ((unsigned int)*(_QWORD *)(v22 + 16) ^ ((unsigned int)*(_QWORD *)(v22 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIsAddressValid(*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL);
  }
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v24 = *v10;
  *v24 = DemandZeroPte;
  if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v24, DemandZeroPte);
  ++v52;
  a4 = v51;
  v6 = a3;
LABEL_52:
  if ( v46 && ((v25 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL), (unsigned __int8)(v25 - 1) <= 2u) || v25 == 5) )
    v26 = 0LL;
  else
    v26 = a4;
  v27 = &v6[v9 + 1];
  v28 = MiDispatchFault(2, *v27, 0, 0, (__int64)&Process[1].IdealNode[12], a5, v26, 0LL, a6, (__int64)v47);
  if ( v28 == -1073532109 )
  {
    v29 = v47[0];
    if ( a6 == 1 )
      *(_BYTE *)(v47[0] + 191) |= 2u;
    MiIssueHardFault((__int64)&Process[1].IdealNode[12], a5, *v27, v29, v26, 1LL, a6);
LABEL_64:
    v6 = a3;
    v30 = 0;
    v31 = (_DWORD **)a3;
    while ( (**v31 & 1) != 0 )
    {
      ++v30;
      ++v31;
      if ( v30 > v9 )
      {
        v7 = a2;
        a4 = v51;
        v11 = 0xFFFFF6FFFFFFFFFFuLL;
        goto LABEL_68;
      }
    }
    return 3221226548LL;
  }
  if ( !v52 )
    goto LABEL_64;
  if ( v28 != -1073741801 )
  {
    if ( v28 != -1073740748 )
      goto LABEL_64;
    return 3221226548LL;
  }
  v38 = (_QWORD *)a3[v9];
  *v38 = 0LL;
  if ( (unsigned __int64)v38 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v38 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v38, 0LL);
  v39 = v45;
  if ( v45 )
  {
    MiDecreaseUsedPtesCount(v45);
    v40 = (unsigned __int64)*(unsigned int *)(v39 + 16) >> 16;
    if ( (v40 & 0x3FF) == 0 )
      MiDeletePageTableHierarchy(v40, a3[v9]);
  }
  return 3221225495LL;
}
