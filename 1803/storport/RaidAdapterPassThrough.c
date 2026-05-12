/*
 * XREFs of RaidAdapterPassThrough @ 0x1C00642A4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007A30 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidSqmRecordPassthroughData @ 0x1C002BB88 (RaidSqmRecordPassthroughData.c)
 *     PortPassThroughExSendAsync @ 0x1C00689F0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1C0068EB4 (PortPassThroughGetAddress.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, IRP *a2, char a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 Unit; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // r8d
  int v11; // r8d
  int v12; // r10d
  int v13; // r11d
  __int64 v15; // [rsp+30h] [rbp-18h]
  unsigned int v16; // [rsp+68h] [rbp+20h] BYREF

  if ( (int)PortPassThroughGetAddress(a2, &v16, (char *)&v16 + 1, (char *)&v16 + 2) >= 0
    && (Unit = RaidAdapterFindUnit(a1, v16, v6, v7)) != 0 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MinorFunction || (*(_BYTE *)(Unit + 152) & 1) == 0 )
    {
      CurrentStackLocation->Control |= 1u;
      RaidSqmRecordPassthroughData((__int64)a2);
      LOBYTE(v11) = a3;
      PortPassThroughExSendAsync(*(_QWORD *)(Unit + 8), (int)a2, v11, v13, v12, v15, Unit);
      return 259LL;
    }
    v10 = -1073741808;
  }
  else
  {
    v10 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v10);
}
