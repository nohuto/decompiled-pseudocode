/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1400DC7CC
 * Callers:
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiSplitDriverPage @ 0x140214314 (MiSplitDriverPage.c)
 *     MiLockHotPatchPages @ 0x140219014 (MiLockHotPatchPages.c)
 *     MiBackSingleImageWithPagefile @ 0x1405C87A4 (MiBackSingleImageWithPagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiRemoveSystemImagePage @ 0x1400BB9FC (MiRemoveSystemImagePage.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     MiDriverPageMustStayResident @ 0x1400DDE60 (MiDriverPageMustStayResident.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  char v5; // di
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  char v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  char *AnyMultiplexedVm; // r12
  __int64 v13; // r15
  __int64 v14; // r15
  char v15; // cl
  char v16; // al
  __int64 DriverPage; // r13
  LONG *SharedVm; // rbx
  KIRQL v19; // al
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  ULONG_PTR PteShadow; // rbx
  LONG *v23; // rax
  int v24; // eax
  LONG *v25; // rbx
  KIRQL v26; // al
  unsigned __int8 v27; // r9
  __int64 v28; // r10
  int v29; // r11d
  __int64 v30; // r15
  LONG *v31; // rax
  LONG *v32; // rbx
  KIRQL v33; // al
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  LONG *v38; // rax
  unsigned __int8 v40; // [rsp+30h] [rbp-D0h]
  char v43; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h]
  _QWORD *v45; // [rsp+68h] [rbp-98h]
  ULONG_PTR v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  unsigned __int64 v49; // [rsp+88h] [rbp-78h]
  int v50; // [rsp+90h] [rbp-70h] BYREF
  __int16 v51; // [rsp+94h] [rbp-6Ch]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v40 = a4;
  v5 = a4 == 17;
  v6 = a2;
  v45 = 0LL;
  v7 = 0;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v11 = 2LL;
    v44 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    AnyMultiplexedVm = (char *)(v44 + 3008);
  }
  else
  {
    v44 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v11 = 0LL;
  }
  v13 = *(_QWORD *)(v9 + 48) >> 9;
  v47 = *(_QWORD *)(qword_140388AF0 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 86));
  v14 = v10 + (v13 & 0x7FFFFFFFF8LL);
  v15 = 0;
  v48 = *(_QWORD *)(v9 + 240);
  if ( (a5 & 3) == 0 && (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    v15 = 16;
  v52 = 20LL;
  v16 = v15 | 1;
  v50 = v11;
  v51 = 0;
  if ( (a5 & 4) == 0 )
    v16 = v15;
  v53 = 0LL;
  DriverPage = -1LL;
  v43 = v16;
  v54 = 0LL;
  if ( v8 == 17 )
  {
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v19 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v40 = v19;
  }
  v20 = a3;
  if ( v6 <= a3 )
  {
    v21 = v6 - v14;
    while ( 1 )
    {
      PteShadow = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
        v20 = a3;
      }
      v46 = PteShadow;
      if ( !PteShadow )
        goto LABEL_56;
      if ( (PteShadow & 1) != 0 )
      {
        v30 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v46) - 0x58000000000LL;
        if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) == 0
          || *(__int64 *)(v30 + 8) >= 0
          || (a5 & 1) != 0 && ((PteShadow & 0x800) != 0 || (PteShadow & 0x200) == 0) )
        {
          goto LABEL_55;
        }
        if ( (MiFlags & 0x10000) != 0
          && (v44 || (a5 & 2) != 0)
          && (((unsigned __int8)*(_DWORD *)(v30 + 16) >> 5) & 2) != 0 )
        {
          v7 = -1073741755;
          break;
        }
        if ( v29 && (*(_DWORD *)(v28 + 196) & 1) == 0 && (*(_BYTE *)(v30 + 35) & 8) != 0 )
          goto LABEL_55;
        if ( DriverPage != -1 )
        {
          MiFlushTbList((__int64)&v50, (_KPROCESS *)v11);
          v49 = (__int64)(v6 << 25) >> 16;
          MiCopyOnWriteEx(v49, (__int64 *)v6, DriverPage, v40, v43);
          v34 = a1;
          if ( v44 )
          {
            if ( !v45 )
            {
              v45 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
              if ( *((_BYTE *)v45 + 64) )
                v5 |= 2u;
            }
          }
          if ( (v5 & 2) != 0 && (unsigned __int8)MiDriverPageMustStayResident(v34, v6) )
          {
            MiLockPageAtDpcInline(v30);
            MiRemoveLockedPageChargeAndDecRef(v30);
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v35 = 48 * DriverPage - 0x58000000000LL;
            MiLockPageAtDpcInline(v35);
            MiAddLockedPageCharge(v35, 1LL, v36);
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v35 = 48 * DriverPage - 0x58000000000LL;
          }
          DriverPage = -1LL;
          if ( (MiFlags & 0x10000) != 0 && ((*(_QWORD *)(v35 + 40) >> 54) & 7) == 3 )
          {
            v37 = v49;
            _bittestandset(*(signed __int32 **)(v48 + 8), v21 >> 3);
            if ( (MiGetWsleContents(v21 >> 3, v37) & 0xF) != 9 )
            {
              MiLockPageAtDpcInline(v35);
              MiRemoveSystemImagePage((__int64)AnyMultiplexedVm, v6, v35);
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
LABEL_55:
          v20 = a3;
LABEL_56:
          v6 += 8LL;
          v21 += 8LL;
          goto LABEL_57;
        }
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v27);
        v31 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v31, retaddr);
        else
          *v31 = 0;
        __writecr8(v40);
        DriverPage = MiAllocateDriverPage(v47);
        v32 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        v33 = ExAcquireSpinLockExclusive(v32);
        v32[1] = 0;
        v40 = v33;
        if ( DriverPage == -1 )
        {
          v7 = -1073741801;
          break;
        }
      }
      else
      {
        if ( (PteShadow & 0x400) == 0 )
          goto LABEL_56;
        MiFlushTbList((__int64)&v50, (_KPROCESS *)v11);
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v40);
        v23 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v23, retaddr);
        else
          *v23 = 0;
        __writecr8(v40);
        v24 = MmAccessFault(0LL, (__int64)(v6 << 25) >> 16, 0LL, 0LL);
        if ( v24 < 0 )
          KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v6 << 25) >> 16, PteShadow, v24);
        v25 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        v26 = ExAcquireSpinLockExclusive(v25);
        v25[1] = 0;
        v40 = v26;
      }
      v20 = a3;
LABEL_57:
      if ( v6 > v20 )
      {
        v7 = 0;
        break;
      }
    }
  }
  MiFlushTbList((__int64)&v50, (_KPROCESS *)v11);
  if ( (v5 & 1) != 0 )
  {
    MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v40);
    v38 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v38, retaddr);
    else
      *v38 = 0;
    __writecr8(v40);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v7;
}
