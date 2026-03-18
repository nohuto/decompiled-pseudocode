/*
 * XREFs of UsbhGetMsOs20DescriptorSet @ 0x1C0040414
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0016E10 (UsbhSyncSendCommandToDevice.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhGetMsOs20DescriptorSet(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  PVOID PoolWithTag; // rax
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // edi
  void *v12; // rcx
  _BYTE v13[2]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+42h] [rbp-26h]
  __int16 v15; // [rsp+46h] [rbp-22h]
  __int16 v16; // [rsp+80h] [rbp+18h] BYREF

  v6 = PdoExt(a2);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(a3 + 4), 0x42554855u);
  *((_QWORD *)v6 + 354) = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, *(unsigned __int16 *)(a3 + 4));
  v8 = *((_QWORD *)v6 + 354);
  if ( v8 )
  {
    v10 = *((_QWORD *)v6 + 147);
    v13[1] = *(_BYTE *)(a3 + 6);
    v15 = *(_WORD *)(a3 + 4);
    v16 = v15;
    v13[0] = -64;
    v14 = 458752;
    v11 = UsbhSyncSendCommandToDevice(v10, a2, v13, v8, &v16);
    if ( v11 >= 0 )
    {
      *((_WORD *)v6 + 1410) = v16;
    }
    else
    {
      Log(a1, 4, 1297297969, 0LL, 0LL);
      v12 = (void *)*((_QWORD *)v6 + 354);
      *((_WORD *)v6 + 1410) = 0;
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        *((_QWORD *)v6 + 354) = 0LL;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    Log(a1, 4, 1297297968, 0LL, 0LL);
    result = 3221225626LL;
    *((_WORD *)v6 + 1410) = 0;
  }
  return result;
}
