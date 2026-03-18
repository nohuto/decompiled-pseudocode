/*
 * XREFs of MiAttemptPageFileReduction @ 0x140219584
 * Callers:
 *     MiProcessDereferenceList @ 0x14013A7D0 (MiProcessDereferenceList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x140062C24 (MiOkToShrinkPageFiles.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14021A624 (MiQueueSyncModifiedWriterApc.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 */

char __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // r14
  bool v3; // zf
  __int64 v4; // r15
  KIRQL v5; // al
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int *v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF

  memset(Object, 0, 0x68uLL);
  LOWORD(Object[0]) = 0;
  Object[1] = 0;
  v2 = 16LL;
  v3 = *(_BYTE *)(a1 + 89) == 0;
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v4;
  if ( v3 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1344));
    *(_QWORD *)(a1 + 32) = 0LL;
    v6 = v5;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1344));
    __writecr8(v6);
    LOBYTE(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v4 + 6128), *(_QWORD *)(v4 + 6248));
    if ( !(_DWORD)v7 )
      return v7;
    Object[8] = 16;
  }
  MiQueueSyncModifiedWriterApc(v4, (int)&v13, (int)MiAttemptPageFileReductionApc, (int)Object, Object);
  v8 = &Object[10];
  v9 = (__int64 *)(v4 + 5600);
  do
  {
    v7 = (unsigned int)*v8;
    if ( (_DWORD)v7 )
    {
      v10 = *v9;
      FileInformation = v7 << 12;
      LOBYTE(v7) = IoSetInformation(*(PFILE_OBJECT *)(v10 + 56), FileAllocationInformation, 8u, &FileInformation);
    }
    ++v9;
    ++v8;
    --v2;
  }
  while ( v2 );
  return v7;
}
