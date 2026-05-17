/*
 * XREFs of sub_1800F096C @ 0x1800F096C
 * Callers:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_1800FE980 @ 0x1800FE980 (sub_1800FE980.c)
 *     sub_1800FF018 @ 0x1800FF018 (sub_1800FF018.c)
 *     sub_180100A00 @ 0x180100A00 (sub_180100A00.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x1800A5A40 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A5AE0 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x1800A5D40 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 *     sub_18010072C @ 0x18010072C (sub_18010072C.c)
 *     sub_180100828 @ 0x180100828 (sub_180100828.c)
 */

__int64 __fastcall sub_1800F096C(__int64 a1, __int64 a2)
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
  VirtualMemory = sub_180052D68(a1, 0LL, 3, 0, 0LL, 0LL, v9, (__int64)sub_1800F0640, 0LL, &v14, &v13);
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
  v8 = sub_18010072C(a1, &v10);
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
    sub_180100828(v10);
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
    sub_180100828(v2);
  return (unsigned int)VirtualMemory;
}
