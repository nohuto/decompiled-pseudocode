/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1C016C060
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001694C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rsi
  __int64 *i; // rbx
  HANDLE v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h]
  _BYTE v20[16]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-10h] BYREF

  v19 = 0LL;
  v18 = 2059;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2059);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2059);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v21);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  Global = DXGGLOBAL::GetGlobal(v4);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, *a1, 2);
  if ( ObjectA )
  {
    v11 = *(_QWORD *)(ObjectA + 144);
    if ( v11 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(v11 + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      v12 = (__int64 *)(v11 + 48);
      for ( i = *(__int64 **)(v11 + 48); ; i = (__int64 *)*i )
      {
        if ( i == v12 )
        {
          LODWORD(v11) = -1073741790;
          goto LABEL_15;
        }
        v14 = *((_BYTE *)i + 16) ? PsGetCurrentProcessId() : PsGetProcessId((PEPROCESS)i[3]);
        if ( v14 == (HANDLE)a1[1] )
          break;
      }
      LODWORD(v11) = 0;
LABEL_15:
      if ( v20[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = *a1;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v10);
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v18);
  return (unsigned int)v11;
}
