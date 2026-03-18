/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00D3380
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        struct DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE *const a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  char v4; // bp
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *v11; // rax
  _QWORD *v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  struct DXGPROCESS *v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  v14 = 0LL;
  v13 = 2000;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2000);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2000);
  if ( v4 == 1 )
  {
    if ( *(_WORD *)a2 == 400 && *((_WORD *)a2 + 1) == 6 )
    {
      if ( DXGPROCESS::CreateDxgProcess(&v15, 0LL, 0LL, 0LL) >= 0 )
      {
        v11 = v15;
        *a1 = v15;
        *((_QWORD *)v11 + 13) = a2;
      }
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7);
      v12[3] = *((unsigned __int16 *)a2 + 1);
      v12[4] = *(unsigned __int16 *)a2;
      v12[5] = 6LL;
      v12[6] = 400LL;
      WdLogEvent5_WdAssertion(v12);
      v3 = -1073741811;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v13);
  return v3;
}
