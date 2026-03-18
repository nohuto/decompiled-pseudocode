/*
 * XREFs of MiMapMdlCommon @ 0x14013B6DC
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1400C5360 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x14074A240 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140002750 (MiWriteValidPteNewPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiAssignInitialPageAttribute @ 0x140181FB4 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiShowBadMapper @ 0x140251FB0 (MiShowBadMapper.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v7; // rdx
  unsigned __int64 *v8; // r12
  int v9; // r15d
  char v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  int ProtectionPfnCompatible; // r8d
  ULONG_PTR v14; // r9
  int v15; // r10d
  unsigned int v16; // r11d
  __int64 v17; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // r10
  unsigned __int64 *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r13
  __int16 v26; // cx
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // r11
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r15
  unsigned __int64 v34; // r15
  _QWORD *v35; // r13
  _QWORD *v36; // r12
  __int64 v37; // r14
  unsigned __int64 v38; // rbx
  __int64 v39; // rdi
  _QWORD *v40; // rsi
  __int64 v41; // r8
  _QWORD *v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 *v45; // [rsp+28h] [rbp-D8h]
  unsigned int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v48; // [rsp+38h] [rbp-C8h]
  __int64 v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  int v53; // [rsp+70h] [rbp-90h] BYREF
  __int16 v54; // [rsp+74h] [rbp-8Ch]
  __int64 v55; // [rsp+78h] [rbp-88h]
  _QWORD *v56; // [rsp+80h] [rbp-80h]
  _QWORD *v57; // [rsp+88h] [rbp-78h]

  v4 = *(unsigned int *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 32);
  v49 = a1;
  v47 = a3;
  v7 = *(unsigned int *)(a1 + 40);
  v8 = (unsigned __int64 *)(a1 + 48);
  v45 = (unsigned __int64 *)(a1 + 48);
  v51 = v4 + v5;
  v46 = a4;
  v48 = (((v4 + v5) & 0xFFFuLL) + v7 + 4095) >> 12;
  v52 = 0LL;
  v50 = v4 + ((__int64)(a2 << 25) >> 16);
  v9 = 0;
  if ( (a2 & 0xFFF) == 0 && (v48 & 0x1FF) == 0 )
    v9 = (*(_DWORD *)v8 & 0x1FFLL) == 0;
  v10 = v47;
  v11 = 0LL;
  v12 = -48 - a1;
  v44 = 0LL;
  do
  {
    if ( MiIsPfnInline(*v8) )
    {
      v17 = 48 * v14 - 0x58000000000LL;
      if ( *(_WORD *)(v17 + 32) == (_WORD)v15 && dword_1403CBDAC == v15 )
      {
        MiShowBadMapper(v14);
        v16 = v46;
      }
      if ( (*(_BYTE *)(v17 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v17, v16);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v10, v17);
    }
    else if ( v16 )
    {
      if ( v16 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
    ValidPte = MiMakeValidPte(a2, *v8, ProtectionPfnCompatible | 0xA0000000, v14);
    v19 = 1LL;
    v20 = ValidPte;
    if ( v9 == 1 )
    {
      v23 = v45;
      v28 = 0xFFFFFFFFF000LL;
      if ( v8 == v45 )
      {
        v11 = ValidPte;
LABEL_27:
        v44 = v11;
LABEL_28:
        v22 = 0LL;
        goto LABEL_13;
      }
      v29 = v11 ^ (v11 ^ ((v11 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      v44 = v29;
      v11 = v29;
      if ( (v29 & 0xFFFFFFFFF000LL) != 0 && v29 == v20 )
        goto LABEL_28;
      if ( (((unsigned int)v20 | (unsigned int)v29) & 0x1FF000) == 0 )
      {
        v11 = v29 ^ (v20 ^ v29) & 0xFFFFFFFFF000LL;
        goto LABEL_27;
      }
      v9 = 0;
      v30 = ((__int64)v8 + v12) >> 3;
      if ( v30 )
      {
        do
        {
          a2 -= 8LL;
          v11 ^= v28 & (v11 ^ (((v11 >> 12) - v19) << 12));
          v44 = v11;
          *(_QWORD *)a2 = v11;
          if ( MiPteInShadowRange(a2) )
          {
            MiWritePteShadow(v31, v11, v19);
            v19 = 1LL;
            v28 = 0xFFFFFFFFF000LL;
          }
        }
        while ( v32 != v19 );
      }
      a2 += 8 * v30;
    }
    *(_QWORD *)a2 = v20;
    if ( MiPteInShadowRange(a2) )
    {
      MiWritePteShadow(v21, v20, v19);
      v19 = 1LL;
    }
    v23 = v45;
LABEL_13:
    ++v8;
    a2 += 8LL;
    v48 -= v19;
  }
  while ( v48 );
  v24 = v49;
  v25 = v50;
  if ( v9 == (_DWORD)v19 )
  {
    v33 = *(unsigned int *)(v49 + 40);
    v54 = 0;
    v55 = 20LL;
    v34 = ((unsigned __int64)(v51 & 0xFFF) + v33 + 4095) >> 12;
    v35 = v22;
    v36 = v22;
    v53 = (int)v22;
    v56 = v22;
    v57 = v22;
    v37 = v52;
    v38 = (((a2 - 8 * v34) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = v20 | 0x80;
    do
    {
      v39 ^= (v39 ^ (*v23 << 12)) & 0xFFFFFFFFF000LL;
      v44 = MI_READ_PTE_LOCK_FREE(v38);
      MiWriteValidPteNewPage(v38);
      MiInsertTbFlushEntry((__int64)&v53, (__int64)((v38 << 25) - v37) >> 16, 1LL, 0);
      v40 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL);
      v42 = v40;
      if ( v36 )
        v42 = v36;
      v38 += 8LL;
      v23 = v45 + 512;
      *v40 = v35;
      v45 = v23;
      v36 = v42;
      v35 = v40;
      v34 -= 512LL;
    }
    while ( v34 );
    MiFlushTbList((__int64)&v53, (__int64)v23, v41);
    v43 = ExAcquireSpinLockExclusive(&SpinLock);
    *v36 = qword_1403CC2D0;
    qword_1403CC2D0 = (__int64)v40;
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
    __writecr8(v43);
    v24 = v49;
    LOWORD(v19) = 1;
    v25 = v50;
  }
  v26 = v19 | *(_WORD *)(v24 + 10);
  *(_QWORD *)(v24 + 24) = v25;
  *(_WORD *)(v24 + 10) = v26;
  if ( (v26 & 0x10) != 0 )
    *(_WORD *)(v24 + 10) = v26 | 0x20;
  return v25;
}
