/*
 * XREFs of CmpDoFileWrite @ 0x1404D76CC
 * Callers:
 *     CmpFileWrite @ 0x1404D4800 (CmpFileWrite.c)
 *     CmpWriteOffsetArrayToFile @ 0x14066B5A8 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     CmpSetIoPriorityThread @ 0x14003B93C (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x14003B948 (CmpSetPriorityThread.c)
 *     CmpSetRespectIoPriorityThread @ 0x14007FF48 (CmpSetRespectIoPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwWriteFile @ 0x14017E040 (ZwWriteFile.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetInformationObject @ 0x14017EAC0 (ZwSetInformationObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpCreateEvent @ 0x1404D7FF8 (CmpCreateEvent.c)
 */

char __fastcall CmpDoFileWrite(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        char a7)
{
  __int64 v7; // rsi
  unsigned int i; // edx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  char *PoolWithTag; // rax
  char *v12; // rbx
  __int64 j; // rax
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  signed int v16; // edi
  __int64 v17; // rdx
  unsigned int *v18; // r8
  char v19; // r13
  HANDLE *v20; // r12
  ULONG Length; // esi
  NTSTATUS Event; // ecx
  __int64 v23; // rax
  int *v24; // rcx
  unsigned int v25; // eax
  char v26; // si
  __int64 k; // rdi
  __int16 ObjectInformation[2]; // [rsp+50h] [rbp-78h] BYREF
  __int16 v30; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-70h]
  int v32; // [rsp+5Ch] [rbp-6Ch]
  KPRIORITY Priority; // [rsp+60h] [rbp-68h]
  PVOID Buffer; // [rsp+68h] [rbp-60h]
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-58h] BYREF
  __int64 v36; // [rsp+78h] [rbp-50h]
  unsigned __int64 v37; // [rsp+80h] [rbp-48h]
  char v38; // [rsp+D0h] [rbp+8h]
  char v39; // [rsp+D8h] [rbp+10h]

  v7 = a4;
  Buffer = 0LL;
  for ( i = 0; ; ++i )
  {
    v31 = i;
    if ( i >= a5 )
      break;
    v9 = *(_QWORD *)(v7 + 24LL * (int)i + 8);
    v37 = v9;
    v10 = v9 + *(unsigned int *)(v7 + 24LL * (int)i + 16);
    while ( v9 < v10 )
    {
      v9 += 4096LL;
      v37 = v9;
      i = v31;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1400uLL, 0x77624D43u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( j = 0LL; j < 64; ++j )
      *(_QWORD *)&v12[8 * j] = 0LL;
    v39 = 0;
    Priority = 0;
    v32 = 0;
    if ( (a7 & 1) != 0 )
    {
      v32 = CmpSetIoPriorityThread();
      Priority = CmpSetPriorityThread(KeGetCurrentThread(), 4);
      v39 = 1;
    }
    v38 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= a5 )
      {
        v26 = 1;
        goto LABEL_42;
      }
      v16 = 0;
      v17 = 0LL;
      v36 = 0LL;
      while ( v14 < a5 && v16 < 64 )
      {
        v18 = a6;
        if ( !v15 )
        {
          *a6 = *(_DWORD *)(v7 + 24LL * v14);
          Buffer = *(PVOID *)(v7 + 24LL * v14 + 8);
          v15 = *(_DWORD *)(v7 + 24LL * v14 + 16);
        }
        v19 = 0;
        v20 = (HANDLE *)&v12[8 * v17];
LABEL_21:
        if ( v15 && v16 < 64 )
        {
          ByteOffset.QuadPart = *v18;
          while ( 1 )
          {
            if ( v19 && v15 > 0x10000 )
            {
              Length = 0x10000;
            }
            else
            {
              Length = v15;
              if ( v15 > 0x100000 )
                Length = 0x100000;
            }
            if ( !*v20 )
            {
              Event = CmpCreateEvent(SynchronizationEvent, (PHANDLE)&v12[8 * v16]);
              if ( Event < 0 )
              {
                *(_QWORD *)&v12[8 * v16] = 0LL;
                goto LABEL_56;
              }
              ObjectInformation[0] = 256;
              ZwSetInformationObject(*v20, ObjectHandleFlagInformation, ObjectInformation, 2u);
            }
            Event = ZwWriteFile(
                      a3,
                      *v20,
                      0LL,
                      0LL,
                      (PIO_STATUS_BLOCK)&v12[16 * v16 + 4096],
                      Buffer,
                      Length,
                      &ByteOffset,
                      0LL);
            if ( Event >= 0 )
            {
              ++v16;
              v17 = ++v36;
              ++v20;
              v18 = a6;
              *a6 = Length + ByteOffset.LowPart;
              v15 -= Length;
              Buffer = (char *)Buffer + Length;
              goto LABEL_21;
            }
            if ( v19 )
              goto LABEL_56;
            v19 = 1;
          }
        }
        ++v14;
        v7 = a4;
      }
      Event = KeWaitForMultipleObjects(
                v16,
                (PVOID *)v12 + 64,
                WaitAll,
                Executive,
                0,
                0,
                0LL,
                (PKWAIT_BLOCK)(v12 + 1024));
      if ( Event < 0 )
        break;
      v23 = 0LL;
      v24 = (int *)(v12 + 4096);
      while ( v23 < v36 )
      {
        if ( *v24 < 0 )
          goto LABEL_55;
        ++v23;
        v24 += 4;
      }
      v25 = v14 - 1;
      if ( !v15 )
        v25 = v14;
      v14 = v25;
    }
LABEL_56:
    CmRegistryIODebug = 2;
    qword_1407ACDD0 = (__int64)a3;
    dword_1407ACDD8 = Event;
    if ( v16 > 0 )
      KeWaitForMultipleObjects(v16, (PVOID *)v12 + 64, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(v12 + 1024));
LABEL_55:
    v26 = 0;
LABEL_42:
    for ( k = 0LL; k < 64 && *(_QWORD *)&v12[8 * k]; ++k )
    {
      ObfDereferenceObject(*(PVOID *)&v12[8 * k + 512]);
      v30 = 0;
      ZwSetInformationObject(*(HANDLE *)&v12[8 * k], ObjectHandleFlagInformation, &v30, 2u);
      ZwClose(*(HANDLE *)&v12[8 * k]);
    }
    ExFreePoolWithTag(v12, 0);
    if ( v39 )
    {
      CmpSetIoPriorityThread();
      CmpSetPriorityThread(KeGetCurrentThread(), Priority);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v38);
    LOBYTE(PoolWithTag) = v26;
  }
  return (char)PoolWithTag;
}
