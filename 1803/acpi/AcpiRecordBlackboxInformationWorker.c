/*
 * XREFs of AcpiRecordBlackboxInformationWorker @ 0x1C0042620
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

void AcpiRecordBlackboxInformationWorker()
{
  KIRQL v0; // r12
  char *v1; // rdx
  int v2; // edi
  unsigned int v3; // esi
  int v4; // eax
  unsigned __int16 v5; // cx
  _UNKNOWN **v6; // rax
  SIZE_T v7; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  int v10; // ecx
  char *v11; // r14
  char *v12; // rdi
  _UNKNOWN **i; // rax
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebp
  _QWORD InputBuffer[4]; // [rsp+30h] [rbp-48h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
  byte_1C0067A48 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v1 = (char *)glistCtxtHead - 16;
  v2 = 0;
  v3 = 0;
  if ( &glistCtxtHead != (_UNKNOWN **)glistCtxtHead )
  {
    do
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
      v6 = (_UNKNOWN **)*((_QWORD *)v1 + 2);
      v1 = (char *)(v6 - 2);
    }
    while ( &glistCtxtHead != v6 );
  }
  v7 = v3 + 48;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x426F7841u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v7);
    v9[1] = 1;
    *v9 = v3 + 48;
    v9[5] = v2;
    v10 = AmliWatchdogAction;
    *((_QWORD *)v9 + 1) = &gAcpiTriageInfo;
    v9[4] = v10;
    if ( v2 )
    {
      v11 = (char *)(v9 + 6);
      v12 = (char *)glistCtxtHead - 16;
      for ( i = (_UNKNOWN **)glistCtxtHead; &glistCtxtHead != i; v12 = (char *)(i - 2) )
      {
        if ( v12[472] )
        {
          v14 = *((unsigned __int16 *)v12 + 220);
          v15 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)v12 + 57)) / 0x2710uLL;
          v16 = v14 + 26;
          if ( v3 >= v14 + 26 )
          {
            if ( (_WORD)v14 )
            {
              *((_QWORD *)v11 + 1) = *((_QWORD *)v12 + 54);
              *((_DWORD *)v11 + 4) = v15;
              *(_DWORD *)v11 = v16;
              memmove(v11 + 20, *((const void **)v12 + 56), *((unsigned __int16 *)v12 + 220));
              *(_WORD *)&v11[2 * ((unsigned __int64)*((unsigned __int16 *)v12 + 220) >> 1) + 20] = 0;
              v11 += v16;
              v3 -= v16;
            }
          }
        }
        i = (_UNKNOWN **)*((_QWORD *)v12 + 2);
      }
    }
  }
  _InterlockedExchange(&dword_1C0066900, 0);
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0067A48);
  KeReleaseSpinLock(&AcpiWatchdogLock, v0);
  memset(InputBuffer, 0, sizeof(InputBuffer));
  LODWORD(InputBuffer[3]) = 3;
  InputBuffer[0] = v9;
  InputBuffer[1] = v7;
  ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x426F7841u);
}
