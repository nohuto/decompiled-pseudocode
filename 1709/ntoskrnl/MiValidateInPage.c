/*
 * XREFs of MiValidateInPage @ 0x1400CCA70
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x140509A44 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x1406EC490 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r10
  int v3; // r8d
  unsigned int v5; // ebx
  __int64 *v6; // r14
  __int64 v7; // rcx
  int v8; // edx
  unsigned __int64 v9; // r15
  unsigned int v10; // r8d
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 PrototypePteDirect; // rax
  __int64 v19; // r8
  int v20; // ebp
  PVOID v21; // r12
  __int16 v22; // ax
  int v23; // edi
  __int64 result; // rax
  __int64 i; // rbp
  unsigned __int64 v26; // r11
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdi
  __int64 *v30; // r9
  __int64 PteShadow; // rax
  __int64 v32; // rax
  int BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  _KPROCESS *Process; // [rsp+40h] [rbp-68h]
  unsigned __int64 v35; // [rsp+48h] [rbp-60h]
  __int64 v36; // [rsp+50h] [rbp-58h]
  unsigned int v37; // [rsp+B0h] [rbp+8h]
  unsigned int v38; // [rsp+B8h] [rbp+10h]
  unsigned int v39; // [rsp+C0h] [rbp+18h]
  __int64 v40; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 256;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_DWORD *)(a1 + 180);
  v36 = v2;
  if ( *(_QWORD *)(a1 + 248) )
    v1 = *(_QWORD *)(a1 + 248);
  v39 = 0;
  v5 = 0;
  v40 = *(_QWORD *)(v2 + 96);
  v38 = 0;
  v6 = (__int64 *)(v1 + 48);
  v7 = *(unsigned int *)(v1 + 40);
  v8 = *(_DWORD *)(v1 + 44);
  v9 = ((unsigned __int64)(((_WORD)v8 + (unsigned __int16)*(_DWORD *)(v1 + 32)) & 0xFFF) + v7 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v35 = v1 + 48 + 8LL * (unsigned int)v9;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v3 - v7 - v8);
  v10 = v3 - *(_DWORD *)(v1 + 40) - *(_DWORD *)(v1 + 44);
  *(_DWORD *)(a1 + 184) += (v10 >> 12) + ((v10 & 0xFFF) != 0);
  v11 = *(_QWORD *)(v40 + 8);
  v12 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(48LL * *(_QWORD *)(v1 + 48) - 0x58000000000LL + 16);
  v16 = v12;
  v37 = v12;
  if ( (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 && (v11 & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
  {
    v5 = v15 + 1;
  }
  else if ( (MiFlags & 0x40000) != 0 )
  {
    if ( (v12 & 2) != 0 )
      v15 = 3;
    v38 = v15;
  }
  v17 = (unsigned int)MiFlags;
  if ( (MiFlags & 0x8000) != 0 )
  {
    if ( v5 )
    {
      v5 |= 4u;
      if ( (*(_DWORD *)(v14 + 56) & 0x4000000) != 0 )
      {
        PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v13 + 16));
        v16 = v37;
        if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
          v5 &= ~4u;
      }
    }
  }
  v19 = 0x4000LL;
  if ( (*(_BYTE *)(a1 + 190) & 8) != 0 )
  {
    v5 |= 2u;
    if ( (v17 & 0x4000) != 0 && (v5 & 5) == 1 )
      v5 &= ~2u;
  }
  v20 = v16 & 2;
  if ( (v16 & 2) != 0 && (v17 & 0x40000) != 0 && v5 < 4 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v1 + 24), (PMDL)v1);
    MiFlushEntireTbDueToAttributeChange(v16, v17, v19);
    v19 = 0x4000LL;
  }
  v21 = 0LL;
  if ( v5 < 4 && (v11 & 0xFFFFFFFFFFFFFFF8uLL) > 8 && (unsigned int)v9 > 1 )
  {
    v22 = *(_WORD *)(v1 + 10);
    if ( (v22 & 0x4000) != 0 )
    {
      v21 = (v22 & 5) != 0
          ? *(PVOID *)(v1 + 24)
          : MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
      if ( v21 )
      {
        v23 = v11 & 0xFFFFFFF8;
        if ( (v5 & 1) != 0 && !*(_QWORD *)(v40 + 16) )
        {
          result = MiGetSectionStrongImageReference(v40, v17, v19);
          if ( (int)result < 0 )
            return result;
        }
        if ( (int)SeValidateImageData(
                    v23,
                    (_DWORD)v21,
                    (_DWORD)v9 << 12,
                    *(_QWORD *)(a1 + 96),
                    v20 != 0 ? 2 : 0,
                    (__int64)Process) < 0 )
          v21 = 0LL;
      }
    }
  }
  if ( (unsigned __int64)v6 >= v35 )
    return v39;
  for ( i = 0LL; ; i += 8LL )
  {
    v26 = 0xFFFFF6FB7DBED7F8uLL;
    v27 = 48 * *v6 - 0x58000000000LL;
    if ( v27 != qword_140389190 )
      break;
LABEL_63:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v6;
    ++*(_DWORD *)(a1 + 184);
    if ( (unsigned __int64)v6 >= v35 )
      return v39;
  }
  if ( v21 )
  {
    MiMarkPfnVerified(v27, v38);
  }
  else
  {
    if ( v5 >= 4 || (*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      goto LABEL_49;
    v28 = MiValidateImagePfn(v36, *(_QWORD *)(a1 + 96), (_DWORD)Process, -1, BugCheckOnFailure, v37, *v6);
    if ( v28 < 0 )
    {
      if ( v28 == -1073741670 )
        goto LABEL_65;
      v39 = -1073740748;
    }
  }
  v26 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_49:
  if ( (v5 & 2) == 0 )
    goto LABEL_63;
  if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
  {
    v29 = *(_QWORD *)(v1 + 24) + (i >> 3 << 12);
    v30 = (__int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v30;
    if ( (unsigned __int64)v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v30 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(
                    (((unsigned __int64)(*(_QWORD *)(v1 + 24) + (i >> 3 << 12)) >> 9) & 0x7FFFFFFFF8LL)
                  - 0x98000000000LL,
                    *v30);
    if ( (PteShadow & 0x42) == 0 )
    {
      v32 = PteShadow | 0x842;
      *v30 = v32;
      if ( (unsigned __int64)v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v30 <= v26 )
        MiWritePteShadow(v30, v32);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(v29, 0, 1u);
    }
  }
  else
  {
    v29 = 0LL;
  }
  BugCheckOnFailure = 0;
  if ( (int)MiRelocateImagePfn(v36, v29, *(unsigned int *)(a1 + 184), *v6) >= 0 )
    goto LABEL_63;
LABEL_65:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v39;
}
