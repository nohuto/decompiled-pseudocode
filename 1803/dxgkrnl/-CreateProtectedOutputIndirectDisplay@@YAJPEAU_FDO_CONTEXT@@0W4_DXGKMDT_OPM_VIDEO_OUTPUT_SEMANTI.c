/*
 * XREFs of ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00418E0
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C0109E60 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0109EBC (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkOpmCreateHandle @ 0x1C010F930 (DxgkOpmCreateHandle.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C015C66C (DxgkOpmGetRedirectionInfo.c)
 */

__int64 __fastcall CreateProtectedOutputIndirectDisplay(
        struct _FDO_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        __int64 a3,
        unsigned int a4,
        void **a5,
        void **a6)
{
  unsigned int v6; // r12d
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 RedirectionInfo; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  int v18; // eax
  void *v20; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v22[48]; // [rsp+50h] [rbp-39h] BYREF

  v20 = 0LL;
  v6 = a3;
  v21 = 0LL;
  v9 = a4;
  if ( *((_DWORD *)a1 + 720) < 2u )
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    RedirectionInfo = -1073741637LL;
LABEL_5:
    *(_QWORD *)(v10 + 24) = RedirectionInfo;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)RedirectionInfo;
  }
  v12 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL);
  RedirectionInfo = v12;
  if ( v12 < 0
    || (RedirectionInfo = (int)DxgkOpmGetRedirectionInfo(*((void **)a2 + 466), v9, &v21, v22),
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a2 + 3), 0LL),
        (int)RedirectionInfo < 0) )
  {
LABEL_4:
    v10 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    goto LABEL_5;
  }
  if ( !v21 )
  {
    RedirectionInfo = -1073741637LL;
    goto LABEL_4;
  }
  v16 = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  RedirectionInfo = v16;
  if ( v16 < 0 )
    goto LABEL_4;
  DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)a1 + 466));
  DxgkAcquireAdapterDdiSync(*((_QWORD *)a1 + 466), 1LL);
  v17 = *((_DWORD *)a1 + 720);
  if ( v17 == 2 )
  {
    v18 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, _DWORD, void **))a1 + 375))(
            *((_QWORD *)a1 + 6),
            v6,
            v21,
            v22,
            v9,
            &v20);
  }
  else
  {
    if ( v17 != 3 )
    {
      LODWORD(RedirectionInfo) = -1073741637;
      goto LABEL_16;
    }
    v18 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _BYTE *, __int64, int, void **))a1 + 374))(
            *((_QWORD *)a1 + 6),
            v6,
            v21,
            v22,
            v9,
            15,
            &v20);
  }
  LODWORD(RedirectionInfo) = v18;
LABEL_16:
  if ( (int)RedirectionInfo >= 0 )
  {
    LODWORD(RedirectionInfo) = DxgkOpmCreateHandle(*((DXGADAPTER **)a1 + 466), v20, a5);
    if ( (int)RedirectionInfo < 0 )
      (*((void (__fastcall **)(_QWORD, void *))a1 + 373))(*((_QWORD *)a1 + 6), v20);
    else
      *a6 = v20;
  }
  DxgkReleaseAdapterDdiSync(*((_QWORD *)a1 + 466));
  DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)a1 + 466));
  DpiReleaseCoreSyncAccessSafe(*((_QWORD *)a1 + 3), 0LL);
  return (unsigned int)RedirectionInfo;
}
