/*
 * XREFs of MiWsleFlush @ 0x1400D7070
 * Callers:
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1400182F0 (MiCompressTbFlushList.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x140021C08 (MiCanMergeTbFlushEntryBackwards.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14002CA88 (MiCaptureWriteWatchDirtyBit.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetWorkingSetSwapSupport @ 0x1400A7F08 (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x140104D20 (MI_IS_RESET_PTE.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     MiPteHasShadow @ 0x14017C9F0 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  int v6; // edi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  char v16; // al
  __int64 v18; // r12
  char v19; // al
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  unsigned __int8 v22; // al
  __int64 v23; // r13
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // cl
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 PrototypePteVadLookup; // rax
  unsigned __int64 v29; // rdx
  __int64 PrototypePteDirect; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  _QWORD *CloneAddress; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  char *AnyMultiplexedVm; // rax
  char *v37; // r10
  __int64 v38; // rax
  unsigned int v39; // r9d
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r11
  __int64 v44; // r8
  unsigned __int64 v45; // rdx
  int v46; // edx
  unsigned __int64 v47; // r11
  char v48; // cl
  unsigned __int64 i; // rcx
  unsigned int v50; // ebx
  __int64 v51; // r9
  __int64 v52; // rax
  unsigned __int64 v53; // r8
  __int64 v54; // rax
  char v55; // r9
  unsigned __int64 v56; // r10
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r11
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rax
  unsigned int v63; // ecx
  _QWORD v64[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp+10h]

  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64[0] = MI_READ_PTE_LOCK_FREE(v7);
  v8 = v64[0];
  v12 = MI_GET_PFN_FROM_PTE(v64, v9, v10, v11);
  if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
    return 0LL;
  v16 = *(_BYTE *)(v14 + 192) & 7;
  if ( v16 )
  {
    if ( *(_WORD *)(v12 + 32) > 1u )
      return 0LL;
  }
  if ( v16 )
  {
    v18 = v12;
    MiLockPageAtDpcInline(v12);
    v15 = a2;
    v14 = a1;
    v13 = 0xFFFFF68000000000uLL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0
    || (v19 = *(_BYTE *)(v14 + 192) & 7) != 0 && *(_WORD *)(v12 + 32) > 1u )
  {
    if ( v18 )
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v20 = v8 & 0xFFFFFFFFFFFFFFDBuLL;
  if ( !v19
    && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0
    && v7 <= v13 + 0x3FFFFFFF78LL
    && v7 >= v13
    && (v8 & 0x42) != 0
    && (*(_DWORD *)(v14 - 508) & 0x8000) != 0 )
  {
    MiCaptureWriteWatchDirtyBit(v14 - 1280, v15, 0LL);
    v14 = a1;
  }
  v21 = (*(_QWORD *)(v12 + 40) >> 57) & 1LL;
  if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( *(__int64 *)(v12 + 8) >= 0 || (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
      goto LABEL_27;
  }
  else
  {
    v22 = *(_BYTE *)(v14 + 192) & 7;
    if ( v22 >= 2u )
      goto LABEL_27;
    if ( !v22 )
    {
      v8 = v64[0];
      if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
        goto LABEL_27;
    }
  }
  if ( (!v21 || (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1)
    && *(_WORD *)(v12 + 32) == 1
    && (*(_BYTE *)(v12 + 34) & 0xC0) == 0x40
    && (*(_BYTE *)(v12 + 35) & 0x40) == 0
    && ((a3 & 2) != 0 || !(*(_QWORD *)((__int64)(v7 << 25) >> 16) | *(_QWORD *)(((__int64)(v7 << 25) >> 16) + 0xFF8))) )
  {
    v20 |= 0x20uLL;
    goto LABEL_27;
  }
  if ( (a3 & 2) == 0 )
  {
LABEL_27:
    v23 = 1LL;
    if ( v21 )
    {
      v24 = MI_READ_PTE_LOCK_FREE(v7);
      if ( (v24 & 1) != 0 )
        v25 = HIBYTE(v24) & 0xF | (16 * ((v24 >> 60) & 7));
      else
        v25 = 10;
      v26 = v25;
      v27 = v25 >> 4;
      if ( v26 >= 0x10 )
      {
        if ( (*(_QWORD *)v7 & 0x10) != 0 || (*(_QWORD *)v7 & 8) == 0 )
        {
          if ( (*(_QWORD *)v7 & 0x10LL) != 0 )
            v27 = (unsigned int)v27 | 8;
        }
        else
        {
          v27 = (unsigned int)v27 | 0x18;
        }
      }
      if ( !(_DWORD)v27 )
      {
        PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
        v64[0] = PrototypePteDirect;
        if ( (*(_BYTE *)(v32 + 192) & 7u) >= 2 && (v8 & 0xA00) == 0 && v8 >= 0x8000000000000000uLL )
        {
          PrototypePteDirect |= 8uLL;
          v64[0] = PrototypePteDirect;
        }
        if ( v31 < 0 )
        {
          if ( (a3 & 4) != 0 )
          {
            if ( *(_QWORD *)(v32 - 368) )
            {
              CloneAddress = MiLocateCloneAddress(v32 - 1280, v29);
              if ( CloneAddress )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v34 + 1296) + 240LL) > CloneAddress[9] )
                  v64[0] = v35 | 8;
              }
            }
          }
        }
        else
        {
          v64[0] = PrototypePteDirect | 0x800;
        }
LABEL_69:
        v40 = MiPteInShadowRange(v7);
        v44 = v40;
        if ( v40 && (unsigned int)MiPteHasShadow(v42, v41, v40) )
          LOBYTE(v41) = v41 | 0x20;
        if ( (MiFlags & 0x800) != 0 )
        {
          LOBYTE(v41) = v41 | 0x20;
        }
        else if ( (MiFlags & 0x2000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v41 & 0x20) != 0 )
        {
          *(_QWORD *)v7 = v64[0];
          if ( (_DWORD)v44 )
            MiWritePteShadow(v7);
        }
        else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v7, v64[0], v44) & 0x20) == 0 )
        {
LABEL_97:
          if ( v6 == 1 )
            MiFlushTbList(a4, (_KPROCESS *)v45);
          if ( v18 )
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v6 != 1 && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 && (a3 & 2) == 0 )
          {
            v54 = MI_READ_PTE_LOCK_FREE(v12 + 16);
            if ( (unsigned int)MiInvalidPteConforms(v54) )
            {
              if ( *(_DWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((v56 >> 40) & 0x3FF)) + 1068LL)
                && (v55 & 2) == 0
                && !MiGetWorkingSetSwapSupport(a1)
                && (!(unsigned int)MI_IS_RESET_PTE(v57)
                 || (*(_BYTE *)(v12 + 34) & 0x10) != 0
                 || (*(_BYTE *)v7 & 0x42) != 0)
                && v7 <= 0xFFFFF6BFFFFFFF78uLL
                && v7 >= 0xFFFFF68000000000uLL )
              {
                MiReservePageFileSpace(v59, v7, v58);
              }
            }
          }
          return v20;
        }
        v46 = *(_DWORD *)a4;
        v47 = v43 & 0xFFFFFFFFFFFFF000uLL;
        v67 = v47;
        if ( *(_DWORD *)a4 != 1 )
        {
          v48 = *(_BYTE *)(a4 + 4);
          if ( (v48 & 8) == 0 && v47 >= 0xFFFFF68000000000uLL && v47 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(a4 + 4) = v48 | 8;
          if ( v46 )
          {
            for ( i = v47; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
            {
              if ( i > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
          }
        }
        v50 = *(_DWORD *)(a4 + 12);
        if ( !v50
          || (*(_BYTE *)(a4 + 4) & 4) != 0
          || (v51 = a4 + 8LL * (v50 - 1), v52 = *(_QWORD *)(v51 + 24), (v52 & 0xC00) != 0)
          || (v53 = *(_QWORD *)(v51 + 24) & 0x3FFLL, v45 = (v52 & 0xFFFFFFFFFFFFF000uLL) + ((v53 + 1) << 12), v45 != v47)
          || v53 + 1 < v53
          || v53 + 1 > 0x3FF )
        {
          if ( MiCanMergeTbFlushEntryBackwards(a4, v47, 1LL, 0) )
          {
            v45 = a4 + 8LL * (v50 - 1);
            v60 = *(_QWORD *)(v45 + 24);
            ++*(_QWORD *)(a4 + 16);
            *(_QWORD *)(v45 + 24) = (v60 - 4096) ^ ((unsigned __int16)(v60 - 4096) ^ (unsigned __int16)(v60 - 4096 + 1)) & 0x3FF;
          }
          else if ( v50 < *(_DWORD *)(a4 + 8) )
          {
            v61 = v67;
            while ( 1 )
            {
              v45 = 1024LL;
              if ( (unsigned __int64)(v23 - 1) <= 0x3FF )
                v45 = v23;
              v23 -= v45;
              v62 = v61 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v45 - 1) & 0x3FF;
              v61 += v45 << 12;
              *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v62;
              v63 = *(_DWORD *)(a4 + 12);
              *(_QWORD *)(a4 + 16) += v45;
              if ( v63 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
              {
                qsort((void *)(a4 + 24), v63, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                MiCompressTbFlushList(a4);
                if ( *(_DWORD *)(a4 + 12) == *(_DWORD *)(a4 + 8) )
                  break;
              }
              if ( !v23 )
                goto LABEL_97;
            }
            if ( v23 )
            {
              *(_QWORD *)(a4 + 16) = *(unsigned int *)(a4 + 12);
              *(_BYTE *)(a4 + 5) = 1;
            }
          }
          else
          {
            *(_BYTE *)(a4 + 5) = 1;
          }
        }
        else
        {
          ++*(_QWORD *)(a4 + 16);
          *(_QWORD *)(v51 + 24) = v52 ^ ((unsigned __int16)v52 ^ (unsigned __int16)(v52 + 1)) & 0x3FF;
        }
        goto LABEL_97;
      }
      PrototypePteVadLookup = MiMakePrototypePteVadLookup(v27);
    }
    else if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 4
           && (AnyMultiplexedVm = MiGetAnyMultiplexedVm(2), v37 == AnyMultiplexedVm) )
    {
      MiReleasePageFileSpace(&MiSystemPartition, *(_QWORD *)(v12 + 16), 1LL);
      PrototypePteVadLookup = MI_READ_PTE_LOCK_FREE(a2 & 0xFFFFFFFFFFFFF000uLL) | 2;
      v6 = 1;
      v20 |= 4uLL;
    }
    else
    {
      v38 = MI_GET_PAGE_FRAME_FROM_PTE(v64);
      PrototypePteVadLookup = MiMakeTransitionPte(v38, v39);
    }
    v64[0] = PrototypePteVadLookup;
    goto LABEL_69;
  }
  if ( v18 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
