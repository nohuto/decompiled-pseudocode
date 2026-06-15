/*
 * XREFs of ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140040AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_KW4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x1400307D8 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_KW4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003F8C4 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToLoopbackConnection(CPipeInstance **this, struct CPipeInstance *a2)
{
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 27);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  LoopbackConnection = CPipeInstance::GetLoopbackConnection(this[14]);
  v5 = CPipeInstance::ResolvePendingConnections(a2, *((_QWORD *)LoopbackConnection + 1), 0);
  if ( v5 >= 0 )
    v5 = (*((__int64 (__fastcall **)(CPipeInstance **, struct CPipeInstance *))*this + 5))(this, a2);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
