/*
 * XREFs of ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C00483B8
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004843C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C004F844 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C009B3DC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiAllocateMdl(unsigned __int64 Base, SIZE_T Length)
{
  PMDL Mdl; // r9

  Mdl = MmCreateMdl(0LL, (PVOID)Base, Length);
  if ( Mdl )
  {
    Mdl->Next = 0LL;
    Mdl->MdlFlags = 0;
    Mdl->ByteCount = Length;
    Mdl->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    Mdl->Size = 8 * ((((Base & 0xFFF) + Length + 4095) >> 12) + 6);
    Mdl->ByteOffset = Base & 0xFFF;
  }
  return Mdl;
}
