/*
 * XREFs of MmCopyToCachedPage @ 0x14001CF90
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E4FCC (HvViewMapCopyToFileOffset.c)
 * Callees:
 *     MiDirtySystemCachePte @ 0x14001E5F0 (MiDirtySystemCachePte.c)
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x14001E98C (MiUnlinkStandbyPfn.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400E5400 (RtlInterlockedSetClearRunEx.c)
 *     MiReturnSystemPtes @ 0x1400F60D0 (MiReturnSystemPtes.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1401896B0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiCaptureSystemCachePte @ 0x140219D54 (MiCaptureSystemCachePte.c)
 *     MiMapFrame @ 0x140219E5C (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x140219F0C (MiMapSystemCachePage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiCheckPteRelease @ 0x14022B9CC (MiCheckPteRelease.c)
 *     MiMapCacheExceptionFilter @ 0x1406E23F8 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(ULONG_PTR a1, void *a2, __int64 a3, SIZE_T a4, unsigned int a5)
{
  ULONG_PTR v5; // rbx
  unsigned int v6; // r13d
  unsigned __int64 v7; // r15
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r9d
  ULONG_PTR v16; // r10
  ULONG_PTR v17; // r11
  unsigned __int64 v18; // rcx
  __int64 *v19; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 *PrototypePteDirect; // rbx
  __int64 i; // rdi
  unsigned __int8 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  int v31; // r14d
  __int64 v32; // rax
  int locked; // eax
  int v34; // ecx
  int v35; // edi
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  void *v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rbx
  ULONG_PTR BugCheckParameter4; // r14
  __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  __int64 updated; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // r9
  volatile signed __int32 *v50; // r8
  ULONG_PTR v51; // r10
  __int64 v52; // rsi
  int v53; // eax
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  ULONG_PTR v57; // r12
  ULONG_PTR v58; // r14
  ULONG_PTR v59; // rdi
  unsigned __int64 v60; // r9
  _QWORD *v61; // rax
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  __int64 v64; // rbx
  signed __int32 v65[8]; // [rsp+0h] [rbp-1D8h] BYREF
  _BYTE v66[4]; // [rsp+40h] [rbp-198h] BYREF
  int v67; // [rsp+44h] [rbp-194h] BYREF
  unsigned int v68; // [rsp+48h] [rbp-190h]
  __int64 v69; // [rsp+50h] [rbp-188h]
  __int64 v70; // [rsp+58h] [rbp-180h] BYREF
  unsigned int v71; // [rsp+60h] [rbp-178h]
  int v72; // [rsp+64h] [rbp-174h]
  __int64 v73; // [rsp+68h] [rbp-170h] BYREF
  void *Source; // [rsp+70h] [rbp-168h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-160h]
  SIZE_T Length; // [rsp+80h] [rbp-158h]
  unsigned __int64 v77; // [rsp+88h] [rbp-150h]
  __int64 v78; // [rsp+90h] [rbp-148h]
  __int64 v79; // [rsp+98h] [rbp-140h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-130h]
  __int64 *v82; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v83; // [rsp+B8h] [rbp-120h]
  int v84; // [rsp+D0h] [rbp-108h] BYREF
  __int16 v85; // [rsp+D4h] [rbp-104h]
  __int64 v86; // [rsp+D8h] [rbp-100h]
  __int64 v87; // [rsp+E0h] [rbp-F8h]
  __int64 v88; // [rsp+E8h] [rbp-F0h]

  Length = a4;
  v5 = (unsigned int)a3;
  v71 = a3;
  Source = a2;
  BugCheckParameter1 = a1;
  v6 = a5;
  v68 = a5;
  v7 = 0LL;
  v69 = 0LL;
  v8 = 1LL;
  v72 = 1;
  v9 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v9;
  v11 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL )
  {
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v9, *v9);
  }
  v80 = PteShadow;
  v12 = MI_GET_PFN_FROM_PTE(&v80, v11, a3, v8);
  v18 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 48 * ((v16 >> 18) & 7) + 24);
  if ( ((unsigned __int8)v18 & (unsigned __int8)v15) != 0 )
    v18 &= ~1uLL;
  v81 = *(_QWORD *)v18;
  v78 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v81 + 60) & 0x3FF)) + 6080LL;
  if ( v17 + v5 > 0x1000 || v17 + v5 < v17 )
    KeBugCheckEx(0x1Au, 0x776uLL, v16, v17, v5);
  v19 = (__int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v82 = v19;
  if ( (a5 & 4) != 0 && ((v5 & 0x3F) != 0 || (v17 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v21 = MiReservePtes(&qword_140389360, v15);
    v77 = v21;
    if ( !v21 )
      return 3221225626LL;
  }
  else
  {
    v21 = 0LL;
    v77 = 0LL;
  }
  v83 = v21;
  v22 = *v19;
  if ( (unsigned __int64)v19 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL )
    v22 = MiReadPteShadow(v19, *v19);
  if ( (v22 & 1) != 0 )
  {
    if ( !v21 )
    {
      MiDirtySystemCachePte(v78, v19, v22);
      v23 = 0LL;
      goto LABEL_73;
    }
    v23 = MiMapSystemCachePage(v21, v19, a5);
    v69 = v23;
    if ( v23 )
      goto LABEL_73;
  }
  v24 = MiCaptureSystemCachePte(v19, v13, v14, 0LL);
  v79 = v24;
  if ( (v24 & 1) == 0 || v21 && (v23 = MiMapSystemCachePage(v21, v19, a5), (v69 = v23) == 0) )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v24);
    while ( 1 )
    {
      i = 0LL;
      v27 = 17;
      v66[0] = 17;
      v28 = *PrototypePteDirect;
      if ( (unsigned __int64)PrototypePteDirect >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)PrototypePteDirect <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v28 = MiReadPteShadow(PrototypePteDirect, *PrototypePteDirect);
      }
      v73 = v28;
      if ( (v28 & 1) == 0 && (v28 & 0x400) != 0 )
        goto LABEL_57;
      for ( i = MiLockProtoPoolPage(PrototypePteDirect, v66); !i; i = MiLockProtoPoolPage(PrototypePteDirect, v66) )
        MmAccessFault(2uLL, (ULONG_PTR)PrototypePteDirect);
      v29 = MiLockLeafPage(PrototypePteDirect, 0LL);
      v30 = *PrototypePteDirect;
      if ( (unsigned __int64)PrototypePteDirect >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)PrototypePteDirect <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v30 = MiReadPteShadow(PrototypePteDirect, *PrototypePteDirect);
      }
      v73 = v30;
      if ( v29 )
      {
        if ( (v30 & 1) != 0 )
        {
          *(_QWORD *)(v29 + 24) ^= (((*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v29 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          v31 = 0;
        }
        else
        {
          v31 = MiUnlinkStandbyPfn(PrototypePteDirect, v68);
          if ( !v31 )
          {
            v32 = *PrototypePteDirect;
            if ( (unsigned __int64)PrototypePteDirect >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)PrototypePteDirect <= 0xFFFFF6FB7DBED7F8uLL )
            {
              v32 = MiReadPteShadow(PrototypePteDirect, *PrototypePteDirect);
            }
            v73 = v32;
          }
        }
        v67 = 0;
        if ( v21 && !v31 )
        {
          locked = MiAddLockedPageCharge(v29, 0LL);
          v34 = 0;
          if ( !locked )
            v34 = -1073741670;
          v67 = v34;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(i, v66[0]);
        v35 = v67;
        if ( v67 < 0 )
          goto LABEL_82;
        v6 = v68;
        if ( v31 != 1 )
        {
          if ( v31 != 2 )
          {
            if ( v21 )
            {
              v38 = MI_GET_PAGE_FRAME_FROM_PTE(&v73);
              v69 = MiMapFrame(v21, v38);
            }
            v6 = v68;
            goto LABEL_72;
          }
          v35 = MmAccessFault(0LL, BugCheckParameter1);
          v67 = v35;
          if ( v35 < 0 )
            goto LABEL_82;
        }
      }
      else
      {
        v27 = v66[0];
        v6 = v68;
LABEL_57:
        if ( i )
          MiUnlockProtoPoolPage(i, v27);
        if ( (*(_DWORD *)(v81 + 56) & 0x40000000) != 0 )
        {
          v35 = MmAccessFault(0LL, BugCheckParameter1);
          v67 = v35;
          if ( v35 < 0 )
            goto LABEL_82;
        }
        else
        {
          v36 = MiMakePageAvoidRead(
                  (_DWORD)PrototypePteDirect,
                  (_DWORD)Source,
                  v71,
                  Length,
                  v6,
                  (__int64)&v73,
                  (__int64)&v67);
          if ( !v36 )
            return (unsigned int)v67;
          v37 = v36 - 1;
          if ( v37 )
          {
            v39 = v37 - 2;
            v23 = v69;
            if ( !v39 )
            {
              v72 = 0;
              goto LABEL_72;
            }
            if ( v39 != 1 )
            {
LABEL_72:
              MiMakeSystemCachePteValid(v78, v82, v73, v6);
              v23 = v69;
            }
            break;
          }
        }
      }
    }
  }
LABEL_73:
  v35 = 0;
  v67 = 0;
  if ( v72 )
  {
    if ( v23 )
      v40 = (void *)(v23 + v71);
    else
      v40 = (void *)(BugCheckParameter1 + v71);
    if ( (v6 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v40, Source, Length);
    else
      memmove(v40, Source, Length);
    v41 = 1LL;
  }
  else
  {
LABEL_82:
    v41 = 1LL;
  }
  if ( v21 )
  {
    v42 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
      v42 = MiReadPteShadow(v21, *(_QWORD *)v21);
    v79 = v42;
    if ( (dword_14040010C & 2) != 0 )
      MiCheckPteRelease(v21, v41);
    BugCheckParameter4 = (__int64)(v21 - qword_140389370) >> 3;
    v44 = 1LL;
    if ( (dword_140389378 & 4) != 0 )
    {
      BugCheckParameter4 >>= 4;
      v44 = 0LL;
    }
    if ( v44 + BugCheckParameter4 - 1 >= qword_140389360
      || v44 != 1
      || !_bittest64((const signed __int64 *)qword_140389368, BugCheckParameter4) )
    {
      KeBugCheckEx(0xDAu, 0x302uLL, (__int64)(v21 << 25) >> 16, 1uLL, BugCheckParameter4);
    }
    *(_QWORD *)v21 = 0LL;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v21, 0LL);
    v45 = v83;
    if ( (dword_140389378 & 1) != 0 && (unsigned int)MiInsertCachedPte(&qword_140389360, v83, 1LL, v41) == 1 )
    {
LABEL_137:
      if ( (v42 & 1) != 0 )
      {
        v64 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v79) - 0x58000000000LL;
        v66[0] = MiLockPageInline(v64);
        MiRemoveLockedPageChargeAndDecRef(v64);
        _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v66[0]);
        return (unsigned int)v67;
      }
      return (unsigned int)v35;
    }
    v70 = 0LL;
    v46 = 0LL;
    if ( (unsigned __int64)&v70 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v70 <= 0xFFFFF6FB7DBED7F8uLL )
      v46 = MiReadPteShadow(&v70, 0LL);
    _InterlockedOr(v65, 0);
    updated = MiUpdatePageFileHighInPte(v46, (unsigned int)KiTbFlushTimeStamp);
    v70 = updated;
    if ( (unsigned __int64)&v70 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v70 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(&v70, updated);
    v48 = v70;
    *(_QWORD *)v45 = v70;
    if ( v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v45, v48);
    if ( !MiGetPteTimeStamp(v48) )
    {
      v86 = 20LL;
      v84 = ~(_BYTE)dword_140389378 & 2;
      v85 = 0;
      v87 = 0LL;
      v88 = 0LL;
      MiInsertTbFlushEntry(&v84, (__int64)(v45 << 25) >> 16, 1LL, 0LL);
      MiFlushTbList(&v84);
    }
    v49 = 1LL;
    v50 = (volatile signed __int32 *)(qword_140389368 + 4 * (BugCheckParameter4 >> 5));
    v51 = BugCheckParameter4 & 0x1F;
    v52 = 32LL;
    if ( v51 + 1 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v50, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v51));
        v49 = 1LL - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v50;
      }
      if ( v49 >= 0x20 )
      {
        v54 = v49 >> 5;
        v49 += -32LL * (v49 >> 5);
        do
        {
          *v50++ = 0;
          --v54;
        }
        while ( v54 );
      }
      if ( !v49 )
        goto LABEL_120;
      v53 = (1 << v49) - 1;
    }
    else
    {
      v53 = 1 << v51;
    }
    _InterlockedAnd(v50, ~v53);
LABEL_120:
    _InterlockedExchangeAdd64(&qword_1403893C0, 1uLL);
    if ( (dword_140389378 & 4) == 0 )
      v52 = 512LL;
    v55 = v52 - 1;
    v56 = ~(v52 - 1);
    v57 = v56 & BugCheckParameter4;
    v58 = (v56 & (v52 + BugCheckParameter4)) - (v56 & BugCheckParameter4);
    if ( v58 )
    {
      while ( 1 )
      {
        v59 = v7 + v57;
        v60 = v55 + v7 + v57;
        if ( v60 < qword_140389360 )
          break;
LABEL_135:
        v7 += v52;
        if ( v7 >= v58 )
          goto LABEL_136;
      }
      v61 = (_QWORD *)(qword_140389368 + 8 * (v59 >> 6));
      v62 = qword_140389368 + 8 * (v60 >> 6);
      if ( v61 == (_QWORD *)v62 )
      {
        v63 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v52) << v59;
      }
      else
      {
        if ( ((-1LL << v59) & *v61) != 0 )
        {
LABEL_134:
          v55 = v52 - 1;
          goto LABEL_135;
        }
        if ( ++v61 != (_QWORD *)v62 )
        {
          while ( !*v61 )
          {
            if ( ++v61 == (_QWORD *)v62 )
              goto LABEL_130;
          }
          goto LABEL_134;
        }
LABEL_130:
        v63 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v60;
      }
      if ( (v63 & *v61) == 0 && (unsigned int)RtlInterlockedSetClearRunEx(&qword_140389360, v7 + v57, v52) == 1 )
        MiReturnSystemPtes(&qword_140389360, v7 + v57, v52, 0LL);
      goto LABEL_134;
    }
LABEL_136:
    v35 = v67;
    goto LABEL_137;
  }
  return (unsigned int)v35;
}
