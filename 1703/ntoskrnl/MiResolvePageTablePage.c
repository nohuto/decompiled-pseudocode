/*
 * XREFs of MiResolvePageTablePage @ 0x1400BF190
 * Callers:
 *     MiLockPageTableRange @ 0x140035428 (MiLockPageTableRange.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     MiLeapPrefetch @ 0x14003A5C0 (MiLeapPrefetch.c)
 *     MiCheckFatalAccessViolation @ 0x140073514 (MiCheckFatalAccessViolation.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiIsVadLarge @ 0x1400D2CF0 (MiIsVadLarge.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 *     MiDecreaseUsedPtesCount @ 0x1401057E0 (MiDecreaseUsedPtesCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiGetLargeVadMappingIndex @ 0x14021BEC0 (MiGetLargeVadMappingIndex.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MiInsertLargeVadMapping @ 0x14021BFD8 (MiInsertLargeVadMapping.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForForkToComplete @ 0x140223828 (MiWaitForForkToComplete.c)
 */

__int64 __fastcall MiResolvePageTablePage(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 **a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  unsigned __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 **v9; // rsi
  __int64 v10; // rax
  ULONG_PTR v11; // r9
  __int64 **v12; // r10
  ULONG_PTR v13; // r11
  unsigned __int64 i; // rdi
  _KPROCESS *Process; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // esi
  __int64 v20; // r14
  __int64 v21; // r8
  unsigned int LargeVadMappingIndex; // ecx
  __int64 **v23; // rsi
  ULONG_PTR v24; // r14
  __int64 DemandZeroPte; // rax
  __int64 *v26; // rcx
  __int64 v27; // rcx
  char v28; // cl
  __int64 v29; // rdi
  unsigned __int64 *v30; // r14
  int v31; // eax
  ULONG_PTR v32; // r9
  unsigned int v33; // r8d
  __int64 **v34; // rdx
  __int64 **v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 UsedPtesHandle; // rax
  __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rcx
  ULONG_PTR v46; // rsi
  unsigned __int64 v47; // rcx
  int v48; // [rsp+50h] [rbp-68h]
  int v49; // [rsp+54h] [rbp-64h] BYREF
  __int64 **v50; // [rsp+58h] [rbp-60h]
  __int64 v51; // [rsp+60h] [rbp-58h] BYREF
  ULONG_PTR v52; // [rsp+68h] [rbp-50h]
  ULONG_PTR v53; // [rsp+70h] [rbp-48h]
  ULONG_PTR v54[8]; // [rsp+78h] [rbp-40h] BYREF
  int v58; // [rsp+F0h] [rbp+38h]

  v48 = -1;
  v58 = 0;
  v52 = 0LL;
  v53 = a4 & 1;
  if ( (a4 & 1) == 0 || (v7 = a4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v7 = 0LL;
  v8 = 0;
  v50 = a3;
  v9 = a3;
  while ( 1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(*v9);
    if ( (v10 & 1) == 0 )
      break;
    if ( (v10 & 0x80u) != 0LL )
    {
      if ( !v7 && a2 >= v13 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
        KeBugCheckEx(0x50u, a2, a1, v11, 8uLL);
      return 3221225494LL;
    }
LABEL_57:
    ++v9;
    ++v8;
    v50 = v9;
    if ( v8 >= 3 )
      return 3221225494LL;
  }
  for ( i = a2; i >= v13; i = (__int64)((i << 25) - (v13 << 25)) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v10 )
    goto LABEL_41;
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( v7 )
      return 0LL;
    if ( a2 >= v13 && a2 <= 0xFFFFF6FFFFFFFFFFuLL && v11 )
      KeBugCheckEx(0x50u, a2, a1, (ULONG_PTR)v12[v8], 6uLL);
  }
  v16 = MiCheckVirtualAddress(a2, &v49, &v51);
  v19 = v49;
  v20 = v16;
  if ( v49 == 24 )
  {
    v41 = v51;
    if ( !(unsigned int)MiCheckFatalAccessViolation(a2, v51, a1, Process) && a2 <= 0x7FFFFFFEFFFFLL && v41 && v7 )
    {
      v42 = (unsigned __int64)(a3[v8] + 1);
      v43 = 4 - v8;
      do
      {
        v42 = (__int64)(v42 << 25) >> 16;
        --v43;
      }
      while ( v43 );
      MiLeapPrefetch((_QWORD *)v7, v42);
      *(_BYTE *)(v7 + 1) = 1;
    }
    return 3221225477LL;
  }
  if ( !v58
    && Process[1].Affinity.Bitmap[10]
    && (v7 && *(_QWORD *)(v7 + 56) != v7 + 56 || (unsigned int)MiWaitForForkToComplete(Process, a5) == 1) )
  {
    return 3221226548LL;
  }
  v21 = v51;
  if ( v51 )
  {
    if ( !v7 || !(unsigned int)MiIsVadLarge(v51) )
    {
      if ( (*(_BYTE *)(v21 + 48) & 7) == 7 && !(unsigned int)MiVadPureReserve(v21, v17, v21, v18) )
      {
        LargeVadMappingIndex = v48;
        if ( v48 == -1 )
        {
          LargeVadMappingIndex = MiGetLargeVadMappingIndex(v21, a2);
          v48 = LargeVadMappingIndex;
        }
        if ( v8 == LargeVadMappingIndex )
        {
          v36 = &a3[v8];
          if ( !(unsigned int)MiInsertLargeVadMapping(a2, v20, a5, LargeVadMappingIndex, *v36, v19) )
            return 3221226548LL;
          if ( ((unsigned __int64)*v36 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)*v36 > 0xFFFFF6FB7DBEDFFFuLL)
            && i <= 0x7FFFFFFEFFFFLL )
          {
            UsedPtesHandle = MiGetUsedPtesHandle(a3[v8 + 1], v37, v38, v39);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
          }
          return 3221225494LL;
        }
      }
      goto LABEL_34;
    }
    MiLeapPrefetch(
      (_QWORD *)v7,
      (((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) << 12) | 0xFFF) + 4096);
    *(_BYTE *)(v7 + 1) = 1;
    return 0LL;
  }
LABEL_34:
  v23 = v50;
  if ( ((unsigned __int64)*v50 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)*v50 > 0xFFFFF6FB7DBEDFFFuLL)
    && i <= 0x7FFFFFFEFFFFLL )
  {
    v52 = MiGetUsedPtesHandle(a3[v8 + 1], a3, v21, v18);
    v24 = v52;
    MiLockPageAtDpcInline(v52);
    *(_QWORD *)(v24 + 16) ^= ((unsigned int)*(_QWORD *)(v24 + 16) ^ ((*(_QWORD *)(v24 + 16) & 0xFFFF0000) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiIsAddressValid(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL);
  }
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v26 = *v23;
  *v26 = DemandZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v26) )
    MiWritePteShadow(v27);
  ++v58;
  v12 = a3;
  v11 = a4;
LABEL_41:
  if ( v53 && ((v28 = *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL), (unsigned __int8)(v28 - 1) <= 2u) || v28 == 5) )
    v29 = 0LL;
  else
    v29 = v11;
  v30 = (unsigned __int64 *)&v12[v8 + 1];
  v31 = MiDispatchFault(2, *v30, 0, 0, (__int64)&Process[1].IdealNode[12], a5, v29, 0LL, a6, (__int64)v54);
  if ( v31 == -1073532109 )
  {
    v32 = v54[0];
    if ( a6 == 1 )
      *(_BYTE *)(v54[0] + 191) |= 2u;
    MiIssueHardFault((__int64)&Process[1].IdealNode[12], a5, *v30, v32, v29, 1LL, a6);
LABEL_53:
    v33 = 0;
    v34 = a3;
    while ( (*(_DWORD *)*v34 & 1) != 0 )
    {
      ++v33;
      ++v34;
      if ( v33 > v8 )
      {
        v9 = v50;
        goto LABEL_57;
      }
    }
    return 3221226548LL;
  }
  if ( !v58 )
    goto LABEL_53;
  if ( v31 != -1073741801 )
  {
    if ( v31 != -1073740748 )
      goto LABEL_53;
    return 3221226548LL;
  }
  v44 = a3[v8];
  *v44 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v44) )
    MiWritePteShadow(v45);
  v46 = v52;
  if ( v52 )
  {
    MiDecreaseUsedPtesCount(v52);
    v47 = (unsigned __int64)*(unsigned int *)(v46 + 16) >> 16;
    if ( (v47 & 0x3FF) == 0 )
      MiDeletePageTableHierarchy(v47, a3[v8]);
  }
  return 3221225495LL;
}
