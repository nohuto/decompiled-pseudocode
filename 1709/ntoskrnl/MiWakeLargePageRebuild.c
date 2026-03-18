/*
 * XREFs of MiWakeLargePageRebuild @ 0x14015124C
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiSignalLargePageRebuild @ 0x1400F00E0 (MiSignalLargePageRebuild.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r11
  ULONG_PTR v4; // r10
  __int64 v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  unsigned int v8; // ebx

  v3 = a2;
  v4 = 8256LL * a2 + *(_QWORD *)(a1 + 16) + 7088LL;
  if ( *(_BYTE *)(v4 + 33) || *(_BYTE *)(v4 + 34) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 168);
  _m_prefetchw((const void *)(v5 + 24));
  v6 = *(_QWORD *)(v5 + 24);
  while ( (unsigned __int64)(v6 + 1) > 1 )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v6 + 1, v6);
    if ( v7 == v6 )
    {
      v8 = 1;
      goto LABEL_7;
    }
  }
  if ( v6 )
    __fastfail(0xEu);
  v8 = 0;
LABEL_7:
  if ( v8 == 1 )
  {
    *(_BYTE *)(v4 + 33) = 1;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v4 + 24) = (v3 << 58) | (a1 >> 4) & 0x3FFFFFFFFFFFFFFLL;
    ExQueueWorkItemToPartition(v4, 4, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
  }
  return v8;
}
