/*
 * XREFs of ?DxgkSharedBundleObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01A9D60
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

void __fastcall DxgkSharedBundleObjectObDeleteProcedure(PVOID *a1, __int64 a2, __int64 a3)
{
  __int64 i; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = 0LL;
  v7 = 16004;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 16004);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 16004);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 6); i = (unsigned int)(i + 1) )
  {
    ObfDereferenceObject(a1[i + 4]);
    a1[i + 4] = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerExit, v6, v7);
}
