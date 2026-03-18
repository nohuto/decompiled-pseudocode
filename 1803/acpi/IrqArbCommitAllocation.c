/*
 * XREFs of IrqArbCommitAllocation @ 0x1C0090430
 * Callers:
 *     <none>
 * Callees:
 *     PcisuppIsPciDevice @ 0x1C008C778 (PcisuppIsPciDevice.c)
 *     PcisuppWriteIntLine @ 0x1C008CAD0 (PcisuppWriteIntLine.c)
 *     LinkNodeClearPossibleData @ 0x1C008D108 (LinkNodeClearPossibleData.c)
 *     LinkNodeCopyData @ 0x1C008D13C (LinkNodeCopyData.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008D418 (LinkNodeWriteStateToHardware.c)
 *     ProcessorCopyData @ 0x1C008E278 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C008E834 (ProcessorpClearData.c)
 *     IrqArbpSetDeviceProperties @ 0x1C00918EC (IrqArbpSetDeviceProperties.c)
 *     IcClearPossibleData @ 0x1C00921E0 (IcClearPossibleData.c)
 *     IcCopyData @ 0x1C0092288 (IcCopyData.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00923E0 (IcCopyInputStateToDeviceState.c)
 *     IcRemapInputs @ 0x1C009266C (IcRemapInputs.c)
 *     IrtClearDeletedMsiMappings @ 0x1C0092D80 (IrtClearDeletedMsiMappings.c)
 *     IrtRemapNewMsiAssignments @ 0x1C0092EA0 (IrtRemapNewMsiAssignments.c)
 */

__int64 __fastcall IrqArbCommitAllocation(__int64 a1)
{
  _DWORD *UserData; // rax
  int IsPciDevice; // ebx
  _DWORD *v4; // rsi
  char Start; // dl
  PRTL_RANGE v6; // rcx
  struct _RTL_RANGE_LIST *v7; // rcx
  struct _RANGE_LIST_ITERATOR v9; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+80h] [rbp+20h] BYREF
  PRTL_RANGE v12; // [rsp+88h] [rbp+28h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    UserData = Range->UserData;
    if ( UserData )
      UserData[1] &= ~8u;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  IrtClearDeletedMsiMappings(a1);
  IsPciDevice = ProcessorCopyData(0);
  if ( IsPciDevice < 0 )
    goto LABEL_29;
  IsPciDevice = IcRemapInputs();
  if ( IsPciDevice < 0 )
    goto LABEL_29;
  IcCopyInputStateToDeviceState(a1, 1LL);
  IsPciDevice = IcCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_29;
  ProcessorpClearData(1);
  IcClearPossibleData();
  IsPciDevice = LinkNodeWriteStateToHardware();
  if ( IsPciDevice < 0 )
    goto LABEL_29;
  IsPciDevice = LinkNodeCopyData(0);
  if ( IsPciDevice < 0 )
    goto LABEL_29;
  LinkNodeClearPossibleData();
  IrtRemapNewMsiAssignments(a1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &v9, &v12);
  while ( 1 )
  {
    v6 = v12;
    if ( !v12 )
      break;
    if ( v12->Owner && (v12->Attributes & 1) == 0 )
    {
      v4 = v12->UserData;
      if ( !v4 || (v4[1] & 0x10) == 0 )
      {
        IsPciDevice = PcisuppIsPciDevice((__int64)v12->Owner, (bool *)&Range);
        if ( IsPciDevice >= 0 && (_BYTE)Range )
        {
          if ( v12->Start <= 0xFF )
            Start = v12->Start;
          else
            Start = 0;
          PcisuppWriteIntLine((__int64)v12->Owner, Start);
        }
        v6 = v12;
      }
      if ( v4 )
      {
        if ( (v4[1] & 1) != 0 )
        {
          Iterator = v9;
          IsPciDevice = IrqArbpSetDeviceProperties(v6, &Iterator);
          if ( IsPciDevice < 0 )
            goto LABEL_29;
        }
      }
    }
    RtlGetNextRange(&v9, &v12, 1u);
  }
  v7 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v7;
  RtlFreeRangeList(v7);
  ProcessorpClearData(1);
  IcClearPossibleData();
  LinkNodeClearPossibleData();
  if ( IsPciDevice < 0 )
LABEL_29:
    byte_1C00666C0 = 0;
  return (unsigned int)IsPciDevice;
}
