/*
 * XREFs of sub_1800ECAC0 @ 0x1800ECAC0
 * Callers:
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_1800FD134 @ 0x1800FD134 (sub_1800FD134.c)
 *     sub_1800FD868 @ 0x1800FD868 (sub_1800FD868.c)
 *     sub_1800FF4A0 @ 0x1800FF4A0 (sub_1800FF4A0.c)
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x18009B200 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x18009B500 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     sub_1800FF1D0 @ 0x1800FF1D0 (sub_1800FF1D0.c)
 *     sub_1800FF2CC @ 0x1800FF2CC (sub_1800FF2CC.c)
 */

__int64 __fastcall sub_1800ECAC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int VirtualMemory; // ebx
  __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-29h]
  __int64 v10; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int128 v13; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v12 = 88LL;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_11;
  VirtualMemory = sub_1800060E8(a1, 0LL, 3, 0, 0LL, 0LL, v9, (__int64)sub_1800EC6A0, 0LL, &v14, &v13);
  if ( VirtualMemory < 0 )
    goto LABEL_8;
  if ( *(_QWORD *)a2 )
  {
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_8;
  }
  VirtualMemory = ZwWriteVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_8;
  if ( v11 != 88 )
  {
    VirtualMemory = -2147483635;
LABEL_8:
    v6 = v14;
    goto LABEL_9;
  }
  v8 = sub_1800FF1D0(a1, &v10);
  v6 = v14;
  VirtualMemory = v8;
  if ( v8 < 0 || (VirtualMemory = ZwResumeThread(), VirtualMemory < 0) )
  {
    v2 = v10;
LABEL_9:
    if ( v6 )
    {
      ZwTerminateThread();
      ZwClose();
    }
    goto LABEL_11;
  }
  ZwWaitForSingleObject();
  v2 = v10;
  if ( v10 )
  {
    sub_1800FF2CC(v10);
    v2 = 0LL;
  }
  ZwClose();
  v6 = 0LL;
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( v11 != 88 )
    {
      VirtualMemory = -2147483635;
      goto LABEL_11;
    }
    VirtualMemory = *(_DWORD *)(a2 + 28);
    goto LABEL_9;
  }
LABEL_11:
  if ( v2 )
    sub_1800FF2CC(v2);
  return (unsigned int)VirtualMemory;
}
