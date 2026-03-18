/*
 * XREFs of UsbhBusIfAddDevice @ 0x1C0014870
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetBusInterface @ 0x1C0016110 (UsbhGetBusInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhBusIfAddDevice(struct _DEVICE_OBJECT *a1)
{
  unsigned __int16 v2; // r14
  __int64 v3; // rbx
  unsigned __int16 i; // r10
  __int64 BusInterface; // rbp
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // r15
  char v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int v15; // [rsp+48h] [rbp-30h]

  v2 = 9;
  v3 = FdoExt(a1);
  for ( i = 328; ; i = 312 )
  {
    Log((__int64)a1, 8, 1198090289, i, v2);
    LODWORD(BusInterface) = UsbhGetBusInterface(a1, (void *)(v3 + 4224), v2);
    Log((__int64)a1, 8, 1198090290, (int)BusInterface, v2);
    if ( (int)BusInterface >= 0 )
      break;
    LOBYTE(v15) = 0;
    UsbhException((int)a1, 0, 26, 0, 0, BusInterface, 0, usbfile_busif_c, 243, v15);
    if ( v2 != 9 )
      goto LABEL_4;
    v2 = 8;
  }
  *(_DWORD *)(v3 + 2560) |= 4u;
LABEL_4:
  v6 = 96;
  v7 = 3;
  if ( (int)BusInterface >= 0 )
  {
    while ( 1 )
    {
      Log((__int64)a1, 8, 1198093617, v6, v7);
      BusInterface = (int)UsbhGetBusInterface(a1, (void *)(v3 + 4552), v7);
      Log((__int64)a1, 8, 1198093618, BusInterface, v7);
      if ( (int)BusInterface >= 0 )
        break;
      LOBYTE(v15) = 0;
      UsbhException((int)a1, 0, 27, 0, 0, BusInterface, 0, usbfile_busif_c, 281, v15);
      if ( v7 != 3 )
        goto LABEL_15;
      v6 = 80;
      v7 = 2;
    }
    *(_DWORD *)(v3 + 2560) |= 8u;
    v8 = 0;
    v9 = FdoExt(a1);
    if ( *(_QWORD *)(v9 + 4384) )
    {
      v10 = FdoExt(a1);
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v9 + 4384))(*(_QWORD *)(v9 + 4232), *(_QWORD *)(v10 + 1192));
      LODWORD(BusInterface) = 0;
    }
    else
    {
      LODWORD(BusInterface) = -1073741822;
    }
    v11 = *(_DWORD *)(v3 + 2560);
    *(_WORD *)(v3 + 4800) = v7;
    *(_DWORD *)(v3 + 2560) = v11 & 0xFFFFFFFE | (v8 != 0);
    if ( (int)BusInterface >= 0 )
    {
      Log((__int64)a1, 8, 1198091569, 40LL, 0LL);
      UsbhGetBusInterface(a1, (void *)(v3 + 4648), 0);
      Log((__int64)a1, 8, 1198091570, (int)BusInterface, 0LL);
      if ( v12 >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x20000000u;
      Log((__int64)a1, 8, 1198093105, 48LL, 0LL);
      UsbhGetBusInterface(a1, (void *)(v3 + 4688), 0);
      Log((__int64)a1, 8, 1198093106, (int)BusInterface, 0LL);
      if ( v13 >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x800000u;
      Log((__int64)a1, 8, 1197895729, 64LL, 0LL);
      LODWORD(BusInterface) = UsbhGetBusInterface(a1, (void *)(v3 + 4736), 0);
      Log((__int64)a1, 8, 1197895730, (int)BusInterface, 0LL);
      if ( (int)BusInterface >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x80000000;
    }
  }
LABEL_15:
  Log((__int64)a1, 8, 1651730790, 0LL, (int)BusInterface);
  return (unsigned int)BusInterface;
}
