/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x14056AFF0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1405D161C (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x140844774 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x1408540D4 (IopReassignSystemRoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySymbolicLinkObject(HANDLE SymLinkObjHandle, PUNICODE_STRING LinkTarget, PULONG DataWritten)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  __int64 p_MaximumLength; // rcx
  __int64 v9; // rcx
  int v10; // r15d
  char *v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v13; // esi
  unsigned int v14; // ecx
  struct _KTHREAD *v15; // rdx
  $B476B70DB57F76B110DA5B9238C3E934 *v17; // rcx
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v21[2]; // [rsp+50h] [rbp-28h]

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
    *(UNICODE_STRING *)v21 = *LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v21, 8).m128i_i64[0], WORD1(v21[0]), 1u);
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
    *(UNICODE_STRING *)v21 = *LinkTarget;
  }
  v10 = ObReferenceObjectByHandle(SymLinkObjHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, Object, 0LL);
  if ( v10 >= 0 )
  {
    v11 = (char *)Object[0] - 48;
    Object[1] = (char *)Object[0] - 48;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v11 + 16), 0LL);
    if ( (*((_DWORD *)Object[0] + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_1405F52C0);
    else
      *(_OWORD *)Src = *(_OWORD *)((char *)Object[0] + 8);
    v13 = (int)Src[0];
    if ( DataWritten )
    {
      if ( WORD1(Src[0]) <= WORD1(v21[0]) )
      {
LABEL_17:
        if ( DataWritten )
          v14 = WORD1(Src[0]);
        else
          v14 = LOWORD(Src[0]);
        memmove(v21[1], Src[1], v14);
        LinkTarget->Length = v13;
        if ( DataWritten )
          *DataWritten = HIWORD(v13);
        goto LABEL_22;
      }
      *DataWritten = WORD1(Src[0]);
    }
    else if ( LOWORD(Src[0]) <= WORD1(v21[0]) )
    {
      goto LABEL_17;
    }
    v10 = -1073741789;
LABEL_22:
    ExReleasePushLockEx((ULONG_PTR)(v11 + 16), 0LL);
    v15 = KeGetCurrentThread();
    if ( v15->KernelApcDisable++ == -1 )
    {
      v17 = &v15->152;
      if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v17->ApcState.ApcListHead[0].Flink != v17 && !v15->SpecialApcDisable )
        KiCheckForKernelApcDelivery((__int64)v17);
    }
    ObfDereferenceObject(Object[0]);
  }
  return v10;
}
