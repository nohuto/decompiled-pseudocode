/*
 * XREFs of AlpcpRemoveResourcePort @ 0x1404D6EA4
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1404D7AD0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404D9F40 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140573170 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x14057F8E0 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E81D4 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v8; // rcx

  v2 = (volatile signed __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v7 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v7[1] != v3 || (v8 = (_QWORD *)v3[1], (_QWORD *)*v8 != v3) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    v3[1] = v3;
    *v3 = v3;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, v4, v5, v6);
  return KeAbPostRelease((ULONG_PTR)v2);
}
