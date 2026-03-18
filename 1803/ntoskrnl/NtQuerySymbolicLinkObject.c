/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x140552AC0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140632728 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x1408B7144 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x1408C612C (IopReassignSystemRoot.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySymbolicLinkObject(HANDLE SymLinkObjHandle, PUNICODE_STRING LinkTarget, PULONG DataWritten)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  __int64 p_MaximumLength; // rcx
  __int64 v9; // rcx
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // esi
  unsigned int v16; // ecx
  struct _KTHREAD *v17; // rdx
  bool v18; // zf
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v23[2]; // [rsp+50h] [rbp-28h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)LinkTarget & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (__int64)LinkTarget;
    if ( (unsigned __int64)LinkTarget >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_WORD *)v7 = *(_WORD *)v7;
    p_MaximumLength = (__int64)&LinkTarget->MaximumLength;
    if ( (unsigned __int64)&LinkTarget->MaximumLength >= 0x7FFFFFFF0000LL )
      p_MaximumLength = 0x7FFFFFFF0000LL;
    *(_WORD *)p_MaximumLength = *(_WORD *)p_MaximumLength;
    *(UNICODE_STRING *)v23 = *LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v23, 8).m128i_i64[0], WORD1(v23[0]), 1u);
    if ( DataWritten )
    {
      v9 = (__int64)DataWritten;
      if ( (unsigned __int64)DataWritten >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    *(UNICODE_STRING *)v23 = *LinkTarget;
  }
  v10 = ObReferenceObjectByHandle(SymLinkObjHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v10 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v12 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_140657F20);
    else
      *(_OWORD *)Src = *(_OWORD *)(v12 + 8);
    v15 = (int)Src[0];
    if ( DataWritten )
    {
      if ( WORD1(Src[0]) <= WORD1(v23[0]) )
      {
LABEL_17:
        if ( DataWritten )
          v16 = WORD1(Src[0]);
        else
          v16 = LOWORD(Src[0]);
        memmove(v23[1], Src[1], v16);
        LinkTarget->Length = v15;
        if ( DataWritten )
          *DataWritten = HIWORD(v15);
        goto LABEL_22;
      }
      *DataWritten = WORD1(Src[0]);
    }
    else if ( LOWORD(Src[0]) <= WORD1(v23[0]) )
    {
      goto LABEL_17;
    }
    v10 = -1073741789;
LABEL_22:
    ExReleasePushLockEx(BugCheckParameter2, 0LL, v13, v14);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable++ == -1;
    if ( v18
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(Object);
  }
  return v10;
}
