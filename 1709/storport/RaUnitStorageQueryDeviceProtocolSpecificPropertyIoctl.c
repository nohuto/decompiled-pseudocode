/*
 * XREFs of RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003D360
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005F0E0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001A9FC (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C003A854 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rsi
  unsigned int *v3; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v7; // edx
  unsigned __int64 Length; // r8
  signed int v9; // edi
  __int64 IrpCount; // rax
  unsigned int SystemBuffer_high; // r8d
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v16 = 0;
  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v9 = -1073741637;
LABEL_29:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v9);
    }
    goto LABEL_14;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x30 )
  {
LABEL_5:
    v9 = -1073741585;
    goto LABEL_29;
  }
  if ( LODWORD(MasterIrp->MdlAddress)
    && HIDWORD(MasterIrp->MdlAddress)
    && ((IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount, !(_DWORD)IrpCount)
     || (unsigned int)IrpCount >= 0x28 && HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer)) )
  {
    if ( (unsigned int)Length < 0x30 )
    {
      if ( (unsigned int)Length < 8 )
      {
        v9 = -1073741789;
        goto LABEL_29;
      }
      *(_DWORD *)&MasterIrp->Type = 48;
      *(_DWORD *)(&MasterIrp->Size + 1) = 48;
      a2->IoStatus.Information = 8LL;
LABEL_14:
      v9 = 0;
      return RaidCompleteRequestEx(a2, 0, v9);
    }
    if ( Length < IrpCount + (unsigned __int64)HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) + 8 )
      goto LABEL_5;
    v9 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(
           *(_QWORD *)(a1 + 8),
           (__int64)a2,
           &P,
           (unsigned int *)&v16);
    if ( v9 < 0 )
    {
      v3 = (unsigned int *)P;
    }
    else
    {
      v3 = (unsigned int *)P;
      v9 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v16, 0LL, v15, 64);
      if ( v9 >= 0 )
      {
        *(_DWORD *)&MasterIrp->Type = 48;
        *(_DWORD *)(&MasterIrp->Size + 1) = 48;
        LODWORD(MasterIrp->ThreadListEntry.Flink) = v3[15];
        HIDWORD(MasterIrp->ThreadListEntry.Flink) = v3[16];
        LODWORD(MasterIrp->ThreadListEntry.Blink) = v3[17];
        HIDWORD(MasterIrp->ThreadListEntry.Blink) = v3[18];
        SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
        if ( SystemBuffer_high )
        {
          v12 = v3[14];
          if ( SystemBuffer_high < v12 )
            v12 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
          memmove(
            (char *)&MasterIrp->MdlAddress + (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
            (char *)v3 + v3[13] + 36,
            v12);
          v13 = MasterIrp->AssociatedIrp.IrpCount + 8;
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v12;
          a2->IoStatus.Information = v12 + v13;
        }
        else
        {
          a2->IoStatus.Information = 48LL;
        }
      }
    }
  }
  else
  {
    v9 = -1073741585;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  if ( v9 < 0 )
    goto LABEL_29;
  return RaidCompleteRequestEx(a2, 0, v9);
}
