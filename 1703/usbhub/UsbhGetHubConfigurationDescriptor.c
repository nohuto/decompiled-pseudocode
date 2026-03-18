/*
 * XREFs of UsbhGetHubConfigurationDescriptor @ 0x1C0026538
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001AE40 (UsbhConfigureUsbHub.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2)
{
  int v4; // r15d
  unsigned __int16 v5; // bx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v7; // rdi
  unsigned int v8; // eax
  unsigned __int16 v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // r13d
  __int64 v12; // r9
  int v13; // r11d
  __int64 v14; // r9
  int v15; // r11d
  int v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+48h] [rbp-8h]
  __int16 v20; // [rsp+98h] [rbp+48h] BYREF
  int v21; // [rsp+A0h] [rbp+50h] BYREF
  __int16 v22; // [rsp+A8h] [rbp+58h] BYREF
  int v23; // [rsp+AAh] [rbp+5Ah]
  unsigned __int16 v24; // [rsp+AEh] [rbp+5Eh]

  v4 = -1;
  FdoExt(a1);
  v5 = 255;
  *a2 = 0LL;
  v20 = 255;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v5, 0x42554855u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v5);
    v21 = 0;
    FdoExt(a1);
    v22 = 1664;
    v23 = 512;
    v24 = v5;
    v8 = UsbhSyncSendCommand(a1, (__int64)&v22, (__int64)v7, &v20, v17, &v21);
    v9 = v20;
    v10 = (int)v8;
    v11 = v8 >> 30;
    if ( v8 >> 30 == 3 && !Usb_Disconnected(v8) )
    {
      LOBYTE(v19) = 0;
      UsbhException(a1, 0, 16, (int)v7, v9, v10, v21, usbfile_hub_c, 3802, v19);
    }
    Log(a1, 8, 1734894385, v9, v10);
    if ( v11 == 3 )
      goto LABEL_16;
    if ( v9 < 9u )
    {
      LOBYTE(v19) = 0;
      v18 = 3933;
      goto LABEL_15;
    }
    Log(a1, v13, 1734894386, v12, v7[1]);
    if ( v7[1] <= v9 )
    {
      Log(a1, v15, 1734894387, (__int64)v7, v10);
      *a2 = v7;
      return (unsigned int)v10;
    }
    if ( !v4 )
    {
      LOBYTE(v19) = 0;
      v18 = 3951;
LABEL_15:
      LODWORD(v10) = -1073741823;
      UsbhException(a1, 0, 13, (int)v7, v9, -1073741823, -1, usbfile_hub_c, v18, v19);
LABEL_16:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v10;
    }
    ++v4;
    Log(a1, v15, 1734894418, v14, v10);
    v5 = v7[1];
    v20 = v5;
    ExFreePoolWithTag(v7, 0);
  }
}
