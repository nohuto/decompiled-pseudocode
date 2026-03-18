/*
 * XREFs of ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0195AF4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01C4780 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01742CC (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::NotifyAdapterRemoval(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  ADAPTER_RENDER **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ADAPTER_RENDER *v8; // rdi
  ADAPTER_RENDER **v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v16[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v18[40]; // [rsp+58h] [rbp-30h] BYREF

  v4 = (ADAPTER_RENDER **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGGLOBAL *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v8 = *v4;
  while ( v8 != (ADAPTER_RENDER *)v4 && v8 )
  {
    v9 = (ADAPTER_RENDER **)v8;
    v8 = *(ADAPTER_RENDER **)v8;
    _m_prefetchw(v9 + 3);
    v10 = (signed __int64)v9[3];
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, v10 + 1, v10);
      if ( v11 == v10 )
      {
        LOBYTE(v10) = 1;
        break;
      }
    }
    if ( (_BYTE)v10 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, (struct DXGADAPTER *const)v9, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
      if ( v9[286] )
      {
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16) >= 0 )
          ADAPTER_RENDER::SignalCrossAdapterSyncObjects(v9[286], v12, v13, v14);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v18);
      COREACCESS::~COREACCESS((COREACCESS *)v17);
    }
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v5, v6, v7);
}
