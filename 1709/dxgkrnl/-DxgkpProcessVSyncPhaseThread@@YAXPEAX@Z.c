/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00B3EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C0084E4C (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(DXGADAPTER *this)
{
  struct DXGADAPTER *v2; // rcx
  struct DXGADAPTER *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v5[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-40h]
  struct DXGADAPTER *v7; // [rsp+38h] [rbp-38h]
  char v8; // [rsp+40h] [rbp-30h]
  _BYTE v9[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-20h]
  struct DXGADAPTER *v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]

  v7 = this;
  v8 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v6 = -1LL;
  }
  v11 = this;
  v12 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v10 = -1LL;
  }
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v4) >= 0 )
    DXGADAPTER::ProcessVSyncPhaseTimer(this);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  _InterlockedExchange((volatile __int32 *)this + 906, 0);
  v2 = v11;
  if ( v11 )
  {
    if ( v12 )
    {
      COREACCESS::Release((COREACCESS *)v9);
      v2 = v11;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v2 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v2 + 2), v2);
  }
  v3 = v7;
  if ( v7 )
  {
    if ( v8 )
    {
      COREACCESS::Release((COREACCESS *)v5);
      v3 = v7;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v3 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v3 + 2), v3);
  }
}
