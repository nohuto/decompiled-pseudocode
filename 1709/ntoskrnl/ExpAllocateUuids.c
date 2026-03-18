/*
 * XREFs of ExpAllocateUuids @ 0x140597490
 * Callers:
 *     NtAllocateUuids @ 0x140449620 (NtAllocateUuids.c)
 *     ExpUuidGetValues @ 0x1405F1048 (ExpUuidGetValues.c)
 * Callees:
 *     ExpUuidLoadSequenceNumber @ 0x1405F0C54 (ExpUuidLoadSequenceNumber.c)
 */

__int64 __fastcall ExpAllocateUuids(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  LARGE_INTEGER v11; // rax
  char v12; // r8
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-18h] BYREF
  int SequenceNumber; // [rsp+58h] [rbp+20h] BYREF

  if ( !ExpUuidSequenceNumberValid )
  {
    SequenceNumber = ExpUuidLoadSequenceNumber();
    if ( SequenceNumber < 0 )
    {
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
      ExpUuidSequenceNumber ^= (unsigned int)&SequenceNumber ^ v11.LowPart ^ (unsigned int)a3 ^ v11.HighPart;
    }
    else
    {
      ++ExpUuidSequenceNumber;
    }
    ExpUuidSequenceNumberValid = 1;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated;
  if ( MEMORY[0xFFFFF78000000014] - ExpUuidLastTimeAllocated < 0 )
  {
    ++ExpUuidSequenceNumber;
    ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014] - 20000LL;
    v7 = 20000LL;
    ExpUuidSequenceNumberNotSaved = 1;
  }
  if ( v7 )
  {
    if ( ExpUuidTimeSequenceNumber )
      ExpUuidTimeSequenceNumber = 0;
    if ( v7 > 10000000 )
      v7 = 10000000LL;
    if ( v7 <= 10000 )
    {
      *a2 = v7;
      v8 = 0LL;
    }
    else
    {
      *a2 = 10000;
      v8 = v7 - 10000;
    }
    v9 = v6 - (unsigned int)*a2 - v8;
    *(_QWORD *)a1 = v9;
    ExpUuidLastTimeAllocated = v9 + (unsigned int)*a2;
LABEL_12:
    *a3 = ExpUuidSequenceNumber;
    return 0LL;
  }
  if ( (unsigned int)ExpUuidTimeSequenceNumber < 0x1F )
  {
    v12 = ++ExpUuidTimeSequenceNumber;
    *a2 = 10000;
    *(_QWORD *)a1 = v6 - 10000;
    v13 = ((v12 & 1) << 27) | 0x4000000;
    if ( (v12 & 2) == 0 )
      v13 = (v12 & 1) << 27;
    v14 = v13 | 0x2000000;
    if ( (v12 & 4) == 0 )
      v14 = v13;
    v15 = v14 | 0x1000000;
    if ( (v12 & 8) == 0 )
      v15 = v14;
    v16 = v15 | 0x800000;
    if ( (v12 & 0x10) == 0 )
      v16 = v15;
    *(_DWORD *)(a1 + 4) |= v16;
    goto LABEL_12;
  }
  return 3221226029LL;
}
