/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01BC3F0
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01BC30C (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0034878 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C01D3F68 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01D4C54 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C01D7144 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C01D7528 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  BLTQUEUE *v10; // rcx
  struct _D3DDDI_RATIONAL v11; // [rsp+40h] [rbp+8h]

  v2 = (BLTQUEUE *)operator new[](0xA90uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 16), 0);
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
  {
    v6 = BLTQUEUE::Startup(v2);
    v8 = v6;
    if ( v6 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = v8;
      WdLogEvent5_WdError(v9);
    }
    else
    {
      BLTQUEUE::EnableVSync(*((BLTQUEUE **)this + 1));
      v11.Denominator = 1;
      v11.Numerator = *(_BYTE *)this != 0 ? 64 : 32;
      BLTQUEUE::UpdateDisplayModeInfo(*((BLTQUEUE **)this + 1), v11, 0x300u);
    }
    if ( (int)v8 < 0 )
    {
      v10 = (BLTQUEUE *)*((_QWORD *)this + 1);
      if ( v10 )
      {
        BLTQUEUE::`scalar deleting destructor'(v10, 1);
        *((_QWORD *)this + 1) = 0LL;
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    v4 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v4 + 24) = 43LL;
    WdLogEvent5_WdLowResource(v4);
    return 3221225495LL;
  }
}
