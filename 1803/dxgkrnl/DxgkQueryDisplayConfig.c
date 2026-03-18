/*
 * XREFs of DxgkQueryDisplayConfig @ 0x1C00C3860
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00C3C24 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOP.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C49F8 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 */

__int64 __fastcall DxgkQueryDisplayConfig(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  unsigned int v8; // ebp
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  bool v11; // cl
  int CachedData; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v18 = 0LL;
  v17 = 2176;
  v8 = a1;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2176);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2176);
  Global = DXGGLOBAL::GetGlobal(v9);
  CachedData = QDC_CACHE::GetCachedData(*((QDC_CACHE **)Global + 127), v8, a3, a4, a5, &v16);
  if ( CachedData < 0 )
    CachedData = QueryDisplayConfigInternal(v11, v16, v8, a2, a3, a4, a5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v17);
  return (unsigned int)CachedData;
}
