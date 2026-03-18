/*
 * XREFs of RtlpWow64CreateUserStack @ 0x140445374
 * Callers:
 *     PspWow64SetupUserStack @ 0x1404452DC (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x14017E2C0 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v7; // r14
  int v8; // edi
  PIMAGE_NT_HEADERS v9; // rax
  PIMAGE_NT_HEADERS v10; // rcx
  unsigned __int64 SizeOfStackReserve_high; // rax
  unsigned int SizeOfStackReserve; // edx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // rdi
  NTSTATUS result; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  NTSTATUS v19; // esi
  char *v20; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h]
  unsigned __int64 v23; // [rsp+40h] [rbp-88h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR v26; // [rsp+58h] [rbp-70h] BYREF
  PVOID v27; // [rsp+60h] [rbp-68h] BYREF
  _DWORD ProcessInformation[4]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp-40h]
  ULONG_PTR v32; // [rsp+90h] [rbp-38h]
  unsigned __int64 v33; // [rsp+D0h] [rbp+8h]

  v33 = a1;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v23 = v7;
  if ( !a1 || (v13 = a2) == 0 )
  {
    v8 = 0;
    v9 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[18]);
    v10 = v9;
    if ( v9 )
    {
      SizeOfStackReserve_high = HIDWORD(v9->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = v10->OptionalHeader.SizeOfStackReserve;
      a1 = v33;
      if ( !v33 )
        a1 = SizeOfStackReserve_high;
      v13 = a2;
      if ( !a2 )
        v13 = SizeOfStackReserve;
    }
    else
    {
      v8 = -1073741701;
      v22 = -1073741701;
      v13 = a2;
      a1 = v33;
    }
    if ( v8 < 0 )
      return v8;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v13 )
    v13 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v14 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = (v13 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v32 = *(_QWORD *)(v7 + 792);
  if ( v32 && v14 < v32 )
  {
    v14 = (v32 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = (v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation[0] = a4;
  ProcessInformation[1] = 0;
  ProcessInformation[3] = 0;
  ProcessInformation[2] = 0;
  v29 = v15;
  v30 = a3;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v17 = v31;
    *(_QWORD *)(a5 + 56) = v31;
    *(_QWORD *)(a5 + 40) = v17 + v15;
    BaseAddress = (PVOID)(v15 + v17 - v14);
    v18 = v15 - v14;
    RegionSize = v14;
    v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v19 < 0
      || (v20 = (char *)BaseAddress, *(_QWORD *)(a5 + 48) = BaseAddress, v18 >= 0x2000)
      && (BaseAddress = v20 - 0x2000,
          v25 = 0x2000LL,
          v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v25, 0x1000u, 0x104u),
          v19 < 0) )
    {
      v27 = *(PVOID *)(a5 + 56);
      v26 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v27, &v26, 0x8000u);
      *(_QWORD *)(a5 + 56) = 0LL;
      *(_QWORD *)(a5 + 40) = 0LL;
      *(_QWORD *)(a5 + 48) = 0LL;
      return v19;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
