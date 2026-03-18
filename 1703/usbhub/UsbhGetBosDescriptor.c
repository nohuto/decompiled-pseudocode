/*
 * XREFs of UsbhGetBosDescriptor @ 0x1C00553A8
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0042FC8 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     UsbhSyncSendCommandToDevice @ 0x1C0006AC0 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhGetBosDescriptor(__int64 a1, __int64 a2, _WORD *a3)
{
  _DWORD *v6; // rbx
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  void *v12; // rcx
  __int16 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+42h] [rbp-Eh]
  __int16 v15; // [rsp+46h] [rbp-Ah]
  char v16; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int16 v17; // [rsp+9Ah] [rbp+4Ah]

  v6 = PdoExt(a2);
  v13 = 1664;
  v14 = 3840;
  v15 = 5;
  *(_DWORD *)a3 = 5;
  result = UsbhSyncSendCommandToDevice(a1, a2, &v13, (__int64)&v16, a3);
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v6[699] = 1073807371;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v17, 0x42554855u);
    *((_QWORD *)v6 + 299) = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v17);
    v9 = *((_QWORD *)v6 + 299);
    if ( v9 )
    {
      v15 = v17;
      *(_DWORD *)a3 = v17;
      v13 = 1664;
      v14 = 3840;
      v10 = UsbhSyncSendCommandToDevice(a1, a2, &v13, v9, a3);
      v11 = v10;
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        v12 = (void *)*((_QWORD *)v6 + 299);
        v6[699] = 1073807371;
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0);
          *((_QWORD *)v6 + 299) = 0LL;
        }
      }
      Log(a1, 256, 1195528019, v11, 0LL);
      return (unsigned int)v11;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
