/*
 * XREFs of ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C017AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C0021FF8 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessPowerPStateWork(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v5[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v6[48]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v4, this, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4) >= 0 )
    DXGADAPTER::ProcessPStateTransitionRequest(this, v2, v3);
  DXGADAPTER::ReleaseReference(this);
  COREACCESS::~COREACCESS((COREACCESS *)v6);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
}
