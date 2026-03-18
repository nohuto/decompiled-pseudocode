/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0010F74
 * Callers:
 *     ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C003A490 (--0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0110864 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(DXGDIAGNOSTICS *this, unsigned int a2, enum _POOL_TYPE a3)
{
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = 35;
  v5 = operator new[](a2, 0x4B677844u, a3);
  *((_QWORD *)this + 4) = v5;
  if ( v5 )
  {
    *((_DWORD *)this + 4) = a2;
    memset(v5, 0, a2);
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = *((unsigned int *)this + 4);
    WdLogEvent5_WdLowResource(v8);
  }
  return this;
}
