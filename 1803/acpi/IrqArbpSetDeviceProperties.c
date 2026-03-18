/*
 * XREFs of IrqArbpSetDeviceProperties @ 0x1C00918EC
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0090430 (IrqArbCommitAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C0090D44 (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     IrqPolicySetDeviceAffinity @ 0x1C008E02C (IrqPolicySetDeviceAffinity.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C008E4A0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0090A20 (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqArbpSetDeviceProperties(PRTL_RANGE a1, __int128 *a2)
{
  __int128 v2; // xmm0
  PVOID *p_Owner; // rax
  __int128 v4; // xmm1
  char v5; // di
  struct _DEVICE_OBJECT *Owner; // r12
  char v7; // r15
  unsigned int v8; // r14d
  PRTL_RANGE v9; // r13
  int v10; // eax
  int DeviceIdtAssignment; // ebx
  unsigned int v12; // ecx
  _DWORD *UserData; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *Data; // rsi
  __int128 v17; // xmm0
  unsigned int v18; // edi
  int v19; // eax
  _DWORD *v20; // rbx
  __int64 v21; // r12
  PRTL_RANGE Range; // [rsp+40h] [rbp-69h] BYREF
  ULONG Size; // [rsp+48h] [rbp-61h]
  PVOID *v24; // [rsp+50h] [rbp-59h]
  struct _DEVICE_OBJECT *v25; // [rsp+58h] [rbp-51h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-49h] BYREF
  __int128 v27; // [rsp+80h] [rbp-29h]
  __int128 v28; // [rsp+90h] [rbp-19h]
  unsigned __int16 v29[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+Fh]

  v2 = *a2;
  p_Owner = &a1->Owner;
  v4 = a2[1];
  v5 = 0;
  Owner = (struct _DEVICE_OBJECT *)a1->Owner;
  v7 = 0;
  v8 = 0;
  v24 = &a1->Owner;
  v9 = a1;
  v25 = Owner;
  v27 = v2;
  Range = a1;
  v28 = v4;
  *(_OWORD *)&Iterator.RangeListHead = v2;
  *(_OWORD *)&Iterator.Current = v4;
  while ( 1 )
  {
    if ( a1->Owner == *p_Owner )
    {
      v10 = IrqArbGsivFromIrq(LODWORD(a1->Start));
      DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v10, 0, v29);
      if ( DeviceIdtAssignment < 0 )
        return (unsigned int)DeviceIdtAssignment;
      v12 = v30;
      v8 += v30;
      UserData = Range->UserData;
      if ( (UserData[1] & 2) == 0 && !v5 )
      {
        IrqPolicySetDeviceAffinity(Owner, v29);
        v12 = v30;
        v5 = 1;
      }
      if ( v8 > v12 && UserData[2] == 3 )
        v7 = 1;
    }
    DeviceIdtAssignment = RtlGetNextRange(&Iterator, &Range, 1u);
    if ( DeviceIdtAssignment == -2147483622 )
      break;
    a1 = Range;
    p_Owner = v24;
  }
  if ( v8 )
  {
    Size = 88 * v8 + 8;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Size, 0x49706341u);
    Data = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x60uLL);
    v17 = v27;
    *Data = v8;
    Range = v9;
    *(_OWORD *)&Iterator.RangeListHead = v17;
    v18 = v7 != 0 ? v8 : 0;
    *(_OWORD *)&Iterator.Current = v28;
    while ( 1 )
    {
      if ( v9->Owner == *v24 )
      {
        v19 = IrqArbGsivFromIrq(LODWORD(v9->Start));
        DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v19, 0, v29);
        if ( DeviceIdtAssignment < 0 )
          goto LABEL_30;
        if ( v7 )
          v18 -= v30;
        v20 = Range->UserData;
        v21 = 22LL * v18;
        memmove(&Data[v21 + 2], v20 + 8, 88LL * v30);
        if ( (v20[1] & 0x10) != 0 && v20[2] == 1 )
          Data[v21 + 17] |= 1u;
        if ( !v7 )
          v18 += v30;
        v20[1] &= ~1u;
        Owner = v25;
      }
      if ( RtlGetNextRange(&Iterator, &Range, 1u) == -2147483622 || v18 >= v8 )
        break;
      v9 = Range;
    }
    DeviceIdtAssignment = IoSetDevicePropertyData(Owner, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, Size, Data);
LABEL_30:
    ExFreePoolWithTag(Data, 0);
  }
  return (unsigned int)DeviceIdtAssignment;
}
