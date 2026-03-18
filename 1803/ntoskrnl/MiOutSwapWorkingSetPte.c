/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x14000E4B0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r12
  __int64 v5; // r13
  ULONG_PTR v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  char v9; // bl
  __int64 v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  char v14; // dl
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  _QWORD *v28; // r14
  __int64 v29; // rcx
  _QWORD *v30; // r14
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  char v37; // r8^7
  unsigned __int8 v38; // cl
  char v39; // dl
  __int64 v40; // rax
  unsigned __int8 v41; // dl
  char v42; // cl
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // r13
  __int64 PteTimeStamp; // rax
  __int64 updated; // rax
  bool v48; // zf
  unsigned __int64 v49; // r8
  __int64 *v50; // r9
  __int64 v51; // r15
  __int64 v52; // r10
  __int64 *v53; // rdx
  __int64 v54; // [rsp+60h] [rbp+8h]
  int v55; // [rsp+70h] [rbp+18h] BYREF
  __int64 v56; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = *(_QWORD *)(v3 + 24);
  v54 = v10;
  while ( 1 )
  {
    v56 = MI_READ_PTE_LOCK_FREE(a2);
    v12 = v56;
    if ( (v56 & 1) != 0 )
      break;
    if ( (v56 & 0x400) != 0 )
      goto LABEL_12;
    if ( (v56 & 0x800) == 0 )
    {
      if ( (v56 & 2) != 0 )
      {
        v8 = v56;
        v56 &= ~2uLL;
        *(_QWORD *)a2 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (unsigned int)MiPteInShadowRange(a2) )
          MiWritePteShadow(v19, v18);
      }
      goto LABEL_12;
    }
    v13 = MiLockTransitionLeafPage(a2);
    v6 = v13;
    if ( v13 )
    {
      v14 = *(_BYTE *)(v13 + 34);
      v9 = 1;
      if ( (v14 & 0x28) == 0 )
      {
        v15 = *(_QWORD *)(v13 + 16);
        if ( (v15 & 2) != 0 )
        {
          v8 = v15;
          if ( *(_WORD *)(v6 + 32) || (v14 & 7) != 3 )
          {
            *(_QWORD *)(v6 + 16) = v15 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromList(v6);
            *(_QWORD *)(v6 + 16) &= ~2uLL;
            MiInsertPageInList(v6, 8LL);
          }
        }
      }
      goto LABEL_12;
    }
  }
  v20 = 0xFFFFF6FB7DBED000uLL;
  v21 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v56 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v56 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v56, v56 & 1, v11, 0xFFFFF6FB7DBED7F8uLL)
    && v22
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 8 * (((unsigned __int64)&v56 >> 3) & 0x1FF));
      v25 = v12 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v12;
      v12 = v25;
      if ( (v24 & 0x42) != 0 )
        v12 = v25 | 0x42;
    }
  }
  v26 = (v12 >> 12) & 0xFFFFFFFFFLL;
  if ( v26 <= qword_1403CB780 )
  {
    v27 = 48 * v26;
    if ( !MmPhysicalMemoryBlock || (*(_QWORD *)(v27 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
    {
      v6 = v27 - 0x58000000000LL;
      if ( (*(_QWORD *)(v27 - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
      {
        v28 = *(_QWORD **)(v3 + 8);
        if ( !v28 )
        {
LABEL_41:
          v10 = v54;
          goto LABEL_12;
        }
LABEL_88:
        v49 = v28[2];
        if ( v49 >= v28[1] )
          goto LABEL_41;
        v50 = (__int64 *)(*v28 + 16 * v49);
        v51 = (__int64)(a2 << 25) >> 16;
        if ( !v49 || (v52 = *(v50 - 1), v53 = v50 - 1, v52 + *(v50 - 2) != v51) )
        {
          v52 = 0LL;
          v28[2] = v49 + 1;
          v53 = v50 + 1;
          *v50 = v51;
          v50[1] = 0LL;
        }
        *v53 = v52 + 4096;
        ++v28[3];
        if ( (v9 & 2) != 0 )
          ++*(_QWORD *)(v3 + 136);
        if ( (v9 & 4) != 0 )
        {
          ++*(_QWORD *)(v3 + 120);
          goto LABEL_96;
        }
        v10 = v54;
        if ( (v9 & 8) != 0 )
          ++*(_QWORD *)(v3 + 128);
        goto LABEL_12;
      }
      if ( (*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) == a2 )
      {
        v55 = 0;
        v9 = 1;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v55);
            while ( *(__int64 *)(v6 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
          v21 = 0xFFFFF6FB7DBED7F8uLL;
          v20 = 0xFFFFF6FB7DBED000uLL;
        }
        if ( (*(_BYTE *)(v6 + 34) & 8) == 0 )
        {
          v29 = *(_QWORD *)(v6 + 16);
          v30 = (_QWORD *)(v6 + 16);
          if ( (v29 & 2) != 0 )
          {
            v8 = *(_QWORD *)(v6 + 16);
            *v30 = v29 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          if ( *(_WORD *)(v6 + 32) != 1 )
            goto LABEL_96;
          if ( (*(_BYTE *)(v5 + 184) & 7) == 0 )
          {
            v31 = (((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9;
            v32 = *(_QWORD *)(v31 - 0x98000000000LL);
            v33 = v31 - 0x98000000000LL;
            if ( v31 - 0x98000000000LL >= v20
              && v33 <= v21
              && (unsigned int)MiPteHasShadow(v31, v32, v33, v21)
              && (v32 & 1) != 0
              && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
            {
              v35 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v35 )
              {
                v36 = *(_QWORD *)(v35 + 8 * ((v34 >> 3) & 0x1FF));
                v37 = HIBYTE(v32);
                if ( (v36 & 0x20) == 0 )
                  v37 = HIBYTE(v32);
                HIBYTE(v32) = v37;
                if ( (v36 & 0x42) != 0 )
                  HIBYTE(v32) = v37;
              }
            }
            if ( (HIBYTE(v32) & 0xF) == 8 )
              goto LABEL_96;
          }
          if ( (v56 & 0x42) == 0 && (*(_BYTE *)(v6 + 34) & 0x10) == 0 )
          {
            if ( (*(_DWORD *)v30 & 4) == 0 )
            {
LABEL_96:
              v10 = v54;
              goto LABEL_12;
            }
            v9 = 3;
          }
          v38 = *(_BYTE *)(v6 + 34);
          if ( (v38 & 0x10) == 0 )
          {
            v39 = *(_BYTE *)(v6 + 34);
            if ( (*(_DWORD *)v30 & 0x400LL) == 0 && (v38 & 8) == 0 )
            {
              v40 = MiCapturePageFileInfoInline(v6 + 16, 1LL);
              v39 = *(_BYTE *)(v6 + 34);
              v7 = v40;
            }
            v41 = v39 | 0x10;
            *(_BYTE *)(v6 + 34) = v41;
            v38 = v41;
          }
          v42 = v38 >> 6;
          if ( v42 != 1 )
          {
            if ( v42 == 2 )
            {
              v9 |= 4u;
            }
            else if ( !v42 )
            {
              v9 |= 8u;
            }
          }
          if ( *(_DWORD *)(v3 + 32) == -1 )
          {
            v43 = MiTransferSoftwarePte(
                    *v30,
                    *(_QWORD *)(v54 + 8LL * *(unsigned int *)(v54 + 1140) + 6880),
                    0xFFFFFFFFLL,
                    0LL);
            v56 = v43;
            *v30 = v43;
            if ( (unsigned __int64)v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v30 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v6 + 16, v43);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v44 = *(_DWORD *)(v3 + 32);
          v9 &= ~1u;
          v28 = *(_QWORD **)v3;
          if ( v44 != -1 )
          {
            v45 = v3 + 16LL * v44;
            if ( v44 >= 5 || !*(_DWORD *)(v45 + 48) )
              goto LABEL_41;
            MiReservePageFileSpaceForPage(v54, a2, 128LL, v45 + 40);
            PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v45 + 40));
            updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v45 + 40), PteTimeStamp + 1);
            v48 = (*(_DWORD *)(v45 + 48))-- == 1;
            *(_QWORD *)(v45 + 40) = updated;
            if ( v48 )
              ++*(_DWORD *)(v3 + 32);
            v9 |= 0x10u;
          }
          goto LABEL_88;
        }
      }
    }
  }
LABEL_12:
  if ( (v9 & 1) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    v16 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v8 & 4) == 0 )
      v16 = v8;
    MiReleasePageFileInfo(v10, v16, 0LL);
  }
  if ( v7 )
    MiReleasePageFileInfo(v10, v7, 0LL);
  return 0LL;
}
