/*
 * XREFs of ndisIovFindVPortByVPortId @ 0x1C006C8D8
 * Callers:
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C003B8F0 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003C360 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00F2F40 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00F3EC0 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00FB420 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C006C958 (ndisIovFindVPortByVPortIdInternal.c)
 */

__int64 __fastcall ndisIovFindVPortByVPortId(__int64 a1, unsigned int a2)
{
  __int64 VPortByVPortIdInternal; // rax
  __int64 v5; // rbx
  KIRQL v6; // r10

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2888064;
  VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  v5 = VPortByVPortIdInternal;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  return v5;
}
