/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x1405C6964
 * Callers:
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140022EC0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     MiIsProcessCfgEnabled @ 0x14006341C (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140064450 (MiCheckForConflictingVadExistence.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiAdvanceVadHint @ 0x1404345F0 (MiAdvanceVadHint.c)
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 *     MiSelectUserAddress @ 0x1405126A0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned __int8 *a8)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // r10
  int inserted; // edi
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdi
  unsigned __int64 i; // r13
  BOOL IsPfn; // eax
  int v25; // r9d
  __int64 v26; // r10
  __int64 v27; // r11
  unsigned __int64 v29; // r14
  BOOL v30; // eax
  ULONG_PTR v31; // r9
  __int64 v32; // r10
  __int64 v33; // rdi
  int v34; // esi
  __int64 v35; // rcx
  int v36; // [rsp+40h] [rbp-78h] BYREF
  __int64 v37; // [rsp+48h] [rbp-70h]
  __int64 v38; // [rsp+50h] [rbp-68h] BYREF
  struct _KTHREAD *v39; // [rsp+58h] [rbp-60h]
  __int64 v40; // [rsp+60h] [rbp-58h]
  unsigned __int64 v41; // [rsp+68h] [rbp-50h]
  unsigned __int64 v42; // [rsp+70h] [rbp-48h]
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  if ( (a7 & 0x20002000) != 0 )
    return 3221225719LL;
  if ( a5 >> 3 == 2 || (a5 & 5) == 5 || a5 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v36 = 0;
  v39 = CurrentThread;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v13 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_DWORD *)(v13 + 64) &= ~0x4000000u;
  *(_QWORD *)(v13 + 40) = 0LL;
  v38 = 0LL;
  v40 = -1LL;
  *(_QWORD *)(v13 + 72) = &qword_14036BE30;
  v14 = *(_DWORD *)(v13 + 48) & 0xFFFFFF01;
  *(_QWORD *)(v13 + 16) = -2LL;
  *(_DWORD *)(v13 + 48) = v14 | (8 * (a5 & 0x1F)) | 1;
  v15 = *a3 >> 12;
  *(_QWORD *)(v13 + 80) = v15;
  *(_QWORD *)(v13 + 88) = v15;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
  }
  else if ( *a2 )
  {
    v21 = *a2 ^ (unsigned __int16)(*a2 ^ *(_WORD *)a3);
    v20 = (v21 + *a4 - 1LL) | 0xFFF;
    if ( (v21 >= 0x10000 || *(_QWORD *)(a1 + 1808)) && !MiCheckForConflictingVadExistence() )
    {
LABEL_10:
      *(_BYTE *)(v13 + 32) = v21 >> 44;
      *(_BYTE *)(v13 + 33) = v20 >> 44;
      v43 = v21 >> 12;
      v42 = v20 >> 12;
      v22 = v15
          + ((unsigned int)(v20 >> 12) | ((unsigned __int64)(unsigned __int8)(v20 >> 44) << 32))
          - ((unsigned int)(v21 >> 12) | ((unsigned __int64)(unsigned __int8)(v21 >> 44) << 32));
      *(_DWORD *)(v13 + 24) = v21 >> 12;
      *(_DWORD *)(v13 + 28) = v20 >> 12;
      v41 = v22;
      v38 = v18;
      v37 = -1LL;
      for ( i = v15; i <= v22; ++i )
      {
        IsPfn = MiIsPfn(i);
        if ( !IsPfn )
        {
          if ( !v26 )
            v27 = i;
          v38 = ++v26;
          v37 = v27;
        }
        if ( (IsPfn || i == v22) && v26 )
        {
          inserted = MiReferenceIoPages(1, v27, v26, v25, 0LL, 0LL);
          if ( inserted < 0 )
            goto LABEL_36;
          v22 = v41;
          v40 = v37 + v38 - 1;
          v37 = -1LL;
          v38 = 0LL;
        }
      }
      inserted = MiInsertVadCharges(v13, (struct _KPROCESS *)a1);
      if ( inserted >= 0 )
      {
        MiInsertViewOfPhysicalSection(a1, v13);
        if ( v36 == 1 )
          MiAdvanceVadHint(v43, v42, 0);
        *a4 = v20 - v21 + 1;
        if ( (a5 & 2) != 0 && MiIsProcessCfgEnabled() )
        {
          v33 = (__int64)v39;
          MiLockVad((__int64)v39, v13);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v33, a1);
          v34 = MiCommitVadCfgBits(v13, 0LL, a8);
          if ( v34 < 0 )
          {
            MiReferenceVad(v13);
            MiDeleteVad(v35, 0);
            return (unsigned int)v34;
          }
          MiUnlockVad(v33, v13);
        }
        else
        {
          UNLOCK_ADDRESS_SPACE((__int64)v39, a1);
        }
        *a2 = v21;
        return 0LL;
      }
      goto LABEL_36;
    }
    inserted = -1073741800;
  }
  else
  {
    v16 = *a4 + (unsigned __int16)*(_DWORD *)a3;
    v17 = MiSelectUserAddress(a7, a6, v16, 0x10000LL, a5, 0, &v36, &v38);
    v18 = 0LL;
    inserted = v17;
    if ( v17 >= 0 )
    {
      v20 = (v38 + v16 - 1) | 0xFFF;
      v21 = (unsigned __int16)*(_DWORD *)a3 + v38;
      goto LABEL_10;
    }
  }
LABEL_36:
  UNLOCK_ADDRESS_SPACE((__int64)v39, a1);
  v29 = v40;
  if ( v40 != -1 )
  {
    while ( v15 <= v29 )
    {
      v30 = MiIsPfn(v15);
      if ( !v30 )
      {
        if ( !v31 )
          v32 = v15;
        ++v31;
      }
      if ( (v30 || v15 == v29) && v31 )
        MiDereferenceIoPages(1, v32, v31);
      ++v15;
    }
  }
  ExFreePoolWithTag((PVOID)v13, 0);
  return (unsigned int)inserted;
}
