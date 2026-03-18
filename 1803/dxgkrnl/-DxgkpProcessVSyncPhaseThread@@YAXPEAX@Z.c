/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00AA5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C00F52DC (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(DXGADAPTER *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v4; // [rsp+30h] [rbp-48h]
  DXGADAPTER *v5; // [rsp+38h] [rbp-40h]
  char v6; // [rsp+40h] [rbp-38h]
  _BYTE v7[8]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]
  DXGADAPTER *v9; // [rsp+58h] [rbp-20h]
  char v10; // [rsp+60h] [rbp-18h]

  v5 = this;
  v6 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v4 = -1LL;
  }
  v9 = this;
  v10 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v8 = -1LL;
  }
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v2) >= 0 )
    DXGADAPTER::ProcessVSyncPhaseTimer(this);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  _InterlockedExchange((volatile __int32 *)this + 946, 0);
  COREACCESS::~COREACCESS((COREACCESS *)v7);
  COREACCESS::~COREACCESS((COREACCESS *)v3);
}
