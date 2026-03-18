/*
 * XREFs of Usbh_PCE_ResumeDone_Action @ 0x1C0041B6C
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     UsbhPCE_Suspend @ 0x1C002726C (UsbhPCE_Suspend.c)
 */

void __fastcall Usbh_PCE_ResumeDone_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  KIRQL v10; // r8
  __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // rax
  KIRQL v14; // [rsp+48h] [rbp+10h] BYREF

  FdoExt(a1);
  v6 = UsbhLockPcqWithTag(a1, a2, 21, &v14, 0);
  Log(a1, 512, 842100784, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 >= 2 && (v8 <= 4 || v8 == 14) )
  {
    Log(a1, v9, 842100785, v7, *(unsigned __int16 *)(a2 + 4));
    v10 = v14;
    v11 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v12;
    *(_DWORD *)(v11 + a2 + 1384) = v12;
    UsbhUnlockPcqWithTag(a1, a2, v10);
    UsbhPCE_Suspend(a1, a3, *(_WORD *)(a2 + 4));
  }
  else
  {
    Log(a1, v9, 842100824, v7, *(unsigned __int16 *)(a2 + 4));
    v13 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag(a1, a2, v14);
  }
}
