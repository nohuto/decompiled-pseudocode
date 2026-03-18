/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0032648
 * Callers:
 *     ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C00358C8 (--0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(DXGDIAGNOSTICS *this, unsigned int a2, POOL_TYPE a3)
{
  size_t v4; // rdi
  PVOID v5; // rax
  __int64 v6; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  v4 = a2;
  *(_DWORD *)this = 35;
  v5 = operator new[](a2, 0x4B677844u, a3);
  *((_QWORD *)this + 4) = v5;
  if ( v5 )
  {
    *((_DWORD *)this + 4) = v4;
    memset(v5, 0, v4);
  }
  else
  {
    v6 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v6 + 24) = *((unsigned int *)this + 4);
    WdLogEvent5_WdLowResource(v6);
  }
  return this;
}
