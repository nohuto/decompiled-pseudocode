/*
 * XREFs of ProcessorpReserveIdtEntriesApic @ 0x1C0089B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessorpReserveIdtEntriesApic(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        _OWORD *a9)
{
  _QWORD *UserData; // rdi
  char v13; // r14
  int v14; // esi
  int v15; // ecx
  __int16 v16; // ax
  __int64 v17; // rsi
  UCHAR v18; // bl
  unsigned __int8 i; // bp
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v21; // rcx
  NTSTATUS v22; // r14d
  struct _PROCESSOR_NUMBER v24; // [rsp+50h] [rbp-48h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+58h] [rbp-40h] BYREF
  ULONGLONG Start; // [rsp+60h] [rbp-38h]

  UserData = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x49706341u);
  if ( !UserData )
    return 3221225626LL;
  v13 = a7;
  v14 = ((__int64 (__fastcall *)(void *, __int64, __int64, _QWORD, unsigned int, int, int, int))ProcessorFindIdtEntries)(
          a1,
          a2,
          a4,
          a5,
          a3,
          a6,
          a7,
          a8);
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(UserData, 0);
    return (unsigned int)v14;
  }
  v15 = *(_DWORD *)(a4 + 32);
  *UserData = 0LL;
  UserData[1] = 0LL;
  v16 = *(_WORD *)(a4 + 24);
  *UserData = 0LL;
  *((_WORD *)UserData + 4) = v16;
  *((_DWORD *)UserData + 4) = a3;
  *((_DWORD *)UserData + 5) = v15;
  *((_DWORD *)UserData + 6) = a5;
  v17 = *(_QWORD *)(a4 + 16);
  v18 = (a3 >= 0xFFF00000 ? 4 : 0) | ((a6 & 1) + 1);
  LODWORD(Start) = v15;
  for ( i = 0; ; ++i )
  {
    if ( !v17 )
    {
      *a9 = *(_OWORD *)UserData;
      a9[1] = *((_OWORD *)UserData + 1);
      return 0LL;
    }
    if ( _bittest64(&v17, i) )
    {
      v24.Group = *(_WORD *)(a4 + 24);
      *(_WORD *)&v24.Number = i;
      ProcNumber = v24;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
        v21 = 0LL;
      else
        v21 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
      if ( v21 )
        break;
    }
LABEL_14:
    v17 &= ~(1LL << i);
  }
  if ( a8 == 1 )
    ++v21;
  v22 = RtlAddRange(v21, (unsigned int)Start, a5 + (unsigned int)Start - 1LL, v18, 2 * (v13 & 1) + 1, UserData, a1);
  if ( v22 >= 0 )
  {
    v13 = a7;
    *UserData |= 1LL << i;
    goto LABEL_14;
  }
  ExFreePoolWithTag(UserData, 0);
  return (unsigned int)v22;
}
