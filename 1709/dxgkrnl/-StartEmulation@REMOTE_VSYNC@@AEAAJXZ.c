/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C010439C
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0104494 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0029790 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C007FC5C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C007FCB4 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C0105778 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0105DD4 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = (BLTQUEUE *)operator new(0xA90uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 8), 0);
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    v4 = BLTQUEUE::Startup(v2);
    v6 = v4;
    if ( v4 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = v6;
      WdLogEvent5_WdError(v9);
    }
    else
    {
      BLTQUEUE::EnableVSync(*(struct _KTHREAD ***)this);
      BLTQUEUE::UpdateDisplayModeInfo(*(struct _D3DDDI_RATIONAL **)this, (struct _D3DDDI_RATIONAL)0x100000020LL, 0x300u);
    }
    if ( (int)v6 < 0 )
    {
      if ( *(_QWORD *)this )
      {
        BLTQUEUE::`scalar deleting destructor'(*(BLTQUEUE **)this, 1);
        *(_QWORD *)this = 0LL;
      }
    }
    return (unsigned int)v6;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v8 + 24) = 42LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
