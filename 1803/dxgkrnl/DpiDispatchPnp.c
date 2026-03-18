/*
 * XREFs of DpiDispatchPnp @ 0x1C009E980
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C0001634 (LoadEtwStackLocation.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 *     McTemplateK0phbq @ 0x1C004138C (McTemplateK0phbq.c)
 *     DpiGdoDispatchGdiPnp @ 0x1C0042A6C (DpiGdoDispatchGdiPnp.c)
 */

__int64 __fastcall DpiDispatchPnp(__int64 a1, IRP *a2)
{
  bool v2; // r14
  __int64 EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  struct _IO_REMOVE_LOCK *v9; // r15
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, IRP *); // rax
  UCHAR MinorFunction; // bl
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v22[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v23; // [rsp+90h] [rbp-88h]
  __int128 v24; // [rsp+A0h] [rbp-78h]
  __int128 v25; // [rsp+B0h] [rbp-68h]
  __int128 v26; // [rsp+C0h] [rbp-58h]
  __int64 v27; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v22, (__int64)a2);
    v23 = *(_OWORD *)EtwStackLocation;
    v24 = *(_OWORD *)(EtwStackLocation + 16);
    v25 = *(_OWORD *)(EtwStackLocation + 32);
    v26 = *(_OWORD *)(EtwStackLocation + 48);
    v27 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0phbq(v6, &EventEnterDpiDispatchPnp, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (struct _IO_REMOVE_LOCK *)(v8 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  v14 = v10;
  if ( v10 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v20 + 24) = v14;
    WdLogEvent5_WdWarning(v20);
  }
  else
  {
    v15 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 128);
    v2 = 1;
    if ( v15 )
    {
      MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
      LODWORD(v14) = v15(a1, a2);
      v2 = MinorFunction != 2;
      goto LABEL_7;
    }
    LODWORD(v14) = -1073741637;
    if ( *(_BYTE *)(v8 + 56) == 1 && *(_QWORD *)(v8 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      LODWORD(v14) = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 6 )
      LODWORD(v14) = DpiGdoDispatchGdiPnp(a1, (__int64)a2);
  }
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 0);
LABEL_7:
  if ( v2 )
LABEL_8:
    IoReleaseRemoveLockEx(v9, a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v14;
    McTemplateK0xq(v17, &EventExitDpiDispatchPnp, v18, a1, RemlockSize);
  }
  return (unsigned int)v14;
}
