/*
 * XREFs of ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C019DC00
 * Callers:
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C019DCE4 (-DxgkDisableStablePowerState@@YAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C0148E50 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DisableStablePowerState(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _BYTE v6[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v9[40]; // [rsp+58h] [rbp-30h] BYREF

  v1 = (_QWORD **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v2 = *v1;
  while ( v2 != v1 && v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    _m_prefetchw(v3 + 3);
    v4 = v3[3];
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 3, v4 + 1, v4);
      if ( v5 == v4 )
      {
        LOBYTE(v4) = 1;
        break;
      }
    }
    if ( (_BYTE)v4 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v7, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v3);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(&v7) >= 0 )
        DXGADAPTER::DisableStablePowerState((DXGADAPTER *)v3);
      COREACCESS::~COREACCESS((COREACCESS *)v9);
      COREACCESS::~COREACCESS((COREACCESS *)v8);
    }
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
