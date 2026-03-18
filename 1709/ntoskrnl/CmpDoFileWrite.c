/*
 * XREFs of CmpDoFileWrite @ 0x1404E0284
 * Callers:
 *     CmpFileWrite @ 0x1404E3CB0 (CmpFileWrite.c)
 *     CmpWriteOffsetArrayToFile @ 0x140695C14 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     CmpSetRespectIoPriorityThread @ 0x1400AF144 (CmpSetRespectIoPriorityThread.c)
 *     CmpSetIoPriorityThread @ 0x140130D3C (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x140130D50 (CmpSetPriorityThread.c)
 *     ZwWriteFile @ 0x14017D9C0 (ZwWriteFile.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x14017E440 (ZwSetInformationObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpCreateEvent @ 0x1404E0BA8 (CmpCreateEvent.c)
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
  char v8; // r12
  unsigned int i; // edx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  char *PoolWithTag; // rax
  char *v13; // rbx
  __int64 j; // rax
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  signed int v17; // edi
  __int64 v18; // rdx
  unsigned int *v19; // r8
  HANDLE *v20; // r13
  ULONG Length; // esi
  NTSTATUS Event; // eax
  __int64 v23; // rax
  int *v24; // rcx
  unsigned int v25; // eax
  char v26; // si
  __int64 k; // rdi
  char v29; // [rsp+50h] [rbp-78h]
  __int16 ObjectInformation; // [rsp+54h] [rbp-74h] BYREF
  __int16 v31[2]; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v33; // [rsp+60h] [rbp-68h]
  KPRIORITY v34; // [rsp+64h] [rbp-64h]
  PVOID Buffer; // [rsp+68h] [rbp-60h]
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-58h] BYREF
  __int64 v37; // [rsp+78h] [rbp-50h]
  unsigned __int64 v38; // [rsp+80h] [rbp-48h]
  char v39; // [rsp+D0h] [rbp+8h]
  char v40; // [rsp+D8h] [rbp+10h]

  v7 = a4;
  v8 = 0;
  Buffer = 0LL;
  for ( i = 0; ; ++i )
  {
    v32 = i;
    if ( i >= a5 )
      break;
    v10 = *(_QWORD *)(v7 + 24LL * (int)i + 8);
    v38 = v10;
    v11 = v10 + *(unsigned int *)(v7 + 24LL * (int)i + 16);
    while ( v10 < v11 )
    {
      v10 += 4096LL;
      v38 = v10;
      i = v32;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1400uLL, 0x77624D43u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( j = 0LL; j < 64; ++j )
      *(_QWORD *)&v13[8 * j] = 0LL;
    v39 = 0;
    v34 = 0;
    v33 = 0;
    if ( (a7 & 1) != 0 )
    {
      v33 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0);
      v34 = CmpSetPriorityThread(KeGetCurrentThread(), 4);
      v39 = 1;
    }
    v29 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( v15 >= a5 )
      {
        v26 = 1;
        goto LABEL_42;
      }
      v17 = 0;
      v18 = 0LL;
      v37 = 0LL;
      while ( v15 < a5 && v17 < 64 )
      {
        v19 = a6;
        if ( !v16 )
        {
          *a6 = *(_DWORD *)(v7 + 24LL * v15);
          Buffer = *(PVOID *)(v7 + 24LL * v15 + 8);
          v16 = *(_DWORD *)(v7 + 24LL * v15 + 16);
        }
        v40 = 0;
        v20 = (HANDLE *)&v13[8 * v18];
LABEL_21:
        if ( v16 && v17 < 64 )
        {
          ByteOffset.QuadPart = *v19;
          while ( 1 )
          {
            if ( v8 && v16 > 0x10000 )
            {
              Length = 0x10000;
            }
            else
            {
              Length = v16;
              if ( v16 > 0x100000 )
                Length = 0x100000;
            }
            if ( !*v20 )
            {
              Event = CmpCreateEvent(SynchronizationEvent, (PHANDLE)&v13[8 * v17]);
              if ( Event < 0 )
              {
                *(_QWORD *)&v13[8 * v17] = 0LL;
                goto LABEL_56;
              }
              ObjectInformation = 256;
              ZwSetInformationObject(*v20, ObjectHandleFlagInformation, &ObjectInformation, 2u);
              v8 = v40;
            }
            Event = ZwWriteFile(
                      a3,
                      *v20,
                      0LL,
                      0LL,
                      (PIO_STATUS_BLOCK)&v13[16 * v17 + 4096],
                      Buffer,
                      Length,
                      &ByteOffset,
                      0LL);
            if ( Event >= 0 )
            {
              ++v17;
              v18 = ++v37;
              ++v20;
              v19 = a6;
              *a6 = Length + ByteOffset.LowPart;
              v16 -= Length;
              Buffer = (char *)Buffer + Length;
              goto LABEL_21;
            }
            if ( v8 )
              goto LABEL_56;
            v8 = 1;
            v40 = 1;
          }
        }
        ++v15;
        v7 = a4;
        v8 = 0;
      }
      Event = KeWaitForMultipleObjects(
                v17,
                (PVOID *)v13 + 64,
                WaitAll,
                Executive,
                0,
                0,
                0LL,
                (PKWAIT_BLOCK)(v13 + 1024));
      if ( Event < 0 )
        break;
      v23 = 0LL;
      v24 = (int *)(v13 + 4096);
      while ( v23 < v37 )
      {
        if ( *v24 < 0 )
          goto LABEL_55;
        ++v23;
        v24 += 4;
      }
      v25 = v15 - 1;
      if ( !v16 )
        v25 = v15;
      v15 = v25;
    }
LABEL_56:
    CmRegistryIODebug = 2;
    qword_1407F3E50 = (__int64)a3;
    dword_1407F3E58 = Event;
    if ( v17 > 0 )
      KeWaitForMultipleObjects(v17, (PVOID *)v13 + 64, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(v13 + 1024));
LABEL_55:
    v26 = 0;
LABEL_42:
    for ( k = 0LL; k < 64 && *(_QWORD *)&v13[8 * k]; ++k )
    {
      ObfDereferenceObject(*(PVOID *)&v13[8 * k + 512]);
      v31[0] = 0;
      ZwSetInformationObject(*(HANDLE *)&v13[8 * k], ObjectHandleFlagInformation, v31, 2u);
      ZwClose(*(HANDLE *)&v13[8 * k]);
    }
    ExFreePoolWithTag(v13, 0);
    if ( v39 )
    {
      CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v33);
      CmpSetPriorityThread(KeGetCurrentThread(), v34);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v29);
    LOBYTE(PoolWithTag) = v26;
  }
  return (char)PoolWithTag;
}
