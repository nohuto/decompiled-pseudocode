/*
 * XREFs of DpiDispatchPower @ 0x1C0101080
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C00085B0 (LoadEtwStackLocation.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 *     McTemplateK0phbq @ 0x1C0032AC8 (McTemplateK0phbq.c)
 */

__int64 __fastcall DpiDispatchPower(__int64 a1, IRP *a2)
{
  char v2; // r14
  __int64 EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, IRP *); // rax
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v21[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+90h] [rbp-88h]
  __int128 v23; // [rsp+A0h] [rbp-78h]
  __int128 v24; // [rsp+B0h] [rbp-68h]
  __int128 v25; // [rsp+C0h] [rbp-58h]
  __int64 v26; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v21, (__int64)a2);
    v22 = *(_OWORD *)EtwStackLocation;
    v23 = *(_OWORD *)(EtwStackLocation + 16);
    v24 = *(_OWORD *)(EtwStackLocation + 32);
    v25 = *(_OWORD *)(EtwStackLocation + 48);
    v26 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0phbq(v6, &EventEnterDpiDispatchPower, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  v13 = v9;
  if ( v9 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v19 + 24) = v13;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_14;
  }
  v14 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 136);
  v2 = 1;
  if ( !v14 )
  {
    LODWORD(v13) = 0;
    if ( *(_QWORD *)(v8 + 160) )
    {
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v15 = PoCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_7;
    }
LABEL_14:
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v13;
    IofCompleteRequest(a2, 0);
    if ( v2 != 1 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v15 = v14(a1, a2);
LABEL_7:
  LODWORD(v13) = v15;
LABEL_8:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, 0x20u);
LABEL_9:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v13;
    McTemplateK0xq(v16, &EventExitDpiDispatchPower, v17, a1, RemlockSize);
  }
  return (unsigned int)v13;
}
