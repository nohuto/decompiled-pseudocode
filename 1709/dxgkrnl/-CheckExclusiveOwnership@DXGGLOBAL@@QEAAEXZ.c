/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00FE120
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C00FE0E0 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C00FE2FC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v1; // r15
  _QWORD *v2; // rsi
  char v3; // di
  _QWORD *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  int v7; // eax
  struct DXGADAPTER *v8; // rcx
  struct DXGADAPTER *v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-39h] BYREF
  char v13; // [rsp+40h] [rbp-29h]
  _BYTE v14[8]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v15; // [rsp+60h] [rbp-9h]
  struct DXGADAPTER *v16; // [rsp+68h] [rbp-1h]
  char v17; // [rsp+70h] [rbp+7h]
  _BYTE v18[8]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h]
  struct DXGADAPTER *v20; // [rsp+88h] [rbp+1Fh]
  char v21; // [rsp+90h] [rbp+27h]

  v1 = (_QWORD **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 400));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v2 = *v1;
  v3 = 1;
  while ( 1 )
  {
    do
    {
      if ( v2 == v1 || !v2 )
      {
        v3 = 0;
        goto LABEL_28;
      }
      v4 = v2;
      v2 = (_QWORD *)*v2;
      _m_prefetchw(v4 + 3);
      v5 = v4[3];
      while ( v5 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64(v4 + 3, v5 + 1, v5);
        if ( v6 == v5 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v5 );
    v16 = (struct DXGADAPTER *)v4;
    v17 = 0;
    _InterlockedAdd64(v4 + 3, 1uLL);
    v15 = -1LL;
    v20 = (struct DXGADAPTER *)v4;
    v21 = 0;
    _InterlockedAdd64(v4 + 3, 1uLL);
    v19 = -1LL;
    if ( !_InterlockedDecrement64(v4 + 3) )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v4[2], (struct DXGADAPTER *)v4);
    if ( v4[288] )
      break;
LABEL_17:
    v8 = v20;
    if ( v20 )
    {
      if ( v21 )
      {
        COREACCESS::Release((COREACCESS *)v18);
        v8 = v20;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v8 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), v8);
    }
    v9 = v16;
    if ( v16 )
    {
      if ( v17 )
      {
        COREACCESS::Release((COREACCESS *)v14);
        v9 = v16;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v9 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v9 + 2), v9);
    }
  }
  v12[1] = v4;
  _InterlockedAdd64(v4 + 3, 1uLL);
  v12[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 15, 0LL);
  v7 = *((_DWORD *)v4 + 44);
  v13 = 1;
  if ( v7 != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v4[288], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v4[288], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    ExReleasePushLockSharedEx(v4 + 15, 0LL);
    KeLeaveCriticalRegion();
    if ( !_InterlockedDecrement64(v4 + 3) )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v4[2], (struct DXGADAPTER *)v4);
    goto LABEL_17;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
LABEL_28:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v3;
}
