/*
 * XREFs of ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0195348
 * Callers:
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C0195428 (-DxgkDisableStablePowerState@@YAXXZ.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C016DC1C (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DisableStablePowerState(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  _BYTE v12[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v15[40]; // [rsp+58h] [rbp-30h] BYREF

  v4 = (_QWORD **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGGLOBAL *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v8 = *v4;
  while ( v8 != v4 && v8 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    _m_prefetchw(v9 + 3);
    v10 = v9[3];
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64(v9 + 3, v10 + 1, v10);
      if ( v11 == v10 )
      {
        LOBYTE(v10) = 1;
        break;
      }
    }
    if ( (_BYTE)v10 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v13, (struct DXGADAPTER *const)v9, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(&v13, 1u) >= 0 )
        DXGADAPTER::DisableStablePowerState((DXGADAPTER *)v9);
      COREACCESS::~COREACCESS((COREACCESS *)v15);
      COREACCESS::~COREACCESS((COREACCESS *)v14);
    }
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v5, v6, v7);
}
