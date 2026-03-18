/*
 * XREFs of MiHandleForkTransitionPte @ 0x1402232C0
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        unsigned __int8 a10,
        __int64 a11)
{
  unsigned __int64 v11; // r14
  __int64 PrototypePteDirect; // rdi
  unsigned __int64 v14; // rbx
  ULONG_PTR v15; // r8
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // r15
  __int64 v21; // r15
  _WORD *v22; // r8
  unsigned int v23; // ebp
  __int64 Page; // rax
  _KPROCESS *v25; // rdx
  unsigned __int8 v26; // di
  LONG *SharedVm; // rsi
  KIRQL v28; // al
  __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // rax
  int v32; // r10d
  __int64 v33; // r11
  __int64 *v34; // rsi
  int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // r9
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // r10
  __int64 v42; // rsi
  __int64 v43; // rbx
  _KPROCESS *v44; // rdx
  __int64 v45; // r9
  LONG *v46; // rbx
  unsigned int v47; // [rsp+30h] [rbp-68h]
  ULONG_PTR *v48; // [rsp+30h] [rbp-68h]
  __int64 v49; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-58h]
  __int64 v51; // [rsp+48h] [rbp-50h]
  _WORD *v52; // [rsp+50h] [rbp-48h] BYREF
  __int16 v53; // [rsp+58h] [rbp-40h]
  unsigned __int16 v54; // [rsp+5Ah] [rbp-3Eh]
  __int64 v58; // [rsp+C0h] [rbp+28h]

  v11 = a5;
  PrototypePteDirect = MiMakePrototypePteDirect(a5);
  v51 = PrototypePteDirect;
  v50 = 0LL;
  v14 = 0LL;
  v16 = MiLockTransitionLeafPage(v15, 0LL);
  if ( v16 )
  {
    while ( 1 )
    {
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
      v20 = (v17 >> 5) & 0x1F;
      if ( *(_WORD *)(v16 + 32) == (_WORD)v19 && ((v17 >> 5) & 0x18) != 0x10 )
      {
        *(_QWORD *)v11 = v19;
        *(_QWORD *)v11 = v17;
        if ( MiPteInShadowRange(v11) )
          MiWritePteShadow();
        v31 = MI_READ_PTE_LOCK_FREE(v11);
        if ( (v31 & 0x80u) != 0LL )
        {
          *(_QWORD *)v11 = v31 | 0x20;
          if ( v32 )
            MiWritePteShadow();
        }
        *(_QWORD *)(v11 + 24) = 2LL;
        if ( (a9 & 1) != 0 )
          *(_QWORD *)(v11 + 16) = 1LL;
        else
          *(_QWORD *)(v11 + 16) = v33;
        v34 = (__int64 *)(v16 + 16);
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(v11 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v20 << 59);
        if ( (*(_QWORD *)(v16 + 16) & 2) != 0 )
        {
          v14 = *(_QWORD *)(v16 + 16);
          if ( (*(_BYTE *)(v16 + 34) & 7) == 3 )
          {
            MiUnlinkPageFromList(v16, 0);
            v35 = 1;
          }
          else
          {
            v35 = v33;
          }
          *v34 &= ~2uLL;
          if ( v35 )
            MiInsertPageInList(v16, 8u);
        }
        *(_QWORD *)(v16 + 8) = v11;
        *(_QWORD *)(v16 + 40) |= 0x200000000000000uLL;
        v36 = MI_READ_PTE_LOCK_FREE(v16 + 16);
        if ( (v36 & 0x80u) != 0LL )
        {
          *v34 = v36 | 0x20;
          if ( MiPteInShadowRange(v16 + 16) )
            MiWritePteShadow();
        }
        v58 = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFLL;
        v49 = MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v37 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v49);
        *(_QWORD *)(v16 + 40) = v39 ^ v38 & (v39 ^ v37);
        v40 = MI_GET_PFN_FROM_PTE((__int64)&v49);
        MiLockNestedPageAtDpcInline(v40);
        *(_QWORD *)(v40 + 24) ^= (*(_QWORD *)(v40 + 24) ^ (*(_QWORD *)(v40 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *a3 = PrototypePteDirect;
        if ( MiPteInShadowRange((unsigned __int64)a3) )
          MiWritePteShadow();
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v41);
        if ( v14 )
        {
          if ( (v14 & 4) != 0 )
            v14 &= ~4uLL;
          v42 = a1;
          MiReleasePageFileInfo(*(struct _KEVENT **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 1452)), v14, 1);
        }
        else
        {
          v42 = a1;
        }
        if ( (a9 & 1) != 0 )
        {
          if ( (_DWORD)v20 != 24 )
            PrototypePteDirect |= 8uLL;
          ++*(_QWORD *)(a11 + 8);
        }
        *a4 = PrototypePteDirect;
        if ( MiPteInShadowRange((unsigned __int64)a4) )
          MiWritePteShadow();
        MiLockAndDecrementShareCount(48 * v58 - 0x58000000000LL, 0);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        return 2LL;
      }
      v21 = a1 + 1280;
      v47 = *(unsigned __int8 *)(v16 + 34) >> 6;
      if ( *a8 != -1LL )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v18);
      MiInitializePageColorBase(v21, 0, (__int64)&v52);
      v22 = v52;
      ++*v52;
      v23 = v54 | (unsigned __int16)(v53 & *v22);
      v48 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a2 + 1452));
      Page = MiGetPage((__int64)v48, v23, 0);
      *a8 = Page;
      if ( Page == -1 )
      {
        v26 = a10;
        do
        {
          MiFlushTbList(a7, v25);
          MiUnlockWorkingSetExclusive(v21, v26);
          MiWaitForFreePage(v48);
          SharedVm = MiGetSharedVm(v21);
          v28 = ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
          v26 = v28;
          MiMakeSystemAddressValid((unsigned __int64)a3, 0LL, 0, v28, 1);
          v29 = MiGetPage((__int64)v48, v23, 0);
          *a8 = v29;
        }
        while ( v29 == -1 );
        v14 = v50;
        v11 = a5;
        a10 = v26;
        PrototypePteDirect = v51;
      }
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a3) & 0x401) == 0 )
      {
        v16 = MiLockTransitionLeafPage((ULONG_PTR)a3, 0LL);
        if ( v16 )
          continue;
      }
      return 0LL;
    }
    v43 = 48 * *a8 - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v43);
    MiFinalizePageAttribute(v43, v47, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_BYTE *)(v16 + 34) & 0x20) != 0 )
    {
      MiFlushTbList(a7, v44);
      if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockWorkingSetExclusive(v21, a10);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v46 = MiGetSharedVm(v21);
        ExAcquireSpinLockExclusive(v46);
        v46[1] = 0;
        return 0LL;
      }
    }
    LOBYTE(v45) = a10;
    if ( (unsigned int)MiDuplicateCloneLeaf((unsigned __int64)a3, a4, *a8, v45, 2u) )
    {
      result = 1LL;
      *a8 = -1LL;
      ++*a6;
      return result;
    }
  }
  return 0LL;
}
