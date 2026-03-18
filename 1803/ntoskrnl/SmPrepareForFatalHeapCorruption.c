/*
 * XREFs of SmPrepareForFatalHeapCorruption @ 0x1402A8F98
 * Callers:
 *     SmHpBufferProtectEx @ 0x140093C88 (SmHpBufferProtectEx.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140169850 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalHeapCorruption(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        LONGLONG *a5)
{
  __int64 v5; // rbp
  _OWORD *v6; // rdi
  __int64 v7; // r15
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v9; // rsi
  unsigned int v10; // ebx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _OWORD *v13; // rbx
  __int128 v14; // xmm1

  v5 = a4;
  v6 = a1;
  v7 = a3;
  *a5 = MmGetPhysicalAddress(a1).QuadPart / 4096;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              0x1060uLL,
                                                              0x50626D73u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->State = 0;
    v11 = (_QWORD *)(((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    memset(v11, 0, 0x38uLL);
    v11[5] = *a5;
    v12 = 32LL;
    *(_DWORD *)v11 = 1;
    v11[1] = v6;
    v11[2] = 4096LL;
    v11[4] = v5;
    v11[3] = v7;
    v13 = v11 + 6;
    do
    {
      *v13 = *v6;
      v13[1] = v6[1];
      v13[2] = v6[2];
      v13[3] = v6[3];
      v13[4] = v6[4];
      v13[5] = v6[5];
      v13[6] = v6[6];
      v13 += 8;
      v14 = v6[7];
      v6 += 8;
      *(v13 - 1) = v14;
      --v12;
    }
    while ( v12 );
    if ( KeRegisterBugCheckReasonCallback(
           v9,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalHeapCorruptionDumpCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"nt!store memory compression") )
    {
      v9 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
