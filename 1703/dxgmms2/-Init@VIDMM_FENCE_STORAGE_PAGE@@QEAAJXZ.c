/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C004F844
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0001BD8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0020CA4 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C00483B8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C004F184 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@IPEAPEAXPEA_K@Z @ 0x1C0099AF8 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@IPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(VIDMM_FENCE_STORAGE_PAGE *this)
{
  _QWORD *v2; // rsi
  int v3; // edi
  struct _MDL *Mdl; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 4096LL;
  v2 = (_QWORD *)((char *)this + 72);
  v3 = MmCreateSection((char *)this + 72, 0LL, 0LL, &v12, 4, 0x8000000, 0LL, 0LL);
  if ( v3 < 0 )
  {
    *v2 = 0LL;
  }
  else
  {
    v14 = 4096LL;
    v3 = MmMapViewInSystemSpaceEx(*v2, (char *)this + 80, &v14, &v13, 0LL);
    if ( v3 >= 0 )
    {
      Mdl = VidMmiAllocateMdl(*((_QWORD *)this + 10), 0x1000uLL);
      *((_QWORD *)this + 11) = Mdl;
      if ( Mdl )
      {
        MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
        *((_BYTE *)this + 96) = 1;
        v6 = *((_QWORD *)this + 15);
        if ( !*(_BYTE *)(v6 + 64) )
          return 0LL;
        v3 = VIDMM_PROCESS::MapHostAddressesToGuest(
               *(VIDMM_PROCESS **)v6,
               *((struct _MDL **)this + 11),
               0x1000u,
               (void **)this + 14,
               (unsigned __int64 *)this + 13);
        if ( v3 >= 0 )
          return 0LL;
        v11 = WdLogNewEntry5_WdAssertion(v10, v9);
        *(_QWORD *)(v11 + 24) = 294LL;
        WdLogEvent5_WdAssertion(v11);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
        v8 = WdLogNewEntry5_WdLowResource(v5);
        *(_QWORD *)(v8 + 24) = 264LL;
        WdLogEvent5_WdLowResource(v8);
        v3 = -1073741801;
      }
    }
  }
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v3;
}
