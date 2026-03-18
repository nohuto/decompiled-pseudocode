/*
 * XREFs of ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BCED4
 * Callers:
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BC834 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017A2FC (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     DxgkExtractBundleObjectInternal @ 0x1C01AAF18 (DxgkExtractBundleObjectInternal.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  struct DXGFASTMUTEX *v15; // rax
  DXGSHAREDVMOBJECT *v16; // rax
  __int64 v17; // rcx
  DXGSHAREDVMOBJECT *v18; // r14
  struct _KPROCESS *v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  struct _KPROCESS *v22; // r8
  int BundleObjectInternal; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-B1h] BYREF
  char v31; // [rsp+28h] [rbp-A9h]
  _QWORD v32[7]; // [rsp+30h] [rbp-A1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-69h] BYREF
  char v34; // [rsp+98h] [rbp-39h]
  _BYTE v35[64]; // [rsp+A0h] [rbp-31h] BYREF

  v4 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  if ( (_DWORD)a2 && (unsigned int)(a3 - 1) <= 0xF && a4 )
  {
    v8 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(this, a2) != v8 && (unsigned __int8)PsGetProcessExitProcessCalled(v8) )
    {
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      LODWORD(v13) = -1073741558;
      *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 3);
      *(_QWORD *)(v12 + 32) = -1073741558LL;
      WdLogEvent5_WdWarning(v12);
      return (unsigned int)v13;
    }
    v15 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, v15, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    v16 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                 *((_QWORD *)this + 1),
                                 (unsigned int)v6,
                                 13LL);
    v18 = v16;
    if ( v16 && *(_DWORD *)v16 == 16 )
    {
      DXGSHAREDVMOBJECT::AddReference(v16);
      if ( v31 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
      v19 = (struct _KPROCESS *)*((_QWORD *)this + 3);
      v34 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v19);
      memset(v32, 0, sizeof(v32));
      if ( (_DWORD)v4 )
      {
        v20 = v4;
        v21 = v35;
        while ( v20 )
        {
          *v21++ = 0x10000000;
          --v20;
        }
      }
      v22 = (struct _KPROCESS *)*((_QWORD *)this + 4);
      v32[0] = *((_QWORD *)v18 + 2);
      LODWORD(v32[1]) = v4;
      v32[2] = v35;
      v32[3] = a4;
      BundleObjectInternal = DxgkExtractBundleObjectInternal(0LL, 0, v22, (ULONG64)v32);
      v13 = BundleObjectInternal;
      if ( BundleObjectInternal < 0 )
      {
        v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v27 + 24) = v13;
        WdLogEvent5_WdWarning(v27);
      }
      DXGSHAREDVMOBJECT::ReleaseReference((int *)v18);
      if ( v34 )
        KeUnstackDetachProcess(&ApcState);
      return (unsigned int)v13;
    }
    v28 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v28 + 24) = v6;
    WdLogEvent5_WdError(v28);
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v29[3] = v6;
    v29[4] = v4;
    v29[5] = a4;
    v29[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
  }
  return 3221225485LL;
}
