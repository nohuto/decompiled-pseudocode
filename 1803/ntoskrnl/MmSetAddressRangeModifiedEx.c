/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x140124A90
 * Callers:
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x1400CC170 (MmSetAddressRangeModified.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetOptimal @ 0x140048EC8 (MiLockWorkingSetOptimal.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140125D90 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int8 v4; // r15
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // r15
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v23; // r11
  bool v24; // zf
  struct _KEVENT *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rcx
  char v35; // [rsp+20h] [rbp-128h]
  unsigned __int8 v36[3]; // [rsp+21h] [rbp-127h] BYREF
  int ProtectionMask; // [rsp+24h] [rbp-124h]
  int v38; // [rsp+28h] [rbp-120h]
  __int64 v39; // [rsp+30h] [rbp-118h] BYREF
  struct _KEVENT *v40; // [rsp+38h] [rbp-110h]
  unsigned __int64 v41; // [rsp+40h] [rbp-108h]
  __int64 v42; // [rsp+48h] [rbp-100h]
  int v43; // [rsp+50h] [rbp-F8h] BYREF
  __int16 v44; // [rsp+54h] [rbp-F4h]
  __int64 v45; // [rsp+58h] [rbp-F0h]
  __int64 v46; // [rsp+60h] [rbp-E8h]
  __int64 v47; // [rsp+68h] [rbp-E0h]

  v3 = a2 - 1;
  v4 = 0;
  v35 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v45 = 20LL;
  v43 = 0;
  v5 = ProtectionMask;
  v44 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a1 + v3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = 0LL;
  v41 = MiLockWorkingSetOptimal((__int64)&unk_1403CFB40, v6, v36);
  v10 = *(_QWORD *)(MiGetSystemCacheReverseMap(v8) + 24);
  v12 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) == 0 )
    v12 = v10;
  v13 = 0xFFFFF6FB7DBED7F8uLL;
  v14 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v12 + 60LL) & 0x3FF));
  v15 = v6;
  v42 = v14 + 7168;
  do
  {
    v16 = *(_QWORD *)v6;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL
      && v15 <= v13
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8 * ((v6 >> 3) & 0x1FF));
        v31 = v16 | 0x20;
        if ( (v30 & 0x20) == 0 )
          v31 = *(_QWORD *)v6;
        v16 = v31;
        if ( (v30 & 0x42) != 0 )
          v16 = v31 | 0x42;
      }
      v13 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v39 = v16;
    if ( (v16 & 1) != 0 )
    {
      v38 = 0;
      v17 = 0LL;
      v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39);
      v21 = v20 + 48 * (v19 & (v18 >> 12));
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v23);
      MiLockPageAtDpcInline(v21);
      v24 = (*(_BYTE *)(v21 + 34) & 0x10) == 0;
      v25 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v21 + 40) >> 40) & 0x3FFLL));
      v40 = v25;
      if ( v24 || (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
      {
        v26 = MiCaptureDirtyBitToPfn(v21);
        v25 = v40;
        v17 = v26;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( v17 )
        MiReleasePageFileInfo(v25, v17, 0);
      v5 = ProtectionMask;
      if ( ProtectionMask == 2 && (v16 & 0x800) != 0 )
      {
        v9 ^= (v9 ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39)) & 0xFFFFFFFFF000LL;
        MiWriteValidPteNewProtection(v6, v9);
        if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !(unsigned int)MI_TIGHTER_PERMISSIONS(v16) )
          v32 = v38;
        else
          v32 = 1;
        if ( (v16 & 0x42) != 0 )
        {
          v4 = 1;
          v35 = 1;
        }
        else
        {
          v4 = v35;
        }
        if ( !v32 )
          goto LABEL_15;
      }
      else
      {
        if ( (v16 & 0x42) == 0 )
        {
          v4 = v35;
          goto LABEL_15;
        }
        MiWriteValidPteNewProtection(v6, v16 & 0xFFFFFFFFFFFFFFBDuLL);
        v4 = 1;
        v35 = 1;
      }
      MiInsertTbFlushEntry((__int64)&v43, v8, 1LL, 0);
LABEL_15:
      v13 = 0xFFFFF6FB7DBED7F8uLL;
      goto LABEL_16;
    }
    if ( v5 == 2 && (v16 & 8) == 0 )
    {
      v33 = v16 | 8;
      v39 = v33;
      *(_QWORD *)v6 = v33;
      if ( MiPteInShadowRange(v6) )
      {
        MiWritePteShadow(v34, v33, v11);
        goto LABEL_15;
      }
    }
LABEL_16:
    v6 += 8LL;
    v8 += 4096LL;
    v15 = v6;
  }
  while ( v6 <= v7 );
  MiFlushTbList((__int64)&v43, v13, v11);
  MiUnlockPageTableInternal(v42, v41);
  MiUnlockWorkingSetShared(v42, v36[0], v27);
  return v4;
}
