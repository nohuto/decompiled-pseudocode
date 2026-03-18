/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x1405D96D4
 * Callers:
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiIsProcessCfgEnabled @ 0x1400A53F4 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x1400A5420 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400A5A80 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140119BE4 (MiSanitizePage.c)
 *     MiInsertViewOfPhysicalSection @ 0x1401519F8 (MiInsertViewOfPhysicalSection.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 *     MiAdvanceVadHint @ 0x14056D510 (MiAdvanceVadHint.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v11; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  PVOID PoolWithTag; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // r10
  int inserted; // edi
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // edi
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r9
  BOOL IsPfn; // eax
  unsigned __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // r11
  unsigned __int64 v34; // r14
  BOOL v35; // eax
  ULONG_PTR v36; // r9
  __int64 v37; // r10
  __int64 v38; // rdi
  int v39; // esi
  __int64 v40; // rcx
  int v41; // [rsp+50h] [rbp-78h] BYREF
  __int64 v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+60h] [rbp-68h] BYREF
  struct _KTHREAD *v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  unsigned __int64 v46; // [rsp+78h] [rbp-50h]
  unsigned __int64 v47; // [rsp+80h] [rbp-48h]
  unsigned __int64 v48; // [rsp+88h] [rbp-40h]
  int v52; // [rsp+100h] [rbp+38h]

  if ( (a7 & 0x20002000) != 0 )
    return 3221225719LL;
  v11 = a5 >> 3;
  if ( a5 >> 3 == 2 || (a5 & 5) == 5 || a5 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v41 = 0;
  v44 = CurrentThread;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_DWORD *)(v14 + 64) &= ~0x4000000u;
  *(_QWORD *)(v14 + 40) = 0LL;
  *(_QWORD *)(v14 + 72) = &qword_140388130;
  v15 = *(_DWORD *)(v14 + 48) & 0xFFFFFF01;
  *(_QWORD *)(v14 + 16) = -2LL;
  *(_DWORD *)(v14 + 48) = v15 | (8 * (a5 & 0x1F)) | 1;
  v16 = MiSanitizePage(*a3 >> 12);
  v43 = 0LL;
  v45 = -1LL;
  v17 = v16;
  *(_QWORD *)(v14 + 80) = v16;
  *(_QWORD *)(v14 + 88) = v16;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
  }
  else if ( *a2 )
  {
    v23 = *a2 ^ (unsigned __int16)(*a2 ^ *(_WORD *)a3);
    v22 = (v23 + *a4 - 1LL) | 0xFFF;
    if ( (v23 >= 0x10000 || *(_QWORD *)(a1 + 1808)) && !MiCheckForConflictingVadExistence() )
    {
LABEL_10:
      v24 = (unsigned __int8)(v23 >> 44);
      v25 = (unsigned __int8)(v22 >> 44);
      *(_BYTE *)(v14 + 33) = v25;
      *(_BYTE *)(v14 + 32) = v24;
      v48 = v23 >> 12;
      v47 = v22 >> 12;
      *(_DWORD *)(v14 + 24) = v23 >> 12;
      *(_DWORD *)(v14 + 28) = v22 >> 12;
      v46 = v17
          + ((unsigned int)(v22 >> 12) | (unsigned __int64)(v25 << 32))
          - ((__int128)__PAIR128__(v24, v23 >> 12) >> 32);
      if ( v11 == 3 && (a5 & 7) != 0 )
      {
        v26 = 2;
      }
      else
      {
        v26 = 1;
        if ( v11 == 1 )
          v26 = v20;
      }
      v52 = v26;
      v42 = -1LL;
      v43 = v20;
      v17 = MiSanitizePage(v17);
      v27 = v17;
      if ( v17 <= v28 )
      {
        do
        {
          IsPfn = MiIsPfn(v27);
          if ( !IsPfn )
          {
            if ( !v31 )
              v32 = v27;
            v43 = ++v31;
            v42 = v32;
          }
          if ( (IsPfn || v27 == v30) && v31 )
          {
            inserted = MiReferenceIoPages(1, v32, v31, v26, 0LL, 0LL);
            if ( inserted < 0 )
              goto LABEL_41;
            v30 = v46;
            v45 = v42 + v43 - 1;
            v42 = -1LL;
            v43 = 0LL;
          }
          v26 = v52;
          ++v27;
        }
        while ( v27 <= v30 );
      }
      inserted = MiInsertVadCharges(v14, (struct _KPROCESS *)a1);
      if ( inserted >= 0 )
      {
        MiInsertViewOfPhysicalSection(a1, v14);
        if ( v41 == 1 )
          MiAdvanceVadHint(v48, v47, 0);
        *a4 = v22 - v23 + 1;
        if ( (a5 & 2) != 0 && MiIsProcessCfgEnabled() )
        {
          v38 = (__int64)v44;
          MiLockVad((__int64)v44, v14);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v38, a1);
          v39 = MiCommitVadCfgBits(v14, 0LL, a8);
          if ( v39 < 0 )
          {
            MiReferenceVad(v14);
            MiDeleteVad(v40, 0);
            return (unsigned int)v39;
          }
          MiUnlockVad(v38, v14);
        }
        else
        {
          UNLOCK_ADDRESS_SPACE((__int64)v44, a1);
        }
        *a2 = v23;
        return 0LL;
      }
      goto LABEL_41;
    }
    inserted = -1073741800;
  }
  else
  {
    v18 = *a4 + (unsigned __int16)*(_DWORD *)a3;
    v19 = MiSelectUserAddress(a7, a6, v18, 0x10000LL, 0LL, a5, 0, &v41, &v43);
    v20 = 0LL;
    inserted = v19;
    if ( v19 >= 0 )
    {
      v22 = (v43 + v18 - 1) | 0xFFF;
      v23 = (unsigned __int16)*(_DWORD *)a3 + v43;
      goto LABEL_10;
    }
  }
LABEL_41:
  UNLOCK_ADDRESS_SPACE((__int64)v44, a1);
  v34 = v45;
  if ( v45 != -1 )
  {
    while ( v17 <= v34 )
    {
      v35 = MiIsPfn(v17);
      if ( !v35 )
      {
        if ( !v36 )
          v37 = v17;
        ++v36;
      }
      if ( (v35 || v17 == v34) && v36 )
        MiDereferenceIoPages(1, v37, v36);
      ++v17;
    }
  }
  ExFreePoolWithTag((PVOID)v14, 0);
  return (unsigned int)inserted;
}
