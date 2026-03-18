/*
 * XREFs of ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C0035524
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C00354F4 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005A7D4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0063CE4 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073DE0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0078AF4 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_SCH_LOG::CreateSchLog(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        SIZE_T a3,
        struct VIDMM_SCH_LOG **a4,
        void **a5,
        unsigned __int64 *a6)
{
  _DWORD *v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // r14d
  PVOID *v13; // r13
  struct _MDL *Mdl; // rax
  unsigned int v15; // eax
  __int64 v16; // r10
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  CVirtualAddressAllocator *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-118h]
  unsigned __int64 v29; // [rsp+70h] [rbp-C8h] BYREF
  SIZE_T v30; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-B8h] BYREF
  SIZE_T v32; // [rsp+88h] [rbp-B0h] BYREF
  CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+90h] [rbp-A8h]
  _QWORD v34[19]; // [rsp+A0h] [rbp-98h] BYREF

  v31 = 0LL;
  memset(v34, 0, 0x58uLL);
  v10 = operator new[](0x40uLL, 0x65356956u, PagedPool);
  v11 = (unsigned __int64)v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    v10[2] = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_BYTE *)v10 + 56) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v29 = v11;
  if ( !v11 )
    goto LABEL_5;
  *(_QWORD *)v11 = a1;
  *(_DWORD *)(v11 + 8) = a2;
  *(_QWORD *)(v11 + 16) = a3;
  v30 = a3;
  v12 = MmCreateSection(v11 + 24, 0LL, 0LL, &v30, 4, 0x8000000, 0LL, 0LL);
  if ( v12 < 0 )
    goto LABEL_15;
  v32 = a3;
  v13 = (PVOID *)(v11 + 32);
  v12 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v11 + 24), v11 + 32, &v32, &v31, 0LL);
  if ( v12 < 0 )
    goto LABEL_15;
  Mdl = VidMmiAllocateMdl(*v13, a3);
  *(_QWORD *)(v11 + 48) = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    *(_BYTE *)(v11 + 56) = 1;
    v15 = VIDMM_GLOBAL::AdapterId(a1);
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v15, a2);
    v29 = 0LL;
    v12 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
            VirtualAddressAllocator,
            a3,
            v17,
            *(_QWORD *)(*(_QWORD *)(v16 + 24) + 2320LL),
            *(_QWORD *)(*(_QWORD *)(v16 + 24) + 2328LL),
            0x1000u,
            &v29);
    if ( v12 >= 0 )
    {
      v21 = v29;
      *(_QWORD *)(v11 + 40) = v29;
      v28 = a3;
      v22 = VirtualAddressAllocator;
      v23 = CVirtualAddressAllocator::MapVirtualAddressRange(
              VirtualAddressAllocator,
              v11 + 48,
              0LL,
              7LL,
              v28,
              v21,
              0LL,
              0LL,
              4096,
              17LL,
              0LL,
              a2,
              0LL);
      if ( !v23 )
      {
        v26 = WdLogNewEntry5_WdWarning(v25, v24);
        WdLogEvent5_WdWarning(v26);
        v12 = -1073741823;
        goto LABEL_15;
      }
      LODWORD(v34[0]) = 113;
      v34[6] = v23;
      v34[5] = v22;
      HIDWORD(v34[0]) = a2;
      v34[7] = *(_QWORD *)(v11 + 48);
      v12 = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v34, 1);
      if ( v12 >= 0 )
      {
        VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, a1);
        *a4 = (struct VIDMM_SCH_LOG *)v11;
        *a5 = *v13;
        *a6 = *(_QWORD *)(v11 + 40);
        return (unsigned int)v12;
      }
    }
    v20 = WdLogNewEntry5_WdWarning(v19, v18);
    WdLogEvent5_WdWarning(v20);
  }
  else
  {
LABEL_5:
    v12 = -1073741801;
  }
LABEL_15:
  if ( v11 )
    VIDMM_SCH_LOG::`scalar deleting destructor'((VIDMM_SCH_LOG *)v11);
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  return (unsigned int)v12;
}
