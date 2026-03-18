/*
 * XREFs of PspTerminateAllThreads @ 0x14054EDAC
 * Callers:
 *     NtTerminateProcess @ 0x14054E9C0 (NtTerminateProcess.c)
 *     PspTerminateProcess @ 0x14054EBC8 (PspTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PspGetPreviousProcessThread @ 0x14054EFE0 (PspGetPreviousProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 *     DbgkClearProcessDebugObject @ 0x1405860B0 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x1406E2BD8 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(
        ULONG_PTR BugCheckParameter1,
        struct _EX_RUNDOWN_REF *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 Count; // r13
  struct _EX_RUNDOWN_REF *PreviousProcessThread; // rax
  __int64 v10; // rbp
  unsigned int v11; // ebx
  unsigned int v12; // esi
  int v13; // r12d
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v15; // rbp
  struct _EX_RUNDOWN_REF *Object; // [rsp+70h] [rbp+8h]
  int v18; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1104));
  }
  Count = a2[23].Count;
  PreviousProcessThread = (struct _EX_RUNDOWN_REF *)PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v10 = (__int64)PreviousProcessThread;
  v11 = a4 & 4 | v18 & 0xFFFFFFF8 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v12 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v11 & 1) != 0 )
    {
      ObfDereferenceObjectWithTag(PreviousProcessThread, 0x6E457350u);
      v12 = -1073741558;
    }
    else
    {
      v12 = 0;
      Object = PreviousProcessThread;
      ObfReferenceObject(PreviousProcessThread);
      v13 = 0;
      do
      {
        if ( (struct _EX_RUNDOWN_REF *)v10 != a2 )
        {
          if ( (v11 & 4) != 0 )
          {
            v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(*(_DWORD *)(v10 + 1740) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v10 + 1712)) )
          {
            v11 |= 8u;
          }
          else
          {
            v11 = (((unsigned __int8)v11 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(v10 + 1736),
                                                               0xFu))) & 0x10 ^ v11) & 0xFFFFFFF7;
          }
          if ( (v11 & 8) != 0 )
          {
            ++v13;
            PspTerminateThreadByPointer(v10, a3, 0LL);
          }
        }
        v10 = PspGetPreviousProcessThread(BugCheckParameter1, v10);
      }
      while ( v10 );
      if ( v13 && BugCheckParameter1 == Count )
        KeFlushProcessWriteBuffers(0);
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(BugCheckParameter1, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(BugCheckParameter1, v15) )
      {
        v15 = i;
        if ( i != a2 && (v11 & 4) == 0 && (i[217].Count & 0x8000) == 0 )
          ExReleaseRundownProtection(i + 214);
        if ( v15 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v15, 0x6E457350u);
      ObfDereferenceObject(Object);
    }
    if ( (v11 & 2) != 0 && a2[68].Count == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3, 0LL);
  }
  if ( BugCheckParameter1 != Count && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v12 == 290 || *(_QWORD *)(BugCheckParameter1 + 1056) && BugCheckParameter1 != Count)
    && !PspRundownSingleProcess(BugCheckParameter1, 0)
    && v12 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v12;
}
