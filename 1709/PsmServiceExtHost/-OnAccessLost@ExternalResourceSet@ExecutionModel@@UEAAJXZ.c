/*
 * XREFs of ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18003D230
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x18003D280 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnAccessLost(
        ExecutionModel::ExternalResourceSet *this,
        __int64 a2,
        __int64 a3)
{
  if ( (*((_BYTE *)this + 1472) & 2) != 0 )
    return 1LL;
  ExecutionModel::ExternalResourceSet::QueueMessage(this, 2LL, a3, 0LL);
  return 0LL;
}
