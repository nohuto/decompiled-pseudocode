/*
 * XREFs of MiWsleFlush @ 0x140052AC0
 * Callers:
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MI_IS_RESET_PTE @ 0x14005BFC0 (MI_IS_RESET_PTE.c)
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400E9684 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWsleProtection @ 0x1400E9F0C (MiGetWsleProtection.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiPteHasShadow @ 0x14017C178 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r9
  int v7; // edi
  unsigned __int64 v8; // r14
  __int64 PteShadow; // rbx
  __int64 v10; // rbp
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // r15
  char v15; // al
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // cl
  unsigned int WsleProtection; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 PrototypePteVadLookup; // rax
  __int64 v26; // rdx
  __int64 PrototypePteDirect; // r8
  __int64 v28; // r9
  char v29; // bl
  __int64 CloneAddress; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r12
  __int64 v43; // r9
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  unsigned __int64 v47; // r10
  __int64 v48; // r11
  unsigned __int64 v49; // rdx
  __int64 v50; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v51; // [rsp+70h] [rbp+18h]
  __int64 v52; // [rsp+78h] [rbp+20h]

  v52 = a4;
  v51 = a3;
  v4 = 0xFFFFF68000000000uLL;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  PteShadow = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v8, *(_QWORD *)v8);
  v50 = PteShadow;
  v10 = MI_GET_PFN_FROM_PTE(&v50, a2, a3, v4);
  v13 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    if ( *(_WORD *)(v10 + 32) > 1u )
      return 0LL;
    v14 = v10;
    MiLockPageAtDpcInline(v10);
    v13 = 0x3FFFFFFFFFFFFFFFLL;
    v12 = 0xFFFFF68000000000uLL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0
    || (v15 = *(_BYTE *)(a1 + 192) & 7) != 0 && *(_WORD *)(v10 + 32) > 1u )
  {
    if ( v14 )
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v17 = PteShadow & 0xFFFFFFFFFFFFFFDBuLL;
  if ( !v15
    && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0
    && v8 <= v12 + 0x3FFFFFFF78LL
    && v8 >= v12
    && (PteShadow & 0x42) != 0
    && (*(_DWORD *)(a1 - 508) & 0x8000) != 0 )
  {
    MiCaptureWriteWatchDirtyBit(a1 - 1280, a2, 0LL, v12);
  }
  if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( *(__int64 *)(v10 + 8) >= 0 || (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
      goto LABEL_27;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 192) & 7u) >= 2 || (MiGetPagePrivilege(v10, 0LL, 0LL) & 0xFFFFFFFD) != 0 )
      goto LABEL_27;
    v13 = 0x3FFFFFFFFFFFFFFFLL;
  }
  if ( ((*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 || (v13 & *(_QWORD *)(v10 + 24)) == 1)
    && *(_WORD *)(v10 + 32) == 1
    && (*(_BYTE *)(v10 + 34) & 0xC0) == 0x40
    && (*(_BYTE *)(v10 + 35) & 0x40) == 0 )
  {
    v11 = v51;
    if ( (v51 & 2) != 0 || !(*(_QWORD *)((__int64)(v8 << 25) >> 16) | *(_QWORD *)(((__int64)(v8 << 25) >> 16) + 0xFF8)) )
    {
      v17 |= 0x20uLL;
      goto LABEL_27;
    }
  }
  else
  {
    v11 = v51;
  }
  if ( (v11 & 2) == 0 )
  {
LABEL_27:
    v18 = *(_QWORD *)(v10 + 40);
    if ( (v18 & 0x200000000000000LL) != 0 )
    {
      v19 = *(_QWORD *)v8;
      if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
        v19 = MiReadPteShadow(v8, *(_QWORD *)v8);
      if ( (v19 & 1) != 0 )
        v20 = HIBYTE(v19) & 0xF | (16 * ((v19 >> 60) & 7));
      else
        v20 = 10;
      WsleProtection = MiGetWsleProtection(a2, v20, v11, v12);
      if ( !WsleProtection )
      {
        PrototypePteDirect = MiMakePrototypePteDirect(
                               *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL,
                               *(_QWORD *)(v10 + 8),
                               v23,
                               *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
        v50 = PrototypePteDirect;
        if ( (*(_BYTE *)(a1 + 192) & 7u) >= 2 && (PteShadow & 0xA00) == 0 && PteShadow < 0 )
        {
          PrototypePteDirect |= 8uLL;
          v50 = PrototypePteDirect;
        }
        v29 = v51;
        if ( v26 < 0 )
        {
          if ( (v51 & 4) != 0 )
          {
            if ( *(_QWORD *)(a1 - 368) )
            {
              CloneAddress = MiLocateCloneAddress(a1 - 1280, v28, PrototypePteDirect, v28);
              if ( CloneAddress )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v31 + 1296) + 240LL) > *(_QWORD *)(CloneAddress + 72) )
                  v50 = v32 | 8;
              }
            }
          }
        }
        else
        {
          v50 = PrototypePteDirect | 0x800;
        }
LABEL_72:
        v37 = *(_QWORD *)v8;
        v38 = 0xFFFFF6FB7DBED000uLL;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v37) )
        {
          LOBYTE(v37) = v37 | 0x20;
        }
        if ( (MiFlags & 0x800) != 0 )
        {
          LOBYTE(v37) = 32;
        }
        else if ( (MiFlags & 0x2000000) != 0 )
        {
          _mm_lfence();
        }
        v39 = (v37 & 0x20) == 0;
        v40 = v50;
        if ( v39 )
        {
          if ( (MI_INTERLOCKED_EXCHANGE_PTE(v8) & 0x20) == 0 )
          {
            v42 = v52;
LABEL_83:
            if ( v7 == 1 )
              MiFlushTbList(v42);
            if ( v14 )
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v7 != 1 && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 && (v29 & 2) == 0 )
            {
              v43 = *(_QWORD *)(v10 + 16);
              v44 = v10 + 16;
              v45 = 0xFFFFF6FB7DBED000uLL;
              if ( (unsigned __int64)(v10 + 16) >= 0xFFFFF6FB7DBED000uLL )
              {
                v45 = 0xFFFFF6FB7DBED7F8uLL;
                if ( v44 <= 0xFFFFF6FB7DBED7F8uLL )
                  v43 = MiReadPteShadow(v44, *(_QWORD *)(v10 + 16));
              }
              if ( (unsigned int)MiInvalidPteConforms(v43, v45, v41, v43)
                && *(_DWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((v47 >> 40) & 0x3FF)) + 1020LL)
                && (v46 & 2) == 0
                && ((*(_BYTE *)(a1 + 192) & 7) != 0 || !*((_QWORD *)MiGetSharedVm(a1) + 3))
                && (!(unsigned int)MI_IS_RESET_PTE(v46)
                 || (*(_BYTE *)(v10 + 34) & 0x10) != 0
                 || (*(_BYTE *)v8 & 0x42) != 0)
                && v8 <= 0xFFFFF6BFFFFFFF78uLL
                && v8 >= 0xFFFFF68000000000uLL )
              {
                MiReservePageFileSpace(v48, v8, a1);
              }
            }
            return v17;
          }
        }
        else
        {
          *(_QWORD *)v8 = v50;
          if ( v8 >= v38 && v8 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v8, v40);
        }
        v49 = a2 & 0xFFFFFFFFFFFFF000uLL;
        v42 = v52;
        MiInsertTbFlushEntry(v52, v49, 1LL, 0LL);
        goto LABEL_83;
      }
      PrototypePteVadLookup = MiMakePrototypePteVadLookup(WsleProtection, v22, v23, v24);
    }
    else if ( ((v18 >> 54) & 7) == 4 && a1 == MiGetAnyMultiplexedVm(2LL) )
    {
      MiReleasePageFileSpace(&MiSystemPartition, *(_QWORD *)(v10 + 16), 1LL);
      v33 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v34 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFF000uLL);
      if ( (a2 & 0xFFFFFFFFFFFFF000uLL) >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBED7F8uLL )
        v34 = MiReadPteShadow(v33, *(_QWORD *)(a2 & 0xFFFFFFFFFFFFF000uLL));
      PrototypePteVadLookup = v34 | 2;
      v7 = 1;
      v17 |= 4uLL;
    }
    else
    {
      v35 = MI_GET_PAGE_FRAME_FROM_PTE(&v50);
      PrototypePteVadLookup = MiMakeTransitionPte(v35, v36);
    }
    v29 = v51;
    v50 = PrototypePteVadLookup;
    goto LABEL_72;
  }
  if ( v14 )
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
