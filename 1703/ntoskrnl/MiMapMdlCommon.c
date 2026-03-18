/*
 * XREFs of MiMapMdlCommon @ 0x14020F120
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x14020F8C0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1406B3320 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x14002820C (MiWriteValidPteNewPage.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiAssignInitialPageAttribute @ 0x140163838 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiShowBadMapper @ 0x14020CCEC (MiShowBadMapper.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // rdx
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // r14
  __int64 v15; // r13
  char v16; // dl
  int ProtectionPfnCompatible; // r8d
  ULONG_PTR v18; // r9
  int v19; // r10d
  int v20; // r11d
  __int64 v21; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // r10
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 *v32; // r12
  unsigned __int64 v33; // r15
  __int64 v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rax
  _KPROCESS *v41; // rdx
  unsigned __int64 v42; // rbx
  __int16 v43; // cx
  __int64 v45; // r11
  __int64 v46; // r10
  __int64 v47; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 *v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v51; // [rsp+38h] [rbp-C8h]
  __int64 v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+70h] [rbp-90h] BYREF
  __int16 v57; // [rsp+74h] [rbp-8Ch]
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 *v59; // [rsp+80h] [rbp-80h]
  __int64 *v60; // [rsp+88h] [rbp-78h]

  v4 = *(unsigned int *)(a1 + 44);
  v52 = a1;
  v7 = *(_QWORD *)(a1 + 32);
  v50 = a3;
  v8 = *(unsigned int *)(a1 + 40);
  v48 = (unsigned __int64 *)(a1 + 48);
  v49 = a4;
  v9 = (unsigned __int64 *)(a1 + 48);
  v54 = (v4 + v7) & 0xFFF;
  v10 = (unsigned __int64)(v54 + v8 + 4095) >> 12;
  v51 = v10;
  v55 = 0LL;
  v53 = v4 + ((__int64)(a2 << 25) >> 16);
  v11 = 0;
  if ( (a2 & 0xFFF) == 0 && (v10 & 0x1FF) == 0 )
    v11 = (*(_DWORD *)v9 & 0x1FFLL) == 0;
  v12 = 0LL;
  v13 = -48 - a1;
  v47 = 0LL;
  v14 = v50;
  v15 = v13;
  do
  {
    if ( MiIsPfnInline(*v9) )
    {
      v21 = 48 * v18 - 0x58000000000LL;
      if ( *(_WORD *)(v21 + 32) == (_WORD)v19 && dword_14036C91C == v19 )
      {
        MiShowBadMapper(v18, v16);
        LOBYTE(v20) = v49;
      }
      if ( (*(_BYTE *)(v21 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v21, v20);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v14, v21);
    }
    else if ( v20 )
    {
      if ( v20 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
    ValidPte = MiMakeValidPte(a2, *v9, ProtectionPfnCompatible | 0xA0000000);
    v23 = 1LL;
    v24 = ValidPte;
    if ( v11 == 1 )
    {
      v25 = v48;
      v26 = 0xFFFFFFFFF000LL;
      if ( v9 == v48 )
      {
        v12 = ValidPte;
LABEL_19:
        v47 = v12;
LABEL_20:
        v27 = 0LL;
        goto LABEL_21;
      }
      v12 ^= (v12 ^ ((v12 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      v47 = v12;
      if ( (v12 & 0xFFFFFFFFF000LL) != 0 && v12 == ValidPte )
        goto LABEL_20;
      if ( ((v12 | ValidPte) & 0x1FF000) == 0 )
      {
        v12 ^= (v12 ^ ValidPte) & 0xFFFFFFFFF000LL;
        goto LABEL_19;
      }
      v11 = 0;
      v45 = ((__int64)v9 + v15) >> 3;
      if ( v45 )
      {
        do
        {
          a2 -= 8LL;
          v12 ^= v26 & (v12 ^ (((v12 >> 12) - v23) << 12));
          v47 = v12;
          *(_QWORD *)a2 = v12;
          if ( MiPteInShadowRange(a2) )
          {
            MiWritePteShadow();
            v26 = 0xFFFFFFFFF000LL;
            v23 = 1LL;
          }
        }
        while ( v46 != v23 );
      }
      a2 += 8 * v45;
    }
    *(_QWORD *)a2 = v24;
    if ( MiPteInShadowRange(a2) )
    {
      MiWritePteShadow();
      v23 = (unsigned int)((_DWORD)v27 + 1);
    }
    v25 = v48;
LABEL_21:
    ++v9;
    a2 += 8LL;
    v51 -= v23;
  }
  while ( v51 );
  v28 = v52;
  v29 = v53;
  if ( v11 == (_DWORD)v23 )
  {
    v30 = *(unsigned int *)(v52 + 40);
    v31 = (__int64)v27;
    v32 = v27;
    v57 = 0;
    v58 = 20LL;
    v33 = (unsigned __int64)(v30 + v54 + 4095) >> 12;
    v56 = (int)v27;
    v59 = v27;
    v60 = v27;
    v34 = v55;
    v35 = (((a2 - 8 * v33) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v36 = v24 | 0x80;
    do
    {
      v36 ^= (v36 ^ (*v25 << 12)) & 0xFFFFFFFFF000LL;
      v47 = MI_READ_PTE_LOCK_FREE(v35);
      MiWriteValidPteNewPage(v35);
      MiInsertTbFlushEntry((__int64)&v56, ((v35 << 25) - v34) >> 16, 1LL, 0);
      v40 = (__int64 *)MI_GET_PFN_FROM_PTE(&v47, v37, v38, v39);
      if ( !v32 )
        v32 = v40;
      v35 += 8LL;
      v25 = v48 + 512;
      *v40 = v31;
      v48 = v25;
      v31 = (__int64)v40;
      v33 -= 512LL;
    }
    while ( v33 );
    MiFlushTbList((__int64)&v56, v41);
    v42 = ExAcquireSpinLockExclusive(&dword_14036CDA0);
    *v32 = qword_14036CDB0;
    qword_14036CDB0 = v31;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036CDA0);
    __writecr8(v42);
    v28 = v52;
    LOWORD(v23) = 1;
    v29 = v53;
  }
  v43 = v23 | *(_WORD *)(v28 + 10);
  *(_QWORD *)(v28 + 24) = v29;
  *(_WORD *)(v28 + 10) = v43;
  if ( (v43 & 0x10) != 0 )
    *(_WORD *)(v28 + 10) = v43 | 0x20;
  return v29;
}
