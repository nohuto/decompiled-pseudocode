/*
 * XREFs of ?ListenTo_Initialize@@YAJXZ @ 0x1800A2A00
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800617D0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x1800A2818 (--0CMonitorManager@@QEAA@XZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800A47B8 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ListenTo_Initialize(void)
{
  CMonitorManager *v1; // rax
  unsigned int v2; // edx
  unsigned __int64 v3; // r8
  const unsigned int *v4; // r9
  CMonitorManager *v5; // rbx
  int v6; // edi

  if ( _MonitorManager )
    return 2147500037LL;
  v1 = (CMonitorManager *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v1 )
    v5 = CMonitorManager::CMonitorManager(v1);
  else
    v5 = 0LL;
  if ( !v5 )
    return 2147942414LL;
  v6 = CMonitorManager::Initialize(v5, v2, v3, v4);
  if ( v6 < 0 )
  {
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v5 + 16LL))(v5);
    v5 = 0LL;
  }
  _MonitorManager = v5;
  return (unsigned int)v6;
}
