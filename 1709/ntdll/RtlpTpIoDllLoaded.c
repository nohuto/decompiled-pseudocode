/*
 * XREFs of RtlpTpIoDllLoaded @ 0x18008FDD4
 * Callers:
 *     RtlpTpIoDllNotification @ 0x18008FDC0 (RtlpTpIoDllNotification.c)
 * Callees:
 *     TpDereferenceGlobalPool @ 0x18001359C (TpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlDelete @ 0x1800693C0 (RtlDelete.c)
 */

signed __int64 __fastcall RtlpTpIoDllLoaded(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdx
  signed __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // [rsp+20h] [rbp-18h]

  v5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
  v6 = (_QWORD *)RtlpTpIoTree;
  while ( v6 )
  {
    v7 = v6 - 12;
    v8 = *(v6 - 12);
    if ( v8 < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( v8 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v6 = RtlDelete(v6);
      RtlpTpIoTree = (__int64)v6;
      v7[12] = v5;
      v5 = (unsigned __int64)v7;
    }
    else if ( v8 < *(_QWORD *)(a1 + 24) )
    {
LABEL_7:
      v6 = (_QWORD *)v6[2];
    }
    else
    {
      v6 = (_QWORD *)v6[1];
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v5 )
  {
    v13 = *(_QWORD *)(v5 + 96);
    TpDereferenceGlobalPool(*(_QWORD *)(v5 + 80), v10, v11, v12);
    RtlFreeAnsiString((PUNICODE_STRING)(v5 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    v5 = v13;
  }
  return result;
}
