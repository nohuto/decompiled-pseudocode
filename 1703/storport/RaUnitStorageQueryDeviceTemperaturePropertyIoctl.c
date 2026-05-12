/*
 * XREFs of RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BC20
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005D0E0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00111D4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0038E88 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003DA58 (RaidUnitLogSenseTemperatureSrb.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceTemperaturePropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r14
  char *v3; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v7; // edx
  size_t Length; // rbx
  signed int v9; // edi
  int v10; // ecx
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v13 = 0;
  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v9 = -1073741637;
LABEL_21:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v9);
    }
LABEL_7:
    v9 = 0;
    return RaidCompleteRequestEx(a2, 0, v9);
  }
  if ( (unsigned int)Length < 0x28 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v9 = -1073741789;
      goto LABEL_21;
    }
    *(_DWORD *)&MasterIrp->Type = 40;
    *(_DWORD *)(&MasterIrp->Size + 1) = 40;
    a2->IoStatus.Information = 8LL;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 524LL) & 0x20) == 0 )
  {
LABEL_16:
    v9 = RaidUnitLogSenseTemperatureSrb(a1, a2);
    goto LABEL_17;
  }
  v9 = RaBuildQueryTemperaturePropertyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, (unsigned int *)&v13);
  if ( v9 < 0 )
  {
    v3 = (char *)P;
  }
  else
  {
    v3 = (char *)P;
    v9 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v13, 0LL, v12, 64);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147483643 )
    {
      if ( (unsigned int)(v9 + 1073741822) > 0xE || (v10 = 18433, !_bittest(&v10, v9 + 1073741822)) )
      {
        if ( v9 != -1073741637 )
          goto LABEL_17;
      }
      goto LABEL_16;
    }
    memmove(MasterIrp, v3 + 28, Length);
    *(_DWORD *)&MasterIrp->Type = 40;
    *(_DWORD *)(&MasterIrp->Size + 1) = 40;
    a2->IoStatus.Information = Length;
  }
LABEL_17:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147483643 )
    goto LABEL_21;
  return RaidCompleteRequestEx(a2, 0, v9);
}
