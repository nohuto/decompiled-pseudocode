/*
 * XREFs of MmCopyToCachedPage @ 0x14009F980
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0E98 (HvViewMapCopyToFileOffset.c)
 * Callees:
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x140028268 (MiUnlinkStandbyPfn.c)
 *     MiDirtySystemCachePte @ 0x14002A408 (MiDirtySystemCachePte.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReturnSystemPtes @ 0x1400821DC (MiReturnSystemPtes.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400F9880 (RtlInterlockedSetClearRunEx.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x140189BB0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiCaptureSystemCachePte @ 0x1402122D8 (MiCaptureSystemCachePte.c)
 *     MiMapFrame @ 0x14021236C (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x140212408 (MiMapSystemCachePage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckPteRelease @ 0x140220610 (MiCheckPteRelease.c)
 *     MiMapCacheExceptionFilter @ 0x1406B6048 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        SIZE_T a4,
        unsigned int a5)
{
  ULONG_PTR v5; // r13
  char v6; // r14
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // r10
  ULONG_PTR v9; // r11
  __int64 v11; // r15
  __int16 v12; // ax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 *PrototypePteDirect; // rsi
  __int64 i; // rdi
  __int64 v21; // rax
  unsigned __int8 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rax
  int v25; // r14d
  int locked; // eax
  int v27; // ecx
  int v28; // edi
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  void *v33; // rcx
  ULONG_PTR BugCheckParameter4; // r14
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // r9
  volatile signed __int32 *v41; // r8
  ULONG_PTR v42; // r10
  __int64 v43; // rsi
  int v44; // eax
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r12
  ULONG_PTR v48; // r15
  ULONG_PTR v49; // r14
  ULONG_PTR v50; // rdi
  unsigned __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  __int64 v55; // rbx
  signed __int32 v56[8]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v57[4]; // [rsp+40h] [rbp-188h] BYREF
  int v58; // [rsp+44h] [rbp-184h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-180h]
  __int64 v60; // [rsp+50h] [rbp-178h]
  unsigned int v61; // [rsp+58h] [rbp-170h]
  int v62; // [rsp+5Ch] [rbp-16Ch]
  unsigned __int64 v63; // [rsp+60h] [rbp-168h] BYREF
  __int64 updated; // [rsp+68h] [rbp-160h] BYREF
  ULONG_PTR v65; // [rsp+70h] [rbp-158h]
  SIZE_T Length; // [rsp+78h] [rbp-150h]
  void *Source; // [rsp+80h] [rbp-148h]
  __int64 v68; // [rsp+88h] [rbp-140h]
  __int64 v69; // [rsp+90h] [rbp-138h] BYREF
  __int64 v70; // [rsp+98h] [rbp-130h]
  __int64 v71; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v72; // [rsp+A8h] [rbp-120h]
  int v73; // [rsp+C0h] [rbp-108h] BYREF
  __int16 v74; // [rsp+C4h] [rbp-104h]
  __int64 v75; // [rsp+C8h] [rbp-100h]
  __int64 v76; // [rsp+D0h] [rbp-F8h]
  __int64 v77; // [rsp+D8h] [rbp-F0h]

  Length = a4;
  v61 = a3;
  Source = a2;
  v5 = BugCheckParameter2;
  v65 = BugCheckParameter2;
  v6 = a5;
  v59 = a5;
  v60 = 0LL;
  v62 = 1;
  v7 = *(_QWORD *)(MiGetSystemCacheReverseMap(BugCheckParameter2) + 24);
  if ( (v7 & 1) != 0 )
    v7 &= ~1uLL;
  v71 = *(_QWORD *)v7;
  v70 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v71 + 60) & 0x3FF)) + 5888LL;
  if ( v8 + v9 > 0x1000 || v8 + v9 < v8 )
    KeBugCheckEx(0x1Au, 0x776uLL, v5, v8, v9);
  v72 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (a5 & 4) != 0 && ((v9 & 0x3F) != 0 || (v8 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v11 = MiReservePtes(&qword_14036D0A0, 1LL);
    v68 = v11;
    if ( !v11 )
      return 3221225626LL;
  }
  else
  {
    v11 = 0LL;
    v68 = 0LL;
  }
  v12 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v12 & 1) != 0 )
  {
    v14 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v11 )
    {
      MiDirtySystemCachePte(v13, v14, v12);
      v15 = 0LL;
      goto LABEL_59;
    }
    v15 = MiMapSystemCachePage(v11, v14, a5);
    v60 = v15;
    if ( v15 )
      goto LABEL_59;
  }
  v17 = MiCaptureSystemCachePte(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v69 = v17;
  if ( (v17 & 1) == 0
    || v11 && (v15 = MiMapSystemCachePage(v11, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, a5), (v60 = v15) == 0) )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v17, v16, v18, v15);
    while ( 1 )
    {
      i = 0LL;
      v57[0] = 17;
      v21 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
      v63 = v21;
      if ( (v21 & 1) == 0 && (v21 & 0x400) != 0 )
        goto LABEL_43;
      for ( i = MiLockProtoPoolPage(PrototypePteDirect, v57); !i; i = MiLockProtoPoolPage(PrototypePteDirect, v57) )
        MmAccessFault(2uLL, (ULONG_PTR)PrototypePteDirect);
      v23 = MiLockLeafPage(PrototypePteDirect, 0LL);
      v24 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
      v63 = v24;
      if ( v23 )
      {
        if ( (v24 & 1) != 0 )
        {
          *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ ((*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
          v25 = 0;
        }
        else
        {
          v25 = MiUnlinkStandbyPfn(PrototypePteDirect, v6);
          if ( !v25 )
            v63 = MI_READ_PTE_LOCK_FREE(PrototypePteDirect);
        }
        v58 = 0;
        if ( v11 && !v25 )
        {
          locked = MiAddLockedPageCharge(v23);
          v27 = 0;
          if ( !locked )
            v27 = -1073741670;
          v58 = v27;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(i, v57[0]);
        v28 = v58;
        if ( v58 < 0 )
          goto LABEL_67;
        v5 = v65;
        if ( v25 != 1 )
        {
          if ( v25 != 2 )
          {
            if ( v11 )
            {
              v31 = MI_GET_PAGE_FRAME_FROM_PTE(&v63);
              v60 = MiMapFrame(v11, v31);
            }
            v6 = v59;
            goto LABEL_58;
          }
          v28 = MmAccessFault(0LL, v65);
          v58 = v28;
          if ( v28 < 0 )
            goto LABEL_67;
        }
        v6 = v59;
      }
      else
      {
        v22 = v57[0];
        v5 = v65;
LABEL_43:
        if ( i )
          MiUnlockProtoPoolPage(i, v22);
        if ( (*(_DWORD *)(v71 + 56) & 0x40000000) != 0 )
        {
          v28 = MmAccessFault(0LL, v5);
          v58 = v28;
          if ( v28 < 0 )
            goto LABEL_67;
        }
        else
        {
          v29 = MiMakePageAvoidRead(
                  (_DWORD)PrototypePteDirect,
                  (_DWORD)Source,
                  v61,
                  Length,
                  v6,
                  (__int64)&v63,
                  (__int64)&v58);
          if ( !v29 )
            return (unsigned int)v58;
          v30 = v29 - 1;
          if ( v30 )
          {
            v32 = v30 - 2;
            v15 = v60;
            if ( !v32 )
            {
              v62 = 0;
              goto LABEL_58;
            }
            if ( v32 != 1 )
            {
LABEL_58:
              MiMakeSystemCachePteValid(v70, v72, v63, v6);
              v15 = v60;
            }
            break;
          }
        }
      }
    }
  }
LABEL_59:
  v28 = 0;
  v58 = 0;
  if ( v62 )
  {
    if ( v15 )
      v33 = (void *)(v15 + v61);
    else
      v33 = (void *)(v65 + v61);
    if ( (v6 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v33, Source, Length);
    else
      memmove(v33, Source, Length);
  }
LABEL_67:
  if ( v11 )
  {
    v69 = MI_READ_PTE_LOCK_FREE(v11);
    if ( (dword_1403E310C & 2) != 0 )
      MiCheckPteRelease(v11, 1LL);
    BugCheckParameter4 = (v11 - qword_14036D0B0) >> 3;
    v35 = 1LL;
    if ( (dword_14036D0B8 & 4) != 0 )
    {
      BugCheckParameter4 >>= 4;
      v35 = 0LL;
    }
    if ( v35 + BugCheckParameter4 - 1 >= qword_14036D0A0
      || v35 != 1
      || !_bittest64((const signed __int64 *)qword_14036D0A8, BugCheckParameter4) )
    {
      KeBugCheckEx(0xDAu, 0x302uLL, v11 << 25 >> 16, 1uLL, BugCheckParameter4);
    }
    *(_QWORD *)v11 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v11) )
      MiWritePteShadow(v36);
    if ( (dword_14036D0B8 & 1) != 0 && (unsigned int)MiInsertCachedPte(&qword_14036D0A0, v11, 1LL) == 1 )
    {
LABEL_112:
      if ( (v69 & 1) != 0 )
      {
        v55 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v69) - 0x58000000000LL;
        v57[0] = MiLockPageInline(v55);
        MiRemoveLockedPageChargeAndDecRef(v55);
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v57[0]);
        return (unsigned int)v58;
      }
      return (unsigned int)v28;
    }
    updated = 0LL;
    v37 = MI_READ_PTE_LOCK_FREE(&updated);
    _InterlockedOr(v56, 0);
    updated = MiUpdatePageFileHighInPte(v37, (unsigned int)KiTbFlushTimeStamp);
    if ( (unsigned int)MiPteInShadowRange(&updated) )
      MiWritePteShadow(&updated);
    *(_QWORD *)v11 = updated;
    if ( (unsigned int)MiPteInShadowRange(v11) )
      MiWritePteShadow(v39);
    if ( !MiGetPteTimeStamp(v38) )
    {
      v75 = 20LL;
      v73 = ~(_BYTE)dword_14036D0B8 & 2;
      v74 = 0;
      v76 = 0LL;
      v77 = 0LL;
      MiInsertTbFlushEntry(&v73, v11 << 25 >> 16, 1LL, 0LL);
      MiFlushTbList(&v73);
    }
    v40 = 1LL;
    v41 = (volatile signed __int32 *)(qword_14036D0A8 + 4 * (BugCheckParameter4 >> 5));
    v42 = BugCheckParameter4 & 0x1F;
    v43 = 32LL;
    if ( v42 + 1 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v41, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v42));
        v40 = 1LL - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v41;
      }
      if ( v40 >= 0x20 )
      {
        v45 = v40 >> 5;
        v40 += -32LL * (v40 >> 5);
        do
        {
          *v41++ = 0;
          --v45;
        }
        while ( v45 );
      }
      if ( !v40 )
        goto LABEL_95;
      v44 = (1 << v40) - 1;
    }
    else
    {
      v44 = 1 << v42;
    }
    _InterlockedAnd(v41, ~v44);
LABEL_95:
    _InterlockedExchangeAdd64(&qword_14036D100, 1uLL);
    if ( (dword_14036D0B8 & 4) == 0 )
      v43 = 512LL;
    v46 = v43 - 1;
    v47 = BugCheckParameter4 & ~(v43 - 1);
    v48 = (~(v43 - 1) & (v43 + BugCheckParameter4)) - v47;
    v49 = 0LL;
    if ( v48 )
    {
      while ( 1 )
      {
        v50 = v49 + v47;
        v51 = v49 + v47 + v46;
        if ( v51 < qword_14036D0A0 )
          break;
LABEL_110:
        v49 += v43;
        if ( v49 >= v48 )
          goto LABEL_111;
      }
      v52 = (_QWORD *)(qword_14036D0A8 + 8 * (v50 >> 6));
      v53 = qword_14036D0A8 + 8 * (v51 >> 6);
      if ( v52 == (_QWORD *)v53 )
      {
        v54 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v43) << v50;
      }
      else
      {
        if ( ((-1LL << v50) & *(_QWORD *)(qword_14036D0A8 + 8 * (v50 >> 6))) != 0 )
        {
LABEL_109:
          v46 = v43 - 1;
          goto LABEL_110;
        }
        if ( ++v52 != (_QWORD *)v53 )
        {
          while ( !*v52 )
          {
            if ( ++v52 == (_QWORD *)v53 )
              goto LABEL_105;
          }
          goto LABEL_109;
        }
LABEL_105:
        v54 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v51;
      }
      if ( (v54 & *v52) == 0 && (unsigned int)RtlInterlockedSetClearRunEx(&qword_14036D0A0, v49 + v47, v43) == 1 )
        MiReturnSystemPtes((__int64)&qword_14036D0A0, v49 + v47, v43, 0);
      goto LABEL_109;
    }
LABEL_111:
    v28 = v58;
    goto LABEL_112;
  }
  return (unsigned int)v28;
}
