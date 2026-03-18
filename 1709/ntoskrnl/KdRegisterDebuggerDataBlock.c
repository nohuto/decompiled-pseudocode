/*
 * XREFs of KdRegisterDebuggerDataBlock @ 0x1407963F0
 * Callers:
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall KdRegisterDebuggerDataBlock(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  __int64 *v4; // rcx
  KIRQL v5; // di
  __int64 *v6; // rax
  __int64 *v8; // rdx

  v3 = KeAcquireSpinLockRaiseToDpc(&KdpDataSpinLock);
  v4 = (__int64 *)KdpDebuggerDataListHead;
  v5 = v3;
  while ( v4 != &KdpDebuggerDataListHead )
  {
    v8 = v4;
    v4 = (__int64 *)*v4;
    if ( v8 == (__int64 *)a2 || *((_DWORD *)v8 + 4) == 1195525195 )
    {
      KxReleaseSpinLock(&KdpDataSpinLock);
      __writecr8(v5);
      return 0;
    }
  }
  *(_DWORD *)(a2 + 16) = 1195525195;
  *(_DWORD *)(a2 + 20) = 872;
  v6 = (__int64 *)qword_14037FD68;
  if ( *(__int64 **)qword_14037FD68 != &KdpDebuggerDataListHead )
    __fastfail(3u);
  *(_QWORD *)a2 = &KdpDebuggerDataListHead;
  *(_QWORD *)(a2 + 8) = v6;
  *v6 = a2;
  qword_14037FD68 = a2;
  KxReleaseSpinLock(&KdpDataSpinLock);
  __writecr8(v5);
  return 1;
}
