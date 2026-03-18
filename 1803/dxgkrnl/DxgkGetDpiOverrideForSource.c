/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x1C01DD3C0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C009EC10 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(struct _LUID *this, struct _LUID *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v9 = 2193;
  v4 = (unsigned int)a2;
  v10 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2193);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2193);
  *(_DWORD *)&v11.Length = 0;
  if ( (int)DpiPersistence::ReadDpiFromRegistry(this, (const struct _LUID *)v4, 0, &v11) >= 0 )
    v3 = *(_DWORD *)&v11.Length;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return v3;
}
