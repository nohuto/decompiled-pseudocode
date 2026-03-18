/*
 * XREFs of MiBuildReservationCluster @ 0x140139AAC
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1400321DC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14003224C (MiRefPageFileSpaceBitmaps.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     MiGetPageForWriteCluster @ 0x14013A0CC (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14013A21C (MiAddToReservationCluster.c)
 *     MiReleasePageFileSectionInfo @ 0x14013A480 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A4BC (MiGetPageFileSectionForReservation.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiGetPageFileReservationOffset @ 0x14021A1C8 (MiGetPageFileReservationOffset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(__int64 *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // r12
  unsigned __int64 *v13; // rsi
  unsigned int PageFileReservationOffset; // eax
  unsigned int v15; // r15d
  unsigned __int64 v16; // rbx
  unsigned int v17; // esi
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 *v23; // r14
  unsigned __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 updated; // rbx
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  __int64 PteTimeStamp; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r14d
  __int64 v40; // r10
  __int64 v41; // r10
  __int64 v42; // rax
  __int64 v43; // r13
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r15
  __int64 *v50; // rdx
  __int64 *v51; // rbx
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // rbx
  _DWORD *v57; // rax
  int v59; // [rsp+4Ch] [rbp-75h]
  __int64 v61; // [rsp+58h] [rbp-69h] BYREF
  int v62; // [rsp+60h] [rbp-61h]
  __int64 v63; // [rsp+68h] [rbp-59h]
  __int64 v64; // [rsp+70h] [rbp-51h]
  __int64 v65; // [rsp+78h] [rbp-49h]
  _QWORD *v66; // [rsp+80h] [rbp-41h]
  _DWORD *v67; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v68[4]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v69[16]; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-1h]
  __int64 *v71; // [rsp+128h] [rbp+67h]

  v71 = a1;
  v4 = *(struct _KEVENT **)(a2 + 256);
  v59 = 0;
  v5 = 5 * ((*(_WORD *)(a2 + 204) & 0xF) + 64LL);
  MiRefPageFileSpaceBitmaps(a2, (__int64)&v67);
  LODWORD(v61) = 0;
  v6 = *((_QWORD *)&v4->Header.WaitListHead.Blink + v5);
  if ( v6 == 0xFFFFFFFFFLL )
  {
LABEL_56:
    v17 = 0;
    v15 = 0;
LABEL_57:
    v23 = a1;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    v12 = v8;
    if ( v6 == *((_QWORD *)&v4->Header.WaitListHead.Blink + v5) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
LABEL_7:
    v6 = *((_QWORD *)&v4->Header.WaitListHead.Blink + v5);
    if ( v6 == 0xFFFFFFFFFLL )
      goto LABEL_56;
  }
  v13 = (unsigned __int64 *)(v7 + 16);
  PageFileReservationOffset = MiGetPageFileReservationOffset(v7 + 16, v9, v10, v11);
  v15 = PageFileReservationOffset;
  if ( PageFileReservationOffset >= LODWORD(v68[0]) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v12);
    goto LABEL_56;
  }
  if ( _bittest64((const signed __int64 *)v68[1], PageFileReservationOffset) )
  {
    MiUnlinkPageFromList(v7, 0);
    v16 = *v13;
    *v13 &= ~2uLL;
    MiInsertPageInList(v7, 8u);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v12);
    MiReleasePageFileInfo(v4, v16, 0);
    goto LABEL_7;
  }
  MiReferencePageForModifiedWrite(v7, 1);
  v17 = 1;
  *v71 = v6;
  if ( *a3 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v12);
    goto LABEL_57;
  }
  v18 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
  v19 = *(_QWORD *)(v7 + 16);
  v20 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL;
  v64 = 48 * v20 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v64);
  v21 = v64;
  v22 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v64 + 24) ^= (*(_QWORD *)(v64 + 24) ^ (*(_QWORD *)(v64 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v12);
  if ( (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( !(unsigned int)MiGetPageFileSectionForReservation(v18, v69, 0LL)
      || (v59 = 1, (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0) )
    {
LABEL_14:
      v23 = a1;
      goto LABEL_15;
    }
  }
  else
  {
    v70 = 0LL;
  }
  v25 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v22);
  v66 = v25;
  v26 = v25;
  if ( !v25 )
    goto LABEL_14;
  *v25 = MiMakeValidPte((unsigned __int64)v25, v20, 536870913);
  if ( (unsigned int)MiPteInShadowRange(v26) )
    MiWritePteShadow(v27);
  v28 = (v18 >> 3) & 0x1FF;
  v29 = (__int64)((_QWORD)v26 << 25) >> 16;
  v63 = v29 + 8 * v28;
  if ( v59 )
    v30 = 8 * ((*((_QWORD *)&v70 + 1) >> 3) & 0x1FFLL);
  else
    v30 = 4088LL;
  v31 = v19 & 0xFFFFFFFFFC00FC1FuLL;
  v32 = (v30 - 8 * v28) >> 3;
  updated = v31;
  v34 = *a3;
  v35 = *a3 - 1;
  if ( (unsigned int)v32 < v35 )
    v35 = v32;
  PteTimeStamp = MiGetPteTimeStamp(v31);
  v38 = PteTimeStamp;
  if ( PteTimeStamp + (unsigned __int64)v35 >= LODWORD(v68[0]) )
    v35 = LODWORD(v68[0]) - PteTimeStamp - 1;
  v39 = v61;
  v40 = v37;
  if ( v35 )
  {
    do
    {
      v65 = v40 + 8;
      v61 = v38 + 1;
      updated = MiUpdatePageFileHighInPte(updated, v38 + 1);
      v42 = MiGetPageForWriteCluster(v68, v41, updated);
      if ( v42 == -1 )
        break;
      --v35;
      ++v17;
      *++v71 = v42;
      if ( v42 == qword_14036CEC8 )
        ++v39;
      if ( v62 == 3 && v17 >= 0x10 )
        break;
      v38 = v61;
      v40 = v65;
    }
    while ( v35 );
    v37 = v63;
  }
  v43 = v34 - v17;
  LODWORD(v61) = v39;
  if ( v59 )
    v44 = v29 + 8 * (((unsigned __int64)v70 >> 3) & 0x1FF);
  else
    v44 = v37 & 0xFFFFFFFFFFFFF000uLL;
  v45 = (__int64)(v37 - v44) >> 3;
  if ( (unsigned int)v45 < (unsigned int)v43 )
    v43 = (unsigned int)v45;
  v46 = MiGetPteTimeStamp(v31);
  v49 = v46;
  v50 = (__int64 *)(v46 - 1);
  if ( (unsigned int)v43 > (unsigned __int64)(v46 - 1) )
    v43 = (unsigned int)(v46 - 1);
  if ( (_DWORD)v43 )
  {
    v51 = &a1[v43];
    memmove(v51, a1, 8LL * v17);
    v52 = v63;
    do
    {
      --v49;
      v52 -= 8LL;
      v31 = MiUpdatePageFileHighInPte(v31, v49);
      v53 = MiGetPageForWriteCluster(v68, v52, v31);
      if ( v53 == -1 )
        break;
      --v51;
      LODWORD(v43) = v43 - 1;
      ++v17;
      *v51 = v53;
      if ( v53 == qword_14036CEC8 )
        ++v39;
    }
    while ( (v62 != 3 || v17 < 0x10) && (_DWORD)v43 );
    LODWORD(v61) = v39;
    v23 = a1;
    v50 = v51;
    if ( a1 != v51 )
      memmove(a1, v51, 8LL * v17);
  }
  else
  {
    v23 = a1;
  }
  v15 = MiGetPageFileReservationOffset(48 * *v23 - 0x57FFFFFFFF0LL, v50, v47, v48);
  MiReleasePtes((__int64)&qword_14036D0A0, v66, 1u);
LABEL_15:
  v24 = (unsigned __int8)MiLockPageInline(v64);
  MiDecrementShareCount(v64);
  _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v24);
  if ( v59 )
    MiReleasePageFileSectionInfo(v69);
LABEL_58:
  v54 = *a3;
  if ( v17 < (unsigned int)v54 && v17 && v17 + (unsigned __int64)v15 < LODWORD(v68[0]) )
  {
    if ( (unsigned __int64)v15 + v54 <= LODWORD(v68[0]) )
      v55 = v54 - v17;
    else
      v55 = LODWORD(v68[0]) - v15 - v17;
    v56 = a2;
    v17 += MiAddToReservationCluster(a2, (unsigned int)v68, v55, v15 + v17, (__int64)&v23[v17], (__int64)&v61);
  }
  else
  {
    v56 = a2;
  }
  v57 = MiDerefPageFileSpaceBitmaps(v56, &v67, 0);
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  *a3 = v17;
  *a4 = v17 - v61;
  return v15;
}
