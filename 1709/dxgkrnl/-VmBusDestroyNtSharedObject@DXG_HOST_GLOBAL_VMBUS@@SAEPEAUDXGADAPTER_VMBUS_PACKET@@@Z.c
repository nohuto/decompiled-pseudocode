/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C008A250 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  unsigned int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edx
  struct DXGSYNCOBJECT **v9; // rbx
  __int64 v10; // rcx
  PERESOURCE *Global; // rax
  __int64 v12; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v14,
    *((struct DXGPROCESS **)a1 + 7));
  v4 = *(_DWORD *)(v1 + 24);
  v5 = *((_QWORD *)a1 + 7);
  v6 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *(_DWORD *)(v5 + 240)
    && (v7 = *(_QWORD *)(v5 + 224),
        v3 = (v4 >> 25) & 0x60,
        v8 = *(_DWORD *)(v7 + 16 * v6 + 8),
        ((v4 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60))
    && (v8 & 0x2000) == 0
    && (v8 & 0x1F) != 0
    && (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x1F) == 0xD
    && (v9 = *(struct DXGSYNCOBJECT ***)(v7 + 16LL * (unsigned int)v6)) != 0LL )
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v5 + 224), v4);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)a1 + 7) + 48LL), &ApcState);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10);
    DXGGLOBAL::DestroySyncObject(Global, *v9, 0);
    KeUnstackDetachProcess(&ApcState);
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(v1 + 24);
    WdLogEvent5_WdError(v12);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  }
  return 0;
}
