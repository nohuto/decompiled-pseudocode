/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1C00034FC
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C000C190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C00360D8 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int16 v4; // ax
  _QWORD *PoolWithTag; // rdi
  __int16 v6; // cx
  unsigned int v7; // eax
  unsigned int v8; // eax
  void *v9; // rcx
  unsigned int v10; // eax

  if ( a2 == 5 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_WORD *)(v3 + 184);
    if ( v4 == 4147 || v4 == 6418 || v4 == 6945 || !_stricmp((const char *)(v3 + 240), "NVDA") )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) = -1LL;
      PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x80uLL, 0x49434858u);
      if ( !PoolWithTag )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 3u, 7u, 0x19u, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
        return 0LL;
      }
      v6 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 184LL);
      if ( v6 == 4147 || v6 == 6418 )
      {
        memset(PoolWithTag, 0, 0x80uLL);
        *PoolWithTag = a1;
        KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
        PoolWithTag[7] = PoolWithTag;
        PoolWithTag[6] = Command_RenesasGetFirmwareVersionCommandCompletion;
        v10 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFC7FF;
        *((_WORD *)PoolWithTag + 35) = 3;
        *((_DWORD *)PoolWithTag + 11) = v10 | 0xC400;
        Command_SendCommand(a1, PoolWithTag + 1);
        v9 = PoolWithTag + 13;
      }
      else
      {
        if ( v6 == 6945 )
        {
          memset(PoolWithTag, 0, 0x80uLL);
          *PoolWithTag = a1;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
          PoolWithTag[7] = PoolWithTag;
          PoolWithTag[6] = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
          v7 = *((_DWORD *)PoolWithTag + 11) & 0xFFFFD3FF;
          *((_WORD *)PoolWithTag + 35) = 3;
          *((_DWORD *)PoolWithTag + 11) = v7 | 0xD000;
          Command_SendCommand(a1, PoolWithTag + 1);
          KeWaitForSingleObject(PoolWithTag + 13, Executive, 0, 0, 0LL);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) == -1LL )
          {
LABEL_18:
            ExFreePoolWithTag(PoolWithTag, 0x49434858u);
            return 0LL;
          }
          memset(PoolWithTag, 0, 0x80uLL);
          *PoolWithTag = a1;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
          PoolWithTag[6] = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
          v8 = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0xCC00;
        }
        else
        {
          memset(PoolWithTag, 0, 0x80uLL);
          *PoolWithTag = a1;
          KeInitializeEvent((PRKEVENT)(PoolWithTag + 13), SynchronizationEvent, 0);
          PoolWithTag[6] = Command_NvidiaGetFirmwareVersionCommandCompletion;
          v8 = *((_DWORD *)PoolWithTag + 11) & 0xFFFF03FF | 0xC400;
        }
        *((_DWORD *)PoolWithTag + 11) = v8;
        PoolWithTag[7] = PoolWithTag;
        *((_WORD *)PoolWithTag + 35) = 3;
        Command_SendCommand(a1, PoolWithTag + 1);
        v9 = PoolWithTag + 13;
      }
      KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) != -1LL )
        Etw_ControllerFirmareVersionUpdate();
      goto LABEL_18;
    }
  }
  return 0LL;
}
