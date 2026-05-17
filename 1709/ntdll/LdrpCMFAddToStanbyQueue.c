/*
 * XREFs of LdrpCMFAddToStanbyQueue @ 0x18008EA20
 * Callers:
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x18008E9B4 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     LdrpCMFRemoveFromStandbyQueue @ 0x18008F13C (LdrpCMFRemoveFromStandbyQueue.c)
 *     LdrpUnmapCMFSegment @ 0x1800E0E30 (LdrpUnmapCMFSegment.c)
 */

char __fastcall LdrpCMFAddToStanbyQueue(int a1)
{
  unsigned __int16 v1; // ax
  char v3; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // bx
  __int64 v9; // r9
  int v10; // r10d
  int v11; // eax
  __int64 v12; // rcx

  v1 = CMFQueueRear;
  v3 = 1;
  if ( CMFQueueRear == 5 )
  {
    v8 = 0;
    if ( (unsigned __int8)LdrpUnmapCMFSegment((unsigned int)CMFStandbyQueue[0]) )
    {
      v9 = (unsigned __int16)CMFQueueRear;
      v10 = (unsigned __int16)CMFQueueRear - 1;
      if ( v10 > 0 )
      {
        v11 = 0;
        do
        {
          v12 = v8++;
          CMFStandbyQueue[v12] = CMFStandbyQueue[v11 + 1];
          v11 = v8;
        }
        while ( v8 < v10 );
      }
      CMFStandbyQueue[v9 - 1] = a1;
    }
    else
    {
      LdrpCMFRemoveFromStandbyQueue((unsigned int)CMFStandbyQueue[0], v5, v6, v7);
      return 0;
    }
  }
  else
  {
    ++CMFQueueRear;
    CMFStandbyQueue[v1] = a1;
  }
  return v3;
}
