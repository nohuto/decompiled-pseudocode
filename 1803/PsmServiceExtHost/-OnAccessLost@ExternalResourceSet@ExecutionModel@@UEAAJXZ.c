/*
 * XREFs of ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18005C460
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18005C4B0 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

_BOOL8 __fastcall ExecutionModel::ExternalResourceSet::OnAccessLost(ExecutionModel::ExternalResourceSet *this)
{
  int v1; // ebx

  v1 = *((_DWORD *)this + 368) & 2;
  if ( !v1 )
    ExecutionModel::ExternalResourceSet::QueueMessage(this, 2LL);
  return v1 != 0;
}
