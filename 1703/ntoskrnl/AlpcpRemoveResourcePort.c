/*
 * XREFs of AlpcpRemoveResourcePort @ 0x14047AB44
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140446050 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140447FF0 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140458F00 (AlpcReserveDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x14047A0F0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140574B50 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v2 = (volatile signed __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    v5 = (_QWORD *)v3[1];
    if ( (_QWORD *)v4[1] != v3 || (_QWORD *)*v5 != v3 )
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
