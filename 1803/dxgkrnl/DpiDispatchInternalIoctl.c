/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1C009F860
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C0001634 (LoadEtwStackLocation.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 *     McTemplateK0phbq @ 0x1C004138C (McTemplateK0phbq.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r15
  __int64 EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, IRP *); // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-A9h]
  int v23; // [rsp+40h] [rbp-89h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h]
  _BYTE v25[80]; // [rsp+50h] [rbp-79h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-29h]
  __int128 v27; // [rsp+B0h] [rbp-19h]
  __int128 v28; // [rsp+C0h] [rbp-9h]
  __int128 v29; // [rsp+D0h] [rbp+7h]
  __int64 v30; // [rsp+E0h] [rbp+17h]

  v24 = 0LL;
  v3 = 0;
  v23 = 1003;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 1003);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 1003);
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v25, (__int64)a2);
    v26 = *(_OWORD *)EtwStackLocation;
    v27 = *(_OWORD *)(EtwStackLocation + 16);
    v28 = *(_OWORD *)(EtwStackLocation + 32);
    v29 = *(_OWORD *)(EtwStackLocation + 48);
    v30 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0phbq(v7, &EventEnterDpiDispatchInternalIoctl, v8, a1);
  }
  v9 = *(_QWORD *)(a1 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, File, 1u, 0x20u);
  v14 = v10;
  if ( v10 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_21;
  }
  v15 = *(__int64 (__fastcall **)(__int64, IRP *))(v9 + 112);
  v3 = 1;
  if ( !v15 )
  {
    if ( *(_BYTE *)(v9 + 56) == 1 && *(_QWORD *)(v9 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      LODWORD(v14) = IofCallDriver(*(PDEVICE_OBJECT *)(v9 + 160), a2);
      goto LABEL_8;
    }
    LODWORD(v14) = -1073741637;
LABEL_21:
    a2->IoStatus.Status = v14;
    IofCompleteRequest(a2, 0);
    if ( v3 != 1 )
      goto LABEL_9;
    goto LABEL_8;
  }
  LODWORD(v14) = v15(a1, a2);
  if ( (_DWORD)v14 != -1073741738 )
LABEL_8:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, 0x20u);
LABEL_9:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v14;
    McTemplateK0xq(v16, &EventExitDpiDispatchInternalIoctl, v17, a1, RemlockSize);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v23);
  return (unsigned int)v14;
}
