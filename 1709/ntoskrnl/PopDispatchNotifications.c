/*
 * XREFs of PopDispatchNotifications @ 0x14059DC00
 * Callers:
 *     <none>
 * Callees:
 *     PopDispatchNotificationsToList @ 0x1404E6D90 (PopDispatchNotificationsToList.c)
 */

struct _KTHREAD *PopDispatchNotifications()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdi
  struct _KTHREAD *result; // rax

  PopDispatchNotificationsToList(&PopPowerSettings);
  v0 = &PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    result = PopDispatchNotificationsToList(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
