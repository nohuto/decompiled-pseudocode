/*
 * XREFs of ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C00713F8
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004C420 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0070494 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00A36C8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiAllocateMdl(unsigned __int64 Base, SIZE_T Length)
{
  PMDL result; // rax

  result = MmCreateMdl(0LL, (PVOID)Base, Length);
  if ( result )
  {
    result->Next = 0LL;
    result->MdlFlags = 0;
    result->ByteCount = Length;
    result->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    result->Size = 8 * ((((Base & 0xFFF) + Length + 4095) >> 12) + 6);
    result->ByteOffset = Base & 0xFFF;
  }
  return result;
}
