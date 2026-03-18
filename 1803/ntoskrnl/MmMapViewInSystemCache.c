/*
 * XREFs of MmMapViewInSystemCache @ 0x1400DD850
 * Callers:
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiCompareTbFlushTimeStamp @ 0x140070D44 (MiCompareTbFlushTimeStamp.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiRemoveSystemCacheReferences @ 0x1402569F0 (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  ULONG_PTR v6; // rax
  _QWORD *v7; // r10
  _DWORD *v8; // r9
  ULONG_PTR v9; // r15
  BOOL v10; // ecx
  int v11; // edx
  __int64 v12; // r12
  ULONG_PTR v13; // rax
  __int64 v14; // rbp
  ULONG_PTR v15; // rsi
  __int64 v16; // rcx
  __int16 *v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  int PteLink; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 SystemCacheReverseMap; // r10
  unsigned __int64 v40; // rcx
  __int16 v41; // dx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v45; // r11
  signed __int32 v46[8]; // [rsp+0h] [rbp-168h] BYREF
  __int128 v47; // [rsp+30h] [rbp-138h]
  __int64 *v48; // [rsp+40h] [rbp-128h]
  __int64 v49; // [rsp+48h] [rbp-120h] BYREF
  int v50; // [rsp+50h] [rbp-118h] BYREF
  __int16 v51; // [rsp+54h] [rbp-114h]
  __int64 v52; // [rsp+58h] [rbp-110h]
  __int64 v53; // [rsp+60h] [rbp-108h]
  __int64 v54; // [rsp+68h] [rbp-100h]

  v3 = *(_DWORD *)(a1 + 56);
  *(_QWORD *)&v47 = a3;
  v48 = a2;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v6 = MiSectionControlArea(a1);
  v9 = v6;
  v10 = (*v8 & 0xFFF) != 0;
  v11 = *v8 >> 12;
  v12 = (unsigned int)(v11 + v10);
  if ( !(v11 + v10) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v6, 0LL, 0LL);
  v13 = MiOffsetToProtos(v6, *v7, &v49);
  v14 = v49;
  v15 = v13;
  result = MiAddViewsForSection(v13);
  if ( (int)result < 0 )
  {
    ++dword_1403CCDE0;
    return result;
  }
  v16 = *(_WORD *)(v9 + 60) & 0x3FF;
  v17 = *(__int16 **)(qword_1403CBD88 + 8 * v16);
  if ( *a2 )
  {
    v19 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v19 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v19 + 16));
      if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFF) )
      {
        v52 = 20LL;
        v50 = 0;
        v51 = 0;
        v53 = 0LL;
        v54 = 0LL;
        MiInsertTbFlushEntry((__int64)&v50, (__int64)(v19 << 25) >> 16, 64LL, 0);
        MiFlushTbList(&v50);
      }
    }
  }
  else
  {
    v18 = MiObtainSystemCacheView(*(_QWORD *)(qword_1403CBD88 + 8 * v16));
    v19 = v18;
    if ( !v18 )
    {
      ++dword_1403CCDE0;
      MiRemoveSystemCacheReferences(v15);
      return 3221225495LL;
    }
    *a2 = v18 << 25 >> 16;
  }
  *(_QWORD *)v19 = ZeroPte;
  if ( MiPteInShadowRange(v19) )
  {
    MiWritePteShadow(v22, v21, v23);
    v21 = ZeroPte;
  }
  *(_QWORD *)(v19 + 8) = v21;
  if ( MiPteInShadowRange(v19 + 8) )
  {
    MiWritePteShadow(v25, v24, v26);
    v24 = ZeroPte;
  }
  *(_QWORD *)(v19 + 16) = v24;
  if ( MiPteInShadowRange(v19 + 16) )
  {
    MiWritePteShadow(v28, v27, v29);
    v27 = ZeroPte;
  }
  *(_QWORD *)(v19 + 24) = v27;
  if ( MiPteInShadowRange(v19 + 24) )
    MiWritePteShadow(v31, v30, v32);
  v33 = *(_QWORD *)(v15 + 8);
  v34 = v19 + 8 * v12;
  v35 = v33 + 8 * v14;
  v36 = v33 + 8LL * *(unsigned int *)(v15 + 44);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(*v48, v30);
  *((_QWORD *)&v47 + 1) = (*(_QWORD *)v47 >> 18) | *((_QWORD *)&v47 + 1) & 0xFFFF000000000000uLL;
  v40 = v47 & 0xFFFFFFFFFFFF0000uLL;
  v41 = *v17;
  *(_QWORD *)(SystemCacheReverseMap + 16) &= 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)(SystemCacheReverseMap + 24) = v15;
  v42 = v12 & 0x3F | v40 | ((unsigned __int64)(v41 & 0x3FF) << 6);
  *(_QWORD *)&v47 = v42;
  *(_OWORD *)(SystemCacheReverseMap + 32) = v47;
  if ( !*(_QWORD *)(v9 + 64) )
    *(_QWORD *)(SystemCacheReverseMap + 24) = v15 | 1;
  for ( ; v19 < v34; v35 += 8LL )
  {
    if ( v35 >= v36 )
    {
      v15 = *(_QWORD *)(v15 + 16);
      v35 = *(_QWORD *)(v15 + 8);
      v43 = *(unsigned int *)(v15 + 44);
      *(_QWORD *)(SystemCacheReverseMap + 24) |= 1uLL;
      v36 = v35 + 8 * v43;
    }
    PrototypePteDirect = MiMakePrototypePteDirect(v35, v42, v37, v38);
    *(_QWORD *)v19 = PrototypePteDirect;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= v45 )
      MiWritePteShadow(v19, PrototypePteDirect, v37);
    v19 += 8LL;
  }
  _InterlockedOr(v46, 0);
  *(_QWORD *)(SystemCacheReverseMap + 16) = *v48;
  MiManageSubsectionView(
    v15,
    SystemCacheReverseMap,
    (2 * (unsigned __int8)*(_QWORD *)(SystemCacheReverseMap + 24)) & 2 | 1u);
  return 0LL;
}
