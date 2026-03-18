/*
 * XREFs of ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00732A8
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0072FD4 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C0093A30 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C000114C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001250 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0001454 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0013F94 (-ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _MDL *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v4 = *a2;
  v7 = **a2;
  if ( VIDMM_CPU_HOST_APERTURE::ReclaimRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v8);
    goto LABEL_4;
  }
  v11 = VIDMM_CPU_HOST_APERTURE::AcquireRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
  if ( v11 >= 0 )
  {
    v11 = VIDMM_CPU_HOST_APERTURE::MapRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v11 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v13, v12);
      *(_QWORD *)(v20 + 24) = v7;
      WdLogEvent5_WdWarning(v20);
LABEL_10:
      *a4 = 0LL;
      return (unsigned int)v11;
    }
LABEL_4:
    v14 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
            a3,
            (void *)v4[2],
            (const struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v7 + 504),
            *(_QWORD *)(v7 + 144),
            *(_QWORD *)(v7 + 16));
    if ( v14 )
    {
      *a4 = v14;
      return 0LL;
    }
    v19 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v19 + 24) = 21285LL;
    WdLogEvent5_WdAssertion(v19);
    v11 = -1073741801;
    goto LABEL_10;
  }
  v18 = WdLogNewEntry5_WdWarning(v10, v9);
  *(_QWORD *)(v18 + 24) = v7;
  WdLogEvent5_WdWarning(v18);
  return (unsigned int)v11;
}
