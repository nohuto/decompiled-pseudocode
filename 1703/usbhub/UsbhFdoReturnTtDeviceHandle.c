/*
 * XREFs of UsbhFdoReturnTtDeviceHandle @ 0x1C003A5F0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     UsbhGetDeviceHandle @ 0x1C0025D64 (UsbhGetDeviceHandle.c)
 */

NTSTATUS __fastcall UsbhFdoReturnTtDeviceHandle(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v7; // r12
  PDEVICE_OBJECT *v8; // r13
  int v9; // r11d
  __int64 *SecurityContext; // r15
  __int64 FileName; // r10
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  signed int v13; // ebx
  int v14; // r11d
  __int64 v15; // r10
  int v16; // r11d
  int v17; // r8d
  __int64 v18; // rax
  _IO_STACK_LOCATION *v19; // rax

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v7 = PdoExt(a2);
  v8 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 8, 1950631985, a2, (__int64)a3);
  SecurityContext = (__int64 *)CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = (__int64)CurrentStackLocation->Parameters.QueryDirectory.FileName;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v13 = 0;
  if ( SecurityContext && Parameters )
  {
    Log(a1, v9, 1950631986, FileName, (__int64)SecurityContext);
    Log(a1, v14, 1950631987, (__int64)Parameters, LOWORD(Parameters->NamedPipeType));
    v17 = *((_DWORD *)v8 + 640);
    if ( (v17 & 0x40) != 0 )
    {
      *SecurityContext = (__int64)UsbhGetDeviceHandle(a1, v15);
      v18 = *((unsigned __int16 *)v7 + 710);
      LOWORD(Parameters->NamedPipeType) = v18;
      Log(a1, 8, 1950631988, *SecurityContext, v18);
      v13 = *SecurityContext == 0 ? 0xC0000001 : 0;
    }
    else
    {
      if ( (v17 & 1) == 0 )
      {
        v19 = a3->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)&v19->MajorFunction;
        *(_OWORD *)&v19[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v19->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&v19[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v19->Parameters.QueryDeviceRelations + 6);
        v19[-1].FileObject = v19->FileObject;
        v19[-1].Control = 0;
        UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
        return IofCallDriver(v8[151], a3);
      }
      *SecurityContext = 0LL;
      LOWORD(Parameters->NamedPipeType) = 0;
      Log(a1, v16, 1950632050, 0LL, 0LL);
    }
  }
  else
  {
    v13 = -1073741811;
  }
  Log(a1, v9, 1950632024, 0LL, v13);
  a3->IoStatus.Status = v13;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v13;
}
