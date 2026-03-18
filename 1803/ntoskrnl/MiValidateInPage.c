/*
 * XREFs of MiValidateInPage @ 0x140138DF0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1405BA74C (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x140755FAC (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // r13
  ULONG_PTR v2; // r10
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
  ULONG_PTR v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 *v31; // r9
  BOOL v32; // r10d
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  int BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  _KPROCESS *Process; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-58h]
  unsigned int v40; // [rsp+B0h] [rbp+8h]
  char v41; // [rsp+B8h] [rbp+10h]
  unsigned int v42; // [rsp+C0h] [rbp+18h]
  __int64 v43; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 264;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_DWORD *)(a1 + 180);
  BugCheckParameter2 = v2;
  if ( *(_QWORD *)(a1 + 248) )
    v1 = *(_QWORD *)(a1 + 248);
  v42 = 0;
  v5 = 0;
  v43 = *(_QWORD *)(v2 + 96);
  v41 = 0;
  v6 = (__int64 *)(v1 + 48);
  v7 = *(unsigned int *)(v1 + 40);
  v8 = *(_DWORD *)(v1 + 44);
  v9 = ((unsigned __int64)(((_WORD)v8 + (unsigned __int16)*(_DWORD *)(v1 + 32)) & 0xFFF) + v7 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v38 = v1 + 8LL * (unsigned int)v9 + 48;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v3 - v7 - v8);
  v10 = v3 - *(_DWORD *)(v1 + 44) - *(_DWORD *)(v1 + 40);
  *(_DWORD *)(a1 + 184) += (v10 >> 12) + ((v10 & 0xFFF) != 0);
  v11 = *(_QWORD *)(v43 + 40);
  v12 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(48LL * *(_QWORD *)(v1 + 48) - 0x58000000000LL + 16);
  v16 = v12;
  v40 = v12;
  if ( (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 && (v11 & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
  {
    v5 = v15 + 1;
  }
  else if ( (MiFlags & 0x40000) != 0 )
  {
    if ( (v12 & 2) != 0 )
      LOBYTE(v15) = 3;
    v41 = v15;
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
        v16 = v40;
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
    MiFlushEntireTbDueToAttributeChange(v16);
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
        if ( (v5 & 1) != 0 && !*(_QWORD *)(v43 + 48) )
        {
          result = MiGetSectionStrongImageReference(v43, v17, v19);
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
  if ( (unsigned __int64)v6 >= v38 )
    return v42;
  for ( i = 0LL; ; i += 8LL )
  {
    v26 = 48 * *v6 - 0x58000000000LL;
    if ( v26 != qword_1403CC410 )
    {
      if ( v21 )
      {
        MiMarkPfnVerified(v26, v41);
      }
      else if ( v5 < 4 && (*(_QWORD *)(v43 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      {
        v27 = MiValidateImagePfn(
                BugCheckParameter2,
                *(_QWORD *)(a1 + 96),
                (_DWORD)Process,
                -1,
                BugCheckOnFailure,
                v40,
                *v6);
        if ( v27 < 0 )
        {
          if ( v27 == -1073741670 )
            goto LABEL_69;
          v42 = -1073740748;
        }
      }
      if ( (v5 & 2) != 0 )
        break;
    }
LABEL_67:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v6;
    ++*(_DWORD *)(a1 + 184);
    if ( (unsigned __int64)v6 >= v38 )
      return v42;
  }
  if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
  {
    v28 = *(_QWORD *)(v1 + 24) + (i >> 3 << 12);
    v32 = MiPteInShadowRange(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v32 && (unsigned int)MiPteHasShadow() && (v29 & 1) != 0 )
    {
      v30 = (unsigned int)v31;
      if ( (v29 & 0x20) != 0 && (v29 & 0x42) != 0 )
        goto LABEL_66;
      v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)(unsigned int)v31 >> 3) & 0x1FF));
        v30 = v29 | 0x20;
        if ( (v34 & 0x20) == 0 )
          v30 = v29;
        v29 = v30;
        if ( (v34 & 0x42) != 0 )
          v29 = v30 | 0x42;
      }
    }
    if ( (v29 & 0x42) == 0 )
    {
      v35 = v29 | 0x842;
      *v31 = v35;
      if ( v32 )
        MiWritePteShadow((__int64)v31, v35, v30);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(v28, 0, 1u);
    }
  }
LABEL_66:
  if ( (int)MiRelocateImagePfn(BugCheckParameter2, 0LL) >= 0 )
    goto LABEL_67;
LABEL_69:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v42;
}
