/*
 * XREFs of ScsiSyncCacheRequest @ 0x1C0009500
 * Callers:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 */

__int64 __fastcall ScsiSyncCacheRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1080) + 525LL) & 1) != 0 )
  {
    *(_BYTE *)(v4 + 4245) &= 0xFCu;
    SrbAssignQueueId(a1, a2);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v5 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v5 = *(unsigned __int8 *)(a2 + 7);
    if ( (unsigned int)v5 < *(_DWORD *)(a1 + 148) && (v6 = *(_QWORD *)(a1 + 8 * v5 + 1184)) != 0 )
      v7 = *(_DWORD *)(v6 + 16);
    else
      v7 = 0;
    *(_BYTE *)(v4 + 4096) = 0;
    *(_DWORD *)(v4 + 4100) = v7;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 1;
  }
  return 0LL;
}
