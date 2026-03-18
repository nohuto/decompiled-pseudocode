/*
 * XREFs of DxgkDestroyKeyedMutex @ 0x1C01C2650
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01C0674 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkDestroyKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v3 = (unsigned int *)a1;
  v9 = 0LL;
  v8 = 2053;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2053);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2053);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v5 = DXGKEYEDMUTEX::DestroyLocal(*v3, v4);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C0079010, &EventProfilerExit, v6, v8);
  return v5;
}
