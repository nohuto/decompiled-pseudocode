/*
 * XREFs of ObDrainDeferredObjectDeletion @ 0x1406EF890
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 */

__int64 ObDrainDeferredObjectDeletion()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    result = ObpRemoveObjectList;
    v1 = ObpRemoveObjectList;
    if ( !ObpRemoveObjectList )
      break;
    ExBlockOnAddressPushLock(&ObpRemoveObjectWait, &ObpRemoveObjectList, &v1, 8uLL, 0LL);
  }
  return result;
}
