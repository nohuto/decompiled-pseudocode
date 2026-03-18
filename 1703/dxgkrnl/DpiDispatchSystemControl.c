/*
 * XREFs of DpiDispatchSystemControl @ 0x1C01CA9E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     LoadEtwStackLocation @ 0x1C0035B1C (LoadEtwStackLocation.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     Template_phbq @ 0x1C0041F50 (Template_phbq.c)
 */

__int64 __fastcall DpiDispatchSystemControl(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  char v3; // r14
  __int64 EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 (__fastcall *v19)(__int64, IRP *); // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v22[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v23; // [rsp+90h] [rbp-88h]
  __int128 v24; // [rsp+A0h] [rbp-78h]
  __int128 v25; // [rsp+B0h] [rbp-68h]
  __int128 v26; // [rsp+C0h] [rbp-58h]
  __int64 v27; // [rsp+D0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v22, (__int64)a2);
    v23 = *(_OWORD *)EtwStackLocation;
    v24 = *(_OWORD *)(EtwStackLocation + 16);
    v25 = *(_OWORD *)(EtwStackLocation + 32);
    v26 = *(_OWORD *)(EtwStackLocation + 48);
    v27 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_phbq(v7, &EventEnterDpiDispatchSystemControl, v8, a1);
  }
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, File, 1u, 0x20u);
  v14 = v9;
  if ( v9 >= 0 )
  {
    v19 = *(__int64 (__fastcall **)(__int64, IRP *))(v2 + 144);
    v3 = 1;
    if ( v19 )
    {
      LODWORD(v14) = v19(a1, a2);
      if ( (_DWORD)v14 != -1073741637 )
        goto LABEL_7;
    }
    LODWORD(v14) = -1073741637;
    if ( *(_BYTE *)(v2 + 56) == 1 )
    {
      if ( *(_QWORD *)(v2 + 160) )
      {
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
        {
          ++a2->CurrentLocation;
          a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
          LODWORD(v14) = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdWarning(v15);
  }
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 0);
  if ( v3 == 1 )
LABEL_7:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v14;
    Template_xq(v16, &EventExitDpiDispatchSystemControl, v17, a1, RemlockSize);
  }
  return (unsigned int)v14;
}
