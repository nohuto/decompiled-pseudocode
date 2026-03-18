/*
 * XREFs of ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C004F184
 * Callers:
 *     ??1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ @ 0x1C004F1FC (--1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C004F844 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 * Callees:
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K@Z @ 0x1C0099E00 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeStorage(VIDMM_FENCE_STORAGE_PAGE *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rdx

  v2 = *((_QWORD *)this + 15);
  if ( *(_BYTE *)(v2 + 64) )
  {
    v6 = (void *)*((_QWORD *)this + 14);
    if ( v6 )
    {
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(*(VIDMM_PROCESS **)v2, v6, *((_QWORD *)this + 13));
      *((_QWORD *)this + 14) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  if ( *((_BYTE *)this + 96) )
  {
    MmUnlockPages(*((PMDL *)this + 11));
    *((_BYTE *)this + 96) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    MmUnmapViewInSystemSpace(v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
}
