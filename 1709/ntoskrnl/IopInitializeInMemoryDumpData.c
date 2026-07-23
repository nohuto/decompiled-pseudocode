/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x1401F7C84
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140151610 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140119380 (MmAllocateContiguousNodeMemory.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x14017F420 (ZwFilterBootOption.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KdCopyDataBlock @ 0x140201214 (KdCopyDataBlock.c)
 *     RtlRandomEx @ 0x140597790 (RtlRandomEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1406BC2DC (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r12
  NTSTATUS v2; // eax
  PVOID *v3; // rdi
  __int64 *v4; // r14
  unsigned int v5; // r15d
  void *ContiguousNodeMemory; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-40h]
  _BYTE Data[8]; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]

  v0 = 2LL;
  v16 = 2012912317;
  v17 = 1295123289;
  v18 = -198680387;
  v19 = 1266192359;
  *(_QWORD *)&v14 = 0x302E4594353594B3LL;
  *((_QWORD *)&v14 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140389F84 = 0;
    LODWORD(qword_140389F70) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_140389F58;
    qword_140389F68 = 9088LL;
    v4 = (__int64 *)&unk_140389F58;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140389F68, 0LL, -1LL, 0, 4u, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140389F68);
      v10 = *v4;
      *(_OWORD *)v10 = v14;
      *(_QWORD *)(v10 + 16) = 0x199B7088610836E8LL;
      if ( v1 )
        KdCopyDataBlock(*v4 + 8216, v7, v8, v9);
      ++v5;
      ++v4;
      if ( v5 >= 2 )
      {
        v11 = __rdtsc();
        LODWORD(qword_140389F78) = v11;
        v12 = __rdtsc();
        HIDWORD(qword_140389F78) = v12;
        RtlRandomEx((PULONG)&qword_140389F78 + 1);
        v13 = IoSetEnvironmentVariableEx(L"DumpInstance", 7);
        if ( v13 < 0 )
        {
          dword_140389F84 = v13;
          qword_140389F78 = 0x4547415045474150LL;
        }
        dword_140389F54 = 1;
        goto LABEL_18;
      }
    }
    dword_140389F84 = -1073741801;
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
LABEL_18:
    _InterlockedExchange(InMemData, 0);
  }
}
