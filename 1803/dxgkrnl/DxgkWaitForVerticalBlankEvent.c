/*
 * XREFs of DxgkWaitForVerticalBlankEvent @ 0x1C00CF7D0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CF8C0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // r8
  int v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h]

  v3 = a1;
  v8 = 0LL;
  v7 = 2026;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2026);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 2026);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v4 = DxgkWaitForVerticalBlankEventInternal(*(_QWORD *)v3, HIDWORD(*(_QWORD *)v3), *(_DWORD *)(v3 + 8), 0, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C0079010, &EventProfilerExit, v5, v7);
  return v4;
}
