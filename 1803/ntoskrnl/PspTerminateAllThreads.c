/*
 * XREFs of PspTerminateAllThreads @ 0x1404E89FC
 * Callers:
 *     PspTerminateProcess @ 0x1404E9088 (PspTerminateProcess.c)
 *     NtTerminateProcess @ 0x14056E088 (NtTerminateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x1404E8C3C (PspGetPreviousProcessThread.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     DbgkClearProcessDebugObject @ 0x1405EE030 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x14077D014 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r13
  __int64 PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r12d
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  struct _EX_RUNDOWN_REF *Object; // [rsp+70h] [rbp+8h]
  int v19; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak(
      "Terminating critical process 0x%p (%s)\n",
      (const void *)BugCheckParameter1,
      (const char *)(BugCheckParameter1 + 1104));
  }
  v8 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v10 = a4 & 4 | v19 & 0xFFFFFFF8 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v16 = 1850045264;
      v15 = (void *)PreviousProcessThread;
    }
    else
    {
      Object = (struct _EX_RUNDOWN_REF *)PreviousProcessThread;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)PreviousProcessThread, 0x65547350u);
      v12 = 0;
      do
      {
        if ( PreviousProcessThread != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(PreviousProcessThread + 1748) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(PreviousProcessThread + 1720)) )
          {
            v10 |= 8u;
          }
          else
          {
            v10 = (((unsigned __int8)v10 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(PreviousProcessThread + 1744),
                                                               0xFu))) & 0x10 ^ v10) & 0xFFFFFFF7;
          }
          if ( (v10 & 8) != 0 )
          {
            ++v12;
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && BugCheckParameter1 == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(BugCheckParameter1, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(BugCheckParameter1, v14) )
      {
        v14 = i;
        if ( i != (struct _EX_RUNDOWN_REF *)a2 && (v10 & 4) == 0 && (i[218].Count & 0x8000) == 0 )
          ExReleaseRundownProtection(i + 215);
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3, 0);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v11 == 290 || *(_QWORD *)(BugCheckParameter1 + 1056) && BugCheckParameter1 != v8)
    && !(unsigned __int8)PspRundownSingleProcess(BugCheckParameter1)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
