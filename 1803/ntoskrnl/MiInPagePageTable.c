/*
 * XREFs of MiInPagePageTable @ 0x14003D3E0
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     MiIsVadLarge @ 0x14000BFC0 (MiIsVadLarge.c)
 *     MiVadPureReserve @ 0x14000BFF0 (MiVadPureReserve.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiCheckFatalAccessViolation @ 0x14003B348 (MiCheckFatalAccessViolation.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiCheckVirtualAddress @ 0x14003E120 (MiCheckVirtualAddress.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiLeapPrefetch @ 0x140154650 (MiLeapPrefetch.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiGetLargeVadMappingIndex @ 0x140261B5C (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x140261C58 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(ULONG_PTR *a1, int a2)
{
  ULONG_PTR v3; // r11
  __int64 v4; // r14
  _KPROCESS *Process; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  ULONG_PTR *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR v13; // r10
  __int64 v14; // r11
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // r12d
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r9
  __int64 result; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  struct _KTHREAD *v26; // rcx
  int LargeVadMappingIndex; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 UsedPtesHandle; // rax
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rbx
  __int64 DemandZeroPte; // rax
  ULONG_PTR v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  char v40; // dl
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // xmm1_8
  int v44; // ecx
  ULONG_PTR v45; // [rsp+30h] [rbp-89h]
  ULONG_PTR *v46; // [rsp+38h] [rbp-81h]
  __int64 v47; // [rsp+40h] [rbp-79h] BYREF
  __int128 v48; // [rsp+50h] [rbp-69h] BYREF
  _OWORD v49[2]; // [rsp+60h] [rbp-59h] BYREF
  __m256i v50; // [rsp+80h] [rbp-39h]
  __int128 v51; // [rsp+A0h] [rbp-19h]
  __int128 v52; // [rsp+B0h] [rbp-9h]
  ULONG_PTR v53; // [rsp+C0h] [rbp+7h]
  BOOL v54; // [rsp+120h] [rbp+67h]
  unsigned int v55; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v56; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 LeafVa; // [rsp+138h] [rbp+7Fh]

  v3 = a1[2];
  v4 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v3 & 1) == 0 || (v6 = v3 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v6 = 0LL;
  v7 = a1[a2 + 3];
  v8 = a1 + 7;
  v46 = a1 + 7;
  v54 = MiPteInShadowRange(v7);
  if ( v54 )
    MiPteHasShadow(v10, v9, v11, v12);
  LeafVa = MiGetLeafVa(*a1);
  if ( v15 )
  {
LABEL_58:
    v36 = a1[2];
    v37 = *((_OWORD *)a1 + 1);
    v48 = *(_OWORD *)a1;
    v49[0] = v37;
    v38 = *((_OWORD *)a1 + 3);
    v49[1] = *((_OWORD *)a1 + 2);
    *(_OWORD *)v50.m256i_i8 = v38;
    v39 = *((_OWORD *)a1 + 5);
    *(_OWORD *)&v50.m256i_u64[2] = *((_OWORD *)a1 + 4);
    v51 = v39;
    v53 = a1[14];
    v52 = *((_OWORD *)a1 + 6);
    if ( (v36 & 1) != 0 )
    {
      v40 = *(_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (unsigned __int8)(v40 - 1) <= 2u || v40 == 5 )
        *(_QWORD *)&v49[0] = 0LL;
    }
    *((_QWORD *)&v48 + 1) = 2LL;
    *(_QWORD *)&v48 = (__int64)(v7 << 25) >> 16;
    MiFillPteHierarchy(v48, (char *)v49 + 8);
    result = MiDispatchFault((__int64)&v48, &v47, v41, v42);
    if ( (_DWORD)result == -1073532109 )
    {
      if ( (_BYTE)v51 == 1 )
        *(_BYTE *)(v47 + 191) |= 2u;
      result = MiIssueHardFault(&v48);
    }
    if ( v50.m256i_i8[17] )
    {
      v43 = v50.m256i_i64[3];
      *(_OWORD *)v8 = *(_OWORD *)&v50.m256i_u64[1];
      v8[2] = v43;
    }
    if ( (int)result < 0 )
      return result;
    if ( !*((_BYTE *)a1 + 65) )
      return 0LL;
    v44 = 3;
    while ( (*(_DWORD *)a1[v4 + 3] & 1) != 0 )
    {
      if ( v44 != (_DWORD)v4 )
      {
        if ( --v44 )
          continue;
      }
      return 0LL;
    }
    return 3221226548LL;
  }
  if ( v13 >= 0xFFFF800000000000uLL )
  {
    if ( v6 )
      return 3221226548LL;
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL && v14 )
      KeBugCheckEx(0x50u, v13, a1[1], v7, 6uLL);
  }
  v16 = MiCheckVirtualAddress(v13, &v55, &v56);
  v19 = v55;
  v45 = v16;
  if ( v55 != 24 )
  {
    v24 = v56;
    if ( v56 && (*(_DWORD *)(v56 + 48) & 0x4000) != 0 && v6 )
    {
      if ( ((v25 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v55 >> 3 != 3) || (v55 & 7) == 0) && v55 >> 3 != 1
        || (*(_DWORD *)(v25 + 80) & 0x4000) == 0 )
      {
        MiAdvanceFaultList(v25);
        return 3221226548LL;
      }
    }
    v26 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10];
    if ( v26 )
    {
      if ( v6 && *(_QWORD *)(v6 + 56) != v6 + 56 )
        return 3221226548LL;
      if ( v26 != KeGetCurrentThread() )
      {
        *((_DWORD *)a1 + 21) |= 8u;
        return 3221226548LL;
      }
      v24 = v56;
      v19 = v55;
    }
    if ( v24 )
    {
      if ( v6 && (unsigned int)MiIsVadLarge(v24) )
      {
        MiLeapPrefetch(
          v6,
          (((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12) | 0xFFF)
        + 4096);
        result = 3221226548LL;
        *(_BYTE *)(v6 + 1) = 1;
        return result;
      }
      if ( (*(_BYTE *)(v24 + 48) & 7) == 7 && !(unsigned int)MiVadPureReserve(v24) )
      {
        LargeVadMappingIndex = MiGetLargeVadMappingIndex(v24, *a1);
        if ( (_DWORD)v4 == LargeVadMappingIndex )
        {
          if ( (unsigned int)MiInsertLargeVadMapping(*a1, v45, LargeVadMappingIndex, v7, v19) )
          {
            if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
            {
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16, v28, v29, v30);
              MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
            }
            v32 = MiLargePageFault(a1, v7, v29);
            v33 = -1073740748;
            if ( v32 < 0 )
              return (unsigned int)v32;
            return v33;
          }
          else
          {
            LOBYTE(v28) = 17;
            MiReleaseFaultState(v46, v28, 0LL);
            MmAccessFault(0LL, v45, 0, 0LL);
            *((_BYTE *)v46 + 9) = 0;
            *((_BYTE *)v46 + 8) = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
            return 3221226548LL;
          }
        }
      }
    }
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
    {
      v34 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16, v17, v24, v18);
      MiLockPageAtDpcInline(v34);
      *(_QWORD *)(v34 + 16) ^= ((unsigned int)*(_QWORD *)(v34 + 16) ^ ((unsigned int)*(_QWORD *)(v34 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiIsAddressValid(*(_QWORD *)(v34 + 8) | 0x8000000000000000uLL);
    }
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    *(_QWORD *)v7 = DemandZeroPte;
    if ( v54 )
      MiWritePteShadow(v7, DemandZeroPte);
    v8 = a1 + 7;
    goto LABEL_58;
  }
  v20 = v56;
  MiCheckFatalAccessViolation(*a1, v56, a1[1], (__int64)Process);
  if ( *a1 <= 0x7FFFFFFEFFFFLL && v20 && v6 )
  {
    v21 = MiGetLeafVa(v7 + 8);
    if ( v21 < v22 )
    {
      ++*(_QWORD *)(v6 + 24);
      result = 3221225477LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_BYTE *)(v6 + 1) = 1;
      return result;
    }
    MiLeapPrefetch(v6, v21);
    *(_BYTE *)(v6 + 1) = 1;
  }
  return 3221225477LL;
}
