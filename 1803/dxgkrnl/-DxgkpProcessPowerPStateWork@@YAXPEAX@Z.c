/*
 * XREFs of ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C0165C90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C0026514 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessPowerPStateWork(DXGADAPTER *this)
{
  __int64 v2; // rdx
  const GUID *v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v5[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v6[48]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v4, this, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4) >= 0 )
    DXGADAPTER::ProcessPStateTransitionRequest(this, v2, v3);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  COREACCESS::~COREACCESS((COREACCESS *)v6);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
}
