/*
 * XREFs of UsbhBusIfAddDevice @ 0x1C0014A30
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhGetBusInterface @ 0x1C0016080 (UsbhGetBusInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhBusIfAddDevice(struct _DEVICE_OBJECT *a1)
{
  unsigned __int16 v2; // r14
  __int64 v3; // rbx
  unsigned __int16 i; // r10
  int BusInterface; // ebp
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
    Log((_DWORD)a1, 8, 1198090289, i, v2);
    BusInterface = UsbhGetBusInterface(a1, (void *)(v3 + 4224), v2);
    Log((_DWORD)a1, 8, 1198090290, BusInterface, v2);
    if ( BusInterface >= 0 )
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
  if ( BusInterface >= 0 )
  {
    while ( 1 )
    {
      Log((_DWORD)a1, 8, 1198093617, v6, v7);
      BusInterface = UsbhGetBusInterface(a1, (void *)(v3 + 4552), v7);
      Log((_DWORD)a1, 8, 1198093618, BusInterface, v7);
      if ( BusInterface >= 0 )
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
      BusInterface = 0;
    }
    else
    {
      BusInterface = -1073741822;
    }
    v11 = *(_DWORD *)(v3 + 2560);
    *(_WORD *)(v3 + 4800) = v7;
    *(_DWORD *)(v3 + 2560) = v11 & 0xFFFFFFFE | (v8 != 0);
    if ( BusInterface >= 0 )
    {
      Log((_DWORD)a1, 8, 1198091569, 40, 0LL);
      UsbhGetBusInterface(a1, (void *)(v3 + 4648), 0);
      Log((_DWORD)a1, 8, 1198091570, BusInterface, 0LL);
      if ( v12 >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x20000000u;
      Log((_DWORD)a1, 8, 1198093105, 48, 0LL);
      UsbhGetBusInterface(a1, (void *)(v3 + 4688), 0);
      Log((_DWORD)a1, 8, 1198093106, BusInterface, 0LL);
      if ( v13 >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x800000u;
      Log((_DWORD)a1, 8, 1197895729, 64, 0LL);
      BusInterface = UsbhGetBusInterface(a1, (void *)(v3 + 4736), 0);
      Log((_DWORD)a1, 8, 1197895730, BusInterface, 0LL);
      if ( BusInterface >= 0 )
        *(_DWORD *)(v3 + 2560) |= 0x80000000;
    }
  }
LABEL_15:
  Log((_DWORD)a1, 8, 1651730790, 0, BusInterface);
  return (unsigned int)BusInterface;
}
