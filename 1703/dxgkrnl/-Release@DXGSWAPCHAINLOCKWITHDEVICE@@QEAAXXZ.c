/*
 * XREFs of ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C01BDCC0
 * Callers:
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01BC400 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01BC434 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C003C1DC (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Release(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  bool v6; // cf
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+38h] [rbp-10h]

  if ( *((_BYTE *)this + 43) )
  {
    COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
    v8 = 0LL;
    v9 = 0;
    COREACCESS::operator=((__int64)this + 56, (__int64)v7);
    COREACCESS::~COREACCESS((COREACCESS *)v7);
    *((_BYTE *)this + 43) = 0;
  }
  if ( *((_BYTE *)this + 41) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 6) + 104LL));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 41) = 0;
  }
  if ( *((_BYTE *)this + 42) )
  {
    v5 = *((_QWORD *)this + 6);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    a2 = *((_QWORD *)this + 1);
    v6 = *((_BYTE *)this + 16) != 0;
    *((_QWORD *)this + 6) = 0LL;
    *(_QWORD *)(a2 + (v6 ? 0x38 : 0) + 80) = 0LL;
    *((_BYTE *)this + 42) = 0;
  }
  if ( *((_BYTE *)this + 40) )
  {
    DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24), a2, a3, a4);
    *((_BYTE *)this + 40) = 0;
  }
}
