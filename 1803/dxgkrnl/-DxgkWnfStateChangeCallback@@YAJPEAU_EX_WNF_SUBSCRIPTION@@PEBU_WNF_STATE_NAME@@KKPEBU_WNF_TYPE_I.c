/*
 * XREFs of ?DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C00DBB30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        void *a6)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct DXGGLOBAL *v13; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 984));
  v12 = 0;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)a6 + 4) )
  {
    KeStackAttachProcess(*((PRKPROCESS *)a6 + 3), &ApcState);
    v12 = (*((__int64 (__fastcall **)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, _QWORD, _QWORD, const struct _WNF_TYPE_ID *, void *))a6
           + 1))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    KeUnstackDetachProcess(&ApcState);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)a6 + 4);
  }
  v13 = DXGGLOBAL::GetGlobal(v11);
  ExReleasePushLockSharedEx((char *)v13 + 984, 0LL);
  KeLeaveCriticalRegion();
  return v12;
}
