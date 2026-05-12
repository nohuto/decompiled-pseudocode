/*
 * XREFs of RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003E800
 * Callers:
 *     RaUnitProtocolCommandIoctl @ 0x1C003A714 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0001B68 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0011338 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0011370 (StorBuildSynchronousScsiRequest.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0041C6C (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidUnitSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IRP *MasterIrp; // r15
  __int64 v6; // r13
  unsigned int Length; // r12d
  _WORD *v10; // r14
  _BYTE *Srb; // rax
  __int64 v12; // r8
  _WORD *v13; // rbx
  int v14; // edi
  int Flink_high; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rdi
  int Blink; // eax
  int v21; // eax
  IRP *v22; // rax
  IRP *v23; // r12
  unsigned __int64 v24; // rax
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v27; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = *(_QWORD *)(a1 + 24);
  v27.Pointer = 0LL;
  v27.Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options > Length )
    Length = CurrentStackLocation->Parameters.Create.Options;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 9u, *(_BYTE *)(v6 + 402), 0);
  v12 = 0LL;
  v13 = Srb;
  if ( !Srb )
    goto LABEL_4;
  Flink_high = HIDWORD(MasterIrp->ThreadListEntry.Flink);
  v16 = -(LODWORD(MasterIrp->ThreadListEntry.Flink) != 0);
  MasterIrp->Flags = 255;
  v17 = v16 & 0x80;
  v18 = v17 | 0x40;
  if ( !Flink_high )
    v18 = v17;
  if ( !a3 )
  {
    v18 |= 0x102u;
    if ( *((_BYTE *)v13 + 2) == 40 )
      v13[19] = 32;
    else
      *((_BYTE *)v13 + 9) = 32;
  }
  if ( *(_BYTE *)(v6 + 402) == 1 )
  {
    v19 = *((unsigned int *)v13 + 13);
    *((_DWORD *)v13 + 8) = -1;
    v10 = v13;
    *((_DWORD *)v13 + 5) = 9;
    *((_DWORD *)v13 + 6) = v18;
    *((_QWORD *)v13 + 8) = MasterIrp;
    *((_DWORD *)v13 + 15) = Length;
    v13[18] = IoGetIoPriorityHint(a2);
    *((_QWORD *)v13 + 10) = a2;
    Blink = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !Blink )
      Blink = *(_DWORD *)(a1 + 1000);
    *((_DWORD *)v13 + 10) = Blink;
    *((_BYTE *)v13 + v19 + 8) = *(_BYTE *)(a1 + 88);
    *((_BYTE *)v13 + v19 + 9) = *(_BYTE *)(a1 + 89);
    *((_BYTE *)v13 + v19 + 10) = *(_BYTE *)(a1 + 90);
  }
  else
  {
    *((_BYTE *)v13 + 2) = 9;
    *v13 = 88;
    *((_DWORD *)v13 + 3) = v18;
    *((_BYTE *)v13 + 8) = -1;
    *((_QWORD *)v13 + 3) = MasterIrp;
    *((_DWORD *)v13 + 4) = Length;
    *((_QWORD *)v13 + 6) = a2;
    v21 = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !v21 )
      v21 = *(_DWORD *)(a1 + 1000);
    *((_DWORD *)v13 + 5) = v21;
    *((_BYTE *)v13 + 5) = *(_BYTE *)(a1 + 88);
    *((_BYTE *)v13 + 6) = *(_BYTE *)(a1 + 89);
    *((_BYTE *)v13 + 7) = *(_BYTE *)(a1 + 90);
  }
  v22 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)v13, v12, &v27);
  v12 = 0LL;
  v23 = v22;
  if ( v22 )
  {
    if ( *(_BYTE *)(v6 + 402) == 1 )
    {
      v10 = v13;
      *((_QWORD *)v13 + 10) = a2;
    }
    else
    {
      *((_QWORD *)v13 + 6) = a2;
    }
    v14 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v22);
    if ( v14 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
        v14 = -1073741637;
      if ( v14 >= 0 )
      {
        if ( *(_BYTE *)(v6 + 402) == 1 )
          v24 = *((unsigned int *)v10 + 15);
        else
          v24 = *((unsigned int *)v13 + 4);
        a2->IoStatus.Information = v24;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    StorFreeSynchronousScsiRequest(v23);
    v12 = 0LL;
  }
  else
  {
LABEL_4:
    v14 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v12) = a3;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v12);
  }
  if ( v13 )
  {
    if ( *(_BYTE *)(v6 + 402) == 1 )
    {
      if ( !v10 )
        v10 = v13;
      *((_QWORD *)v10 + 10) = 0LL;
      *((_QWORD *)v10 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v13 + 6) = 0LL;
      *((_QWORD *)v13 + 7) = 0LL;
    }
    ExFreePoolWithTag(v13, 0x72536152u);
  }
  return (unsigned int)v14;
}
