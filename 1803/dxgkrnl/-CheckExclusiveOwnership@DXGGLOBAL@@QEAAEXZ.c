/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C010C164
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C010C100 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C010CCAC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v1; // r15
  _QWORD *v2; // r14
  char v3; // si
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int v8; // eax
  struct DXGADAPTER *v9; // rcx
  struct DXGADAPTER *v10; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-39h] BYREF
  char v14; // [rsp+40h] [rbp-29h]
  struct _KTHREAD **v15[2]; // [rsp+58h] [rbp-11h] BYREF
  struct DXGADAPTER *v16; // [rsp+68h] [rbp-1h]
  char v17; // [rsp+70h] [rbp+7h]
  struct _KTHREAD **v18[2]; // [rsp+78h] [rbp+Fh] BYREF
  struct DXGADAPTER *v19; // [rsp+88h] [rbp+1Fh]
  char v20; // [rsp+90h] [rbp+27h]

  v1 = (_QWORD **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
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
      v5 = v2;
      v2 = (_QWORD *)*v2;
      _m_prefetchw(v4 + 3);
      v6 = v4[3];
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v4 + 3, v6 + 1, v6);
        if ( v7 == v6 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v6 );
    v16 = (struct DXGADAPTER *)v4;
    v17 = 0;
    _InterlockedAdd64(v5 + 3, 1uLL);
    v15[1] = (struct _KTHREAD **)-1LL;
    v19 = (struct DXGADAPTER *)v4;
    v20 = 0;
    _InterlockedAdd64(v5 + 3, 1uLL);
    v18[1] = (struct _KTHREAD **)-1LL;
    if ( !_InterlockedDecrement64(v4 + 3) )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v4[2], (struct DXGADAPTER *)v4);
    if ( v4[307] )
      break;
LABEL_17:
    v9 = v19;
    if ( v19 )
    {
      if ( v20 )
      {
        COREACCESS::Release(v18);
        v9 = v19;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v9 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v9 + 2), v9);
    }
    v10 = v16;
    if ( v16 )
    {
      if ( v17 )
      {
        COREACCESS::Release(v15);
        v10 = v16;
      }
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v10 + 3) )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v10 + 2), v10);
    }
  }
  v13[1] = v4;
  _InterlockedAdd64(v5 + 3, 1uLL);
  v13[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5 + 15, 0LL);
  v8 = *((_DWORD *)v4 + 44);
  v14 = 1;
  if ( v8 != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v4[307], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v4[307], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    ExReleasePushLockSharedEx(v4 + 15, 0LL);
    KeLeaveCriticalRegion();
    if ( !_InterlockedDecrement64(v4 + 3) )
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v4[2], (struct DXGADAPTER *)v4);
    goto LABEL_17;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v15);
LABEL_28:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v3;
}
