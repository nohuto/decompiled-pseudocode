/*
 * XREFs of ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C009EF98
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C00530BC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00A12E8 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001F70 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0002068 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C000225C (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0026A14 (-ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_CPU_HOST_APERTURE *a3,
        struct _MDL **a4)
{
  __int64 *v4; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _MDL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  v4 = *a2;
  v7 = **a2;
  if ( VIDMM_CPU_HOST_APERTURE::ReclaimRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v8);
  }
  else
  {
    v13 = VIDMM_CPU_HOST_APERTURE::AcquireRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v13 < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning(v15, v14);
      *(_QWORD *)(v16 + 24) = v7;
      WdLogEvent5_WdWarning(v16);
      return (unsigned int)v13;
    }
    v13 = VIDMM_CPU_HOST_APERTURE::MapRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v13 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v19, v18);
      *(_QWORD *)(v20 + 24) = v7;
      WdLogEvent5_WdWarning(v20);
      goto LABEL_6;
    }
  }
  v9 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
         a3,
         (void *)v4[2],
         (const struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v7 + 472),
         *(_QWORD *)(v7 + 144),
         *(_QWORD *)(v7 + 16));
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 22188LL;
    WdLogEvent5_WdAssertion(v12);
    v13 = -1073741801;
LABEL_6:
    *a4 = 0LL;
    return (unsigned int)v13;
  }
  *a4 = v9;
  return 0LL;
}
