/*
 * XREFs of AcpiRecordBlackboxInformationWorker @ 0x1C002BD70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

void AcpiRecordBlackboxInformationWorker()
{
  KIRQL v0; // r13
  char *v1; // rcx
  int v2; // edi
  unsigned int v3; // ebp
  int v4; // eax
  unsigned __int16 v5; // r8
  SIZE_T v6; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  int v9; // ecx
  char *v10; // r14
  char *i; // rdi
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned int v14; // r15d
  _QWORD InputBuffer[4]; // [rsp+30h] [rbp-48h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
  byte_1C0079CC8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v1 = (char *)glistCtxtHead - 16;
  v2 = 0;
  v3 = 0;
  while ( &glistCtxtHead != (_UNKNOWN **)(v1 + 16) )
  {
    v4 = 0;
    if ( v1[472] )
    {
      v5 = *((_WORD *)v1 + 220);
      ++v2;
      v4 = 24;
      if ( v5 )
        v4 = v5 + 26;
    }
    v3 += v4;
    v1 = (char *)(*((_QWORD *)v1 + 2) - 16LL);
  }
  v6 = v3 + 48;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x426F7841u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v6);
    v8[1] = 1;
    *v8 = v3 + 48;
    v8[5] = v2;
    v9 = AmliWatchdogAction;
    *((_QWORD *)v8 + 1) = &gAcpiTriageInfo;
    v8[4] = v9;
    if ( v2 )
    {
      v10 = (char *)(v8 + 6);
      for ( i = (char *)glistCtxtHead - 16; &glistCtxtHead != (_UNKNOWN **)(i + 16); i = (char *)(*((_QWORD *)i + 2)
                                                                                                - 16LL) )
      {
        if ( i[472] )
        {
          v12 = *((unsigned __int16 *)i + 220);
          v13 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)i + 57)) / 0x2710uLL;
          v14 = v12 + 26;
          if ( v3 >= v12 + 26 )
          {
            if ( (_WORD)v12 )
            {
              *((_QWORD *)v10 + 1) = *((_QWORD *)i + 54);
              *((_DWORD *)v10 + 4) = v13;
              *(_DWORD *)v10 = v14;
              memmove(v10 + 20, *((const void **)i + 56), *((unsigned __int16 *)i + 220));
              *(_WORD *)&v10[2 * ((unsigned __int64)*((unsigned __int16 *)i + 220) >> 1) + 20] = 0;
              v10 += v14;
              v3 -= v14;
            }
          }
        }
      }
    }
  }
  _InterlockedExchange(&dword_1C0078920, 0);
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0079CC8);
  KeReleaseSpinLock(&AcpiWatchdogLock, v0);
  memset(InputBuffer, 0, sizeof(InputBuffer));
  LODWORD(InputBuffer[3]) = 3;
  InputBuffer[0] = v8;
  InputBuffer[1] = v6;
  ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x426F7841u);
}
