/*
 * XREFs of RaidAdapterRpmbRequest @ 0x1C002E458
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 */

__int64 __fastcall RaidAdapterRpmbRequest(__int64 a1, IRP *a2)
{
  unsigned int v2; // esi
  int v4; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r14
  unsigned __int64 Options; // rdx
  unsigned __int64 Length; // r8
  unsigned __int8 QuadPart_high; // al
  unsigned int v10; // ebp
  unsigned int i; // r12d
  int v13; // eax
  char v14; // al
  unsigned int v15; // ebp
  int v16; // eax
  unsigned int j; // ebp

  v2 = 0;
  v4 = a1;
  if ( !*(_DWORD *)(a1 + 5640) || !*(_DWORD *)(a1 + 5644) )
  {
    LODWORD(Length) = -1073741808;
    goto LABEL_35;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (((unsigned int)Length | CurrentStackLocation->Parameters.Create.Options) & 0x1FF) != 0 )
  {
LABEL_14:
    LODWORD(Length) = -1073741811;
    goto LABEL_15;
  }
  QuadPart_high = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
  if ( !QuadPart_high )
    goto LABEL_33;
  if ( QuadPart_high <= 2u )
  {
    v10 = 1;
    v2 = 1;
    goto LABEL_13;
  }
  if ( QuadPart_high == 3 )
  {
LABEL_11:
    v2 = 1;
    v10 = (unsigned int)Options >> 9;
    goto LABEL_13;
  }
  if ( QuadPart_high != 4 )
  {
    if ( QuadPart_high != 6 )
    {
      if ( QuadPart_high == 7 )
        goto LABEL_10;
LABEL_33:
      LODWORD(Length) = -1073741808;
      goto LABEL_15;
    }
    goto LABEL_11;
  }
LABEL_10:
  v10 = 1;
  v2 = (unsigned int)Length >> 9;
LABEL_13:
  if ( Options < (unsigned __int64)v10 << 9 )
    goto LABEL_14;
  if ( Length < (unsigned __int64)v2 << 9 )
  {
    LODWORD(Length) = -2147483643;
    goto LABEL_15;
  }
  for ( i = 0; i < 0x14; ++i )
  {
    LOBYTE(Length) = -75;
    v13 = RaidAdapterSendRPMBCommandSynchronously(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, v10);
    LODWORD(Length) = v13;
    if ( v13 != -2147483631 )
      break;
  }
  if ( v13 < 0 )
    goto LABEL_15;
  v14 = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
  if ( v14 == 3 || v14 == 6 )
  {
    memset(MasterIrp, 0, 0x200uLL);
    v15 = 0;
    HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) = 5;
    do
    {
      LOBYTE(Length) = -75;
      v16 = RaidAdapterSendRPMBCommandSynchronously(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, 1);
      LODWORD(Length) = v16;
      if ( v16 != -2147483631 )
        break;
      ++v15;
    }
    while ( v15 < 0x14 );
    if ( v16 < 0 )
      goto LABEL_15;
  }
  for ( j = 0; j < 0x14; ++j )
  {
    LOBYTE(Length) = -94;
    LODWORD(Length) = RaidAdapterSendRPMBCommandSynchronously(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, v2);
    if ( (_DWORD)Length != -2147483631 )
      break;
  }
LABEL_35:
  if ( (Length & 0x80000000) == 0LL )
  {
    a2->IoStatus.Information = (unsigned __int64)v2 << 9;
    return RaidCompleteRequestEx(a2, 0, Length);
  }
LABEL_15:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, Length);
}
