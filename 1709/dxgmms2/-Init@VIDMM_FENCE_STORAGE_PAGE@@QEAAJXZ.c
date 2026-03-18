/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0070494
 * Callers:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000E2A4 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000E370 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 * Callees:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C006FDCC (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C00713F8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00A1F00 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(VIDMM_FENCE_STORAGE_PAGE *this)
{
  int v2; // edx
  _QWORD *v3; // rsi
  int v4; // edi
  struct _MDL *Mdl; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v14 = 4096LL;
  v2 = 0x8000000;
  if ( *((PVOID *)this + 15) != VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    v2 = 134479872;
  v3 = (_QWORD *)((char *)this + 72);
  v4 = MmCreateSection((char *)this + 72, 0LL, 0LL, &v14, 4, v2, 0LL, 0LL);
  if ( v4 < 0 )
  {
    *v3 = 0LL;
  }
  else
  {
    v16 = 4096LL;
    v4 = MmMapViewInSystemSpaceEx(*v3, (char *)this + 80, &v16, &v15, 0LL);
    if ( v4 >= 0 )
    {
      Mdl = VidMmiAllocateMdl(*((PVOID *)this + 10), 0x1000uLL);
      *((_QWORD *)this + 11) = Mdl;
      if ( Mdl )
      {
        MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
        *((_BYTE *)this + 96) = 1;
        v8 = *((_QWORD *)this + 15);
        if ( !*(_BYTE *)(v8 + 64) )
          return 0LL;
        v4 = VIDMM_PROCESS::MapHostAddressesToGuest(
               *(VIDMM_PROCESS **)v8,
               *((struct _MDL **)this + 11),
               0x1000uLL,
               (void **)this + 14,
               (unsigned __int64 *)this + 13);
        if ( v4 >= 0 )
          return 0LL;
        v13 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v13 + 24) = 304LL;
        WdLogEvent5_WdAssertion(v13);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
        v10 = WdLogNewEntry5_WdLowResource(v7, v6);
        *(_QWORD *)(v10 + 24) = 275LL;
        WdLogEvent5_WdLowResource(v10);
        v4 = -1073741801;
      }
    }
  }
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v4;
}
