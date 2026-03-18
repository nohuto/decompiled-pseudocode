/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140125DC0
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14003DFCC (MiUnlockNestedPageTableWritePte.c)
 *     MiDirtySystemCachePte @ 0x140046508 (MiDirtySystemCachePte.c)
 *     MiMarkPteDirty @ 0x140048BD0 (MiMarkPteDirty.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiMakeCombineCandidateClean @ 0x1400AE0C0 (MiMakeCombineCandidateClean.c)
 *     MiRevokeExecutePte @ 0x1400B4C60 (MiRevokeExecutePte.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400BDA54 (MiFlushDirtyBitsToPfn.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x140260A00 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402649B4 (MiWriteEnclavePte.c)
 *     MxCreatePfns @ 0x14089B320 (MxCreatePfns.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x1408CA06C (MiProtectSharedUserPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MiWriteValidPteNewProtection(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  struct _KTHREAD *result; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r10

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8 * ((a1 >> 3) & 0x1FF));
      v10 = v2 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = *(_QWORD *)a1;
      v2 = v10;
      if ( (v9 & 0x42) != 0 )
        v2 = v10 | 0x42;
    }
  }
  v4 = (v2 >> 60) & 7;
  v5 = HIBYTE(v2) & 0xF;
  v6 = a2 & 0x80FFFFFFFFFFFFFFuLL | ((v5 | (16 * v4)) << 56);
  *(_QWORD *)a1 = v6;
  result = (struct _KTHREAD *)0xFFFFF6FB7DBED000LL;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL )
  {
    result = (struct _KTHREAD *)0xFFFFF6FB7DBED7F8LL;
    if ( a1 <= 0xFFFFF6FB7DBED7F8uLL )
      return MiWritePteShadow(a1, v6, v5);
  }
  return result;
}
