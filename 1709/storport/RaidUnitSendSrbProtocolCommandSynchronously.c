/*
 * XREFs of RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003F738
 * Callers:
 *     RaUnitProtocolCommandIoctl @ 0x1C003C458 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0001FDC (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001AB60 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001AB98 (StorBuildSynchronousScsiRequest.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0042AF0 (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidUnitSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IRP *MasterIrp; // r15
  __int64 v6; // r13
  _WORD *v7; // r14
  unsigned int Length; // r12d
  __int64 v11; // rcx
  _BYTE *Srb; // rax
  __int64 v13; // r8
  _WORD *v14; // rbx
  int v15; // edi
  int Flink_high; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rdi
  int Blink; // eax
  int v22; // eax
  IRP *v23; // rax
  IRP *v24; // r12
  unsigned __int64 v25; // rax
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v28; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = *(_QWORD *)(a1 + 24);
  v28.Pointer = 0LL;
  v7 = 0LL;
  v28.Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v11 = *(_QWORD *)(a1 + 8);
  if ( CurrentStackLocation->Parameters.Create.Options > Length )
    Length = CurrentStackLocation->Parameters.Create.Options;
  Srb = RaidAllocateSrb(v11, 9u, *(_BYTE *)(v6 + 402), 0);
  v13 = 0LL;
  v14 = Srb;
  if ( !Srb )
    goto LABEL_4;
  Flink_high = HIDWORD(MasterIrp->ThreadListEntry.Flink);
  v17 = -(LODWORD(MasterIrp->ThreadListEntry.Flink) != 0);
  MasterIrp->Flags = 255;
  v18 = v17 & 0x80;
  v19 = v18 | 0x40;
  if ( !Flink_high )
    v19 = v18;
  if ( !a3 )
  {
    v19 |= 0x102u;
    if ( *((_BYTE *)v14 + 2) == 40 )
      v14[19] = 32;
    else
      *((_BYTE *)v14 + 9) = 32;
  }
  if ( *(_BYTE *)(v6 + 402) == 1 )
  {
    v20 = *((unsigned int *)v14 + 13);
    *((_DWORD *)v14 + 8) = -1;
    v7 = v14;
    *((_DWORD *)v14 + 5) = 9;
    *((_DWORD *)v14 + 6) = v19;
    *((_QWORD *)v14 + 8) = MasterIrp;
    *((_DWORD *)v14 + 15) = Length;
    v14[18] = IoGetIoPriorityHint(a2);
    *((_QWORD *)v14 + 10) = a2;
    Blink = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !Blink )
      Blink = *(_DWORD *)(a1 + 1032);
    *((_DWORD *)v14 + 10) = Blink;
    *((_BYTE *)v14 + v20 + 8) = *(_BYTE *)(a1 + 88);
    *((_BYTE *)v14 + v20 + 9) = *(_BYTE *)(a1 + 89);
    *((_BYTE *)v14 + v20 + 10) = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_BYTE *)v14 + 2) = 9;
    *v14 = 88;
    *((_DWORD *)v14 + 3) = v19;
    *((_BYTE *)v14 + 8) = -1;
    *((_QWORD *)v14 + 3) = MasterIrp;
    *((_DWORD *)v14 + 4) = Length;
    *((_QWORD *)v14 + 6) = a2;
    v22 = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !v22 )
      v22 = *(_DWORD *)(a1 + 1032);
    *((_DWORD *)v14 + 5) = v22;
    *((_BYTE *)v14 + 5) = *(_BYTE *)(a1 + 88);
    *((_BYTE *)v14 + 6) = *(_BYTE *)(a1 + 89);
    *((_BYTE *)v14 + 7) = *(_BYTE *)(a1 + 90);
  }
  v23 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)v14, v13, &v28);
  v13 = 0LL;
  v24 = v23;
  if ( v23 )
  {
    if ( *(_BYTE *)(v6 + 402) == 1 )
    {
      v7 = v14;
      *((_QWORD *)v14 + 10) = a2;
    }
    else
    {
      *((_QWORD *)v14 + 6) = a2;
    }
    v15 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v23);
    if ( v15 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
        v15 = -1073741637;
      if ( v15 >= 0 )
      {
        if ( *(_BYTE *)(v6 + 402) == 1 )
          v25 = *((unsigned int *)v7 + 15);
        else
          v25 = *((unsigned int *)v14 + 4);
        a2->IoStatus.Information = v25;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    StorFreeSynchronousScsiRequest(v24);
    v13 = 0LL;
  }
  else
  {
LABEL_4:
    v15 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v13) = a3;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v13);
  }
  if ( v14 )
  {
    if ( *(_BYTE *)(v6 + 402) == 1 )
    {
      if ( !v7 )
        v7 = v14;
      *((_QWORD *)v7 + 10) = 0LL;
      *((_QWORD *)v7 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v14 + 6) = 0LL;
      *((_QWORD *)v14 + 7) = 0LL;
    }
    ExFreePoolWithTag(v14, 0x72536152u);
  }
  return (unsigned int)v15;
}
