/*
 * XREFs of MiBuildReservationCluster @ 0x14015020C
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1400CCD28 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1400CD060 (MiDerefPageFileSpaceBitmaps.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiGetPageForWriteCluster @ 0x140150850 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x1401509A0 (MiAddToReservationCluster.c)
 *     MiReleasePageFileSectionInfo @ 0x140150C04 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x140150C40 (MiGetPageFileSectionForReservation.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiGetPageFileReservationOffset @ 0x14025F90C (MiGetPageFileReservationOffset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // rdi
  __int16 v5; // bx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 *v12; // r13
  unsigned int PageFileReservationOffset; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r15d
  unsigned __int64 v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // r13
  int v22; // r12d
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 updated; // rbx
  __int64 v36; // r12
  __int64 PteTimeStamp; // rax
  unsigned int v38; // r10d
  __int64 v39; // r11
  __int64 v40; // r9
  int v41; // r14d
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // r10d
  __int64 v45; // r15
  __int64 v46; // r15
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 *v49; // rdx
  __int64 v50; // r12
  __int64 *v51; // r15
  __int64 v52; // r13
  __int64 v53; // rax
  _QWORD *v54; // rdi
  unsigned __int64 v55; // rbx
  __int64 v56; // rdx
  unsigned int v57; // ecx
  __int64 v58; // rbx
  _DWORD *v59; // rax
  __int64 v61; // [rsp+50h] [rbp-81h] BYREF
  int v62; // [rsp+58h] [rbp-79h]
  void *Src; // [rsp+60h] [rbp-71h]
  int v64; // [rsp+68h] [rbp-69h]
  unsigned int v65; // [rsp+6Ch] [rbp-65h]
  __int64 v66; // [rsp+70h] [rbp-61h]
  __int64 v67; // [rsp+78h] [rbp-59h]
  __int64 v68; // [rsp+80h] [rbp-51h]
  _QWORD *v69; // [rsp+88h] [rbp-49h]
  _DWORD *v70; // [rsp+90h] [rbp-41h] BYREF
  _QWORD v71[4]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v72[16]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-9h]
  _QWORD *v74; // [rsp+138h] [rbp+67h]

  v74 = a1;
  v4 = *(struct _KEVENT **)(a2 + 256);
  v5 = *(_WORD *)(a2 + 204);
  v62 = 0;
  Src = a1;
  MiRefPageFileSpaceBitmaps(a2, (__int64)&v70);
  LODWORD(v61) = 0;
  v6 = 5LL * (v5 & 0xF);
  v7 = *((_QWORD *)&v4[115].Header.WaitListHead.Flink + 5 * (v5 & 0xF));
  if ( v7 == 0xFFFFFFFFFLL )
  {
LABEL_58:
    v18 = 0;
    v16 = 0;
LABEL_59:
    v54 = Src;
    goto LABEL_60;
  }
  while ( 1 )
  {
    v8 = 48 * v7 - 0x58000000000LL;
    v9 = MiLockPageInline(v8);
    v11 = v9;
    if ( v7 == *((_QWORD *)&v4[115].Header.WaitListHead.Flink + v6) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
LABEL_7:
    v7 = *((_QWORD *)&v4[115].Header.WaitListHead.Flink + v6);
    if ( v7 == 0xFFFFFFFFFLL )
      goto LABEL_58;
  }
  v12 = (unsigned __int64 *)(v8 + 16);
  PageFileReservationOffset = MiGetPageFileReservationOffset(v8 + 16, v10);
  v16 = PageFileReservationOffset;
  if ( PageFileReservationOffset >= LODWORD(v71[0]) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    goto LABEL_58;
  }
  if ( _bittest64((const signed __int64 *)v71[1], PageFileReservationOffset) )
  {
    MiUnlinkPageFromList(v8, 0LL);
    v17 = *v12;
    *v12 &= ~2uLL;
    MiInsertPageInList(v8, 8u);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    MiReleasePageFileInfo(v4, v17, 0);
    goto LABEL_7;
  }
  MiReferencePageForModifiedWrite(v8, 1, v14, v15);
  v18 = 1;
  *v74 = v7;
  if ( *a3 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    goto LABEL_59;
  }
  v19 = *(_QWORD *)(v8 + 16);
  v20 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  v66 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
  v21 = 48 * v66 - 0x58000000000LL;
  v67 = v21;
  MiLockNestedPageAtDpcInline(v21);
  *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v11);
  if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 )
  {
    v22 = v62;
    v73 = 0LL;
    goto LABEL_16;
  }
  if ( !(unsigned int)MiGetPageFileSectionForReservation(v20, v72, 0LL)
    || (v22 = 1, v23 = *(_QWORD *)(v8 + 24) >> 62, v62 = 1, (v23 & 1) != 0) )
  {
LABEL_54:
    v54 = Src;
    goto LABEL_55;
  }
LABEL_16:
  v24 = (_QWORD *)MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  v69 = v24;
  v26 = (unsigned __int64)v24;
  if ( !v24 )
  {
    v21 = v67;
    goto LABEL_54;
  }
  *v24 = MiMakeValidPte((unsigned __int64)v24, v66, 536870913LL, v25);
  if ( MiPteInShadowRange(v26) )
    MiWritePteShadow(v28, v27, v29);
  v30 = (v20 >> 3) & 0x1FF;
  v31 = 8 * v30;
  v66 = 8 * v30 + ((__int64)(v26 << 25) >> 16);
  if ( v22 )
    v32 = 8 * ((*((_QWORD *)&v73 + 1) >> 3) & 0x1FFLL);
  else
    v32 = 4088LL;
  v33 = v19 & 0xFFFFFFFFFC00FC1FuLL;
  v34 = (v32 - 8 * v30) >> 3;
  updated = v33;
  v65 = *a3;
  if ( (unsigned int)v34 >= v65 - 1 )
    LODWORD(v34) = v65 - 1;
  v36 = (unsigned int)v34;
  PteTimeStamp = MiGetPteTimeStamp(v33);
  v40 = PteTimeStamp;
  if ( PteTimeStamp + v36 >= (unsigned __int64)LODWORD(v71[0]) )
    LODWORD(v36) = LODWORD(v71[0]) - PteTimeStamp - 1;
  v41 = v61;
  v42 = v39;
  if ( (_DWORD)v36 )
  {
    do
    {
      v61 = v42 + 8;
      v68 = v40 + 1;
      updated = MiUpdatePageFileHighInPte(updated, v40 + 1);
      v43 = MiGetPageForWriteCluster(v71, v61, updated);
      if ( v43 == -1 )
        break;
      LODWORD(v36) = v36 - 1;
      ++v18;
      *++v74 = v43;
      if ( v43 == qword_1403CC408 )
        ++v41;
      if ( v64 == 3 && v18 >= 0x10 )
        break;
      v40 = v68;
      v42 = v61;
    }
    while ( (_DWORD)v36 );
    LOWORD(v39) = v66;
    v38 = v65;
  }
  v44 = v38 - v18;
  LODWORD(v61) = v41;
  if ( v62 )
    v45 = v31 - 8 * (((unsigned __int64)v73 >> 3) & 0x1FF);
  else
    v45 = v39 & 0xFFF;
  v46 = v45 >> 3;
  if ( (unsigned int)v46 >= v44 )
    LODWORD(v46) = v44;
  v47 = (unsigned int)v46;
  v48 = MiGetPteTimeStamp(v33);
  v50 = v48;
  if ( (unsigned int)v46 > (unsigned __int64)(v48 - 1) )
    v47 = (unsigned int)(v48 - 1);
  if ( (_DWORD)v47 )
  {
    v51 = (__int64 *)((char *)Src + 8 * v47);
    memmove(v51, Src, 8LL * v18);
    v52 = v66;
    do
    {
      --v50;
      v52 -= 8LL;
      v33 = MiUpdatePageFileHighInPte(v33, v50);
      v53 = MiGetPageForWriteCluster(v71, v52, v33);
      if ( v53 == -1 )
        break;
      --v51;
      LODWORD(v47) = v47 - 1;
      ++v18;
      *v51 = v53;
      if ( v53 == qword_1403CC408 )
        ++v41;
    }
    while ( (v64 != 3 || v18 < 0x10) && (_DWORD)v47 );
    v54 = Src;
    v26 = (unsigned __int64)v69;
    LODWORD(v61) = v41;
    v49 = v51;
    if ( Src != v51 )
      memmove(Src, v51, 8LL * v18);
  }
  else
  {
    v54 = Src;
  }
  v16 = MiGetPageFileReservationOffset(48LL * *v54 - 0x57FFFFFFFF0LL, v49);
  MiReleasePtes((__int64)&qword_1403CC5E0, v26, 1uLL);
  v21 = v67;
LABEL_55:
  v55 = (unsigned __int8)MiLockPageInline(v21);
  MiDecrementShareCount(v21);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v55);
  if ( v62 )
    MiReleasePageFileSectionInfo(v72);
LABEL_60:
  v56 = *a3;
  if ( v18 < (unsigned int)v56 && v18 && v18 + (unsigned __int64)v16 < LODWORD(v71[0]) )
  {
    if ( (unsigned __int64)v16 + v56 <= LODWORD(v71[0]) )
      v57 = v56 - v18;
    else
      v57 = LODWORD(v71[0]) - v16 - v18;
    v58 = a2;
    v18 += MiAddToReservationCluster(a2, (unsigned int)v71, v57, v16 + v18, (__int64)&v54[v18], (__int64)&v61);
  }
  else
  {
    v58 = a2;
  }
  v59 = MiDerefPageFileSpaceBitmaps(v58, &v70, 0);
  if ( v59 )
    ExFreePoolWithTag(v59, 0);
  *a3 = v18;
  *a4 = v18 - v61;
  return v16;
}
