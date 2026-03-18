/*
 * XREFs of UsbhFdoRecordFailure @ 0x1C003DC90
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoRecordFailure(__int64 a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v6; // rsi
  int *SecurityContext; // rdi
  int v8; // r11d
  unsigned int v9; // ebx
  unsigned int v10; // r10d
  size_t v11; // r15
  PVOID PoolWithTag; // rax
  void *v13; // rcx
  __int64 PortData; // rax
  int v16; // [rsp+48h] [rbp-30h]

  FdoExt(a1);
  v6 = PdoExt(BugCheckParameter3);
  SecurityContext = (int *)BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  Log(a1, 8, 1717854513, *((_QWORD *)v6 + 106), (__int64)SecurityContext);
  v9 = 0;
  if ( *((_QWORD *)v6 + 106) )
    goto LABEL_2;
  if ( !SecurityContext )
  {
    Log(a1, v8, 1717854514, 0LL, 0LL);
LABEL_2:
    v9 = -1073741811;
    goto LABEL_17;
  }
  Log(a1, v8, 1717854515, 0LL, (unsigned int)*SecurityContext);
  if ( v10 > 0x1000 )
    v10 = 4096;
  if ( v10 >= 0x14 )
  {
    v11 = v10;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v10, 0x42554855u);
    *((_QWORD *)v6 + 106) = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, (unsigned int)v11);
    v13 = (void *)*((_QWORD *)v6 + 106);
    if ( v13 )
    {
      memmove(v13, SecurityContext, v11);
      if ( SecurityContext[3] == 7 )
      {
        PortData = UsbhGetPortData(a1, *((_WORD *)v6 + 710));
        if ( PortData )
        {
          _InterlockedExchange((volatile __int32 *)(PortData + 428), 7);
          LOBYTE(v16) = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v6 + 710),
            131,
            0,
            0,
            SecurityContext[1],
            SecurityContext[2],
            usbfile_dioctl_c,
            1349,
            v16);
        }
      }
      LOBYTE(v16) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v6 + 710),
        130,
        0,
        0,
        SecurityContext[1],
        SecurityContext[2],
        usbfile_dioctl_c,
        1357,
        v16);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741789;
  }
LABEL_17:
  BugCheckParameter4->IoStatus.Status = v9;
  IofCompleteRequest(BugCheckParameter4, 0);
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return v9;
}
