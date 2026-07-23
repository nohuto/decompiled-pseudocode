/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402A4F98
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1402A557C (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x14007AEC0 (RtlDecompressBufferEx.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14007E684 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140093994 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmHpChunkUnprotect @ 0x140093C4C (SmHpChunkUnprotect.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140099C8C (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x1401515E8 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MmStoreLogCorruptionFixed @ 0x140267CAC (MmStoreLogCorruptionFixed.c)
 *     SmFixSingleBitCorruption @ 0x1402A6534 (SmFixSingleBitCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        void *a2,
        UCHAR *a3,
        ULONG_PTR a4,
        __int64 FinalUncompressedSize)
{
  int v6; // r12d
  _DWORD *v9; // r14
  __int64 v10; // r13
  char *v11; // rdx
  int v12; // ecx
  char v13; // al
  unsigned int v14; // ebx
  _DWORD *v15; // r14
  signed __int64 *v16; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v18; // rbp
  char fixed; // al
  void *WorkSpace; // rax
  UCHAR *BaseAddress; // r13
  unsigned int v22; // edx
  struct _KTHREAD *v23; // rax
  __int64 v24; // rcx
  __int64 v26; // [rsp+40h] [rbp-78h] BYREF
  char v27; // [rsp+48h] [rbp-70h] BYREF
  int v28; // [rsp+58h] [rbp-60h]
  int v29; // [rsp+C8h] [rbp+10h]

  v6 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v29 = (_DWORD)a2 - 16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808));
  v9 = 0LL;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    &v26,
    2);
  v10 = FinalUncompressedSize;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(*(_QWORD *)(FinalUncompressedSize + 56) + 16LL),
              (__int64)&v26) >= 0 )
  {
    if ( v28 == -1 || !v28 )
      v11 = &v27;
    else
      v11 = (char *)(v26 + 16LL * (unsigned int)(v28 - 1));
    v9 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v11 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    (__int64)&v26,
    0);
  if ( !v9 )
    goto LABEL_15;
  if ( *(_DWORD *)a4 != *v9 )
    goto LABEL_14;
  v12 = 4096;
  if ( (v9[1] & 0xFFF) != 0 )
    v12 = v9[1] & 0xFFF;
  if ( *(unsigned __int16 *)(a4 + 4) != v12 )
LABEL_14:
    KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v9, 0LL);
  v13 = SmHpChunkUnprotect(a1 + 192, (__int64)v9);
  v14 = v13 & 1;
  if ( (v13 & 1) != 0 )
  {
LABEL_15:
    v15 = (_DWORD *)(v10 + 64);
    v16 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v10 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v16, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v18 = *(void **)(v10 + 48);
    memmove(v18, a2, *(unsigned __int16 *)(a4 + 4));
    fixed = SmFixSingleBitCorruption((unsigned __int8 *)v18);
    v14 = fixed & 1;
    if ( (fixed & 1) != 0 )
    {
      WorkSpace = *(void **)(v10 + 16);
      BaseAddress = a3;
      if ( RtlDecompressBufferEx(
             *(_WORD *)(a1 + 992),
             a3,
             0x1000u,
             (PUCHAR)v18,
             *(unsigned __int16 *)(a4 + 4),
             (PULONG)&FinalUncompressedSize,
             WorkSpace) >= 0
        && (_DWORD)FinalUncompressedSize == 4096 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1928));
        v22 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedIncrement(&dword_140466514);
        MmStoreLogCorruptionFixed((char *)a2, v22, dword_140466514);
        v14 |= 2u;
      }
    }
    else
    {
      BaseAddress = a3;
    }
    v23 = KeGetCurrentThread();
    v24 = *(_QWORD *)(a1 + 800);
    --v23->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v24 + 6024, 0LL);
    *v15 = 2;
    if ( v14 < 2 )
      SmPrepareForFatalPageError(
        v29,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v6,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        BaseAddress);
  }
  else
  {
    SmPrepareForFatalPageError(
      v29,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v6,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      a3);
    SmHpChunkUnprotect(a1 + 192, (__int64)v9);
  }
  return v14 >> 1;
}
