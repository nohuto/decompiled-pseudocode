/*
 * XREFs of IrqArbCommitAllocation @ 0x1C0086A90
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpSetDeviceProperties @ 0x1C0085820 (IrqArbpSetDeviceProperties.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0086954 (IcCopyInputStateToDeviceState.c)
 *     PcisuppIsPciDevice @ 0x1C0086D18 (PcisuppIsPciDevice.c)
 *     PcisuppWriteIntLine @ 0x1C0086E18 (PcisuppWriteIntLine.c)
 *     LinkNodeClearPossibleData @ 0x1C0086E94 (LinkNodeClearPossibleData.c)
 *     ProcessorCopyData @ 0x1C00870D0 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C0087410 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C0087510 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1C00875D8 (IcRemapInputs.c)
 *     LinkNodeCopyData @ 0x1C0088B70 (LinkNodeCopyData.c)
 *     IrtRemapNewMsiAssignments @ 0x1C0088BBC (IrtRemapNewMsiAssignments.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0088CC8 (LinkNodeWriteStateToHardware.c)
 *     IrtClearDeletedMsiMappings @ 0x1C0088D34 (IrtClearDeletedMsiMappings.c)
 */

__int64 __fastcall IrqArbCommitAllocation(__int64 a1)
{
  PRTL_RANGE i; // rax
  _DWORD *UserData; // rax
  int IsPciDevice; // edi
  __int64 j; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PRTL_RANGE k; // rcx
  _DWORD *v13; // rbx
  __int64 Start_low; // rdx
  struct _RTL_RANGE_LIST *v15; // rcx
  struct _RANGE_LIST_ITERATOR v17; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+80h] [rbp+20h] BYREF
  PRTL_RANGE v20; // [rsp+88h] [rbp+28h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    UserData = i->UserData;
    if ( UserData )
      UserData[1] &= ~8u;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  IrtClearDeletedMsiMappings(a1);
  IsPciDevice = ProcessorCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_32;
  IsPciDevice = IcRemapInputs();
  if ( IsPciDevice < 0 )
    goto LABEL_32;
  IcCopyInputStateToDeviceState(a1, 1);
  for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
  {
    if ( *(int *)(j + 28) >= 0 && *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) != -1 )
    {
      v6 = j + 48;
      v7 = (unsigned int)(*(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1);
      do
      {
        *(_DWORD *)(v6 - 16) = *(_DWORD *)(v6 - 12);
        *(_DWORD *)(v6 - 8) = *(_DWORD *)(v6 - 4);
        *(_BYTE *)(v6 + 176) = *(_BYTE *)(v6 + 177);
        v8 = *(_OWORD *)(v6 + 104);
        *(_OWORD *)v6 = *(_OWORD *)(v6 + 88);
        v9 = *(_OWORD *)(v6 + 120);
        *(_OWORD *)(v6 + 16) = v8;
        v10 = *(_OWORD *)(v6 + 136);
        *(_OWORD *)(v6 + 32) = v9;
        v11 = *(_OWORD *)(v6 + 152);
        *(_OWORD *)(v6 + 48) = v10;
        *(_QWORD *)&v10 = *(_QWORD *)(v6 + 168);
        *(_OWORD *)(v6 + 64) = v11;
        *(_QWORD *)(v6 + 80) = v10;
        v6 += 200LL;
        --v7;
      }
      while ( v7 );
    }
  }
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  IsPciDevice = LinkNodeWriteStateToHardware();
  if ( IsPciDevice < 0 )
    goto LABEL_32;
  IsPciDevice = LinkNodeCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_32;
  LinkNodeClearPossibleData();
  IrtRemapNewMsiAssignments(a1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &v17, &v20);
  for ( k = v20; v20; k = v20 )
  {
    if ( k->Owner && (k->Attributes & 1) == 0 )
    {
      v13 = k->UserData;
      if ( !v13 || (v13[1] & 0x10) == 0 )
      {
        IsPciDevice = PcisuppIsPciDevice(k->Owner, &Range);
        if ( IsPciDevice >= 0 && (_BYTE)Range )
        {
          if ( v20->Start <= 0xFF )
            Start_low = LOBYTE(v20->Start);
          else
            LOBYTE(Start_low) = 0;
          PcisuppWriteIntLine(v20->Owner, Start_low);
        }
        k = v20;
      }
      if ( v13 )
      {
        if ( (v13[1] & 1) != 0 )
        {
          Iterator = v17;
          IsPciDevice = IrqArbpSetDeviceProperties(k, (__int128 *)&Iterator);
          if ( IsPciDevice < 0 )
            goto LABEL_32;
        }
      }
    }
    RtlGetNextRange(&v17, &v20, 1u);
  }
  v15 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v15;
  RtlFreeRangeList(v15);
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  LinkNodeClearPossibleData();
  if ( IsPciDevice < 0 )
LABEL_32:
    byte_1C00766A0 = 0;
  return (unsigned int)IsPciDevice;
}
