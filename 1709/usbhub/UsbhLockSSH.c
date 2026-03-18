/*
 * XREFs of UsbhLockSSH @ 0x1C0057B58
 * Callers:
 *     Usbh_SSH_HubPendingResume @ 0x1C0002530 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0027068 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057DE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhLockSSH(__int64 a1, int a2)
{
  _DWORD *v4; // rdi
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  *((_QWORD *)v4 + 399) = a1;
  *(_DWORD *)(a1 + 120) = 2018005843;
  *(_DWORD *)(a1 + 124) = a2;
  *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
  v5 = v4[864];
  v6 = 8LL * (v5 & 7);
  if ( v4[v6 + 865] != a2 || v4[v6 + 866] != v4[781] )
  {
    v7 = ((_BYTE)v5 + 1) & 7;
    v4[864] = v7;
    v7 *= 32LL;
    *(_DWORD *)((char *)v4 + v7 + 3460) = a2;
    *(_DWORD *)((char *)v4 + v7 + 3464) = v4[781];
  }
  return (unsigned int)v4[781];
}
