/*
 * XREFs of MmMapViewInSystemCache @ 0x1400A2D00
 * Callers:
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400B7C30 (MiCompareTbFlushTimeStamp.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiRemoveSystemCacheReferences @ 0x14021A05C (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, __int64 a3)
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
  ULONG_PTR v13; // rsi
  __int64 v14; // rcx
  __int16 *v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 PteLink; // rax
  _KPROCESS *v19; // rdx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 SystemCacheReverseMap; // r10
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rcx
  __int16 v32; // dx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 PrototypePteDirect; // rax
  __int64 v36; // r11
  signed __int32 v37[8]; // [rsp+0h] [rbp-168h] BYREF
  __int128 v38; // [rsp+30h] [rbp-138h]
  unsigned __int64 v39[2]; // [rsp+40h] [rbp-128h] BYREF
  int v40; // [rsp+50h] [rbp-118h] BYREF
  __int16 v41; // [rsp+54h] [rbp-114h]
  __int64 v42; // [rsp+58h] [rbp-110h]
  __int64 v43; // [rsp+60h] [rbp-108h]
  __int64 v44; // [rsp+68h] [rbp-100h]

  v3 = *(_DWORD *)(a1 + 56);
  *(_QWORD *)&v38 = a3;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v6 = (_DWORD *)MiSectionControlArea(a1);
  v9 = v6;
  v10 = (*v8 & 0xFFF) != 0;
  v11 = *v8 >> 12;
  v12 = (unsigned int)(v11 + v10);
  if ( !(v11 + v10) )
    KeBugCheckEx(0x1Au, 0x103087uLL, (ULONG_PTR)v6, 0LL, 0LL);
  v13 = MiOffsetToProtos(v6, *v7, v39);
  v39[1] = v39[0];
  result = MiAddViewsForSection((__int64 *)v13, v39[0] + v12, 5u);
  if ( (int)result < 0 )
  {
    ++dword_140389820;
    return result;
  }
  v14 = v9[15] & 0x3FF;
  v15 = *(__int16 **)(qword_140388AF0 + 8 * v14);
  if ( *a2 )
  {
    v17 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v17 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v17 + 16));
      if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
      {
        v42 = 20LL;
        v40 = 0;
        v41 = 0;
        v43 = 0LL;
        v44 = 0LL;
        MiInsertTbFlushEntry(&v40, (__int64)(v17 << 25) >> 16, 64LL, 0);
        MiFlushTbList((__int64)&v40, v19);
      }
    }
  }
  else
  {
    v16 = MiObtainSystemCacheView(*(_QWORD *)(qword_140388AF0 + 8 * v14));
    v17 = v16;
    if ( !v16 )
    {
      ++dword_140389820;
      MiRemoveSystemCacheReferences(v13);
      return 3221225495LL;
    }
    *a2 = v16 << 25 >> 16;
  }
  *(_QWORD *)v17 = 0LL;
  v20 = 0xFFFFF6FB7DBED000uLL;
  v21 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v17, 0LL);
  v22 = v17 + 8;
  *(_QWORD *)(v17 + 8) = 0LL;
  if ( v17 + 8 >= v20 && v22 <= v21 )
    MiWritePteShadow(v22, 0LL);
  v23 = v17 + 16;
  *(_QWORD *)(v17 + 16) = 0LL;
  if ( v17 + 16 >= v20 && v23 <= v21 )
    MiWritePteShadow(v23, 0LL);
  v24 = v17 + 24;
  *(_QWORD *)(v17 + 24) = 0LL;
  if ( v17 + 24 >= v20 && v24 <= v21 )
    MiWritePteShadow(v24, 0LL);
  v25 = v17 + 8 * v12;
  v26 = *(_QWORD *)(v13 + 8) + 8LL * *(unsigned int *)(v13 + 44);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(*a2);
  *((_QWORD *)&v38 + 1) = *((_QWORD *)&v38 + 1) & 0xFFFF000000000000uLL | (*(_QWORD *)v38 >> 18);
  v31 = v38 & 0xFFFFFFFFFFFF0000uLL;
  v32 = *v15;
  *(_QWORD *)(SystemCacheReverseMap + 16) &= 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)(SystemCacheReverseMap + 24) = v13;
  v33 = v12 & 0x3F | v31 | ((unsigned __int64)(v32 & 0x3FF) << 6);
  *(_QWORD *)&v38 = v33;
  *(_OWORD *)(SystemCacheReverseMap + 32) = v38;
  if ( !*((_QWORD *)v9 + 8) )
    *(_QWORD *)(SystemCacheReverseMap + 24) = v13 | 1;
  for ( ; v17 < v25; v30 = v36 + 8 )
  {
    if ( v30 >= v26 )
    {
      v13 = *(_QWORD *)(v13 + 16);
      v30 = *(_QWORD *)(v13 + 8);
      v34 = *(unsigned int *)(v13 + 44);
      *(_QWORD *)(SystemCacheReverseMap + 24) |= 1uLL;
      v26 = v30 + 8 * v34;
    }
    PrototypePteDirect = MiMakePrototypePteDirect(v30, v33, v27, v28);
    *(_QWORD *)v17 = PrototypePteDirect;
    if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v17, PrototypePteDirect);
    v17 += 8LL;
  }
  _InterlockedOr(v37, 0);
  *(_QWORD *)(SystemCacheReverseMap + 16) = *a2;
  MiManageSubsectionView(
    v13,
    SystemCacheReverseMap,
    (2 * (unsigned __int8)*(_QWORD *)(SystemCacheReverseMap + 24)) & 2 | 1u);
  return 0LL;
}
