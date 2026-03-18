/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x140234FC0
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14016F648 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MmAllocateContiguousNodeMemory @ 0x1400BE2B0 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x1401A9040 (ZwFilterBootOption.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KdCopyDataBlock @ 0x14023E2EC (KdCopyDataBlock.c)
 *     IoSetEnvironmentVariableEx @ 0x140721290 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r12
  int v2; // eax
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

  v0 = 2LL;
  *(_QWORD *)&v14 = 0x302E4594353594B3LL;
  *((_QWORD *)&v14 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_1403CDDB4 = 0;
    LODWORD(qword_1403CDDA0) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(1LL, 270532611LL, 637534368LL);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_1403CDD88;
    qword_1403CDD98 = 9088LL;
    v4 = (__int64 *)&unk_1403CDD88;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_1403CDD98, 0LL, -1LL, 0, 4u, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_1403CDD98);
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
        LODWORD(qword_1403CDDA8) = v11;
        v12 = __rdtsc();
        HIDWORD(qword_1403CDDA8) = v12;
        HIDWORD(qword_1403CDDA8) = ExGenRandom(1) & 0x7FFFFFFF;
        v13 = IoSetEnvironmentVariableEx(L"DumpInstance", 7);
        if ( v13 < 0 )
        {
          dword_1403CDDB4 = v13;
          qword_1403CDDA8 = 0x4547415045474150LL;
        }
        dword_1403CDD84 = 1;
        goto LABEL_18;
      }
    }
    dword_1403CDDB4 = -1073741801;
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
