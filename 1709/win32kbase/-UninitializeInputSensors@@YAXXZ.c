/*
 * XREFs of ?UninitializeInputSensors@@YAXXZ @ 0x1C012D7C0
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C012D960 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C003B6D0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     CleanupSensorExplicitly @ 0x1C009B620 (CleanupSensorExplicitly.c)
 *     IOCPDispatcher_Destroy @ 0x1C009C0C0 (IOCPDispatcher_Destroy.c)
 */

void UninitializeInputSensors(void)
{
  int *v0; // rbx
  __int64 v1; // rdi

  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    IOCPDispatcher::Close((HANDLE *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink, 1);
  v0 = (int *)&unk_1C0188020;
  v1 = 3LL;
  do
  {
    if ( *(v0 - 4) == 2 )
      CleanupSensorExplicitly(*v0);
    v0 += 12;
    --v1;
  }
  while ( v1 );
  IOCPDispatcher_Destroy();
}
