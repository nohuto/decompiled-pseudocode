/*
 * XREFs of MiAttemptPageFileReduction @ 0x1402241B4
 * Callers:
 *     MiProcessDereferenceList @ 0x14014B46C (MiProcessDereferenceList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiOkToShrinkPageFiles @ 0x1400B86F8 (MiOkToShrinkPageFiles.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140226BFC (MiQueueSyncModifiedWriterApc.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 */

char __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  KIRQL v4; // al
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  int *v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF

  memset(Object, 0, 0x68uLL);
  LOWORD(Object[0]) = 0;
  Object[1] = 0;
  v2 = 16LL;
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v3;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) != 0 )
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1280));
    *(_QWORD *)(a1 + 32) = 0LL;
    v5 = v4;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1280));
    __writecr8(v5);
    LOBYTE(v6) = MiOkToShrinkPageFiles(*(_QWORD *)(v3 + 6320), *(_QWORD *)(v3 + 6440));
    if ( !(_DWORD)v6 )
      return v6;
    Object[8] = 16;
  }
  else
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
  }
  MiQueueSyncModifiedWriterApc(v3, (int)&v12, (int)MiAttemptPageFileReductionApc, (int)Object, Object);
  v7 = &Object[10];
  v8 = (__int64 *)(v3 + 5792);
  do
  {
    v6 = (unsigned int)*v7;
    if ( (_DWORD)v6 )
    {
      v9 = *v8;
      FileInformation = v6 << 12;
      LOBYTE(v6) = IoSetInformation(*(PFILE_OBJECT *)(v9 + 56), FileAllocationInformation, 8u, &FileInformation);
    }
    ++v8;
    ++v7;
    --v2;
  }
  while ( v2 );
  return v6;
}
