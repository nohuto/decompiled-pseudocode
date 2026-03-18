/*
 * XREFs of UsbhQueryWmiDataBlock @ 0x1C004F510
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhGetHubNodeInfo @ 0x1C004EE68 (UsbhGetHubNodeInfo.c)
 */

__int64 __fastcall UsbhQueryWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        int a5,
        ULONG *a6,
        unsigned int a7,
        _DWORD *a8)
{
  ULONG v8; // edi
  int v13; // ebx
  int v14; // ebx
  _BYTE *v15; // r9
  __int64 v16; // r10
  bool *v17; // r9
  __int64 v18; // r10
  int v19; // eax
  _DWORD *v20; // r9
  NTSTATUS v21; // r10d
  NTSTATUS v22; // eax
  unsigned int v23; // r10d
  ULONG v25; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v25 = 0;
  FdoExt((__int64)DeviceObject);
  if ( a3 )
  {
    v13 = a3 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          if ( (int)UsbhGetHubNodeInfo((__int64)DeviceObject, a8, a7, &v25) >= 0 && a5 == 1 && a6 )
          {
            v8 = v25;
            *a6 = v25;
          }
          else
          {
            v8 = v25;
          }
        }
        goto LABEL_27;
      }
      if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) != 3 )
        goto LABEL_27;
      Log((__int64)DeviceObject, 64, 2003659059, (__int64)a8, a7);
      v8 = 1;
      if ( !a7 )
        goto LABEL_27;
      *v15 = HIBYTE(*(_DWORD *)(v16 + 2560)) & 1;
    }
    else
    {
      Log((__int64)DeviceObject, 64, 2003659058, (__int64)a8, a7);
      if ( WPP_MAIN_CB.AlignmentRequirement )
        goto LABEL_27;
      v19 = *(_DWORD *)(v18 + 3280);
      if ( v19 == 6 )
        goto LABEL_27;
      if ( a4 )
        goto LABEL_27;
      if ( a5 != 1 )
        goto LABEL_27;
      v8 = 1;
      if ( !a7 )
        goto LABEL_27;
      *v17 = v19 > 0 && (v19 <= 2 || v19 == 4);
    }
    *a6 = 1;
    goto LABEL_27;
  }
  Log((__int64)DeviceObject, 64, 2003659057, (__int64)a6, 0LL);
  if ( v20 )
    *v20 = 0;
LABEL_27:
  Log((__int64)DeviceObject, 64, 2003659075, (__int64)Irp, v8);
  v22 = WmiCompleteRequest(DeviceObject, Irp, v21, v8, 0);
  Log((__int64)DeviceObject, 64, 2003659078, 0LL, v22);
  return v23;
}
