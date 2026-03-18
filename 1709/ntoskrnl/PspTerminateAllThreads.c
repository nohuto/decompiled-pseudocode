/*
 * XREFs of PspTerminateAllThreads @ 0x1404D6C7C
 * Callers:
 *     PspTerminateProcess @ 0x1404D9890 (PspTerminateProcess.c)
 *     NtTerminateProcess @ 0x1404D9A54 (NtTerminateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     PspGetPreviousProcessThread @ 0x1404D6EB4 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     DbgkClearProcessDebugObject @ 0x1405F1AF4 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r13
  void *PreviousProcessThread; // rax
  __int64 v10; // rbp
  unsigned int v11; // ebx
  unsigned int v12; // esi
  int v13; // r12d
  __int64 i; // rax
  PVOID v15; // rbp
  PVOID Object; // [rsp+70h] [rbp+8h]
  int v18; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1104));
  }
  v8 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = (void *)PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
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
      Object = PreviousProcessThread;
      v12 = 0;
      ObfReferenceObjectWithTag(PreviousProcessThread, 0x65547350u);
      v13 = 0;
      do
      {
        if ( v10 != a2 )
        {
          if ( (v11 & 4) != 0 )
          {
            v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(*(_DWORD *)(v10 + 1748) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 1720)) )
          {
            v11 |= 8u;
          }
          else
          {
            v11 = (((unsigned __int8)v11 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(v10 + 1744),
                                                               0xFu))) & 0x10 ^ v11) & 0xFFFFFFF7;
          }
          if ( (v11 & 8) != 0 )
          {
            ++v13;
            PspTerminateThreadByPointer(v10, a3, 0);
          }
        }
        v10 = PspGetPreviousProcessThread(BugCheckParameter1, v10);
      }
      while ( v10 );
      if ( v13 && BugCheckParameter1 == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = PsGetNextProcessThread(BugCheckParameter1, 0LL); ; i = PsGetNextProcessThread(BugCheckParameter1, v15) )
      {
        v15 = (PVOID)i;
        if ( i != a2 && (v11 & 4) == 0 && (*(_DWORD *)(i + 1744) & 0x8000) == 0 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(i + 1720));
        if ( v15 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v15, 0x6E457350u);
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
    }
    if ( (v11 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3, 0);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v12 == 290 || *(_QWORD *)(BugCheckParameter1 + 1056) && BugCheckParameter1 != v8)
    && !(unsigned __int8)PspRundownSingleProcess(BugCheckParameter1)
    && v12 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v12;
}
