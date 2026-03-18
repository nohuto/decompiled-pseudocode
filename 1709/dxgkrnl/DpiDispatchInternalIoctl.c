/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1C00B7F70
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C00085B0 (LoadEtwStackLocation.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 *     McTemplateK0phbq @ 0x1C0032AC8 (McTemplateK0phbq.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  char v2; // r14
  __int64 EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, IRP *); // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v20[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+90h] [rbp-88h]
  __int128 v22; // [rsp+A0h] [rbp-78h]
  __int128 v23; // [rsp+B0h] [rbp-68h]
  __int128 v24; // [rsp+C0h] [rbp-58h]
  __int64 v25; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v20, (__int64)a2);
    v21 = *(_OWORD *)EtwStackLocation;
    v22 = *(_OWORD *)(EtwStackLocation + 16);
    v23 = *(_OWORD *)(EtwStackLocation + 32);
    v24 = *(_OWORD *)(EtwStackLocation + 48);
    v25 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0phbq(v6, &EventEnterDpiDispatchInternalIoctl, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  v13 = v9;
  if ( v9 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v18 + 24) = v13;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_17;
  }
  v14 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 112);
  v2 = 1;
  if ( !v14 )
  {
    if ( *(_BYTE *)(v8 + 56) == 1 && *(_QWORD *)(v8 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      LODWORD(v13) = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_7;
    }
    LODWORD(v13) = -1073741637;
LABEL_17:
    a2->IoStatus.Status = v13;
    IofCompleteRequest(a2, 0);
    if ( v2 != 1 )
      goto LABEL_8;
    goto LABEL_7;
  }
  LODWORD(v13) = v14(a1, a2);
  if ( (_DWORD)v13 != -1073741738 )
LABEL_7:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, 0x20u);
LABEL_8:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v13;
    McTemplateK0xq(v15, &EventExitDpiDispatchInternalIoctl, v16, a1, RemlockSize);
  }
  return (unsigned int)v13;
}
