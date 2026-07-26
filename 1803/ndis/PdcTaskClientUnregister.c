/*
 * XREFs of PdcTaskClientUnregister @ 0x1C00FFCBC
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     PdcAcquireRwLockExclusive @ 0x1C00FFD64 (PdcAcquireRwLockExclusive.c)
 *     PdcpPortReleaseResources @ 0x1C00FFEE4 (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcTaskClientUnregister(_QWORD *P)
{
  unsigned int v1; // ebp
  struct _EX_RUNDOWN_REF *v3; // rdi

  v1 = 0;
  if ( P && *(_DWORD *)P == 1667458128 )
  {
    PdcAcquireRwLockExclusive(P + 1);
    v3 = (struct _EX_RUNDOWN_REF *)P[5];
    ExWaitForRundownProtectionRelease(v3 + 1);
    ExRundownCompleted(v3 + 1);
    PdcpPortReleaseResources(v3);
    P[5] = 0LL;
    *(_DWORD *)P = 0;
    P[2] = 0LL;
    ExReleasePushLockEx(P + 1, 0LL);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v1;
}
