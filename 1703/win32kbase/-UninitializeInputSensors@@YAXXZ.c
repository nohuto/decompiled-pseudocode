/*
 * XREFs of ?UninitializeInputSensors@@YAXXZ @ 0x1C012E25C
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C012E3F0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C004CE30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x1C004FD00 (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 */

void UninitializeInputSensors(void)
{
  CBaseInput **v0; // rbx
  __int64 v1; // rdi

  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    IOCPDispatcher::Close((HANDLE *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink, 1);
  v0 = (CBaseInput **)qword_1C0186018;
  v1 = 3LL;
  do
  {
    if ( *((_DWORD *)v0 - 2) == 2 )
      CBaseInput::UninitializeSensor(*v0);
    v0 += 6;
    --v1;
  }
  while ( v1 );
  IOCPDispatcher_Destroy();
}
