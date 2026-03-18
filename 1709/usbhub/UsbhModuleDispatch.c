/*
 * XREFs of UsbhModuleDispatch @ 0x1C004C5DC
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0008730 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C0016BD0 (Usbh_FDO_WaitPnpStart.c)
 *     DriverEntry @ 0x1C0024FD8 (DriverEntry.c)
 *     UsbhDriverUnload @ 0x1C004BF00 (UsbhDriverUnload.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004CB60 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004CE64 (Usbh_PnpRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhModuleDispatch(char a1, __int64 a2, _LIST_ENTRY *a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v11; // edi
  int v12; // ebx
  char *v13; // rdx
  void (__fastcall *v14)(_LIST_ENTRY *, __int64); // rax
  __int64 (__fastcall *v15)(_LIST_ENTRY *, __int64); // rax
  __int64 v16; // rdx
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *v18)(_LIST_ENTRY *); // rax
  __int64 result; // rax
  void (__fastcall *v20)(_LIST_ENTRY *, __int64); // rax
  __int64 (__fastcall *v21)(_LIST_ENTRY *, __int64); // rax
  int v22; // ecx

  v6 = 0;
  v7 = 0;
  v11 = a1 == 0 ? 9 : 0;
  do
  {
    v12 = 0;
    v13 = (char *)&HubModule + 56 * v11;
    if ( !v13 )
      goto LABEL_29;
    switch ( a4 )
    {
      case 0:
        v14 = *(void (__fastcall **)(_LIST_ENTRY *, __int64))v13;
        goto LABEL_27;
      case 1:
        v21 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64))*((_QWORD *)v13 + 1);
        if ( v21 )
          v12 = v21(a3, a6);
        result = (unsigned int)v12;
LABEL_30:
        if ( v12 >= 0 )
          v12 = v6;
        v6 = v12;
        goto LABEL_33;
      case 2:
        v20 = (void (__fastcall *)(_LIST_ENTRY *, __int64))*((_QWORD *)v13 + 2);
        if ( v20 )
          v20(a3, a6);
        goto LABEL_15;
      case 3:
        v15 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64))*((_QWORD *)v13 + 3);
        if ( !v15 )
          goto LABEL_19;
        v16 = a5;
        Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
        goto LABEL_18;
      case 4:
        v18 = (void (__fastcall *)(_LIST_ENTRY *))*((_QWORD *)v13 + 4);
        if ( v18 )
          v18(WPP_MAIN_CB.Queue.ListEntry.Blink);
LABEL_15:
        result = 0LL;
        goto LABEL_33;
    }
    if ( a4 != 5 )
    {
      if ( a4 == 6 )
      {
        v14 = (void (__fastcall *)(_LIST_ENTRY *, __int64))*((_QWORD *)v13 + 6);
LABEL_27:
        if ( v14 )
          v14(a3, a6);
      }
LABEL_29:
      result = 0LL;
      if ( a4 != 1 )
        goto LABEL_33;
      goto LABEL_30;
    }
    v15 = (__int64 (__fastcall *)(_LIST_ENTRY *, __int64))*((_QWORD *)v13 + 5);
    if ( v15 )
    {
      v16 = a6;
      Blink = a3;
LABEL_18:
      v12 = v15(Blink, v16);
    }
LABEL_19:
    result = (unsigned int)v12;
    if ( v12 < 0 )
      break;
LABEL_33:
    ++v7;
    v22 = v11++ - 1;
    if ( !a1 )
      v11 = v22;
  }
  while ( v7 < 0xA );
  if ( a4 == 1 )
    return v6;
  return result;
}
