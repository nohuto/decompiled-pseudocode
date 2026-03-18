/*
 * XREFs of MmMapViewInSystemCache @ 0x1400A9520
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x140063B30 (MiCompareTbFlushTimeStamp.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiRemoveSystemCacheReferences @ 0x1402125C0 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  _DWORD *v6; // rax
  unsigned __int64 *v7; // r10
  _DWORD *v8; // r9
  _DWORD *v9; // r14
  BOOL v10; // ecx
  int v11; // edx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int16 *v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  int PteLink; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r10
  __int64 SystemCacheReverseMap; // r11
  unsigned __int64 v28; // rcx
  __int16 v29; // dx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r10
  signed __int32 v33[8]; // [rsp+0h] [rbp-168h] BYREF
  __int128 v34; // [rsp+30h] [rbp-138h]
  unsigned __int64 v35[2]; // [rsp+40h] [rbp-128h] BYREF
  int v36; // [rsp+50h] [rbp-118h] BYREF
  __int16 v37; // [rsp+54h] [rbp-114h]
  __int64 v38; // [rsp+58h] [rbp-110h]
  __int64 v39; // [rsp+60h] [rbp-108h]
  __int64 v40; // [rsp+68h] [rbp-100h]

  v3 = *(_DWORD *)(a1 + 56);
  *(_QWORD *)&v34 = a3;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v6 = (_DWORD *)MiSectionControlArea(a1, a2, a3);
  v9 = v6;
  v10 = (*v8 & 0xFFF) != 0;
  v11 = *v8 >> 12;
  v12 = (unsigned int)(v11 + v10);
  if ( !(v11 + v10) )
    KeBugCheckEx(0x1Au, 0x103087uLL, (ULONG_PTR)v6, 0LL, 0LL);
  v13 = MiOffsetToProtos(v6, *v7, v35);
  v35[1] = v35[0];
  v14 = v35[0] + v12;
  result = MiAddViewsForSection((volatile signed __int32 **)v13, v35[0] + v12, 5);
  if ( (int)result < 0 )
  {
    ++dword_14036D560;
    return result;
  }
  v15 = v9[15] & 0x3FF;
  v16 = *(__int16 **)(qword_14036C8F8 + 8 * v15);
  if ( *a2 )
  {
    v18 = ((*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v18 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v18 + 16));
      if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFF) )
      {
        v38 = 20LL;
        v36 = 0;
        v37 = 0;
        v39 = 0LL;
        v40 = 0LL;
        MiInsertTbFlushEntry(&v36, (__int64)(v18 << 25) >> 16, 64LL, 0LL);
        MiFlushTbList(&v36);
      }
    }
  }
  else
  {
    v17 = MiObtainSystemCacheView(*(_QWORD *)(qword_14036C8F8 + 8 * v15));
    v18 = v17;
    if ( !v17 )
    {
      ++dword_14036D560;
      MiRemoveSystemCacheReferences(v13, v14);
      return 3221225495LL;
    }
    *a2 = v17 << 25 >> 16;
  }
  *(_QWORD *)v18 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v18) )
    MiWritePteShadow(v20);
  *(_QWORD *)(v18 + 8) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v18 + 8) )
    MiWritePteShadow(v21);
  *(_QWORD *)(v18 + 16) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v18 + 16) )
    MiWritePteShadow(v22);
  *(_QWORD *)(v18 + 24) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v18 + 24) )
    MiWritePteShadow(v23);
  v24 = v18 + 8 * v12;
  v25 = *(_QWORD *)(v13 + 8) + 8LL * *(unsigned int *)(v13 + 44);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(*a2);
  *((_QWORD *)&v34 + 1) = *((_QWORD *)&v34 + 1) & 0xFFFF000000000000uLL | (*(_QWORD *)v34 >> 18);
  v28 = v34 & 0xFFFFFFFFFFFF0000uLL;
  v29 = *v16;
  *(_QWORD *)(SystemCacheReverseMap + 16) &= 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)(SystemCacheReverseMap + 24) = v13;
  *(_QWORD *)&v34 = v12 & 0x3F | v28 | ((unsigned __int64)(v29 & 0x3FF) << 6);
  *(_OWORD *)(SystemCacheReverseMap + 32) = v34;
  if ( !*((_QWORD *)v9 + 8) )
    *(_QWORD *)(SystemCacheReverseMap + 24) = v13 | 1;
  for ( ; v18 < v24; v26 = v32 + 8 )
  {
    if ( v26 >= v25 )
    {
      v13 = *(_QWORD *)(v13 + 16);
      v26 = *(_QWORD *)(v13 + 8);
      v30 = *(unsigned int *)(v13 + 44);
      *(_QWORD *)(SystemCacheReverseMap + 24) |= 1uLL;
      v25 = v26 + 8 * v30;
    }
    *(_QWORD *)v18 = MiMakePrototypePteDirect(v26);
    if ( (unsigned int)MiPteInShadowRange(v18) )
      MiWritePteShadow(v31);
    v18 += 8LL;
  }
  _InterlockedOr(v33, 0);
  *(_QWORD *)(SystemCacheReverseMap + 16) = *a2;
  MiManageSubsectionView(
    v13,
    SystemCacheReverseMap,
    (2 * (unsigned __int8)*(_QWORD *)(SystemCacheReverseMap + 24)) & 2 | 1u);
  return 0LL;
}
