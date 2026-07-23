/*
 * XREFs of MiAllocateWsle @ 0x140047A60
 * Callers:
 *     MiInitializeWorkingSetList @ 0x1400145B4 (MiInitializeWorkingSetList.c)
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiCreateForkWsle @ 0x1401202B8 (MiCreateForkWsle.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiGetStandbyRepurposed @ 0x1400F4ED4 (MiGetStandbyRepurposed.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogAllocateWsleEvent @ 0x1402157B8 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x14022870C (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x1402287AC (MiFillVirtualFaultInfo.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiAllocateWsle(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // r12
  char v9; // al
  _DWORD *v10; // rcx
  unsigned __int64 v11; // r15
  unsigned __int8 v12; // di
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  _QWORD *v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  int v22; // r9d
  unsigned __int8 CurrentIrql; // bl
  int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  char v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v32; // r15
  unsigned int Queue; // r14d
  unsigned int v34; // r14d
  _BYTE *v35; // r10
  unsigned int v36; // eax
  __int64 v37; // rbx
  char v38; // cl
  char v39; // cl
  unsigned __int64 v40; // r12
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 *v47; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 *v49; // r8
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r14
  __int64 *v56; // rbx
  __int64 *v57; // rdi
  __int64 v58; // rdx
  __int64 *v59; // rcx
  __int64 **v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 *v63; // r9
  __int64 v64; // rax
  __int64 v65; // r9
  unsigned __int64 *v66; // r10
  __int64 v67; // r11
  unsigned __int64 v68; // r9
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  unsigned __int8 v71; // al
  char v72; // cl
  int v73; // r8d
  unsigned __int8 v75; // [rsp+20h] [rbp-89h]
  unsigned __int64 v76; // [rsp+28h] [rbp-81h]
  int v77; // [rsp+30h] [rbp-79h]
  __int64 v78; // [rsp+38h] [rbp-71h]
  __int64 v79; // [rsp+40h] [rbp-69h] BYREF
  volatile signed __int64 *v80; // [rsp+48h] [rbp-61h]
  int v81; // [rsp+58h] [rbp-51h] BYREF
  int v82; // [rsp+5Ch] [rbp-4Dh]
  int v83; // [rsp+60h] [rbp-49h] BYREF
  __int64 v84; // [rsp+68h] [rbp-41h]
  __int64 *v85; // [rsp+70h] [rbp-39h]
  __int64 v86; // [rsp+78h] [rbp-31h] BYREF
  __int64 v87; // [rsp+80h] [rbp-29h] BYREF
  __int64 v88; // [rsp+88h] [rbp-21h]
  _QWORD v89[4]; // [rsp+90h] [rbp-19h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+4Fh]

  v84 = a6;
  v82 = a4;
  v85 = a2;
  ++*(_DWORD *)(a1 + 4);
  v8 = &unk_140389800;
  v88 = 0LL;
  v9 = *(_BYTE *)(a1 + 192);
  v10 = &unk_140389800;
  v11 = (__int64)((_QWORD)a2 << 25) >> 16;
  v76 = v11;
  if ( (v9 & 7) != 2 )
    v10 = 0LL;
  if ( v10 )
    ++*v10;
  __incgsdword(0x2E90u);
  v77 = 0;
  if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v13 = *(_QWORD *)(a1 + 120);
    v12 = 0;
    v78 = 1LL;
    if ( v13 >= *(_QWORD *)(a1 + 112) && (*(_BYTE *)(a1 + 195) & 8) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 136);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v14 > v15 )
      {
        v16 = *(_QWORD **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
        v17 = v16[722];
        v18 = *(_QWORD *)(a1 + 136) & 0x3FLL;
        if ( (v14 & 0x3F) == 0 && v16[744] < v17 / 0x14 && v14 >= v17 / 0x14 )
          goto LABEL_24;
        if ( v14 - v15 >= 3 * (v17 >> 2) )
        {
          v19 = v16[710];
          if ( (unsigned int)MiGetStandbyRepurposed(
                               *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172)),
                               1LL) != *(_DWORD *)(v19 + 44) )
          {
            if ( v18 )
              v21 = *(_QWORD *)(v20 + 5952);
            if ( v21 < 10LL * *(_QWORD *)(v19 + 2392) )
              goto LABEL_24;
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 192) & 0x40) != 0 && v13 >= *(_QWORD *)(a1 + 152) )
LABEL_24:
        *(_BYTE *)(a1 + 195) |= 8u;
    }
    v11 = v76;
  }
  else
  {
    v78 = 0LL;
    if ( (*(_BYTE *)(a1 + 192) & 7) == 0 && (((unsigned __int8)*(_QWORD *)a3 >> 1) & 7) != 0 )
      *(_QWORD *)a3 &= 0xFFFFFFFFFFFFFFF1uLL;
    v12 = v75;
  }
  v22 = 2;
  if ( (*(_DWORD *)a3 & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v81 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v81);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
      v22 = 2;
    }
    *(_QWORD *)a3 |= 1uLL;
    if ( CurrentIrql != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
  ++*(_QWORD *)(a1 + 136);
  if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++*(_QWORD *)(a1 + 120);
    v24 = 1;
  }
  else
  {
    v24 = 0;
  }
  v25 = *(_QWORD *)(a1 + 120);
  if ( v25 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v25;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v8 = 0LL;
  if ( v8 )
  {
    ++v8[1];
    if ( v24 == 1 )
      ++v8[2];
    v26 = v8[2];
    if ( v26 > v8[3] )
      v8[3] = v26;
  }
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) == 0 )
  {
    ++*(_QWORD *)(a1 + 144);
    if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(a1 + 128);
  }
  v27 = *(_BYTE *)(a1 + 192);
  if ( (v27 & 7u) >= 2 )
  {
    v28 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
    v29 = v28 + 8LL * ((v27 & 7u) - 2);
    v30 = *(_QWORD *)(v28 + 4224) + *(_QWORD *)(a1 + 136);
    if ( v30 > *(_QWORD *)(v29 + 4232) )
      *(_QWORD *)(v29 + 4232) = v30;
    if ( (*(_BYTE *)(a1 + 192) & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v11 >= (unsigned __int64)PsNtosImageBase && v11 < PsNtosImageEnd
         || v11 >= (unsigned __int64)PsHalImageBase && v11 < PsHalImageEnd) )
      {
        LODWORD(xmmword_140388420) = xmmword_140388420 + 1;
      }
      else if ( v11 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[794] + ((v11 >> 39) & 0x1FF)) == 12 )
      {
        ++DWORD1(xmmword_140388420);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v32 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v34 = (Queue >> 9) & 7;
  }
  else
  {
    v34 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      if ( v34 < 2 )
        v22 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v34 = v22;
    }
  }
  v35 = (_BYTE *)v78;
  v36 = 5;
  v37 = a5;
  if ( v78 )
  {
    if ( v34 >= 5 )
    {
      if ( (a5 & 1) != 0 )
        v32 = (a5 & 0x20) == 0;
    }
    else
    {
      v32 = 7;
    }
    v12 = v32 | (16 * (v82 & 7));
  }
  else if ( v34 <= 5 )
  {
    v34 = 5;
  }
  v38 = *(_BYTE *)(a3 + 35);
  if ( (v38 & 8) == 0 )
    v36 = v38 & 7;
  if ( v36 < v34 )
  {
    v83 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v83);
        while ( *(__int64 *)(a3 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
      v35 = (_BYTE *)v78;
    }
    *(_BYTE *)(a3 + 35) ^= (*(_BYTE *)(a3 + 35) ^ v34) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v37 = a5;
  }
  if ( (v37 & 1) == 0 )
  {
    v40 = v76;
    goto LABEL_118;
  }
  v39 = *(_BYTE *)(a1 + 192) & 7;
  if ( v39 == 2 )
  {
    v37 |= 0x8000000000000000uLL;
    a5 = v37;
  }
  else if ( (MiFlags & 0x10000) != 0 )
  {
    v40 = v76;
    if ( (v76 < 0xFFFFF68000000000uLL || v76 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v37 & 0x8000000000000000uLL) == 0
      && ((MiFlags & 0x40000) != 0 || v39) )
    {
      MiLockPageAtDpcInline(a3);
      if ( !(unsigned int)MiGetPagePrivilege(a3, 1LL, 0LL) )
      {
        v46 = 39LL;
        if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
          v46 = 7LL;
        MiMarkPfnVerified(a3, v46);
      }
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v37 = a5;
    }
    goto LABEL_89;
  }
  v40 = v76;
LABEL_89:
  if ( v84 )
  {
    v41 = *(_DWORD *)(v84 + 48);
    if ( (v41 & 0x20) == 0 || *(__int64 *)(a3 + 8) < 0 )
    {
      if ( (v41 & 0x10) != 0 && v32 < 6u )
      {
        v32 = 6;
        v12 = v12 & 0xF0 | 6;
      }
      if ( ((v41 & 1) == 0 || (v37 & 0x42) != 0) && ((v41 & 2) == 0 || (v37 & 0x8000000000000000uLL) == 0) )
      {
        v42 = MI_GET_PAGE_FRAME_FROM_PTE(&a5);
        MiFillVirtualFaultInfo(v43, v42, v37);
        if ( (*(_DWORD *)(v44 + 48) & 0x20) != 0 )
          MiCompleteSecureProcessFault(a3);
      }
    }
  }
  v35 = (_BYTE *)v78;
  if ( v78 )
  {
    v77 = 1;
    v37 ^= (v37 ^ ((unsigned __int64)v12 << 56)) & 0x7F00000000000000LL;
    a5 = v37;
  }
  v45 = (unsigned __int64)v85;
  *v85 = v37;
  if ( v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v45, v37);
LABEL_118:
  if ( v35 )
  {
    if ( !v77 )
      *v35 = v12;
  }
  else if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    goto LABEL_174;
  }
  if ( v40 < 0xFFFFF68000000000uLL || v40 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v47 = (__int64 *)(((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v47;
    if ( (unsigned __int64)v47 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v47 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v47, *v47);
    v86 = PteShadow;
    v49 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v86) - 0x58000000000LL);
    v50 = *v49;
    v51 = *v49 >> 4;
    if ( (v51 & 0x3FF) != 0 )
    {
      v52 = (v50 >> 14) & 7;
      if ( v32 == v52 )
      {
        v53 = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)(16 * (v51 + 1))) & 0x3FF0;
LABEL_132:
        *v49 = v53;
        goto LABEL_133;
      }
      if ( v32 > v52 )
      {
        v53 = v50 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)v32 << 14) | 0x10;
        goto LABEL_132;
      }
    }
  }
LABEL_133:
  ++*(_QWORD *)(a1 + 8LL * v32 + 40);
  if ( v32 != 7 )
    goto LABEL_156;
  v54 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v55 = *(_QWORD *)(v54 + 5680);
  if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v55 + 64) )
    goto LABEL_156;
  v56 = (__int64 *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) )
    goto LABEL_156;
  v57 = (__int64 *)(v54 + 5688);
  if ( (__int64 *)*v57 == v56 )
    goto LABEL_156;
  v80 = (volatile signed __int64 *)&qword_140389240;
  v79 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v79, &qword_140389240);
  }
  else
  {
    v58 = _InterlockedExchange64((volatile __int64 *)&qword_140389240, (__int64)&v79);
    if ( v58 )
      KxWaitForLockOwnerShip(&v79);
  }
  if ( *(_BYTE *)(v55 + 53) || !*v56 )
  {
    *(_BYTE *)(v55 + 54) = 1;
  }
  else
  {
    v59 = (__int64 *)*v56;
    if ( *(__int64 **)(*v56 + 8) != v56 || (v60 = *(__int64 ***)(a1 + 32), *v60 != v56) )
      __fastfail(3u);
    *v60 = v59;
    v59[1] = (__int64)v60;
    v61 = (__int64 *)*v57;
    if ( *(__int64 **)(*v57 + 8) != v57 )
      __fastfail(3u);
    *v56 = (__int64)v61;
    *(_QWORD *)(a1 + 32) = v57;
    v61[1] = (__int64)v56;
    *v57 = (__int64)v56;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v79);
    v62 = v79;
    if ( !v79 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v80, 0LL, (signed __int64)&v79) == &v79 )
        goto LABEL_156;
      v62 = KxWaitForLockChainValid(&v79, v58);
    }
    v79 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v62 + 8), 1uLL);
    goto LABEL_156;
  }
  KiReleaseQueuedSpinLockInstrumented(&v79, retaddr);
LABEL_156:
  if ( v78 )
  {
    v63 = (__int64 *)(((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v64 = *v63;
    if ( (unsigned __int64)v63 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v63 <= 0xFFFFF6FB7DBED7F8uLL )
      v64 = MiReadPteShadow(((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v63);
    v87 = v64;
    v66 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v87) - 0x58000000000LL);
    if ( ((*(_DWORD *)v66 >> 4) & 0x3FF) == 0 )
    {
      v67 = v88;
      v68 = ((v65 << 25) - v88) >> 16;
      memset(v89, 0, sizeof(v89));
      do
      {
        v69 = *(_QWORD *)v68;
        v70 = 0xFFFFF6FB7DBED000uLL;
        if ( v68 >= 0xFFFFF6FB7DBED000uLL )
        {
          v70 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v68 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v69) = MiReadPteShadow(v68, *(_QWORD *)v68);
        }
        if ( (v69 & 1) != 0 )
        {
          v71 = MiGetWsleContents(v70, (__int64)((v68 << 25) - v67) >> 16) & 0xF;
          if ( (unsigned __int8)(v71 - 8) > 2u )
            ++*((_DWORD *)v89 + v71);
        }
        v68 += 8LL;
      }
      while ( (v68 & 0xFFF) != 0 );
      v72 = 8;
      while ( 1 )
      {
        v73 = *((_DWORD *)v89 + (unsigned __int8)--v72);
        if ( v73 )
          break;
        if ( !v72 )
          goto LABEL_174;
      }
      *v66 = *v66 & 0xFFFFFFFFFFFE000FuLL | (16 * (v73 & 0x3FF | ((unsigned __int64)(v72 & 7) << 10)));
    }
  }
LABEL_174:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(a3, *(_BYTE *)(a1 + 192) & 7, v40);
  return 1LL;
}
