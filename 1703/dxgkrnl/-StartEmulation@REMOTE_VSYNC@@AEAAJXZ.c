/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103A18
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103AC0 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0039348 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C0103BAC (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0103BF4 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C011EDA8 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C011F068 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (BLTQUEUE *)operator new(0xA90uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 8), 0);
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    v4 = BLTQUEUE::Startup(v2);
    v7 = v4;
    if ( v4 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v10 + 24) = v7;
      WdLogEvent5_WdError(v10);
    }
    else
    {
      BLTQUEUE::EnableVSync(*(BLTQUEUE **)this);
      BLTQUEUE::UpdateDisplayModeInfo(*(BLTQUEUE **)this, (struct _D3DDDI_RATIONAL)0x100000020LL, 0x300u);
    }
    if ( (int)v7 < 0 )
    {
      if ( *(_QWORD *)this )
      {
        BLTQUEUE::`scalar deleting destructor'(*(BLTQUEUE **)this, 1);
        *(_QWORD *)this = 0LL;
      }
    }
    return (unsigned int)v7;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v9 + 24) = 42LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
}
