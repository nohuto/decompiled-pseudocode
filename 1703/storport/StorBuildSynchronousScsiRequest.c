/*
 * XREFs of StorBuildSynchronousScsiRequest @ 0x1C0011370
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00111D4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitAbortSrb @ 0x1C003C4E8 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003DA58 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003E240 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003E4F0 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003E800 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     StorProbeAndLockPages @ 0x1C001146C (StorProbeAndLockPages.c)
 */

PIRP __fastcall StorBuildSynchronousScsiRequest(__int64 a1, unsigned __int64 a2, __int64 a3, _IO_STATUS_BLOCK *a4)
{
  PIRP result; // rax
  IRP *v7; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v9; // ecx
  void *v10; // r10
  ULONG v11; // edx
  unsigned int v12; // ebp
  PMDL Mdl; // rax
  __int64 v14; // rdx
  int v15; // ebp

  result = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  v7 = result;
  if ( result )
  {
    CurrentStackLocation = result->Tail.Overlay.CurrentStackLocation;
    result->Tail.Overlay.Thread = KeGetCurrentThread();
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = *(void **)(a2 + 64);
      v11 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 12);
      v10 = *(void **)(a2 + 24);
      v11 = *(_DWORD *)(a2 + 16);
    }
    if ( (v9 & 0xC0) == 0xC0 )
    {
      v12 = 2;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = ((v9 & 0x80u) != 0) - 1;
    }
    if ( !v11 )
      goto LABEL_10;
    Mdl = IoAllocateMdl(v10, v11, 0, 0, 0LL);
    v7->MdlAddress = Mdl;
    if ( !Mdl )
      goto LABEL_18;
    v15 = StorProbeAndLockPages(Mdl, v14, v12);
    if ( v15 < 0 )
    {
      IoFreeMdl(v7->MdlAddress);
      v7->MdlAddress = 0LL;
    }
    else
    {
LABEL_10:
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
      v7->UserEvent = 0LL;
      v15 = 0;
      v7->UserIosb = a4;
    }
    if ( v15 >= 0 )
      return v7;
LABEL_18:
    IoFreeIrp(v7);
    return 0LL;
  }
  return result;
}
