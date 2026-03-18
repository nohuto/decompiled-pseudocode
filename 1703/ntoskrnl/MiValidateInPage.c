/*
 * XREFs of MiValidateInPage @ 0x1400CB690
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x140423710 (SeValidateImageData.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     SeGetStrongImageReference @ 0x1406F04D4 (SeGetStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // r10
  PVOID v4; // r12
  int v5; // r8d
  unsigned int v7; // ebx
  __int64 *v8; // r14
  __int64 v9; // rcx
  int v10; // edx
  unsigned __int64 v11; // r13
  unsigned int v12; // r8d
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  char v19; // r11
  __int64 v20; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v22; // rdx
  int v23; // ebp
  __int16 v24; // ax
  unsigned __int64 v25; // rdi
  __int64 result; // rax
  int v27; // eax
  unsigned __int64 v28; // rdi
  __int64 v29; // r13
  __int64 i; // rbp
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  __int64 *v34; // r9
  __int64 v35; // rcx
  int BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  _KPROCESS *Process; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+50h] [rbp-58h] BYREF
  __int64 v40; // [rsp+58h] [rbp-50h]
  unsigned int v41; // [rsp+B0h] [rbp+8h]
  char v42; // [rsp+B8h] [rbp+10h]
  unsigned int v43; // [rsp+C0h] [rbp+18h]
  __int64 v44; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 248);
  v2 = a1 + 256;
  v3 = *(_QWORD *)(a1 + 200);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 180);
  v40 = v3;
  if ( v1 )
    v2 = v1;
  v43 = 0;
  v7 = 0;
  v44 = *(_QWORD *)(v3 + 96);
  v42 = 0;
  v8 = (__int64 *)(v2 + 48);
  v9 = *(unsigned int *)(v2 + 40);
  v10 = *(_DWORD *)(v2 + 44);
  v11 = ((unsigned __int64)(((_WORD)v10 + (unsigned __int16)*(_DWORD *)(v2 + 32)) & 0xFFF) + v9 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v38 = v2 + 48 + 8LL * (unsigned int)v11;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v5 - v9 - v10);
  v12 = v5 - *(_DWORD *)(v2 + 40) - *(_DWORD *)(v2 + 44);
  *(_DWORD *)(a1 + 184) += (v12 >> 12) + ((v12 & 0xFFF) != 0);
  v13 = *(_QWORD *)(v44 + 8);
  v14 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(48LL * *(_QWORD *)(v2 + 48) - 0x58000000000LL + 16);
  v20 = v14;
  v41 = v14;
  if ( (*(_DWORD *)(v18 + 92) & 0xC0000) != 0 && (v13 & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
  {
    v7 = 1;
  }
  else if ( (MiFlags & 0x40000) != 0 )
  {
    if ( (v14 & 2) != 0 )
      v19 = 3;
    v42 = v19;
  }
  if ( (MiFlags & 0x8000) != 0 )
  {
    if ( v7 )
    {
      v7 |= 4u;
      if ( (*(_DWORD *)(v18 + 56) & 0x4000000) != 0 )
      {
        PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v17 + 16), v15, v16, v17);
        v20 = v41;
        if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
          v7 &= ~4u;
      }
    }
  }
  v22 = 0x4000LL;
  if ( (*(_BYTE *)(a1 + 190) & 8) != 0 )
  {
    v7 |= 2u;
    if ( (MiFlags & 0x4000) != 0 && (v7 & 5) == 1 )
      v7 &= ~2u;
  }
  v23 = v20 & 2;
  if ( (v20 & 2) != 0 && (MiFlags & 0x40000) != 0 )
  {
    if ( v7 >= 4 )
    {
LABEL_40:
      v28 = 0LL;
      goto LABEL_41;
    }
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    MiFlushEntireTbDueToAttributeChange(v20, v22, v16);
  }
  if ( v7 >= 4 )
    goto LABEL_40;
  if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
    goto LABEL_40;
  if ( (unsigned int)v11 <= 1 )
    goto LABEL_40;
  v24 = *(_WORD *)(v2 + 10);
  if ( (v24 & 0x4000) == 0 )
    goto LABEL_40;
  v4 = (v24 & 5) != 0 ? *(PVOID *)(v2 + 24) : MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( !v4 )
    goto LABEL_40;
  v25 = v13 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v7 & 1) != 0 && !*(_QWORD *)(v44 + 16) )
  {
    result = SeGetStrongImageReference(v25, &v39);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(v44 + 16) = v39;
  }
  v27 = SeValidateImageData(
          v25,
          (_DWORD)v4,
          (_DWORD)v11 << 12,
          *(_QWORD *)(a1 + 96),
          v23 != 0 ? 2 : 0,
          (__int64)Process);
  v28 = 0LL;
  if ( v27 < 0 )
    v4 = 0LL;
LABEL_41:
  if ( (unsigned __int64)v8 < v38 )
  {
    v29 = v40;
    for ( i = 0LL; ; i += 8LL )
    {
      v31 = 48 * *v8 - 0x58000000000LL;
      if ( v31 != qword_14036CED0 )
      {
        if ( v4 )
        {
          MiMarkPfnVerified(v31, v42);
        }
        else if ( v7 < 4 && (*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
        {
          v32 = MiValidateImagePfn(v29, *(_QWORD *)(a1 + 96), (_DWORD)Process, -1, BugCheckOnFailure, v41, *v8);
          if ( v32 < 0 )
          {
            if ( v32 == -1073741670 )
              break;
            v43 = -1073740748;
          }
        }
        if ( (v7 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
          {
            v28 = *(_QWORD *)(v2 + 24) + (i >> 3 << 12);
            v33 = MI_READ_PTE_LOCK_FREE(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            if ( (v33 & 0x42) == 0 )
            {
              *v34 = v33 | 0x842;
              if ( (unsigned int)MiPteInShadowRange(v34) )
                MiWritePteShadow(v35);
              if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
                KeFlushSingleTb(v28, 0LL, 1LL);
            }
          }
          BugCheckOnFailure = 0;
          if ( (int)MiRelocateImagePfn(v29, v28, *(unsigned int *)(a1 + 184), *v8) < 0 )
            break;
        }
      }
      *(_QWORD *)(a1 + 96) += 4096LL;
      ++v8;
      ++*(_DWORD *)(a1 + 184);
      if ( (unsigned __int64)v8 >= v38 )
        return v43;
      v28 = 0LL;
    }
    *(_DWORD *)(a1 + 80) = -1073741670;
  }
  return v43;
}
