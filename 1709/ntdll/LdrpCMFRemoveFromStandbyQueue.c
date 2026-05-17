/*
 * XREFs of LdrpCMFRemoveFromStandbyQueue @ 0x18008F13C
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074F58 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpCMFAddToStanbyQueue @ 0x18008EA20 (LdrpCMFAddToStanbyQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpCMFRemoveFromStandbyQueue(int a1)
{
  unsigned __int16 v1; // r9
  unsigned __int16 v2; // r8
  int v3; // eax
  __int64 v4; // rcx

  v1 = CMFQueueRear;
  v2 = 0;
  if ( CMFQueueRear )
  {
    while ( a1 != CMFStandbyQueue[v2] )
    {
      if ( ++v2 >= (unsigned __int16)CMFQueueRear )
        return;
    }
    while ( 1 )
    {
      v3 = v2;
      if ( v2 >= v1 - 1 )
        break;
      v4 = v2++;
      CMFStandbyQueue[v4] = CMFStandbyQueue[v3 + 1];
    }
    CMFQueueRear = v1 - 1;
  }
}
