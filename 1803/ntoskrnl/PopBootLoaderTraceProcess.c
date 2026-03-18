/*
 * XREFs of PopBootLoaderTraceProcess @ 0x1405EA854
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x14016E868 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140478A90 (BapdRecordFirmwareBootStats.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rax
  __int64 v3; // rdx

  v0 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    BapdRecordFirmwareBootStats();
    EtwUnregister(stru_140397D50.RegHandle);
    stru_140397D50.RegHandle = 0LL;
    stru_140397D50.LevelPlus1 = 0;
    v1 = *(_QWORD *)(v0 + 216);
    if ( v1 )
    {
      v2 = *(_DWORD **)(v1 + 32);
      if ( *v2 == 1281517896 )
      {
        v3 = (unsigned int)v2[3];
        if ( (_DWORD)v3 )
          BapdWriteEtwEvents((unsigned __int64)v2 + (unsigned int)v2[2], v3);
      }
    }
  }
}
