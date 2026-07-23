/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x140646C40
 * Callers:
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14003ECB0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiIsPfn @ 0x140106380 (MiIsPfn.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x14013A248 (MiSanitizePage.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1404B5D80 (MiIsVaRangeAvailable.c)
 *     MiSelectUserAddress @ 0x1405935C0 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x140594F50 (MiAdvanceVadHint.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // r15d
  char v7; // bp
  struct _KTHREAD *CurrentThread; // r13
  PVOID PoolWithTag; // rax
  __int64 v12; // rbx
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int inserted; // esi
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r10
  __int64 v26; // r12
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rsi
  int v30; // r9d
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r11
  unsigned __int64 i; // r15
  BOOL v36; // eax
  int v37; // r9d
  __int64 v38; // r10
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  _RTL_BITMAP *v42; // r8
  int v43; // edi
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int *v46; // rcx
  BOOL IsPfn; // eax
  ULONG_PTR v48; // r9
  __int64 v49; // r10
  __int64 v50; // rcx
  unsigned __int64 v51; // [rsp+50h] [rbp-68h]
  _RTL_BITMAP *v52; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-58h]
  unsigned __int64 v54; // [rsp+68h] [rbp-50h]
  unsigned __int64 v55; // [rsp+70h] [rbp-48h]
  unsigned __int64 v56; // [rsp+78h] [rbp-40h]
  __int64 v57; // [rsp+C0h] [rbp+8h] BYREF
  _QWORD *v58; // [rsp+C8h] [rbp+10h]
  int v59; // [rsp+D8h] [rbp+20h]

  v58 = a2;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = a4 >> 3;
  v7 = a4;
  if ( a4 >> 3 == 2 || (a4 & 5) == 5 || a4 == 24 )
    return 3221225541LL;
  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v12 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_QWORD *)(v12 + 16) = -2LL;
  *(_QWORD *)(v12 + 72) = &qword_1403CB2B0;
  v14 = *(_DWORD *)(v12 + 64);
  *(_QWORD *)(v12 + 40) = 0LL;
  *(_DWORD *)(v12 + 64) = v14 & 0xFBFFFFFF;
  *(_DWORD *)(v12 + 48) = *(_DWORD *)(v12 + 48) & 0xFFFFFF01 | (8 * (v7 & 0x1F)) | 1;
  v15 = MiSanitizePage(*a3 >> 12);
  v57 = 0LL;
  v51 = -1LL;
  v16 = v15;
  *(_QWORD *)(v12 + 80) = v15;
  *(_QWORD *)(v12 + 88) = v15;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v5);
  if ( (*(_DWORD *)(v5 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_8:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v5, v17, v18);
    if ( v51 != -1LL )
    {
      while ( v16 <= v51 )
      {
        IsPfn = MiIsPfn(v16);
        if ( !IsPfn )
        {
          v50 = v16;
          if ( v48 )
            v50 = v49;
          ++v48;
          v49 = v50;
        }
        if ( IsPfn || v16 == v51 )
        {
          if ( v48 )
            MiDereferenceIoPages(1, v49, v48);
        }
        ++v16;
      }
    }
    ExFreePoolWithTag((PVOID)v12, 0);
    return (unsigned int)inserted;
  }
  v20 = (unsigned __int16)*(_DWORD *)a3;
  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
  {
    v31 = *(_QWORD *)a1;
    v32 = *v58 + v20;
    v33 = *(_QWORD *)(a1 + 8);
    v34 = v32 + *(_QWORD *)(a1 + 24) - 1LL;
    v53 = v32;
    v26 = 0LL;
    if ( !MiIsVaRangeAvailable(v5, v32, v34 - v32 + 1, v31, v33) )
    {
      inserted = -1073741800;
      goto LABEL_8;
    }
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 8);
    v22 = *(_QWORD *)a1;
    v23 = *(_QWORD *)(a1 + 16);
    v53 = *(_QWORD *)(a1 + 24) + v20;
    inserted = MiSelectUserAddress(*(_DWORD *)(a1 + 40), v22, v21, v53, v23, 0LL, v7, 0, &v52, (__int64)&v57);
    if ( inserted < 0 )
      goto LABEL_8;
    v24 = (v57 + v53 - 1) | 0xFFF;
    v25 = (unsigned __int16)*(_DWORD *)a3 + v57;
    v26 = 0LL;
    v53 = v25;
  }
  v27 = v25 >> 12;
  v28 = v24 >> 12;
  *(_BYTE *)(v12 + 33) = BYTE4(v28);
  *(_BYTE *)(v12 + 32) = BYTE4(v27);
  v56 = v27;
  v55 = v28;
  v29 = v16
      + ((unsigned int)v28 | ((unsigned __int64)BYTE4(v28) << 32))
      - ((unsigned int)v27 | ((unsigned __int64)BYTE4(v27) << 32));
  *(_DWORD *)(v12 + 24) = v27;
  *(_DWORD *)(v12 + 28) = v28;
  v54 = v29;
  v59 = 1;
  if ( v6 == 3 )
  {
    if ( (v7 & 7) == 0 )
      goto LABEL_20;
    v30 = 2;
  }
  else
  {
    v30 = v6 != 1;
  }
  v59 = v30;
LABEL_20:
  v57 = -1LL;
  v16 = MiSanitizePage(v16);
  for ( i = v16; i <= v29; ++i )
  {
    v36 = MiIsPfn(i);
    if ( !v36 )
    {
      v39 = i;
      if ( v26 )
        v39 = v38;
      ++v26;
      v38 = v39;
      v57 = v39;
    }
    if ( (v36 || i == v29) && v26 )
    {
      inserted = MiReferenceIoPages(1, v38, v26, v37, 0LL, 0LL);
      if ( inserted < 0 )
        goto LABEL_8;
      v29 = v54;
      v40 = v26 + v57 - 1;
      v26 = 0LL;
      v51 = v40;
      v57 = -1LL;
    }
  }
  inserted = MiInsertVadCharges(v12, (struct _KPROCESS *)v5);
  if ( inserted < 0 )
    goto LABEL_8;
  MiInsertViewOfPhysicalSection(v5, v12);
  v42 = v52;
  if ( v52 )
    MiAdvanceVadHint(v56, v55, v52);
  if ( (v7 & 2) != 0 && MiIsProcessCfgEnabled() )
  {
    MiLockVad((__int64)CurrentThread, v12);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v5);
    v43 = MiCommitVadCfgBits(v12, 0LL, a5);
    if ( v43 < 0 )
    {
      MiReferenceVad(v12);
      MiDeleteVad(v46, 0LL, 0);
      return (unsigned int)v43;
    }
    MiUnlockVad((__int64)CurrentThread, v12, v44, v45);
  }
  else
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v5, (__int64)v42, v41);
  }
  *v58 = v53;
  return 0LL;
}
