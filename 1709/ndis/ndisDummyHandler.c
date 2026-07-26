/*
 * XREFs of ndisDummyHandler @ 0x1C00AC1B8
 * Callers:
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 *     ndisCloseIrpHandler @ 0x1C0008F70 (ndisCloseIrpHandler.c)
 *     ndisCloseHandler @ 0x1C005CF2C (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C0064D98 (ndisDeviceInternalDispatch.c)
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 *     ndisWMIDispatch @ 0x1C00B7BFC (ndisWMIDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisDummyHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 (__fastcall *v7)(__int64, _IRP *); // rax
  unsigned int v8; // ebx

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *a2 == 17 )
  {
    v8 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
  }
  else
  {
    if ( *a2 == 9 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, _IRP *))&a2[8 * CurrentStackLocation->MajorFunction + 48];
      if ( v7 )
      {
        v8 = v7(a1, a3);
        goto LABEL_7;
      }
    }
    v8 = -1073741637;
  }
  a3->IoStatus.Status = v8;
  IofCompleteRequest(a3, 2);
LABEL_7:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, a3);
  return v8;
}
