/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x14070EB0C
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x14070EA5C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x14070F46C (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     PsResumeThread @ 0x140567C50 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1405792D0 (PsSuspendThread.c)
 *     DbgkSendSystemDllMessages @ 0x14070E1AC (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x14070F184 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140711604 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14077A398 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(
        __int64 a1,
        struct _KEVENT *a2,
        unsigned __int64 a3,
        _QWORD *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  struct _EX_RUNDOWN_REF *NextProcessThread; // rbx
  struct _EX_RUNDOWN_REF *v7; // rdi
  int v8; // r12d
  void *v9; // r14
  bool v10; // r13
  char v11; // si
  char v12; // r13
  __int64 v13; // rcx
  PIMAGE_NT_HEADERS v14; // rax
  bool v16; // [rsp+30h] [rbp-1E8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-1B0h]
  HANDLE v21[34]; // [rsp+90h] [rbp-188h] BYREF
  _BYTE v22[48]; // [rsp+1A0h] [rbp-78h] BYREF

  NextProcessThread = (struct _EX_RUNDOWN_REF *)a3;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = -1073741823;
  if ( a3 )
    ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
  else
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(a1, 0LL);
  v9 = (void *)(a3 & -(__int64)(a3 != 0));
  v10 = a3 == 0;
  v16 = a3 == 0;
  while ( NextProcessThread )
  {
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    v7 = NextProcessThread;
    ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
    if ( (HIDWORD(NextProcessThread[14].Ptr) & 0x400) == 0 )
    {
      if ( (NextProcessThread[218].Count & 2) != 0
        || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[218].Count & 2) != 0) )
      {
        if ( ExAcquireRundownProtection(NextProcessThread + 215) )
        {
          v11 = 10;
          if ( (int)PsSuspendThread((__int64)NextProcessThread, 0LL) >= 0 )
            v11 = 42;
        }
        else
        {
          v11 = 18;
        }
        memset(v21, 0, sizeof(v21));
        if ( !v10 || (v11 & 0x10) != 0 )
        {
          v12 = 0;
          LODWORD(v21[5]) = 1;
          v21[7] = NextProcessThread[210].Ptr;
        }
        else
        {
          v12 = 1;
          LODWORD(v21[5]) = 2;
          v13 = *(_QWORD *)(a1 + 952);
          if ( v13 )
            v21[7] = (HANDLE)DbgkpSectionToFileHandle(v13);
          else
            v21[7] = 0LL;
          v21[8] = *(HANDLE *)(a1 + 960);
          KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v22);
          v14 = RtlImageNtHeader(*(PVOID *)(a1 + 960));
          if ( v14 )
          {
            v21[11] = 0LL;
            v21[9] = *(HANDLE *)&v14->FileHeader.PointerToSymbolTable;
          }
          KiUnstackDetachProcess((__int64)v22, 0LL);
        }
        v8 = DbgkpQueueMessage((PVOID)a1, NextProcessThread, a2);
        if ( v8 < 0 )
        {
          if ( (v11 & 0x20) != 0 )
            PsResumeThread((__int64)NextProcessThread, 0LL);
          if ( (v11 & 8) != 0 )
            ExReleaseRundownProtection(NextProcessThread + 215);
          if ( LODWORD(v21[5]) == 2 && v21[7] )
            ObCloseHandle(v21[7], 0);
          ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
          break;
        }
        if ( v12 )
        {
          v10 = 0;
          v16 = 0;
          ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
          v9 = NextProcessThread;
          DbgkSendSystemDllMessages(NextProcessThread, a2, (__int64)v21);
        }
        else
        {
          v10 = v16;
        }
      }
    }
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(a1, NextProcessThread);
  }
  if ( v8 >= 0 )
  {
    if ( v9 )
    {
      *a4 = v9;
      *a5 = v7;
    }
    else
    {
      if ( v7 )
        ObfDereferenceObjectWithTag(v7, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x4F676244u);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
  }
  return (unsigned int)v8;
}
