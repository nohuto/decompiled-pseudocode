/*
 * XREFs of MiOutSwapWorkingSetCallback @ 0x140079C70
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x14007CC6C (MiOutSwapKernelStackPage.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiOutSwapWorkingSetCallback(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  unsigned __int64 updated; // rax
  __int64 v4; // r9
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  ULONG_PTR v11; // rbp
  char v12; // bl
  unsigned __int64 v13; // rdx
  char v14; // cl
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  _QWORD *v18; // r14
  unsigned __int64 v19; // rcx
  char v20; // cl
  unsigned __int64 v21; // rcx
  char v22; // cl
  unsigned __int8 v23; // cl
  unsigned int v24; // ecx
  __int64 v25; // r15
  __int64 PteTimeStamp; // rax
  bool v27; // zf
  unsigned __int64 v28; // r8
  __int64 *v29; // r9
  __int64 v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // r9
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  int v37; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR v39; // [rsp+80h] [rbp+18h]

  updated = (unsigned __int64)&retaddr;
  v39 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 24);
  v34 = v8;
  v35 = v4;
  if ( a2 <= a3 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0;
      while ( 1 )
      {
        updated = MI_READ_PTE_LOCK_FREE(v6);
        v38 = updated;
        v13 = updated;
        if ( (updated & 1) != 0 )
          break;
        if ( (updated & 0x400) != 0 )
          goto LABEL_22;
        if ( (updated & 0x800) == 0 )
        {
          LOBYTE(updated) = (unsigned __int8)updated >> 1;
          if ( (updated & 1) != 0 )
          {
            v9 = v13;
            v38 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)v6 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
            LODWORD(updated) = MiPteInShadowRange(v6);
            if ( (_DWORD)updated )
              LOBYTE(updated) = MiWritePteShadow(v16);
          }
          goto LABEL_22;
        }
        updated = MiLockTransitionLeafPage(v6);
        v11 = updated;
        if ( updated )
        {
          v14 = *(_BYTE *)(updated + 34);
          v12 = 1;
          if ( (v14 & 0x28) == 0 )
          {
            v15 = *(_QWORD *)(updated + 16);
            LOBYTE(updated) = (unsigned __int8)v15 >> 1;
            if ( (v15 & 2) != 0 )
            {
              v9 = v15;
              if ( *(_WORD *)(v11 + 32) || (v14 & 7) != 3 )
              {
                *(_QWORD *)(v11 + 16) &= ~2uLL;
              }
              else
              {
                MiUnlinkPageFromList(v11);
                *(_QWORD *)(v11 + 16) &= ~2uLL;
                LOBYTE(updated) = MiInsertPageInList(v11, 8LL);
              }
            }
          }
          goto LABEL_22;
        }
      }
      updated = MI_GET_PAGE_FRAME_FROM_PTE(&v38);
      if ( updated > qword_14036C290
        || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * updated - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        goto LABEL_22;
      }
      v17 = 48 * updated;
      LOBYTE(updated) = 0;
      v11 = v17 - 0x58000000000LL;
      if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
        break;
      updated = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
      if ( updated == v6 )
      {
        v37 = 0;
        v12 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v37);
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        LOBYTE(updated) = *(_BYTE *)(v11 + 34);
        if ( (updated & 8) == 0 )
        {
          v19 = *(_QWORD *)(v11 + 16);
          LOBYTE(updated) = (unsigned __int8)v19 >> 1;
          if ( (v19 & 2) != 0 )
          {
            *(_QWORD *)(v11 + 16) &= ~2uLL;
            v9 = v19;
          }
          if ( *(_WORD *)(v11 + 32) != 1 )
            goto LABEL_21;
          if ( (*(_BYTE *)(v35 + 192) & 7) == 0 )
          {
            updated = MI_READ_PTE_LOCK_FREE(((((__int64)(v6 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
            if ( (updated & 1) != 0 )
            {
              v21 = updated;
              LOBYTE(updated) = HIBYTE(updated) & 0xF;
              v20 = HIBYTE(updated) & 0xF | (16 * ((v21 >> 60) & 7));
            }
            else
            {
              v20 = 10;
            }
            if ( (v20 & 0xF) == 8 )
              goto LABEL_21;
          }
          if ( (v38 & 0x42) == 0 && (*(_BYTE *)(v11 + 34) & 0x10) == 0 )
          {
            LOBYTE(updated) = (unsigned __int8)*(_DWORD *)(v11 + 16) >> 2;
            if ( (*(_DWORD *)(v11 + 16) & 4) == 0 )
              goto LABEL_21;
            v12 = 3;
          }
          v22 = *(_BYTE *)(v11 + 34);
          if ( (v22 & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v11 + 16) & 0x400LL) == 0 && (v22 & 8) == 0 )
              v10 = MiCapturePageFileInfoInline((_QWORD *)(v11 + 16), 1, 0);
            *(_BYTE *)(v11 + 34) |= 0x10u;
          }
          v23 = *(_BYTE *)(v11 + 34);
          LOBYTE(updated) = v23 >> 6;
          if ( v23 >> 6 != 1 )
          {
            if ( (_BYTE)updated == 2 )
            {
              v12 |= 4u;
            }
            else if ( v23 < 0x40u )
            {
              v12 |= 8u;
            }
          }
          if ( *(_DWORD *)(a1 + 32) == -1 )
          {
            v38 = MiTransferSoftwarePte(
                    *(_QWORD *)(v11 + 16),
                    *(_QWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 1188) + 5600),
                    0xFFFFFFFFLL);
            *(_QWORD *)(v11 + 16) = v38;
            LODWORD(updated) = MiPteInShadowRange(v11 + 16);
            if ( (_DWORD)updated )
              LOBYTE(updated) = MiWritePteShadow(v11 + 16);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v24 = *(_DWORD *)(a1 + 32);
          v12 &= ~1u;
          v18 = *(_QWORD **)a1;
          if ( v24 != -1 )
          {
            v25 = a1 + 16LL * v24;
            if ( v24 >= 5 || !*(_DWORD *)(v25 + 48) )
            {
              v7 = v39;
              goto LABEL_22;
            }
            MiReservePageFileSpaceForPage(v34, v6, 128LL, v25 + 40);
            PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v25 + 40));
            updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v25 + 40), PteTimeStamp + 1);
            v27 = (*(_DWORD *)(v25 + 48))-- == 1;
            *(_QWORD *)(v25 + 40) = updated;
            if ( v27 )
              ++*(_DWORD *)(a1 + 32);
            v12 |= 0x10u;
          }
          goto LABEL_64;
        }
      }
LABEL_22:
      if ( (v12 & 1) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
      {
        if ( (v9 & 4) != 0 )
          v9 &= ~4uLL;
        v8 = v34;
        LOBYTE(updated) = MiReleasePageFileInfo(v34, v9, 0LL);
      }
      else
      {
        v8 = v34;
      }
      if ( v10 )
        LOBYTE(updated) = MiReleasePageFileInfo(v8, v10, 0LL);
      v6 += 8LL;
      if ( v6 > v7 )
      {
        v4 = v35;
        goto LABEL_80;
      }
    }
    v18 = *(_QWORD **)(a1 + 8);
    if ( !v18 )
      goto LABEL_21;
LABEL_64:
    v28 = v18[2];
    if ( v28 >= v18[1] )
      goto LABEL_21;
    v29 = (__int64 *)(*v18 + 16 * v28);
    v30 = (__int64)(v6 << 25) >> 16;
    if ( !v28 || (v31 = v29 - 1, updated = *(v29 - 2) + *(v29 - 1), updated != v30) )
    {
      LOBYTE(updated) = v28 + 1;
      v18[2] = v28 + 1;
      v31 = v29 + 1;
      *v29 = v30;
      v29[1] = 0LL;
    }
    *v31 += 4096LL;
    ++v18[3];
    if ( (v12 & 2) != 0 )
      ++*(_QWORD *)(a1 + 136);
    if ( (v12 & 4) != 0 )
    {
      ++*(_QWORD *)(a1 + 120);
LABEL_21:
      v7 = v39;
      goto LABEL_22;
    }
    v7 = v39;
    if ( (v12 & 8) != 0 )
      ++*(_QWORD *)(a1 + 128);
    goto LABEL_22;
  }
LABEL_80:
  if ( *(_BYTE *)(a1 + 36) != 17 )
  {
    if ( (unsigned int)MiWorkingSetIsContended(v4) )
    {
LABEL_84:
      LOBYTE(updated) = MiRelockWorkingSetExclusive(v32, *(unsigned __int8 *)(a1 + 36));
      return updated;
    }
    LODWORD(updated) = KeShouldYieldProcessor();
    if ( (_DWORD)updated )
    {
      v32 = v35;
      goto LABEL_84;
    }
  }
  return updated;
}
