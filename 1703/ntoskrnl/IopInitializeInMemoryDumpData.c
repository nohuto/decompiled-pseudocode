/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x1401F232C
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140159E68 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140123D30 (MmAllocateContiguousNodeMemory.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x14017FA80 (ZwFilterBootOption.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KdCopyDataBlock @ 0x1401FB50C (KdCopyDataBlock.c)
 *     RtlRandomEx @ 0x140459080 (RtlRandomEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1406905FC (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rdi
  NTSTATUS v1; // eax
  int v2; // ecx
  PVOID *v3; // rsi
  bool v4; // r12
  unsigned int v5; // r15d
  __int64 *v6; // r14
  void *ContiguousNodeMemory; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-40h]
  _BYTE Data[8]; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]

  v0 = 2LL;
  v17 = 2012912317;
  v18 = 1295123289;
  v19 = -198680387;
  v20 = 1266192359;
  *(_QWORD *)&v15 = 0x302E4594353594B3LL;
  *((_QWORD *)&v15 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_14036E504 = 0;
    dword_14036E4F0 = 0;
    v1 = ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
    v2 = 9088;
    v3 = (PVOID *)&unk_14036E4D8;
    v4 = v1 >= 0;
    qword_14036E4E8 = 9088LL;
    v5 = 0;
    v6 = (__int64 *)&unk_14036E4D8;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v2, 0LL, -1LL, 0, 4u, 0x80000000);
      *v6 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_14036E4E8);
      v11 = *v6;
      *(_OWORD *)v11 = v15;
      *(_QWORD *)(v11 + 16) = 0x199B7088610836E8LL;
      if ( v4 )
        KdCopyDataBlock(*v6 + 8216, v8, v9, v10);
      ++v5;
      ++v6;
      if ( v5 >= 2 )
      {
        v12 = __rdtsc();
        LODWORD(qword_14036E4F8) = v12;
        v13 = __rdtsc();
        HIDWORD(qword_14036E4F8) = v13;
        RtlRandomEx((PULONG)&qword_14036E4F8 + 1);
        v14 = IoSetEnvironmentVariableEx(L"DumpInstance", 7);
        if ( v14 < 0 )
        {
          dword_14036E504 = v14;
          qword_14036E4F8 = 0x4547415045474150LL;
        }
        dword_14036E4D4 = 1;
        goto LABEL_15;
      }
      v2 = qword_14036E4E8;
    }
    dword_14036E504 = -1073741801;
    do
    {
      if ( *v3 )
      {
        MmFreeContiguousMemory(*v3);
        *v3 = 0LL;
      }
      ++v3;
      --v0;
    }
    while ( v0 );
LABEL_15:
    _InterlockedExchange(InMemData, 0);
  }
}
