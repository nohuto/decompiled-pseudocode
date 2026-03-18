/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C009BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0005DC0 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct DXGADAPTER *v4; // rcx
  struct DXGADAPTER *v5; // rcx
  int v6; // r9d
  _BYTE v7[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  struct DXGADAPTER *v10; // [rsp+38h] [rbp-38h]
  char v11; // [rsp+40h] [rbp-30h]
  _BYTE v12[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]
  struct DXGADAPTER *v14; // [rsp+58h] [rbp-18h]
  char v15; // [rsp+60h] [rbp-10h]

  v10 = this;
  v11 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v9 = -1LL;
  }
  v14 = this;
  v15 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v13 = -1LL;
  }
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7) >= 0 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3576, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v6 = *((_DWORD *)this + 898);
        if ( v6 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v2, &EventBlockThread, v3, v6);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 3576, 0LL);
    }
    *((_QWORD *)this + 448) = KeGetCurrentThread();
    if ( *((_DWORD *)this + 852) == 1 )
    {
      LOBYTE(v3) = 1;
      DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, v3);
    }
    else
    {
      *((_QWORD *)this + 448) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 3576, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  _InterlockedExchange((volatile __int32 *)this + 902, 0);
  v4 = v14;
  if ( v14 )
  {
    if ( v15 )
    {
      COREACCESS::Release((COREACCESS *)v12);
      v4 = v14;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v4 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v4 + 2), v4);
  }
  v5 = v10;
  if ( v10 )
  {
    if ( v11 )
    {
      COREACCESS::Release((COREACCESS *)v8);
      v5 = v10;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v5 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v5 + 2), v5);
  }
}
