/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0032FF8
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00FD330 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C00FD1F4 (DxgkOpmCreateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00FDC00 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00FDC5C (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0100C74 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0100CA8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C0178488 (DxgkOpmGetRedirectionInfo.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        void **a6)
{
  __int64 v6; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 RedirectionInfo; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v24; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v26[48]; // [rsp+50h] [rbp-39h] BYREF

  v6 = *((_QWORD *)a1 + 3);
  v24 = 0LL;
  v25 = 0LL;
  v10 = a4;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 64) + 168LL));
  if ( *((_DWORD *)a1 + 720) < 2u )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    RedirectionInfo = -1073741637LL;
LABEL_5:
    *(_QWORD *)(v14 + 24) = RedirectionInfo;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)RedirectionInfo;
  }
  v16 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
  RedirectionInfo = v16;
  if ( v16 < 0
    || (RedirectionInfo = (int)DxgkOpmGetRedirectionInfo(*((void **)a2 + 466), v10, &v25, v26),
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL),
        (int)RedirectionInfo < 0) )
  {
LABEL_4:
    v14 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    goto LABEL_5;
  }
  if ( !v25 )
  {
    RedirectionInfo = -1073741637LL;
    goto LABEL_4;
  }
  v20 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  RedirectionInfo = v20;
  if ( v20 < 0 )
    goto LABEL_4;
  DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 466));
  DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 466), 1LL);
  v21 = *((_DWORD *)a1 + 720);
  if ( v21 == 2 )
  {
    v22 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, _DWORD, void **))a1 + 375))(
            *((_QWORD *)a1 + 6),
            a3,
            v25,
            v26,
            v10,
            &v24);
  }
  else
  {
    if ( v21 != 3 )
    {
      LODWORD(RedirectionInfo) = -1073741637;
      goto LABEL_16;
    }
    v22 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, __int64, int, void **))a1 + 374))(
            *((_QWORD *)a1 + 6),
            a3,
            v25,
            v26,
            v10,
            15,
            &v24);
  }
  LODWORD(RedirectionInfo) = v22;
LABEL_16:
  if ( (int)RedirectionInfo >= 0 )
  {
    LODWORD(RedirectionInfo) = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 466), v24, a5);
    if ( (int)RedirectionInfo < 0 )
      (*((void (__fastcall **)(_QWORD, void *))a1 + 373))(*((_QWORD *)a1 + 6), v24);
    else
      *a6 = v24;
  }
  DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 466));
  DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 466));
  DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  return (unsigned int)RedirectionInfo;
}
