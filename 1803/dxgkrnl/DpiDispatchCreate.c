/*
 * XREFs of DpiDispatchCreate @ 0x1C00B8210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

__int64 __fastcall DpiDispatchCreate(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  __int64 v6; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, IRP *); // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0xq(a1, &EventEnterDpiDispatchCreate, a3, a1, 0);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, File, 1u, 0x20u);
  v11 = v7;
  if ( v7 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v16 + 24) = v11;
    WdLogEvent5_WdWarning(v16);
LABEL_13:
    a2->IoStatus.Status = v11;
    IofCompleteRequest(a2, 0);
    goto LABEL_7;
  }
  v12 = *(__int64 (__fastcall **)(__int64, IRP *))(v6 + 104);
  v3 = 1;
  if ( !v12 )
  {
    if ( a2->RequestorMode && !*(_BYTE *)(v6 + 57) )
      LODWORD(v11) = -1073741790;
    goto LABEL_13;
  }
  LODWORD(v11) = v12(a1, a2);
LABEL_7:
  if ( (int)v11 < 0 && v3 == 1 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v11;
    McTemplateK0xq(v13, &EventExitDpiDispatchCreate, v14, a1, RemlockSize);
  }
  return (unsigned int)v11;
}
