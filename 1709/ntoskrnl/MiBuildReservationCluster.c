/*
 * XREFs of MiBuildReservationCluster @ 0x1402246F4
 * Callers:
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiAddToReservationCluster @ 0x140223F60 (MiAddToReservationCluster.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140224FAC (MiDerefPageFileSpaceBitmaps.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 *     MiGetPageFileSectionForReservation @ 0x140226494 (MiGetPageFileSectionForReservation.c)
 *     MiGetPageForWriteCluster @ 0x140226540 (MiGetPageForWriteCluster.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140226C68 (MiRefPageFileSpaceBitmaps.c)
 *     MiReleasePageFileSectionInfo @ 0x140226CE0 (MiReleasePageFileSectionInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  struct _KEVENT *v4; // rdi
  __int16 v5; // bx
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r12
  unsigned __int64 *v11; // rsi
  unsigned int PageFileReservationOffset; // eax
  unsigned int v13; // r15d
  unsigned __int64 v14; // rbx
  unsigned int v15; // esi
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // r14
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 updated; // rbx
  __int64 v34; // r13
  unsigned __int64 PteTimeStamp; // rax
  unsigned int v36; // r9d
  __int64 v37; // r11
  __int64 v38; // r8
  unsigned __int64 v39; // r10
  __int64 v40; // rdx
  int v41; // r14d
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // r9d
  __int64 v45; // r15
  __int64 v46; // r15
  __int64 v47; // rbx
  unsigned __int64 v48; // rax
  __int64 v49; // r13
  __int64 *v50; // r15
  __int64 v51; // r12
  __int64 v52; // rax
  unsigned __int64 v53; // r9
  __int64 v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // rbx
  void *v57; // rax
  __int64 v59; // [rsp+50h] [rbp-81h] BYREF
  int v60; // [rsp+58h] [rbp-79h]
  void *Src; // [rsp+60h] [rbp-71h]
  int v62; // [rsp+68h] [rbp-69h]
  unsigned int v63; // [rsp+6Ch] [rbp-65h]
  __int64 v64; // [rsp+70h] [rbp-61h]
  __int64 v65; // [rsp+78h] [rbp-59h]
  unsigned __int64 v66; // [rsp+80h] [rbp-51h]
  _QWORD *v67; // [rsp+88h] [rbp-49h]
  char v68[8]; // [rsp+90h] [rbp-41h] BYREF
  _QWORD v69[4]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v70[16]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v71; // [rsp+C8h] [rbp-9h]
  _QWORD *v72; // [rsp+138h] [rbp+67h]

  v72 = a1;
  v4 = *(struct _KEVENT **)(a2 + 256);
  v5 = *(_WORD *)(a2 + 204);
  v60 = 0;
  Src = a1;
  MiRefPageFileSpaceBitmaps(a2, v68);
  LODWORD(v59) = 0;
  v6 = 5LL * (v5 & 0xF);
  v7 = *((_QWORD *)&v4[112].Header.WaitListHead.Blink + 5 * (v5 & 0xF));
  if ( v7 == 0xFFFFFFFFFLL )
  {
LABEL_57:
    v15 = 0;
    v13 = 0;
LABEL_58:
    v22 = Src;
    goto LABEL_59;
  }
  while ( 1 )
  {
    v8 = 48 * v7 - 0x58000000000LL;
    v9 = MiLockPageInline(v8);
    v10 = v9;
    if ( v7 == *((_QWORD *)&v4[112].Header.WaitListHead.Blink + v6) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
LABEL_7:
    v7 = *((_QWORD *)&v4[112].Header.WaitListHead.Blink + v6);
    if ( v7 == 0xFFFFFFFFFLL )
      goto LABEL_57;
  }
  v11 = (unsigned __int64 *)(v8 + 16);
  PageFileReservationOffset = MiGetPageFileReservationOffset(v8 + 16);
  v13 = PageFileReservationOffset;
  if ( PageFileReservationOffset >= LODWORD(v69[0]) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    goto LABEL_57;
  }
  if ( _bittest64((const signed __int64 *)v69[1], PageFileReservationOffset) )
  {
    MiUnlinkPageFromList(v8, 0LL);
    v14 = *v11;
    *v11 &= ~2uLL;
    MiInsertPageInList(v8, 8);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    MiReleasePageFileInfo(v4, v14, 0);
    goto LABEL_7;
  }
  MiReferencePageForModifiedWrite(v8, 1);
  v15 = 1;
  *v72 = v7;
  if ( *a3 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    goto LABEL_58;
  }
  v16 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  v17 = *(_QWORD *)(v8 + 16);
  v18 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
  v65 = 48 * v18 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v65);
  v19 = v65;
  v20 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v65 + 24) ^= (*(_QWORD *)(v65 + 24) ^ (*(_QWORD *)(v65 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( !(unsigned int)MiGetPageFileSectionForReservation(v16, v70, 0LL)
      || (v21 = *(_QWORD *)(v8 + 24) >> 62, v60 = 1, (v21 & 1) != 0) )
    {
LABEL_14:
      v22 = Src;
      goto LABEL_15;
    }
  }
  else
  {
    v71 = 0LL;
  }
  v24 = (_QWORD *)MiReservePtes((__int64)&qword_140389360, 1uLL, v20);
  v67 = v24;
  v25 = (unsigned __int64)v24;
  if ( !v24 )
    goto LABEL_14;
  *v24 = MiMakeValidPte((unsigned __int64)v24, v18, 536870913);
  if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  v27 = (__int64)(v25 << 25) >> 16;
  v28 = (v16 >> 3) & 0x1FF;
  v29 = 8 * v28;
  v64 = 8 * v28 + v27;
  if ( v60 )
    v30 = 8 * ((*((_QWORD *)&v71 + 1) >> 3) & 0x1FFLL);
  else
    v30 = 4088LL;
  v31 = v17 & 0xFFFFFFFFFC00FC1FuLL;
  v32 = (v30 - 8 * v28) >> 3;
  updated = v31;
  v63 = *a3;
  if ( (unsigned int)v32 >= v63 - 1 )
    LODWORD(v32) = v63 - 1;
  v34 = (unsigned int)v32;
  PteTimeStamp = MiGetPteTimeStamp(v31, v27, v26);
  v38 = v69[0];
  v39 = PteTimeStamp;
  v40 = PteTimeStamp + v34;
  if ( PteTimeStamp + v34 >= LODWORD(v69[0]) )
  {
    v38 = (unsigned int)(LODWORD(v69[0]) - PteTimeStamp);
    LODWORD(v34) = v38 - 1;
  }
  v41 = v59;
  v42 = v37;
  if ( (_DWORD)v34 )
  {
    do
    {
      v59 = v42 + 8;
      v66 = v39 + 1;
      updated = MiUpdatePageFileHighInPte(updated, v39 + 1);
      v43 = MiGetPageForWriteCluster(v69, v59, updated);
      if ( v43 == -1 )
        break;
      LODWORD(v34) = v34 - 1;
      ++v15;
      *++v72 = v43;
      if ( v43 == qword_140389188 )
        ++v41;
      if ( v62 == 3 && v15 >= 0x10 )
        break;
      v39 = v66;
      v42 = v59;
    }
    while ( (_DWORD)v34 );
    LOWORD(v37) = v64;
    v36 = v63;
  }
  v44 = v36 - v15;
  LODWORD(v59) = v41;
  if ( v60 )
    v45 = v29 - 8 * (((unsigned __int64)v71 >> 3) & 0x1FF);
  else
    v45 = v37 & 0xFFF;
  v46 = v45 >> 3;
  if ( (unsigned int)v46 >= v44 )
    LODWORD(v46) = v44;
  v47 = (unsigned int)v46;
  v48 = MiGetPteTimeStamp(v31, v40, v38);
  v49 = v48;
  if ( (unsigned int)v46 > v48 - 1 )
    v47 = (unsigned int)(v48 - 1);
  if ( (_DWORD)v47 )
  {
    v50 = (__int64 *)((char *)Src + 8 * v47);
    memmove(v50, Src, 8LL * v15);
    v51 = v64;
    do
    {
      --v49;
      v51 -= 8LL;
      v31 = MiUpdatePageFileHighInPte(v31, v49);
      v52 = MiGetPageForWriteCluster(v69, v51, v31);
      if ( v52 == -1 )
        break;
      --v50;
      LODWORD(v47) = v47 - 1;
      ++v15;
      *v50 = v52;
      if ( v52 == qword_140389188 )
        ++v41;
    }
    while ( (v62 != 3 || v15 < 0x10) && (_DWORD)v47 );
    v25 = (unsigned __int64)v67;
    LODWORD(v59) = v41;
    v22 = Src;
    if ( Src != v50 )
      memmove(Src, v50, 8LL * v15);
  }
  else
  {
    v22 = Src;
  }
  v13 = MiGetPageFileReservationOffset(48LL * *v22 - 0x57FFFFFFFF0LL);
  MiReleasePtes((__int64)&qword_140389360, v25, 1u, v53);
LABEL_15:
  v23 = (unsigned __int8)MiLockPageInline(v65);
  MiDecrementShareCount(v65);
  _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v23);
  if ( v60 )
    MiReleasePageFileSectionInfo(v70);
LABEL_59:
  v54 = *a3;
  if ( v15 < (unsigned int)v54 && v15 && v15 + (unsigned __int64)v13 < LODWORD(v69[0]) )
  {
    if ( (unsigned __int64)v13 + v54 <= LODWORD(v69[0]) )
      v55 = v54 - v15;
    else
      v55 = LODWORD(v69[0]) - v13 - v15;
    v56 = a2;
    v15 += MiAddToReservationCluster(a2, (__int64)v69, v55, v13 + v15, &v22[v15], &v59);
  }
  else
  {
    v56 = a2;
  }
  v57 = (void *)MiDerefPageFileSpaceBitmaps(v56, v68, 0LL);
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  *a3 = v15;
  *a4 = v15 - v59;
  return v13;
}
