/*
 * XREFs of AlpcpRemoveResourcePort @ 0x1405404DC
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140460D20 (AlpcSectionDeleteProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x140540240 (AlpcViewDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x140540420 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140588250 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140596100 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E8F94 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  v2 = (volatile signed __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v4[1] != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v3[1] = v3;
    *v3 = v3;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
