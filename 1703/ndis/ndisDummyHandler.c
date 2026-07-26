/*
 * XREFs of ndisDummyHandler @ 0x1C00A63E4
 * Callers:
 *     ndisCloseHandler @ 0x1C000C6A0 (ndisCloseHandler.c)
 *     ndisCreateHandler @ 0x1C000C8D8 (ndisCreateHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C006475C (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 *     ndisDummyIrpHandler @ 0x1C00A63D0 (ndisDummyIrpHandler.c)
 *     ndisWMIDispatch @ 0x1C00A6BB4 (ndisWMIDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisDummyHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v7; // ebx
  __int64 (__fastcall *v9)(__int64, _IRP *); // rax

  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *a2 == 17 )
  {
    v7 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
LABEL_5:
    a3->IoStatus.Status = v7;
    IofCompleteRequest(a3, 2);
    goto LABEL_6;
  }
  if ( *a2 != 9
    || (v9 = *(__int64 (__fastcall **)(__int64, _IRP *))&a2[8 * CurrentStackLocation->MajorFunction + 48]) == 0LL )
  {
    v7 = -1073741637;
    goto LABEL_5;
  }
  v7 = v9(a1, a3);
LABEL_6:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, a3);
  return v7;
}
