/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C000B8AC
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 64);
  else
    v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 56) >= 0x1000u )
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
