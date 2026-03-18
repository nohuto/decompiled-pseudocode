/*
 * XREFs of MmCopyToCachedPage @ 0x1401130D0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiDirtySystemCachePte @ 0x140046508 (MiDirtySystemCachePte.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUnlinkStandbyPfn @ 0x1400BBD84 (MiUnlinkStandbyPfn.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1401B3310 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiMapFrame @ 0x140256814 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x1402568B0 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x140258C9C (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x140258D38 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x1402590DC (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x140259210 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x14074D038 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        ULONG_PTR a4,
        unsigned int a5)
{
  ULONG_PTR BugCheckParameter4; // r11
  ULONG_PTR v6; // r15
  ULONG_PTR v7; // r12
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 *v20; // rcx
  unsigned __int64 v21; // r14
  char v22; // si
  __int64 v24; // rax
  __int64 v25; // r10
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 *PrototypePteDirect; // r15
  PSLIST_ENTRY v33; // r10
  signed __int64 v34; // r14
  __int64 v35; // rbx
  ULONG_PTR i; // rdi
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rbx
  __int64 v42; // rax
  int v43; // r14d
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // esi
  int v49; // edi
  int PageAvoidRead; // eax
  int v51; // eax
  unsigned __int64 v52; // rax
  void *v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  char v56; // bl
  unsigned __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int8 v61[4]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v62; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v63; // [rsp+48h] [rbp-A0h]
  int v64; // [rsp+50h] [rbp-98h]
  PSLIST_ENTRY ListEntry; // [rsp+58h] [rbp-90h]
  unsigned __int64 v66; // [rsp+60h] [rbp-88h] BYREF
  int v67; // [rsp+68h] [rbp-80h]
  unsigned __int64 v68; // [rsp+70h] [rbp-78h] BYREF
  ULONG_PTR v69; // [rsp+78h] [rbp-70h]
  __int64 v70; // [rsp+80h] [rbp-68h]
  __int64 v71; // [rsp+88h] [rbp-60h] BYREF
  __int64 v72; // [rsp+90h] [rbp-58h]
  unsigned __int64 v73; // [rsp+98h] [rbp-50h]

  BugCheckParameter4 = a3;
  v6 = BugCheckParameter2;
  v7 = 0LL;
  v63 = 0LL;
  v64 = 1;
  ListEntry = 0LL;
  v8 = (unsigned __int64 *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v9 = *v8;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8 * ((v10 >> 3) & 0x1FF));
      v13 = v9 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v9;
      v9 = v13;
      if ( (v12 & 0x42) != 0 )
        v9 = v13 | 0x42;
    }
  }
  v68 = v9;
  if ( (unsigned __int64)&v68 < 0xFFFFF6FB7DBED000uLL || (v14 = 1, (unsigned __int64)&v68 > 0xFFFFF6FB7DBED7F8uLL) )
    v14 = 0;
  if ( v14 && (unsigned int)MiPteHasShadow() && (v9 & 1) != 0 && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 8 * (((unsigned __int64)&v68 >> 3) & 0x1FF));
      v17 = v9 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v9;
      v9 = v17;
      if ( (v16 & 0x42) != 0 )
        v9 = v17 | 0x42;
    }
  }
  v18 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v18 )
    v18 += 48 * ((v6 >> 18) & 7);
  v19 = *(_QWORD *)(v18 + 24);
  v20 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v19 & 1) == 0 )
    v20 = (__int64 *)v19;
  v72 = *v20;
  v70 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v72 + 60) & 0x3FF)) + 7168LL;
  if ( BugCheckParameter4 + a4 > 0x1000 || BugCheckParameter4 + a4 < a4 )
    KeBugCheckEx(0x1Au, 0x776uLL, v6, a4, BugCheckParameter4);
  v21 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = v21;
  v22 = a5;
  v67 = a5 & 4;
  if ( (a5 & 4) != 0 && ((BugCheckParameter4 & 0x3F) != 0 || (a4 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v7 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
    v69 = v7;
    if ( !v7 )
      return 3221225626LL;
  }
  else
  {
    v69 = 0LL;
  }
  v24 = MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v71 = v24;
  if ( (v24 & 1) == 0 )
  {
    v27 = v63;
LABEL_45:
    v28 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
    {
      if ( (v28 & 1) == 0 )
      {
LABEL_60:
        PrototypePteDirect = (unsigned __int64 *)MiGetPrototypePteDirect(v28);
        v33 = 0LL;
LABEL_61:
        v34 = BugCheckParameter2;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v35 = 1LL;
              i = (ULONG_PTR)v33;
              v61[0] = 17;
              v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PrototypePteDirect);
              v66 = v37;
              if ( (v37 & 1) == 0 && (v37 & 0x400) != 0 )
                v35 = v40;
              if ( v35 )
              {
                for ( i = MiLockProtoPoolPage((unsigned __int64)PrototypePteDirect, v61);
                      !i;
                      i = MiLockProtoPoolPage((unsigned __int64)PrototypePteDirect, v61) )
                {
                  MmAccessFault(2uLL, (signed __int64)PrototypePteDirect, 0, 0LL);
                }
                v41 = MiLockLeafPage(PrototypePteDirect, 0LL);
                v42 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PrototypePteDirect);
                v66 = v42;
                v39 = v61[0];
                if ( v41 )
                  break;
              }
              if ( i )
                MiUnlockProtoPoolPage(i, (unsigned __int8)v39, v38, v39);
              if ( (*(_DWORD *)(v72 + 56) & 0x40000000) != 0 )
              {
                v49 = MmAccessFault(0LL, v34, 0, 0LL);
                v62 = v49;
                if ( v49 < 0 )
                  goto LABEL_116;
                v33 = 0LL;
              }
              else
              {
                PageAvoidRead = MiMakePageAvoidRead(
                                  (unsigned __int64)PrototypePteDirect,
                                  a2,
                                  a3,
                                  a4,
                                  v22,
                                  (unsigned __int64)&v66,
                                  &v62);
                if ( !PageAvoidRead )
                  return v62;
                v51 = PageAvoidRead - 1;
                if ( v51 )
                {
                  v54 = v51 - 2;
                  if ( !v54 )
                  {
                    v64 = 0;
                    goto LABEL_101;
                  }
                  if ( v54 != 1 )
LABEL_101:
                    MiMakeSystemCachePteValid(v70, v73, v66, v22);
                  v6 = BugCheckParameter2;
                  goto LABEL_103;
                }
                v33 = 0LL;
              }
            }
            if ( (v42 & 1) != 0 )
            {
              *(_QWORD *)(v41 + 24) ^= (*(_QWORD *)(v41 + 24) ^ ((*(_QWORD *)(v41 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
              v43 = 0;
              goto LABEL_80;
            }
            v44 = *(_QWORD *)(v41 + 16);
            v45 = (v44 & 0x400) != 0 ? v44 >> 11 : v44 >> 3;
            if ( (v45 & 1) != 0 )
              break;
LABEL_78:
            v43 = MiUnlinkStandbyPfn(PrototypePteDirect, v22);
            if ( !v43 )
              v66 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PrototypePteDirect);
LABEL_80:
            v62 = 0;
            v48 = 0;
            if ( v7 && !v43 && !(unsigned int)MiAddLockedPageCharge(v41, 0) )
            {
              v62 = -1073741670;
              v48 = -1073741670;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(i, v61[0], v38, v39);
            v33 = ListEntry;
            if ( ListEntry )
            {
              MiProcessTransitionHeatBatch(ListEntry);
              MiFreeTransitionPageHeatList(ListEntry);
              v33 = 0LL;
              ListEntry = 0LL;
            }
            if ( v48 < 0 )
            {
              v49 = v62;
              goto LABEL_116;
            }
            v22 = a5;
            if ( v43 == 1 )
              goto LABEL_61;
            if ( v43 != 2 )
            {
              if ( v7 )
              {
                v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v66);
                v63 = MiMapFrame(v7, (v52 >> 12) & 0xFFFFFFFFFLL);
              }
              goto LABEL_101;
            }
            v34 = BugCheckParameter2;
            v49 = MmAccessFault(0LL, BugCheckParameter2, 0, 0LL);
            v62 = v49;
            if ( v49 < 0 )
              goto LABEL_116;
            v33 = 0LL;
          }
          ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v41, 0LL, 0LL, v61[0]);
          if ( ListEntry != (PSLIST_ENTRY)-1LL )
          {
            v22 = a5;
            goto LABEL_78;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockProtoPoolPage(i, v61[0], v46, v47);
          MiReplenishTransitionPageHeatList();
          v33 = 0LL;
          ListEntry = 0LL;
          v22 = a5;
        }
      }
      if ( (v28 & 0x20) == 0 || (v28 & 0x42) == 0 )
      {
        v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8 * ((v21 >> 3) & 0x1FF));
          v31 = v28 | 0x20;
          if ( (v30 & 0x20) == 0 )
            v31 = v28;
          v28 = v31;
          if ( (v30 & 0x42) != 0 )
            v28 = v31 | 0x42;
        }
      }
    }
    if ( (v28 & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_104;
      v27 = MiMapSystemCachePage(v7, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5);
      v63 = v27;
      if ( v27 )
        goto LABEL_104;
    }
    goto LABEL_60;
  }
  v26 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v7 )
  {
    v27 = MiMapSystemCachePage(v7, v26, a5);
    v63 = v27;
    if ( !v27 )
      goto LABEL_45;
  }
  else
  {
    MiDirtySystemCachePte(v25, v26, v24);
LABEL_103:
    v27 = v63;
  }
LABEL_104:
  v49 = 0;
  v62 = 0;
  if ( v64 )
  {
    if ( !v27 )
      v27 = v6;
    v53 = (void *)(v27 + a3);
    if ( v67 )
      RtlCopyMemoryNonTemporal(v53, a2, a4);
    else
      memmove(v53, a2, a4);
  }
LABEL_116:
  if ( v7 )
  {
    v55 = MI_READ_PTE_LOCK_FREE(v7);
    v56 = v55;
    v71 = v55;
    MiReleasePtes((__int64)&qword_1403CC5E0, v7, 1uLL);
    if ( (v56 & 1) != 0 )
    {
      v57 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v71) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      v61[0] = MiLockPageInline(v57);
      MiRemoveLockedPageChargeAndDecRef(v57, v58, v59, v60);
      _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v61[0]);
      return v62;
    }
  }
  return (unsigned int)v49;
}
