/*
 * XREFs of MiMapMdlCommon @ 0x14014EA10
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x14014E860 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1406DF2D0 (MmMapLockedRestartPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiAssignInitialPageAttribute @ 0x140154D24 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiShowBadMapper @ 0x140213CEC (MiShowBadMapper.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // r14d
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r8
  ULONG_PTR v17; // r9
  int v18; // r10d
  __int64 v19; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 *v23; // rcx
  __int64 *v24; // r10
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 *v29; // r14
  unsigned __int64 v30; // r12
  __int64 v31; // r15
  unsigned __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 PteShadow; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rax
  _KPROCESS *v39; // rdx
  unsigned __int64 v40; // rbx
  __int16 v41; // cx
  __int64 v43; // r10
  __int64 v44; // r11
  unsigned __int64 *v45; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v49; // [rsp+38h] [rbp-C8h]
  __int64 v50; // [rsp+40h] [rbp-C0h]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+70h] [rbp-90h] BYREF
  __int16 v56; // [rsp+74h] [rbp-8Ch]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 *v58; // [rsp+80h] [rbp-80h]
  __int64 *v59; // [rsp+88h] [rbp-78h]

  v4 = *(unsigned int *)(a1 + 44);
  v51 = a1;
  v7 = *(_QWORD *)(a1 + 32);
  v48 = a3;
  v8 = *(unsigned int *)(a1 + 40);
  v45 = (unsigned __int64 *)(a1 + 48);
  v47 = a4;
  v9 = (unsigned __int64 *)(a1 + 48);
  v53 = (v4 + v7) & 0xFFF;
  v10 = (unsigned __int64)(v53 + v8 + 4095) >> 12;
  v11 = a4;
  v49 = v10;
  v54 = 0LL;
  v52 = v4 + ((__int64)(a2 << 25) >> 16);
  v12 = 0;
  if ( (a2 & 0xFFF) == 0 && (v10 & 0x1FF) == 0 )
    v12 = (*(_DWORD *)v9 & 0x1FFLL) == 0;
  v13 = v49;
  v14 = 0LL;
  v50 = -48 - a1;
  v15 = -48 - a1;
  v46 = 0LL;
  while ( 1 )
  {
    if ( MiIsPfnInline(*v9) )
    {
      v19 = 48 * v17 - 0x58000000000LL;
      if ( *(_WORD *)(v19 + 32) == (_WORD)v18 && dword_140388B14 == v18 )
        MiShowBadMapper(v17);
      if ( (*(_BYTE *)(v19 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v19, v47, v16, v17);
      LODWORD(v16) = MiMakeProtectionPfnCompatible(v48, v19);
    }
    else if ( v11 )
    {
      if ( v11 == 2 )
        LODWORD(v16) = v16 | 0x18;
    }
    else
    {
      LODWORD(v16) = v16 | 8;
    }
    ValidPte = MiMakeValidPte(a2, *v9, (unsigned int)v16 | 0xA0000000);
    v21 = 1LL;
    v22 = ValidPte;
    if ( v12 == 1 )
    {
      v23 = v45;
      if ( v9 == v45 )
      {
        v14 = ValidPte;
LABEL_20:
        v46 = v14;
LABEL_21:
        v24 = 0LL;
        goto LABEL_22;
      }
      v14 ^= (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      v46 = v14;
      if ( (v14 & 0xFFFFFFFFF000LL) != 0 && v14 == ValidPte )
        goto LABEL_21;
      if ( ((v14 | ValidPte) & 0x1FF000) == 0 )
      {
        v14 ^= (v14 ^ ValidPte) & 0xFFFFFFFFF000LL;
        goto LABEL_20;
      }
      v12 = 0;
      v43 = ((__int64)v9 + v15) >> 3;
      v44 = v43;
      if ( v43 )
      {
        do
        {
          a2 -= 8LL;
          v14 ^= (v14 ^ (((v14 >> 12) - 1) << 12)) & 0xFFFFFFFFF000LL;
          v46 = v14;
          *(_QWORD *)a2 = v14;
          if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            MiWritePteShadow(a2, v14);
            v21 = 1LL;
          }
          --v43;
        }
        while ( v43 );
        v13 = v49;
        v15 = v50;
      }
      a2 += 8 * v44;
    }
    v24 = 0LL;
    *(_QWORD *)a2 = v22;
    if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBED7F8uLL )
    {
      v23 = v45;
    }
    else
    {
      MiWritePteShadow(a2, v22);
      v21 = (unsigned int)((_DWORD)v24 + 1);
      v23 = v45;
    }
LABEL_22:
    ++v9;
    a2 += 8LL;
    v13 -= v21;
    v49 = v13;
    if ( !v13 )
      break;
    v11 = v47;
  }
  v25 = v51;
  v26 = v52;
  if ( v12 == (_DWORD)v21 )
  {
    v27 = *(unsigned int *)(v51 + 40);
    v28 = (__int64)v24;
    v29 = v24;
    v56 = 0;
    v57 = 20LL;
    v30 = (unsigned __int64)(v27 + v53 + 4095) >> 12;
    v55 = (int)v24;
    v58 = v24;
    v59 = v24;
    v31 = v54;
    v32 = (((a2 - 8 * v30) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = v22 | 0x80;
    do
    {
      v33 ^= (v33 ^ (*v23 << 12)) & 0xFFFFFFFFF000LL;
      PteShadow = *(_QWORD *)v32;
      if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v32, *(_QWORD *)v32);
      v46 = PteShadow;
      MiWriteValidPteNewPage((unsigned __int64 *)v32, v33);
      MiInsertTbFlushEntry(&v55, (__int64)((v32 << 25) - v31) >> 16, 1LL, 0);
      v38 = (__int64 *)MI_GET_PFN_FROM_PTE(&v46, v35, v36, v37);
      if ( !v29 )
        v29 = v38;
      v23 = v45 + 512;
      *v38 = v28;
      v32 += 8LL;
      v45 += 512;
      v28 = (__int64)v38;
      v30 -= 512LL;
    }
    while ( v30 );
    MiFlushTbList((__int64)&v55, v39);
    v40 = ExAcquireSpinLockExclusive(&dword_140389010);
    *v29 = qword_140389020;
    qword_140389020 = v28;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140389010);
    __writecr8(v40);
    v25 = v51;
    LOWORD(v21) = 1;
    v26 = v52;
  }
  v41 = v21 | *(_WORD *)(v25 + 10);
  *(_QWORD *)(v25 + 24) = v26;
  *(_WORD *)(v25 + 10) = v41;
  if ( (v41 & 0x10) != 0 )
    *(_WORD *)(v25 + 10) = v41 | 0x20;
  return v26;
}
