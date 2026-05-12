/*
 * XREFs of RaidAdapterRpmbRequest @ 0x1C002D4A0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005500 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 */

__int64 __fastcall RaidAdapterRpmbRequest(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v3; // edi
  int v5; // ebp
  unsigned __int64 Options; // r8
  unsigned __int64 Length; // r9
  _IRP *MasterIrp; // rsi
  unsigned __int8 QuadPart_high; // al
  unsigned int v10; // edx
  signed int v11; // r8d
  char v13; // al
  int v14; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v5 = a1;
  if ( !*(_DWORD *)(a1 + 5640) || !*(_DWORD *)(a1 + 5644) )
  {
    v11 = -1073741808;
    goto LABEL_26;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( (((unsigned int)Length | CurrentStackLocation->Parameters.Create.Options) & 0x1FF) != 0 )
  {
LABEL_14:
    v11 = -1073741811;
    goto LABEL_15;
  }
  QuadPart_high = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
  if ( !QuadPart_high )
    goto LABEL_24;
  if ( QuadPart_high <= 2u )
  {
    v10 = 1;
    v3 = 1;
    goto LABEL_13;
  }
  if ( QuadPart_high == 3 )
  {
LABEL_11:
    v3 = 1;
    v10 = (unsigned int)Options >> 9;
    goto LABEL_13;
  }
  if ( QuadPart_high != 4 )
  {
    if ( QuadPart_high != 6 )
    {
      if ( QuadPart_high == 7 )
        goto LABEL_10;
LABEL_24:
      v11 = -1073741808;
      goto LABEL_15;
    }
    goto LABEL_11;
  }
LABEL_10:
  v10 = 1;
  v3 = (unsigned int)Length >> 9;
LABEL_13:
  if ( Options < (unsigned __int64)v10 << 9 )
    goto LABEL_14;
  if ( Length < (unsigned __int64)v3 << 9 )
  {
    v11 = -2147483643;
    goto LABEL_15;
  }
  LOBYTE(Options) = -75;
  v11 = RaidAdapterSendRPMBCommandSynchronously(a1, (_DWORD)a2, Options, (_DWORD)MasterIrp, v10);
  if ( v11 < 0 )
    goto LABEL_15;
  v13 = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
  if ( v13 == 3 || v13 == 6 )
  {
    memset(MasterIrp, 0, 0x200uLL);
    HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) = 5;
    LOBYTE(v14) = -75;
    v11 = RaidAdapterSendRPMBCommandSynchronously(v5, (_DWORD)a2, v14, (_DWORD)MasterIrp, 1);
    if ( v11 < 0 )
      goto LABEL_15;
  }
  LOBYTE(v11) = -94;
  v11 = RaidAdapterSendRPMBCommandSynchronously(v5, (_DWORD)a2, v11, (_DWORD)MasterIrp, v3);
LABEL_26:
  if ( v11 >= 0 )
  {
    a2->IoStatus.Information = (unsigned __int64)v3 << 9;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
LABEL_15:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v11);
}
