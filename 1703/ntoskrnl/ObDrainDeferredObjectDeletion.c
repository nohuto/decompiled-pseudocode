/*
 * XREFs of ObDrainDeferredObjectDeletion @ 0x1406C0D70
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
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
    ExBlockOnAddressPushLock((__int64)&ObpRemoveObjectWait, &ObpRemoveObjectList, &v1, 8uLL, 0LL);
  }
  return result;
}
