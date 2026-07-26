/*
 * XREFs of ndisDummyHandler @ 0x1C00E81CC
 * Callers:
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 *     ndisCloseIrpHandler @ 0x1C0009DD0 (ndisCloseIrpHandler.c)
 *     ndisCloseHandler @ 0x1C005D8C4 (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C00658FC (ndisDeviceInternalDispatch.c)
 *     ndisWMIDispatch @ 0x1C00AD13C (ndisWMIDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisDummyHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, _IRP *); // rax

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *a2 == 17 )
  {
    v7 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
  }
  else
  {
    if ( *a2 == 9 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, _IRP *))&a2[8 * CurrentStackLocation->MajorFunction + 48];
      if ( v8 )
      {
        v7 = v8(a1, a3);
        goto LABEL_10;
      }
    }
    v7 = -1073741637;
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 2);
LABEL_10:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, a3);
  return v7;
}
