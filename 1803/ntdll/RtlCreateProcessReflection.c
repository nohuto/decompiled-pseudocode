/*
 * XREFs of RtlCreateProcessReflection @ 0x1800D0D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
 *     ZwWaitForMultipleObjects @ 0x18009B610 (ZwWaitForMultipleObjects.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 */

__int64 __fastcall RtlCreateProcessReflection(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int VirtualMemory; // ebx
  __int64 *v12; // [rsp+38h] [rbp-89h]
  __int64 v13; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v14; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-1h]
  __int64 v16; // [rsp+C8h] [rbp+7h]
  __int64 v17; // [rsp+D0h] [rbp+Fh]
  __int64 v18; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+1Fh] BYREF

  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  ZwQuerySystemTime(&v18);
  if ( (a2 & 0xFFFFFFE1) != 0 )
    return 3221225712LL;
  if ( (a2 & 8) != 0 && a3 )
    return 3221225715LL;
  if ( a6 )
    memset(a6, 0, 0x20uLL);
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_35;
  ZwQueryInformationProcess();
  ZwFreeVirtualMemory();
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_35;
  MEMORY[0x18] = a4;
  MEMORY[0x10] = a3;
  MEMORY[0] = 88LL;
  MEMORY[8] = a2;
  MEMORY[0x30] = a5;
  if ( a1 == -1 )
  {
    MEMORY[8] = a2 | 0x10;
    VirtualMemory = sub_1800D12F0(0LL);
    if ( VirtualMemory >= 0 && a6 )
    {
      *a6 = MEMORY[0x38];
      a6[1] = MEMORY[0x40];
      a6[2] = MEMORY[0x48];
LABEL_34:
      a6[3] = MEMORY[0x50];
      goto LABEL_35;
    }
    goto LABEL_35;
  }
  v15 = 88LL;
  VirtualMemory = ZwCreateSection();
  if ( VirtualMemory < 0 )
    goto LABEL_35;
  v14 = 88LL;
  VirtualMemory = ZwMapViewOfSection();
  if ( VirtualMemory < 0 )
    goto LABEL_35;
  v12 = &v14;
  VirtualMemory = ZwMapViewOfSection();
  if ( VirtualMemory < 0 )
    goto LABEL_35;
  if ( a6 )
  {
    VirtualMemory = ZwCreateEvent();
    if ( VirtualMemory < 0 )
      goto LABEL_35;
    VirtualMemory = ZwCreateEvent();
    if ( VirtualMemory < 0 )
      goto LABEL_35;
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_35;
    LODWORD(v12) = 2;
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory < 0 )
      goto LABEL_35;
    if ( a5 )
    {
      LODWORD(v12) = 2;
      VirtualMemory = ZwDuplicateObject();
      if ( VirtualMemory < 0 )
        goto LABEL_35;
    }
  }
  VirtualMemory = sub_1800060E8(a1, 0LL, 2, 0, 0LL, 0LL, (__int64)v12, (__int64)sub_1800D12F0, 0LL, &v13, 0LL);
  if ( VirtualMemory < 0 || !a6 )
    goto LABEL_35;
  v16 = v13;
  v17 = 0LL;
  if ( (unsigned int)ZwWaitForMultipleObjects() != 1 )
  {
LABEL_27:
    VirtualMemory = -1073741823;
    goto LABEL_35;
  }
  if ( !MEMORY[0x38] )
  {
    ZwWaitForSingleObject();
    goto LABEL_27;
  }
  if ( (int)ZwDuplicateObject() >= 0 && (int)ZwDuplicateObject() >= 0 )
  {
    VirtualMemory = ZwSetEvent();
    a6[2] = MEMORY[0x48];
    goto LABEL_34;
  }
  VirtualMemory = ZwSetEvent();
LABEL_35:
  if ( v13 )
    ZwClose();
  ZwQuerySystemTime(&v19);
  return (unsigned int)VirtualMemory;
}
